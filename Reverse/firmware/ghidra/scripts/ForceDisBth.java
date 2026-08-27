import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;

/** Prologue sweep + greedy disasm for best1600_watch_bth.bin @ 0x14000000. */
public class ForceDisBth extends GhidraScript {
  public void run() throws Exception {
    Memory mem = currentProgram.getMemory();
    FunctionManager fm = currentProgram.getFunctionManager();
    Listing L = currentProgram.getListing();
    long base = currentProgram.getMinAddress().getOffset();
    long end = currentProgram.getMaxAddress().getOffset() + 1;
    // skip 16-byte OTA header
    long START = Math.max(base + 0x10, 0x14000010L);
    // File is 1,341,116 bytes; do not walk the padded block past EOF.
    long END = Math.min(end, 0x14000000L + 1341116L);
    println("funcs before=" + fm.getFunctionCount() + " range=0x"
        + Long.toHexString(START) + "-0x" + Long.toHexString(END));

    int greedy = 0;
    Address a = toAddr(START);
    Address lim = toAddr(END);
    while (a.getOffset() < lim.getOffset()) {
      if (monitor.isCancelled()) break;
      if (L.getInstructionAt(a) == null && L.getDefinedDataAt(a) == null) {
        try {
          disassemble(a);
          greedy++;
        } catch (Exception e) {
        }
      }
      var ins = L.getInstructionAt(a);
      if (ins != null) a = ins.getMaxAddress().add(1);
      else a = a.add(2);
    }
    println("greedy disassemble calls=" + greedy);

    int made = 0, dis = 0;
    byte[] buf = new byte[2];
    for (long va = START; va < END; va += 2) {
      if (monitor.isCancelled()) break;
      Address ad = toAddr(va);
      if (getInstructionAt(ad) != null) continue;
      try {
        mem.getBytes(ad, buf);
      } catch (Exception e) {
        break;
      }
      int b0 = buf[0] & 0xFF, b1 = buf[1] & 0xFF;
      if (b1 == 0xB5 || (b0 == 0x2D && b1 == 0xE9)) {
        try {
          disassemble(ad);
          dis++;
          if (fm.getFunctionContaining(ad) == null) {
            createFunction(ad, null);
            made++;
          }
        } catch (Exception e) {
        }
      }
    }
    println("prologue dis=" + dis + " functionsCreated=" + made
        + " funcs after=" + fm.getFunctionCount());
  }
}
