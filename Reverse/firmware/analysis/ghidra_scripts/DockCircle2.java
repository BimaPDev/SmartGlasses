import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

/**
 * Decompile StandByWidget createNormalWidget and circle-chrome callees.
 * Anchors from Capstone TRACE (movw #0x7bc + fail string).
 */
public class DockCircle2 extends GhidraScript {
  FunctionManager fm;
  DecompInterface dec;

  String fnOf(Address a) {
    Function f = fm.getFunctionContaining(a);
    return f == null ? "<no-func>" : (f.getName() + " @" + f.getEntryPoint());
  }

  int countImm(Function f, long imm) {
    int n = 0;
    if (f == null) return 0;
    var it = currentProgram.getListing().getInstructions(f.getBody(), true);
    while (it.hasNext()) {
      var ins = it.next();
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

  void decompile(long va, String why) {
    Address a = toAddr(va);
    Function f = fm.getFunctionContaining(a);
    if (f == null) {
      println("\n===== " + why + " @0x" + Long.toHexString(va) + " NO FUNCTION =====");
      return;
    }
    println("\n===== " + why + " " + f.getName() + " @" + f.getEntryPoint()
        + "  7FFF=" + countImm(f, 0x7FFFL)
        + "  7FFFFFFF=" + countImm(f, 0x7FFFFFFFL)
        + "  size=" + f.getBody().getNumAddresses() + " =====");
    DecompileResults r = dec.decompileFunction(f, 180, monitor);
    if (r != null && r.decompileCompleted()) {
      println(r.getDecompiledFunction().getC());
    } else {
      println("  fail " + (r == null ? "null" : r.getErrorMessage()));
    }
  }

  public void run() throws Exception {
    fm = currentProgram.getFunctionManager();
    dec = new DecompInterface();
    dec.openProgram(currentProgram);
    println("funcs=" + fm.getFunctionCount());

    long[] vas = {
      0x2C4A72E4L, // createNormalWidget dispatcher (TRACE fail title empty)
      0x2C4A0F4CL, // case 4 tail
      0x2C4A4988L, // case 2 tail
      0x2C49E72CL, // case 3 tail
      0x2C4A578CL, // alloc/helper (0x4c / 0x2c)
      0x2C4A714CL, // weather_1x2 TRACE
      0x2C4A62BCL, // called from weather path
      0x2C4A6030L, // tail from sibling
      0x2C4A5E10L,
      0x2C4A7088L,
      0x2C62C7E8L, // earlier 0x7FFF BL target in LVGL
    };
    for (long va : vas) decompile(va, "dock");

    // xrefs to dispatcher
    println("\n### refs to 0x2C4A72E4 / 0x2C4A72E5 ###");
    for (long va : new long[] {0x2C4A72E4L, 0x2C4A72E5L}) {
      var it = currentProgram.getReferenceManager().getReferencesTo(toAddr(va));
      int n = 0;
      while (it.hasNext()) {
        Reference r = it.next();
        println("  " + r.getFromAddress() + " " + r.getReferenceType() + " in " + fnOf(r.getFromAddress()));
        if (++n > 20) break;
      }
      if (n == 0) println("  (none for 0x" + Long.toHexString(va) + ")");
    }
  }
}
