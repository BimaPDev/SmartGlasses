import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import java.util.ArrayList;
import java.util.List;

public class DumpLeftovers extends GhidraScript {
  FunctionManager fm;
  Listing listing;
  Memory mem;
  ReferenceManager rm;
  DecompInterface dec;

  String fnOf(Address a) {
    Function f = fm.getFunctionContaining(a);
    return f == null ? "<no-func>" : (f.getName() + " @" + f.getEntryPoint());
  }

  List<Address> memFind(String s) {
    List<Address> out = new ArrayList<Address>();
    byte[] pat = (s + "\0").getBytes();
    Address a = mem.getMinAddress();
    while (a != null) {
      Address hit = mem.findBytes(a, pat, null, true, monitor);
      if (hit == null) break;
      out.add(hit);
      try { a = hit.add(1); } catch (Exception e) { break; }
    }
    return out;
  }

  void refsTo(Address a, String tag) {
    ReferenceIterator it = rm.getReferencesTo(a);
    int n = 0;
    while (it.hasNext()) {
      Reference r = it.next();
      println("    [" + tag + "] from " + r.getFromAddress() + " " + r.getReferenceType() + " in " + fnOf(r.getFromAddress()));
      n++;
      if (n > 20) { println("    ..."); break; }
    }
    if (n == 0) println("    [" + tag + "] NO refs");
  }

  void decompile(Function f, String why) {
    if (f == null) { println("  [" + why + "] no function"); return; }
    println("\n===== DECOMP " + why + ": " + f.getName() + " @" + f.getEntryPoint() + " =====");
    DecompileResults res = dec.decompileFunction(f, 90, monitor);
    if (res != null && res.decompileCompleted()) {
      String c = res.getDecompiledFunction().getC();
      if (c.length() > 8000) c = c.substring(0, 8000) + "\n/* truncated */";
      println(c);
    } else {
      println("  decompile failed: " + (res == null ? "null" : res.getErrorMessage()));
    }
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    listing = currentProgram.getListing();
    mem = currentProgram.getMemory();
    rm = currentProgram.getReferenceManager();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);

    println("function count=" + fm.getFunctionCount());
    println("insn @ 2c5aa114=" + listing.getInstructionAt(toAddr(0x2C5AA114L)));
    Function setSn = fm.getFunctionContaining(toAddr(0x2C5AA114L));
    println("func containing set_sn=" + (setSn == null ? "null" : setSn.getName() + " @" + setSn.getEntryPoint()));

    println("\nMEM BLOCKS:");
    for (MemoryBlock b : mem.getBlocks()) {
      println("  " + b.getName() + " " + b.getStart() + "-" + b.getEnd() + " mapped=" + b.isMapped());
    }

    String[] needles = {
      "en_usb", "enable usb", "set_sn", "eshell >", "handleSystemMsg",
      "no handler for action %s", "get_glass_screenshot", "get_glass_log",
      "Invalid UART ID: %d", "hal_uart_open", "hal_iomux_best1600.c",
      "debug_i2c", "eshell_platform"
    };
    for (String s : needles) {
      for (Address h : memFind(s)) {
        println("STR " + s + " @" + h);
        refsTo(h, s);
        long off = h.getOffset() & 0xFFFFFFL;
        refsTo(toAddr(0x3C000000L | off), s + "(3C)");
      }
    }

    decompile(setSn, "set_sn");
    decompile(fm.getFunctionContaining(toAddr(0x2C5E33F0L)), "id_lookup");

    // named functions
    FunctionIterator fi = fm.getFunctions(true);
    int n = 0;
    println("\n############ functions matching uart/usb/eshell/systemmsg/iomux ############");
    while (fi.hasNext()) {
      Function f = fi.next();
      String nm = f.getName().toLowerCase();
      if (nm.contains("uart") || nm.contains("usb") || nm.contains("iomux")
          || nm.contains("eshell") || nm.contains("systemmsg") || nm.contains("fac_cmd")
          || nm.contains("screenshot") || nm.contains("pinmux")) {
        println("  FUNC " + f.getName() + " @" + f.getEntryPoint());
        n++;
      }
    }
    println("matched named funcs=" + n);
  }
}
