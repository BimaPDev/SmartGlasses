import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;
import java.util.*;

/** Find StandByWidget circle radius (LV_RADIUS_CIRCLE = 0x7FFF) and decompile creators. */
public class DockCircle extends GhidraScript {
  FunctionManager fm;
  Memory mem;
  ReferenceManager rm;
  DecompInterface dec;

  String fnOf(Address a) {
    Function f = fm.getFunctionContaining(a);
    return f == null ? "<no-func:" + a + ">" : (f.getName() + " @" + f.getEntryPoint());
  }

  List<Address> memFind(String s) {
    List<Address> out = new ArrayList<>();
    byte[] pat = (s + "\0").getBytes();
    Address a = mem.getMinAddress();
    while (a != null) {
      Address h = mem.findBytes(a, pat, null, true, monitor);
      if (h == null) break;
      if (h.getOffset() < 0x3c000000L) out.add(h);
      try { a = h.add(1); } catch (Exception e) { break; }
    }
    return out;
  }

  List<Reference> iter(ReferenceIterator it) {
    List<Reference> l = new ArrayList<>();
    while (it.hasNext()) l.add(it.next());
    return l;
  }

  Set<Function> usersOf(Address strAddr) {
    Set<Function> fs = new LinkedHashSet<>();
    long fo = strAddr.getOffset() & 0xFFFFFF;
    for (long base : new long[] {0x2C000000L, 0x3C000000L}) {
      Address sa = toAddr(base | fo);
      for (Reference r : iter(rm.getReferencesTo(sa))) {
        Address fa = r.getFromAddress();
        Function f = fm.getFunctionContaining(fa);
        if (f != null) fs.add(f);
        else {
          for (Reference r2 : iter(rm.getReferencesTo(fa))) {
            Function f2 = fm.getFunctionContaining(r2.getFromAddress());
            if (f2 != null) fs.add(f2);
          }
        }
      }
    }
    return fs;
  }

  int countImm(Function f, long imm) {
    int n = 0;
    InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
    while (it.hasNext()) {
      Instruction ins = it.next();
      Object[] ops = ins.getOpObjects(ins.getNumOperands() > 1 ? 1 : 0);
      for (int i = 0; i < ins.getNumOperands(); i++) {
        for (Object o : ins.getOpObjects(i)) {
          if (o instanceof Scalar) {
            long v = ((Scalar) o).getValue() & 0xFFFFFFFFL;
            if (v == imm) n++;
          }
        }
      }
    }
    return n;
  }

  void decompile(Function f, String why) {
    println("\n===== DECOMP " + why + ": " + f.getName() + " @" + f.getEntryPoint() + " =====");
    println("  imm 0x7FFF count=" + countImm(f, 0x7FFFL) + "  0x7FFFFFFF count=" + countImm(f, 0x7FFFFFFFL));
    DecompileResults r = dec.decompileFunction(f, 180, monitor);
    if (r != null && r.decompileCompleted()) {
      String c = r.getDecompiledFunction().getC();
      println(c);
    } else {
      println("  fail " + (r == null ? "null" : r.getErrorMessage()));
    }
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    mem = currentProgram.getMemory();
    rm = currentProgram.getReferenceManager();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);
    println("funcs=" + fm.getFunctionCount());

    String[] needles = {
      "createNormalWidget",
      "createTextWidget",
      "customTimeAndBatteryWidget",
      "createWeather1x2Widget",
      "StandByWidget.cpp",
      "aiBall",
      "weather_1x1",
    };
    Set<Function> all = new LinkedHashSet<>();
    for (String s : needles) {
      Set<Function> u = new LinkedHashSet<>();
      for (Address h : memFind(s)) {
        println("STR " + s + " @" + h);
        u.addAll(usersOf(h));
      }
      println("[" + s + "] users: " + u.size());
      for (Function f : u) {
        println("    " + f.getName() + " @" + f.getEntryPoint()
            + "  7FFF=" + countImm(f, 0x7FFFL));
        all.add(f);
      }
    }

    List<Function> ranked = new ArrayList<>(all);
    ranked.sort((a, b) -> Integer.compare(countImm(b, 0x7FFFL), countImm(a, 0x7FFFL)));
    int n = 0;
    for (Function f : ranked) {
      decompile(f, "dock-widget");
      if (++n >= 6) break;
    }
  }
}
