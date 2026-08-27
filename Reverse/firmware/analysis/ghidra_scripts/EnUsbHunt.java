import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.*;

/**
 * Why does fac_cmd `en_usb` exist? Re-check xrefs + decompile candidate handlers.
 * Run -noanalysis on existing star_air3 / platform_tester.bin.
 */
public class EnUsbHunt extends GhidraScript {
  FunctionManager fm;
  Listing listing;
  Memory mem;
  ReferenceManager rm;
  DecompInterface dec;
  PrintWriter out;

  void decomp(long va, String why) {
    Address a = toAddr(va);
    Function f = fm.getFunctionContaining(a);
    if (f == null) {
      try { disassemble(a); createFunction(a, null); } catch (Exception e) {}
      f = fm.getFunctionContaining(a);
    }
    out.println("\n===== DECOMP " + why + " @0x" + Long.toHexString(va)
        + " func=" + (f == null ? "NONE" : f.getName() + " @" + f.getEntryPoint()) + " =====");
    if (f == null) return;
    DecompileResults r = dec.decompileFunction(f, 90, monitor);
    if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
    else out.println("  fail " + (r == null ? "null" : r.getErrorMessage()));
  }

  void refs(String label, long va) {
    Address a = toAddr(va);
    out.println("\n### refs to " + label + " @0x" + Long.toHexString(va) + " ###");
    ReferenceIterator it = rm.getReferencesTo(a);
    int n = 0;
    while (it.hasNext()) {
      Reference r = it.next();
      Function f = fm.getFunctionContaining(r.getFromAddress());
      out.println("  from " + r.getFromAddress() + " " + r.getReferenceType()
          + " in " + (f == null ? "<none>" : f.getName() + " @" + f.getEntryPoint()));
      n++;
      if (n > 20) { out.println("  ..."); break; }
    }
    if (n == 0) out.println("  (none)");
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    listing = currentProgram.getListing();
    mem = currentProgram.getMemory();
    rm = currentProgram.getReferenceManager();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);

    String report = getScriptArgs().length > 0
        ? getScriptArgs()[0]
        : "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/en_usb_hunt.txt";
    out = new PrintWriter(new FileWriter(report));
    try {
      out.println("funcs=" + fm.getFunctionCount());
      out.println("program=" + currentProgram.getName());

      refs("en_usb 2C", 0x2C1605E8L);
      refs("en_usb 3C", 0x3C1605E8L);
      refs("enable usb 2C", 0x2C1605F0L);
      refs("enable usb 3C", 0x3C1605F0L);
      refs("enable usb+4 intern slice 3C", 0x3C1605F4L);
      refs("RETURN:NOT_SUPPORTED 3C", 0x3C16076CL);
      refs("vbus usb_enable 3C", 0x3C042AF8L);
      refs("vbus usb_enable 2C", 0x2C042AF8L);
      refs("show help msg 3C", 0x3C160704L);
      refs("fac_cmd.c 3C", 0x3C16071CL);
      refs("cmd_handler trd not start 3C", 0x3C160784L);
      refs("eshell_sleep NULL 3C", 0x3C15FBB4L);
      refs("set gpio TRACE 3C", 0x3C15FB84L);
      refs("close_eshell 3C", 0x3C160088L);
      refs("bth_goto_sleep 3C", 0x3C15FC34L);

      decomp(0x2C5AAB48L, "pool slices enable-usb (old claimed en_usb)");
      decomp(0x2C5AAB80L, "next func after claimed en_usb");
      decomp(0x2C5AB26CL, "TRACE osMemoryPoolnew / cmd thread");
      decomp(0x2C5AB29CL, "small wrapper after cmd TRACE pool");
      decomp(0x2C5ABF68L, "shared getter called by cmd wrappers");
      decomp(0x2C5ACE74L, "tail of cmd-init TRACE func");
      decomp(0x2C5A98E8L, "fac_cmd_sys.c TRACE neighbor (SN page?)");
      decomp(0x2C042AF8L, "vbus usb_enable string site (if code)");

      // any function whose body references 0x1605e0-0x160610
      out.println("\n### functions with refs into en_usb string window 0x2C/3C1605E0-160610 ###");
      Set<Function> hit = new LinkedHashSet<>();
      for (long base : new long[]{0x2C1605E0L, 0x3C1605E0L}) {
        for (long off = 0; off < 0x30; off += 4) {
          Address a = toAddr(base + off);
          ReferenceIterator it = rm.getReferencesTo(a);
          while (it.hasNext()) {
            Function f = fm.getFunctionContaining(it.next().getFromAddress());
            if (f != null) hit.add(f);
          }
        }
      }
      out.println("n=" + hit.size());
      for (Function f : hit) {
        out.println("  " + f.getName() + " @" + f.getEntryPoint());
        decomp(f.getEntryPoint().getOffset(), "window-user");
      }
    } finally {
      out.close();
    }
    println("wrote " + report);
  }
}
