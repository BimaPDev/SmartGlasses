// LvglThread.java - leaf-3.3
//
// Structural discovery of the LVGL service loop in platform_tester.bin
// (Cortex-M55 image, XIP base 0x2C000000).  Deliberately name-free: nothing
// here keys off a symbol or a TRACE string, so the result is independent of
// the two sibling leaves.
//
// Phase A  control        - prove the import/base by checking 0x2C499270.
// Phase B  band           - establish the LVGL core link band from the 17
//                           pre-verified lv_* wrapper VAs.
// Phase C  never-returns  - every function with no reachable RETURN flow and
//                           at least one back edge (a while(1) thread body).
// Phase D  hub            - functions in the LVGL band with exactly one caller
//                           where that caller is a while(1) body.
// Phase E  dump           - full listing + decompiled C for every VA named on
//                           the command line, plus one level of callees.
//
// usage: -postScript LvglThread.java <outdir> [<va> ...]

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.block.BasicBlockModel;
import ghidra.program.model.block.CodeBlock;
import ghidra.program.model.block.CodeBlockIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.FlowType;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import ghidra.app.cmd.disassemble.ArmDisassembleCommand;
import ghidra.program.model.address.AddressSet;

public class LvglThread extends GhidraScript {

  static final long BASE = 0x2C000000L;
  static final long CONTROL = 0x2C499270L;
  static final long[] WRAPPERS = {
      0x2c606ce8L, 0x2c606cf4L, 0x2c606f34L, 0x2c606fa8L, 0x2c606ff8L, 0x2c607048L,
      0x2c6070bcL, 0x2c60710cL, 0x2c6072b4L, 0x2c6072bcL, 0x2c62b030L, 0x2c62c6a0L,
      0x2c62c6b0L, 0x2c62c730L, 0x2c62c770L, 0x2c62c7e8L};

  File outDir, asmDir, cDir;
  DecompInterface dec;
  Listing listing;
  StringBuilder rpt = new StringBuilder();

  Address a(long v) { return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(v); }

  void say(String s) { println(s); rpt.append(s).append('\n'); }

  public void run() throws Exception {
    String[] args = getScriptArgs();
    if (args == null || args.length < 1) { printerr("usage: LvglThread <outdir> [va...]"); return; }
    outDir = new File(args[0]);
    asmDir = new File(outDir, "asm"); cDir = new File(outDir, "c");
    asmDir.mkdirs(); cDir.mkdirs();
    listing = currentProgram.getListing();
    dec = new DecompInterface();
    DecompileOptions o = new DecompileOptions();
    dec.setOptions(o);
    dec.toggleCCode(true);
    dec.toggleSyntaxTree(true);
    dec.setSimplificationStyle("decompile");
    dec.openProgram(currentProgram);

    // ---- Phase 0: force a function at every BL target -------------------
    File bltf = new File(outDir, "blt.txt");
    int made = 0, already = 0, failed = 0;
    if (bltf.exists()) {
      List<String> lines = Files.readAllLines(Paths.get(bltf.getAbsolutePath()));
      for (String ln : lines) {
        ln = ln.trim();
        if (ln.isEmpty()) continue;
        Address t = a(Long.parseLong(ln, 16));
        if (getFunctionAt(t) != null) { already++; continue; }
        if (listing.getInstructionAt(t) == null) {
          ArmDisassembleCommand cmd = new ArmDisassembleCommand(t, null, false);
          cmd.applyTo(currentProgram, monitor);
        }
        if (listing.getInstructionAt(t) == null) { failed++; continue; }
        Function nf = createFunction(t, null);
        if (nf == null) failed++; else made++;
      }
    }
    say("== 0. forced function creation from BL targets ==");
    say("  created=" + made + " already=" + already + " failed=" + failed);

    // ---- Phase 0b: gap scan.  Thread bodies in this PIC image are the
    // target of no BL and of no literal code pointer, so they only appear as
    // an unclaimed hole between two known functions that opens with a
    // PUSH{..,LR} / PUSH.W{..,LR} prologue.
    int gapMade = 0;
    for (int pass = 0; pass < 2; pass++) {
      List<Function> all = new ArrayList<>();
      FunctionIterator fit = currentProgram.getFunctionManager().getFunctions(true);
      while (fit.hasNext()) all.add(fit.next());
      List<long[]> gaps = new ArrayList<>();
      for (int i = 0; i + 1 < all.size(); i++) {
        long ge = all.get(i).getBody().getMaxAddress().getOffset() + 1;
        long gs = all.get(i + 1).getEntryPoint().getOffset();
        if (gs - ge >= 8 && gs - ge <= 0x2000) gaps.add(new long[]{ge, gs});
      }
      int before = gapMade;
      for (long[] g : gaps) {
        for (long p2 = (g[0] + 1) & ~1L; p2 + 4 <= g[1]; p2 += 2) {
          Address t = a(p2);
          if (getFunctionContaining(t) != null) continue;
          int h;
          try { h = (currentProgram.getMemory().getShort(t)) & 0xFFFF; } catch (Exception ex) { break; }
          boolean pro = ((h & 0xFF00) == 0xB500) || (h == 0xE92D);
          if (!pro) continue;
          if (listing.getInstructionAt(t) == null) {
            ArmDisassembleCommand cmd = new ArmDisassembleCommand(t, null, false);
            cmd.applyTo(currentProgram, monitor);
          }
          if (listing.getInstructionAt(t) == null) continue;
          Function nf = createFunction(t, null);
          if (nf != null && nf.getBody().getNumAddresses() >= 0x20) {
            gapMade++;
            p2 = nf.getBody().getMaxAddress().getOffset();
          }
        }
      }
      if (gapMade == before) break;
    }
    say("  gap-scan created=" + gapMade);
    {
      BufferedWriter fw = new BufferedWriter(new OutputStreamWriter(
          new FileOutputStream(new File(outDir, "ghidra_functions.txt")), StandardCharsets.UTF_8));
      FunctionIterator fit2 = currentProgram.getFunctionManager().getFunctions(true);
      int nf2 = 0;
      while (fit2.hasNext()) {
        Function f2 = fit2.next();
        fw.write(String.format("%08x %08x %d %s%n",
            f2.getEntryPoint().getOffset(),
            f2.getBody().getMaxAddress().getOffset(),
            f2.getBody().getNumAddresses(), f2.getName()));
        nf2++;
      }
      fw.close();
      say("  exported " + nf2 + " function entries to ghidra_functions.txt");
    }
    say("");

    say("== program ==");
    say("  imageBase = " + currentProgram.getImageBase());
    say("  minAddr   = " + currentProgram.getMinAddress());
    say("  maxAddr   = " + currentProgram.getMaxAddress());
    say("  language  = " + currentProgram.getLanguageID());
    say("  functions = " + currentProgram.getFunctionManager().getFunctionCount());

    // ---- Phase A: control ------------------------------------------------
    say("");
    say("== A. control 0x2C499270 (jbd4010_display, known-good VA) ==");
    Function ctl = getFunctionContaining(a(CONTROL));
    if (ctl == null) {
      say("  CONTROL-MISS: no function contains 0x2C499270");
    } else {
      say("  entry=" + ctl.getEntryPoint() + " size=" + ctl.getBody().getNumAddresses()
          + " entryMatches=" + (ctl.getEntryPoint().getOffset() == CONTROL));
      say("  noReturnFlow=" + !hasReturn(ctl) + " backEdges=" + backEdges(ctl));
      say("  callees=" + calleeList(ctl));
    }

    // ---- Phase B: LVGL band ---------------------------------------------
    say("");
    say("== B. LVGL core link band ==");
    long lo = Long.MAX_VALUE, hi = 0;
    for (long w : WRAPPERS) {
      Function f = getFunctionContaining(a(w));
      say(String.format("  wrapper 0x%08x -> %s", w, f == null ? "<no function>" : f.getEntryPoint().toString()));
      lo = Math.min(lo, w); hi = Math.max(hi, w);
    }
    final long BLO = lo, BHI = hi;
    say(String.format("  wrapper span 0x%08x .. 0x%08x", BLO, BHI));

    // ---- Phase C: never-returning loop bodies ---------------------------
    say("");
    say("== C. never-returning functions with a back edge (while(1) bodies) ==");
    List<Function> loops = new ArrayList<>();
    FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
    while (it.hasNext() && !monitor.isCancelled()) {
      Function f = it.next();
      if (f.isThunk() || f.isExternal()) continue;
      long sz = f.getBody().getNumAddresses();
      if (sz < 0x20 || sz > 0x4000) continue;
      if (hasReturn(f)) continue;
      if (backEdges(f) == 0) continue;
      loops.add(f);
    }
    say("  count = " + loops.size());
    for (Function f : loops) {
      Set<Long> cs = calleeSet(f);
      boolean intoBand = false;
      for (long c : cs) if (c >= BLO && c <= BHI) intoBand = true;
      say(String.format("  0x%08x size=%-5d callers=%-3d band=%s callees=%s",
          f.getEntryPoint().getOffset(), f.getBody().getNumAddresses(),
          f.getCallingFunctions(monitor).size(), intoBand ? "YES" : "no ", fmt(cs)));
    }

    // ---- Phase D: single-caller hubs inside the band --------------------
    say("");
    say("== D. LVGL-band functions with exactly one caller, caller loops ==");
    it = currentProgram.getFunctionManager().getFunctions(true);
    while (it.hasNext() && !monitor.isCancelled()) {
      Function f = it.next();
      long e = f.getEntryPoint().getOffset();
      if (e < BLO - 0x20000 || e > BHI + 0x60000) continue;
      if (f.getBody().getNumAddresses() < 0x80) continue;
      Set<Function> cs = f.getCallingFunctions(monitor);
      if (cs.size() != 1) continue;
      Function c = cs.iterator().next();
      if (backEdges(c) == 0) continue;
      say(String.format("  callee 0x%08x size=%-5d  <- caller 0x%08x size=%-5d noRet=%s",
          e, f.getBody().getNumAddresses(), c.getEntryPoint().getOffset(),
          c.getBody().getNumAddresses(), !hasReturn(c)));
    }

    // ---- Phase E: dumps --------------------------------------------------
    say("");
    say("== E. dumps ==");
    LinkedHashSet<Long> want = new LinkedHashSet<>();
    want.add(CONTROL);
    for (int i = 1; i < args.length; i++) want.add(Long.decode(args[i]));
    LinkedHashSet<Long> lvl2 = new LinkedHashSet<>();
    for (long v : want) {
      Function f = getFunctionContaining(a(v));
      if (f == null) { say("  no function at " + Long.toHexString(v)); continue; }
      dump(f);
      lvl2.addAll(calleeSet(f));
    }
    lvl2.removeAll(want);
    for (long v : lvl2) {
      Function f = getFunctionContaining(a(v));
      if (f != null) dump(f);
    }
    say("  dumped " + (want.size() + lvl2.size()) + " functions to " + outDir);

    dec.dispose();
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(
        new FileOutputStream(new File(outDir, "ghidra-report.txt")), StandardCharsets.UTF_8));
    w.write(rpt.toString()); w.close();
  }

  String fmt(Set<Long> s) {
    StringBuilder b = new StringBuilder();
    int n = 0;
    for (long v : s) { if (n++ > 0) b.append(' '); b.append(String.format("0x%08x", v)); if (n > 14) { b.append(" ..."); break; } }
    return b.toString();
  }

  boolean hasReturn(Function f) {
    InstructionIterator ii = listing.getInstructions(f.getBody(), true);
    while (ii.hasNext()) {
      Instruction in = ii.next();
      FlowType ft = in.getFlowType();
      if (ft.isTerminal()) return true;
    }
    return false;
  }

  int backEdges(Function f) throws Exception {
    int n = 0;
    InstructionIterator ii = listing.getInstructions(f.getBody(), true);
    while (ii.hasNext()) {
      Instruction in = ii.next();
      FlowType ft = in.getFlowType();
      if (!ft.isJump()) continue;
      Address[] fl = in.getFlows();
      for (Address t : fl) if (t.compareTo(in.getAddress()) < 0 && f.getBody().contains(t)) n++;
    }
    return n;
  }

  Set<Long> calleeSet(Function f) {
    TreeSet<Long> s = new TreeSet<>();
    InstructionIterator ii = listing.getInstructions(f.getBody(), true);
    while (ii.hasNext()) {
      Instruction in = ii.next();
      if (!in.getFlowType().isCall()) continue;
      for (Address t : in.getFlows()) s.add(t.getOffset());
    }
    return s;
  }

  String calleeList(Function f) { return fmt(calleeSet(f)); }

  void dump(Function f) throws Exception {
    long e = f.getEntryPoint().getOffset();
    String stem = String.format("%08x", e);
    BufferedWriter w = new BufferedWriter(new OutputStreamWriter(
        new FileOutputStream(new File(asmDir, stem + ".asm")), StandardCharsets.UTF_8));
    w.write("; " + f.getName() + "  entry=" + f.getEntryPoint()
        + "  bytes=" + f.getBody().getNumAddresses() + "\n");
    w.write("; callers=" + f.getCallingFunctions(monitor).size()
        + "  noReturnFlow=" + !hasReturn(f) + "  backEdges=" + backEdges(f) + "\n\n");
    InstructionIterator ii = listing.getInstructions(f.getBody(), true);
    while (ii.hasNext()) {
      Instruction in = ii.next();
      StringBuilder by = new StringBuilder();
      for (byte b : in.getBytes()) by.append(String.format("%02x", b));
      w.write(String.format("%s  %-12s %s\n", in.getAddress(), by, in.toString()));
    }
    w.close();
    DecompileResults r = dec.decompileFunction(f, 120, monitor);
    BufferedWriter cw = new BufferedWriter(new OutputStreamWriter(
        new FileOutputStream(new File(cDir, stem + ".c")), StandardCharsets.UTF_8));
    cw.write("/* " + f.getName() + " @ " + f.getEntryPoint() + " */\n");
    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
      cw.write(r.getDecompiledFunction().getC());
    } else {
      cw.write("/* decompilation failed: " + (r == null ? "null" : r.getErrorMessage()) + " */\n");
    }
    cw.close();
  }
}
