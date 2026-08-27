import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

/** Xrefs to lv_obj_set_style_radius (FUN_2c62c7e8) and generic setter 0x2c62b030. */
public class DockCircle3 extends GhidraScript {
  FunctionManager fm;
  DecompInterface dec;

  String fnOf(Address a) {
    Function f = fm.getFunctionContaining(a);
    return f == null ? "<no-func:" + a + ">" : (f.getName() + " @" + f.getEntryPoint()
        + " sz=" + f.getBody().getNumAddresses());
  }

  int countImm(Function f, long imm) {
    int n = 0;
    if (f == null) return 0;
    var it = currentProgram.getListing().getInstructions(f.getBody(), true);
    while (it.hasNext()) {
      var ins = it.next();
      for (int i = 0; i < ins.getNumOperands(); i++) {
        for (Object o : ins.getOpObjects(i)) {
          if (o instanceof Scalar && ((((Scalar) o).getValue() & 0xFFFFFFFFL) == imm)) n++;
        }
      }
    }
    return n;
  }

  void listRefs(long va, String why) {
    println("\n### refs to " + why + " @0x" + Long.toHexString(va) + " ###");
    var it = currentProgram.getReferenceManager().getReferencesTo(toAddr(va));
    int n = 0, nLauncher = 0;
    java.util.LinkedHashSet<Function> fs = new java.util.LinkedHashSet<>();
    while (it.hasNext()) {
      Reference r = it.next();
      Address from = r.getFromAddress();
      long off = from.getOffset();
      boolean launcher = off >= 0x2C490000L && off < 0x2C4C0000L;
      Function f = fm.getFunctionContaining(from);
      println("  " + from + " " + r.getReferenceType()
          + (launcher ? " [LAUNCHER]" : "")
          + " in " + fnOf(from)
          + (f != null ? " 7FFF=" + countImm(f, 0x7FFFL) : ""));
      if (f != null) fs.add(f);
      if (launcher) nLauncher++;
      if (++n > 80) { println("  ... truncated"); break; }
    }
    println("  total listed=" + n + " launcher-band=" + nLauncher + " unique-funcs=" + fs.size());
  }

  void decompile(long va, String why) {
    Function f = fm.getFunctionContaining(toAddr(va));
    if (f == null) { println("\n===== " + why + " NO FUNC ====="); return; }
    println("\n===== " + why + " " + f.getName() + " @" + f.getEntryPoint()
        + " 7FFF=" + countImm(f, 0x7FFFL) + " sz=" + f.getBody().getNumAddresses() + " =====");
    DecompileResults r = dec.decompileFunction(f, 180, monitor);
    if (r != null && r.decompileCompleted()) println(r.getDecompiledFunction().getC());
    else println("  fail " + (r == null ? "null" : r.getErrorMessage()));
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);
    println("funcs=" + fm.getFunctionCount());
    listRefs(0x2C62C7E8L, "lv_obj_set_style_radius");
    listRefs(0x2C62C7E9L, "radius+1 thumb");
    listRefs(0x2C62B030L, "lv_obj_set_local_style_prop");
    listRefs(0x2C62B031L, "prop+1 thumb");
    decompile(0x2C62B030L, "style-prop");
    decompile(0x2C4A578CL, "alloc-helper");
  }
}
