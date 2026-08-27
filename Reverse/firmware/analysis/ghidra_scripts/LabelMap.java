import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;

/** Name recovered HUD/LVGL/TRACE landmarks so Ghidra is a map, not FUN_*. */
public class LabelMap extends GhidraScript {
  int named = 0, funcs = 0, books = 0;

  void mark(long va, String name, String why) {
    Address a = toAddr(va);
    try {
      createLabel(a, name, true);
      named++;
    } catch (Exception e) {
      println("  label fail " + name + " @0x" + Long.toHexString(va) + " " + e.getMessage());
    }
    FunctionManager fm = currentProgram.getFunctionManager();
    Function f = fm.getFunctionAt(a);
    if (f == null && fm.getFunctionContaining(a) == null) {
      try {
        disassemble(a);
        createFunction(a, name);
        funcs++;
      } catch (Exception e) {
      }
    } else if (f != null) {
      try {
        f.setName(name, SourceType.USER_DEFINED);
      } catch (Exception e) {
      }
    }
    try {
      createBookmark(a, "StarAir-map", name + " — " + why);
      books++;
    } catch (Exception e) {
    }
  }

  public void run() throws Exception {
    // LVGL style
    mark(0x2C62B030L, "lv_obj_set_local_style_prop", "generic style setter (obj, prop, value)");
    mark(0x2C62C7E8L, "lv_obj_set_style_radius", "prop 0xb; dock circles pass value 12, not 0x7FFF");
    mark(0x2C62C6A0L, "lv_obj_set_style_width", "prop 1");
    mark(0x2C62C6B0L, "lv_obj_set_style_height", "prop 4");
    mark(0x2C62C6D0L, "lv_obj_set_style_pad_top", "prop 0x10");
    mark(0x2C62C6D8L, "lv_obj_set_style_pad_bottom", "prop 0x11");
    mark(0x2C62C6E0L, "lv_obj_set_style_pad_left", "prop 0x12");
    mark(0x2C62C6E8L, "lv_obj_set_style_pad_right", "prop 0x13");
    mark(0x2C62C700L, "lv_obj_set_style_bg_color", "prop 0x20");
    mark(0x2C62C708L, "lv_obj_set_style_bg_opa", "prop 0x21");
    mark(0x2C62C720L, "lv_obj_set_style_prop_0x30", "used next to radius in theme");
    mark(0x2C62C728L, "lv_obj_set_style_prop_0x31", "theme; value 0x4c / 0xff");
    mark(0x2C62C730L, "lv_obj_set_style_prop_0x32", "clip-corner-ish; theme sets 1");
    mark(0x2C62ADFCL, "lv_style_init_or_reset", "called before theme radius=12");
    mark(0x2C606A28L, "lv_obj_add_flag_invalidate", "OR [obj+0x1c]; invalidate helper");
    mark(0x2C62BE88L, "lv_mem_alloc", "theme ctor allocator");

    // Launcher theme = dock circle source
    mark(0x2C5046BAL, "launcher_theme_init", "builds style objects; calls three radius=12 ctors");
    mark(0x2C5056B4L, "theme_style_radius12_a", "movs r1,#12; bl radius; file 0x505768");
    mark(0x2C509B0CL, "theme_style_radius12_b", "movs r1,#12; bl radius; file 0x509b9e");
    mark(0x2C50C808L, "theme_style_radius12_c", "movs r1,#12; bl radius; file 0x50c85c");
    mark(0x2C505768L, "PATCH_radius12_a", "bytes 0C 21 — change to 00 21 for square");
    mark(0x2C509B9EL, "PATCH_radius12_b", "bytes 0C 21");
    mark(0x2C50C85CL, "PATCH_radius12_c", "bytes 0C 21");

    // StandByWidget TRACE (intern ids; no string xrefs)
    mark(0x2C4A72E4L, "StandByWidget_createNormal_dispatch", "TRACE fail title-empty nearby");
    mark(0x2C4A732AL, "TRACE_createNormalWidget_title_empty", "movw r1,#0x7bc; bl TRACE");
    mark(0x2C4A714CL, "TRACE_weather_1x2", "movw r1,#0x774 weather_1x2");
    mark(0x2C673D88L, "TRACE", "launcher log intern (level, id, …)");
    mark(0x2C674828L, "stack_chk_fail", "canary mismatch");

    // Registry / OTA band
    mark(0x2C5E33F0L, "registry_lookup", "keyed {key,value} table search");
    mark(0x2C5E32BCL, "registry_pick_table", "picks 0x3C43EE84 / 0x3C43FD64");
    mark(0x2C5AA01CL, "OtaMsgModel_event_TRACE_set_sn", "NOT fac_cmd set_sn");

    println("labels=" + named + " newFuncs=" + funcs + " bookmarks=" + books
        + " totalFuncs=" + currentProgram.getFunctionManager().getFunctionCount());
  }
}
