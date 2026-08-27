import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.*;

/**
 * Find hal_key_boot_handler-like functions: timeout scalars + short loop + reboot/bootmode.
 * Run -noanalysis against the existing star_air3 program.
 */
public class KeyBootHunt extends GhidraScript {
  static final long[] TIMEOUTS = {500,1000,2000,3000,4000,5000,8000,10000,16000,32000,48000,80000};
  static final long[] BOOTMODE = {0x4020,0x8020,0x4000,0x8000,0x410,0x810};

  FunctionManager fm;
  Listing listing;
  DecompInterface dec;
  PrintWriter out;

  boolean isTimeout(long v) {
    for (long t : TIMEOUTS) if (v == t) return true;
    return false;
  }
  boolean isBoot(long v) {
    for (long t : BOOTMODE) if (v == t) return true;
    return false;
  }

  void decomp(Function f, String why) {
    out.println("\n===== DECOMP " + why + " " + f.getName() + " @" + f.getEntryPoint() + " =====");
    DecompileResults r = dec.decompileFunction(f, 90, monitor);
    if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
    else out.println("  fail " + (r == null ? "null" : r.getErrorMessage()));
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    listing = currentProgram.getListing();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);

    String report = getScriptArgs().length > 0 ? getScriptArgs()[0]
        : "/tmp/key_boot_hunt.txt";
    out = new PrintWriter(new FileWriter(report));
    out.println("funcs=" + fm.getFunctionCount());
    out.println("program=" + currentProgram.getName());

    Map<Function, Set<Long>> tmap = new HashMap<>();
    Map<Function, Set<Long>> bmap = new HashMap<>();
    int ncu = 0;
    for (Function f : fm.getFunctions(true)) {
      monitor.checkCancelled();
      InstructionIterator ii = listing.getInstructions(f.getBody(), true);
      while (ii.hasNext()) {
        Instruction ins = ii.next();
        ncu++;
        int nops = ins.getNumOperands();
        for (int i = 0; i < nops; i++) {
          Object[] objs = ins.getOpObjects(i);
          for (Object o : objs) {
            if (!(o instanceof Scalar)) continue;
            long v = ((Scalar) o).getUnsignedValue();
            if (isTimeout(v)) tmap.computeIfAbsent(f, k -> new HashSet<>()).add(v);
            if (isBoot(v)) bmap.computeIfAbsent(f, k -> new HashSet<>()).add(v);
          }
        }
      }
    }
    out.println("scanned insns~ " + ncu);
    out.println("funcs with timeout scalars: " + tmap.size());
    out.println("funcs with bootmode scalars: " + bmap.size());

    List<Function> multi = new ArrayList<>();
    for (Map.Entry<Function, Set<Long>> e : tmap.entrySet()) {
      if (e.getValue().size() >= 2) multi.add(e.getKey());
    }
    multi.sort(Comparator.comparingLong(f -> f.getEntryPoint().getOffset()));
    out.println("\n## functions with >=2 timeout scalars (" + multi.size() + ")");
    for (Function f : multi) {
      long sz = f.getBody().getNumAddresses();
      out.println("  " + f.getEntryPoint() + "  sz=" + sz + "  " + tmap.get(f)
          + (bmap.containsKey(f) ? "  BOOT=" + bmap.get(f) : ""));
    }

    out.println("\n## functions with bootmode-like scalars");
    List<Function> boots = new ArrayList<>(bmap.keySet());
    boots.sort(Comparator.comparingLong(f -> f.getEntryPoint().getOffset()));
    for (Function f : boots) {
      long off = f.getEntryPoint().getOffset();
      if (off > 0x2C280000L && off < 0x2C430000L) continue; // skip huge gap
      out.println("  " + f.getEntryPoint() + "  sz=" + f.getBody().getNumAddresses()
          + "  BOOT=" + bmap.get(f) + "  T=" + tmap.getOrDefault(f, Set.of()));
    }

    // decompile: early HAL timeout funcs, any func with 500+3000+5000, small bootmode funcs
    Set<Function> want = new LinkedHashSet<>();
    for (Function f : multi) {
      Set<Long> s = tmap.get(f);
      if (s.contains(500L) && s.contains(3000L) && s.contains(5000L)) want.add(f);
      if (s.contains(1000L) && (s.contains(5000L) || s.contains(3000L))) want.add(f);
      long off = f.getEntryPoint().getOffset();
      if (off < 0x2C200000L && f.getBody().getNumAddresses() < 0x800) want.add(f);
    }
    for (Function f : boots) {
      long off = f.getEntryPoint().getOffset();
      if (off < 0x2C200000L && f.getBody().getNumAddresses() < 0x400) want.add(f);
    }
    out.println("\n## decompiling " + want.size() + " candidates");
    int n = 0;
    for (Function f : want) {
      decomp(f, "cand");
      if (++n >= 18) break;
    }

    // string users of osTimerStart / Failed to alloc / Power key held
    out.println("\n## Ghidra refs to key strings (expect 0 under hashed TRACE)");
    String[] strs = {
        "hal_key_boot_handler",
        "Failed to alloc key debounce timer",
        "xjxr_hal_key_debounce_handler",
        "Power key held too short(expect %d seconds), shutdown!",
        "pmu_pwrkey_check_timer",
        "osTimerStart"
    };
    for (String s : strs) {
      Address a = currentProgram.getMinAddress();
      byte[] pat = (s + "\0").getBytes();
      int hits = 0;
      while (a != null) {
        Address h = currentProgram.getMemory().findBytes(a, pat, null, true, monitor);
        if (h == null) break;
        int refs = 0;
        for (Reference r : currentProgram.getReferenceManager().getReferencesTo(h)) {
          refs++;
          Function f = fm.getFunctionContaining(r.getFromAddress());
          out.println("  STR " + s + " @" + h + " from " + r.getFromAddress()
              + " in " + (f == null ? "<none>" : f.getEntryPoint()));
        }
        hits++;
        out.println("  STR " + s + " @" + h + " refs=" + refs);
        try { a = h.add(s.length() + 1); } catch (Exception e) { break; }
      }
      if (hits == 0) out.println("  missing " + s);
    }
    out.flush();
    out.close();
    println("wrote " + report);
  }
}
