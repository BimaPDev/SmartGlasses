import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;

/**
 * Fill leftover undefined bytes in dense .text, then create functions at
 * Thumb push {...,lr} prologues. Does not touch font/bitmap blobs.
 */
public class FullCover extends GhidraScript {
  public void run() throws Exception {
    Listing L = currentProgram.getListing();
    FunctionManager fm = currentProgram.getFunctionManager();
    Memory mem = currentProgram.getMemory();
    println("funcs before=" + fm.getFunctionCount());

    // Dense executable .text only (fonts/GIFs live outside this).
    long[][] greedy = {
      {0x2C430000L, 0x2C675000L},
    };
    int dis = 0;
    for (long[] r : greedy) {
      Address a = toAddr(r[0]);
      Address end = toAddr(r[1]);
      while (a.getOffset() < end.getOffset()) {
        if (monitor.isCancelled()) break;
        if (L.getInstructionAt(a) == null && L.getDefinedDataAt(a) == null) {
          try {
            disassemble(a);
            dis++;
          } catch (Exception e) {
          }
        }
        Instruction ins = L.getInstructionAt(a);
        if (ins != null) {
          a = ins.getMaxAddress().add(1);
        } else {
          a = a.add(2);
        }
      }
    }
    println("greedy disassemble calls=" + dis + " funcs=" + fm.getFunctionCount());

    long START = 0x2C010000L, END = 0x2C675000L;
    int made = 0, prologDis = 0;
    byte[] buf = new byte[2];
    for (long va = START; va < END; va += 2) {
      if (monitor.isCancelled()) break;
      Address ad = toAddr(va);
      if (getInstructionAt(ad) != null) continue;
      mem.getBytes(ad, buf);
      int b0 = buf[0] & 0xFF, b1 = buf[1] & 0xFF;
      boolean push16 = (b1 == 0xB5);
      boolean pushw = (b0 == 0x2D && b1 == 0xE9);
      if (push16 || pushw) {
        try {
          disassemble(ad);
          prologDis++;
          if (fm.getFunctionContaining(ad) == null) {
            createFunction(ad, null);
            made++;
          }
        } catch (Exception e) {
        }
      }
    }
    println("prologue dis=" + prologDis + " functionsCreated=" + made
        + " funcs after=" + fm.getFunctionCount());
  }
}
