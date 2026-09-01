import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;

/** Dump every function: CSV catalog + decompiled C + Thumb listing. */
public class ExportAll extends GhidraScript {
  static String safe(String s) {
    String t = s.replaceAll("[^A-Za-z0-9_.+-]", "_");
    if (t.length() > 80) t = t.substring(0, 80);
    return t;
  }

  public void run() throws Exception {
    String outPath;
    if (getScriptArgs() != null && getScriptArgs().length > 0) {
      outPath = getScriptArgs()[0];
    } else {
      printerr("usage: ExportAll.java <output-dir>");
      return;
    }
    File root = new File(outPath);
    File decompDir = new File(root, "decomp");
    File asmDir = new File(root, "asm");
    decompDir.mkdirs();
    asmDir.mkdirs();

    Listing listing = currentProgram.getListing();
    DecompInterface dec = new DecompInterface();
    dec.openProgram(currentProgram);

    File csvf = new File(root, "functions.csv");
    BufferedWriter csv = new BufferedWriter(
        new OutputStreamWriter(new FileOutputStream(csvf), StandardCharsets.UTF_8));
    csv.write("entry,name,size_bytes,instrs,decomp_ok,file\n");

    int n = 0, ok = 0, fail = 0, skip = 0;
    FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
    while (it.hasNext() && !monitor.isCancelled()) {
      Function f = it.next();
      long entry = f.getEntryPoint().getOffset();
      // skip 0x3C rodata alias duplicates
      if ((entry & 0xFF000000L) == 0x3C000000L) {
        skip++;
        continue;
      }
      long sz = f.getBody().getNumAddresses();
      String name = f.getName();
      String fn = String.format("%08x_%s", entry, safe(name));
      n++;

      int icount = 0;
      StringBuilder asm = new StringBuilder();
      InstructionIterator iit = listing.getInstructions(f.getBody(), true);
      while (iit.hasNext()) {
        Instruction ins = iit.next();
        icount++;
        asm.append("  ").append(ins.toString()).append("\n");
        if (icount > 8000) {
          asm.append("  ; truncated\n");
          break;
        }
      }
      try (BufferedWriter aw = new BufferedWriter(new OutputStreamWriter(
          new FileOutputStream(new File(asmDir, fn + ".s")), StandardCharsets.UTF_8))) {
        aw.write("; " + name + " @ 0x" + Long.toHexString(entry) + " size=" + sz + "\n");
        aw.write(asm.toString());
      }

      boolean deok = false;
      String c = "";
      if (sz > 100000) {
        c = "/* skipped: body too large (" + sz + " bytes) */\n";
      } else {
        DecompileResults r = dec.decompileFunction(f, 30, monitor);
        if (r != null && r.decompileCompleted()) {
          c = r.getDecompiledFunction().getC();
          deok = true;
          ok++;
        } else {
          c = "/* decompile failed: "
              + (r == null ? "null" : r.getErrorMessage()) + " */\n";
          fail++;
        }
      }
      try (BufferedWriter cw = new BufferedWriter(new OutputStreamWriter(
          new FileOutputStream(new File(decompDir, fn + ".c")), StandardCharsets.UTF_8))) {
        cw.write("/* " + name + " @ 0x" + Long.toHexString(entry) + " */\n");
        cw.write(c);
      }

      csv.write(String.format("0x%08x,%s,%d,%d,%s,%s\n",
          entry, name.replace(",", "_"), sz, icount, deok ? "1" : "0", fn));
      if (n % 100 == 0) {
        println("exported " + n + " ok=" + ok + " fail=" + fail);
      }
    }
    csv.close();
    dec.dispose();
    println("DONE n=" + n + " decomp_ok=" + ok + " decomp_fail=" + fail
        + " skipped_3c=" + skip + " out=" + root.getAbsolutePath());
  }
}
