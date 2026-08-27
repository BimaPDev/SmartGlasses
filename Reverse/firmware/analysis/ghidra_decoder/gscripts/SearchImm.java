import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import java.io.*;

/** Scan instructions for immediate 112/56/16/0x70 near image/GPU code. */
public class SearchImm extends GhidraScript {
  public void run() throws Exception {
    String out = "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/ghidra_decoder/imm_hits.txt";
    PrintWriter w = new PrintWriter(new FileWriter(out));
    Listing listing = currentProgram.getListing();
    InstructionIterator it = listing.getInstructions(true);
    int n = 0;
    while (it.hasNext() && !monitor.isCancelled()) {
      Instruction ins = it.next();
      for (int i = 0; i < ins.getNumOperands(); i++) {
        Object[] objs = ins.getOpObjects(i);
        for (Object o : objs) {
          if (!(o instanceof Scalar)) continue;
          long v = ((Scalar) o).getUnsignedValue();
          if (v != 112 && v != 56 && v != 0x70 && v != 16 && v != 0x38) continue;
          Function f = currentProgram.getFunctionManager().getFunctionContaining(ins.getAddress());
          String fn = f != null ? f.getName() + "@" + f.getEntryPoint() : "<none>";
          w.println(ins.getAddress() + "  imm=" + v + "  " + ins + "  in " + fn);
          n++;
        }
      }
    }
    w.println("total hits " + n);
    w.close();
    println("wrote " + n + " hits");
  }
}
