import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.*;

/**
 * Locate LVGL / vendor indexed-image decoder and dump decomp of the
 * cf=9 INDEXED_4BIT path. Run -noanalysis on existing star_air3.
 */
public class ImgDecoderHunt extends GhidraScript {
  FunctionManager fm;
  Listing listing;
  Memory mem;
  ReferenceManager rm;
  DecompInterface dec;
  PrintWriter out;
  Set<Function> decompiled = new LinkedHashSet<>();

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
    decomp(f, why);
  }

  void decomp(Function f, String why) {
    if (f == null) return;
    if (!decompiled.add(f)) {
      out.println("  (already dumped " + f.getName() + " @" + f.getEntryPoint() + ")");
      return;
    }
    out.println("\n===== DECOMP " + why + " " + f.getName() + " @" + f.getEntryPoint()
        + " sz=" + f.getBody().getNumAddresses() + " =====");
    DecompileResults r = dec.decompileFunction(f, 90, monitor);
    if (r != null && r.decompileCompleted()) out.println(r.getDecompiledFunction().getC());
    else out.println("  fail " + (r == null ? "null" : r.getErrorMessage()));
  }

  void refs(String label, long va) {
    Address a = toAddr(va);
    out.println("\n### refs to " + label + " @0x" + Long.toHexString(va) + " ###");
    ReferenceIterator it = rm.getReferencesTo(a);
    int n = 0;
    Set<Function> users = new LinkedHashSet<>();
    while (it.hasNext()) {
      Reference r = it.next();
      Address from = r.getFromAddress();
      Function f = fm.getFunctionContaining(from);
      out.println("  from " + from + " " + r.getReferenceType()
          + " in " + (f == null ? "<none>" : f.getName() + " @" + f.getEntryPoint()));
      if (f != null) users.add(f);
      else {
        for (Reference r2 : rm.getReferencesTo(from)) {
          Function f2 = fm.getFunctionContaining(r2.getFromAddress());
          out.println("    pool-from " + r2.getFromAddress()
              + " in " + (f2 == null ? "<none>" : f2.getName() + " @" + f2.getEntryPoint()));
          if (f2 != null) users.add(f2);
        }
      }
      n++;
      if (n > 40) { out.println("  ..."); break; }
    }
    if (n == 0) out.println("  (none)");
    for (Function f : users) decomp(f, "str-user[" + label + "]");
  }

  List<Address> memFind(String s) {
    List<Address> hits = new ArrayList<>();
    byte[] pat = (s + "\0").getBytes();
    Address a = mem.getMinAddress();
    while (a != null) {
      Address h = mem.findBytes(a, pat, null, true, monitor);
      if (h == null) break;
      hits.add(h);
      try { a = h.add(s.length() + 1); } catch (Exception e) { break; }
    }
    return hits;
  }

  boolean hasScalar(Instruction ins, long want) {
    int nops = ins.getNumOperands();
    for (int i = 0; i < nops; i++) {
      for (Object o : ins.getOpObjects(i)) {
        if (o instanceof Scalar) {
          long v = ((Scalar) o).getUnsignedValue();
          if (v == want) return true;
        }
      }
    }
    return false;
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
        : "/Users/bimap/Documents/Coding/SmartGlasses/Reverse/firmware/analysis/img_decoder_hunt.txt";
    out = new PrintWriter(new FileWriter(report));
    try {
      out.println("funcs=" + fm.getFunctionCount());
      out.println("program=" + currentProgram.getName());
      out.println("ImgDecoderHunt: LVGL indexed 4bpp / tile-order hunt");

      refs("lv_img_decoder.c 2C", 0x2C41B4F4L);
      refs("lv_img_decoder.c 3C", 0x3C41B4F4L);
      refs("lv_img_decoder_built_in_open 2C", 0x2C41B56CL);
      refs("lv_img_decoder_built_in_open 3C", 0x3C41B56CL);
      refs("img_decoder_built_in_open oom 2C", 0x2C41B530L);
      refs("img_decoder_built_in_open oom 3C", 0x3C41B530L);

      String[] extra = {
          "lv_img_decoder.c",
          "lv_img_decoder_built_in_open",
          "img_decoder_built_in_open: out of memory",
          "lv_draw_sw_img",
          "lv_img_buf",
          "INDEXED",
          "chroma",
          "lv_gif",
          "gifdec",
          "lv_draw_sw_layer.c",
          "lv_draw_sw_line.c"
      };
      out.println("\n### memFind extra strings ###");
      for (String s : extra) {
        List<Address> hits = memFind(s);
        out.println("  STR \"" + s + "\" hits=" + hits.size());
        for (Address h : hits) {
          out.println("    @" + h);
          int nref = 0;
          for (Reference r : rm.getReferencesTo(h)) {
            nref++;
            Function f = fm.getFunctionContaining(r.getFromAddress());
            out.println("      from " + r.getFromAddress()
                + " in " + (f == null ? "<none>" : f.getName() + " @" + f.getEntryPoint()));
            if (f != null) decomp(f, "memFind[" + s + "]");
          }
          if (nref == 0) out.println("      refs=0");
        }
      }

      long[] known = {
          0x2C6127FCL, // built_in_init (registers info/open/read_line/close)
          0x2C612110L, // built_in_info
          0x2C612220L, // built_in_open
          0x2C6121ECL, // built_in_close
          0x2C612468L, // built_in_read_line  (INDEXED_4BIT case 9)
          0x2C611C18L, // img_buf get_px_alpha
          0x2C611D2CL, // img_buf set_px_alpha
          0x2C611E18L, // img_buf set_px_color (INDEXED_4BIT)
          0x2C611F58L, // img_buf transform area
          0x2C611688L, // TRACE/assert near img_buf
          0x2C61169CL, // likely get_px_color hole after assert
          0x2C610E44L, // draw_sw_line-ish neighbour
          0x2C612898L, // decoder open wrapper / dsc src
          0x2C612838L, // decoder info wrapper
          0x2C612A20L, // draw_img core
          0x2C614A3CL, // draw_img caller
          0x2C614F2CL  // cf_get_px_size
      };
      out.println("\n### known LVGL img decoder / buf VAs ###");
      for (long va : known) decomp(va, "known");

      out.println("\n### instruction scan: LVGL header unpack / nibble / tile immediates ###");
      Map<Function, Set<String>> tags = new LinkedHashMap<>();
      int ncu = 0;
      for (Function f : fm.getFunctions(true)) {
        monitor.checkCancelled();
        long off = f.getEntryPoint().getOffset();
        // skip obvious libc/math tails
        if (off < 0x2C010000L || off > 0x2C670000L) continue;
        InstructionIterator ii = listing.getInstructions(f.getBody(), true);
        boolean s1f = false, s15 = false, sa = false, s7ff = false, s1fffff = false;
        boolean s40 = false, s400 = false, s10 = false, s8 = false;
        boolean s16 = false, s15imm = false;
        boolean ubfx_w = false, ubfx_h = false;
        while (ii.hasNext()) {
          Instruction ins = ii.next();
          ncu++;
          String mnem = ins.getMnemonicString().toLowerCase();
          if (mnem.contains("ubfx") || mnem.contains("bfc") || mnem.contains("bfi")) {
            if (hasScalar(ins, 10) || hasScalar(ins, 0xAL)) ubfx_w = true;
            if (hasScalar(ins, 21) || hasScalar(ins, 0x15L)) ubfx_h = true;
          }
          int nops = ins.getNumOperands();
          for (int i = 0; i < nops; i++) {
            for (Object o : ins.getOpObjects(i)) {
              if (!(o instanceof Scalar)) continue;
              long v = ((Scalar) o).getUnsignedValue();
              if (v == 0x1fL) s1f = true;
              if (v == 0x15L) s15 = true;
              if (v == 0x0aL) sa = true;
              if (v == 0x7ffL) s7ff = true;
              if (v == 0x1fffffL) s1fffff = true;
              if (v == 0x40L) s40 = true;
              if (v == 0x400L) s400 = true;
              if (v == 0x10L) s10 = true;
              if (v == 0x8L) s8 = true;
              if (v == 16L) s16 = true;
              if (v == 15L) s15imm = true;
            }
          }
        }
        Set<String> t = new LinkedHashSet<>();
        if (s1fffff) t.add("MASK_1FFFFF");
        if (s1f && s15 && s7ff) t.add("HDR_H");
        if (s1f && sa && s7ff) t.add("HDR_W");
        if (ubfx_w) t.add("UBFX_W");
        if (ubfx_h) t.add("UBFX_H");
        if (s1f && s40 && s400 && s10 && s8) t.add("INDEXED_PALETTE_SIZES");
        if (s16 && s15imm && s1f) t.add("TILE16_AND_CF");
        if (!t.isEmpty()) tags.put(f, t);
      }
      out.println("scanned insns~ " + ncu);
      out.println("tagged funcs=" + tags.size());
      List<Function> tagged = new ArrayList<>(tags.keySet());
      tagged.sort(Comparator.comparingLong(f -> f.getEntryPoint().getOffset()));
      for (Function f : tagged) {
        out.println("  " + f.getEntryPoint() + "  sz=" + f.getBody().getNumAddresses()
            + "  " + tags.get(f) + "  " + f.getName());
      }

      out.println("\n### decompiling tagged candidates (cap) ###");
      int n = 0;
      for (Function f : tagged) {
        Set<String> t = tags.get(f);
        boolean hot = t.contains("INDEXED_PALETTE_SIZES") || t.contains("MASK_1FFFFF")
            || t.contains("TILE16_AND_CF") || t.contains("HDR_W") || t.contains("HDR_H");
        long off = f.getEntryPoint().getOffset();
        boolean inBand = off >= 0x2C610000L && off <= 0x2C616000L;
        if (!hot && !inBand) continue;
        decomp(f, "tagged");
        if (++n >= 24) break;
      }
    } finally {
      out.close();
    }
    println("wrote " + report);
  }
}
