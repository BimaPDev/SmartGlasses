# Bookmark BTH factory/MMI entry strings and stub a call-graph.
# GUI: Script Manager → StarAir. Headless: import_bth.sh (uses the Java twin).
# @category StarAir
# @runtime PyGhidra

import os

from ghidra.program.model.symbol import SourceType
from ghidra.program.model.listing import CodeUnit
from java.util import ArrayDeque

STRINGS = [
    "hal_key_boot_handler",
    "app_factorymode_enter",
    "app_factorymode_key_init",
    "app_factorymode_test_key_init",
    "app_poweron_key_init",
    "app_factorymode_init mode:%x",
    "To enter test mode!!!",
    "PWR KEY DITHER!",
    "power on case:%d",
    "!!!!!ENGINEER_MODE!!!!!",
    "BT_DUT_MODE",
    "HAL_KEY_EVENT_LONGPRESS_500_MS",
    "HAL_KEY_EVENT_LONGPRESS_3000_MS",
    "HAL_KEY_EVENT_LONGPRESS_5000_MS",
    "BTH_TO_M55_FACTORY_TEST_MODE",
    "enter MMI mode!",
]

IMMS = (500, 3000, 5000)
SEED_NAMES = (
    "app_poweron_key_init",
    "app_factorymode_enter",
    "app_factorymode_key_init",
    "app_factorymode_init",
    "hal_key_boot_handler",
    "app_init",
    "app_watch_init",
)


def _ascii_at(addr, maxlen=80):
    mem = currentProgram.getMemory()
    out = []
    try:
        for i in range(maxlen):
            b = mem.getByte(addr.add(i)) & 0xFF
            if b == 0:
                break
            if b < 32 or b > 126:
                return None
            out.append(chr(b))
    except Exception:
        return None
    if len(out) < 4:
        return None
    return "".join(out)


def find_string(needle):
    # GhidraScript.findBytes — first hit in address order (XIP then NC overlay).
    start = currentProgram.getMinAddress()
    try:
        return findBytes(start, needle + "\x00")
    except Exception:
        return None


def bookmark(addr, cat, comment):
    bm = currentProgram.getBookmarkManager()
    bm.setBookmark(addr, "Analysis", cat, comment)
    createBookmark(addr, cat, comment)


def xrefs_to(addr):
    out = []
    for r in getReferencesTo(addr):
        out.append(r.getFromAddress())
    return out


def func_containing(addr):
    return getFunctionContaining(addr)


def callers(fn, depth=4, limit=80):
    """BFS of functions that call fn, then their callers, up to depth."""
    if fn is None:
        return []
    seen = set()
    q = ArrayDeque()
    q.add((fn, 0))
    rows = []
    while not q.isEmpty() and len(rows) < limit:
        cur, d = q.remove()
        ea = cur.getEntryPoint()
        key = ea.getOffset()
        if key in seen:
            continue
        seen.add(key)
        rows.append((d, cur.getName(), ea))
        if d >= depth:
            continue
        for r in getReferencesTo(ea):
            if monitor.isCancelled():
                return rows
            src = r.getFromAddress()
            parent = getFunctionContaining(src)
            if parent is not None:
                q.add((parent, d + 1))
    return rows


def scan_immediates():
    listing = currentProgram.getListing()
    hits = []
    ins = listing.getInstructions(True)
    while ins.hasNext() and not monitor.isCancelled():
        i = ins.next()
        for n in range(i.getNumOperands()):
            objs = i.getOpObjects(n)
            for obj in objs:
                try:
                    val = int(obj.getValue())
                except Exception:
                    continue
                if val in IMMS:
                    fn = getFunctionContaining(i.getAddress())
                    name = fn.getName() if fn is not None else "?"
                    hits.append((i.getAddress(), name, i.toString(), val))
    return hits


def write_report(path, found, xref_map, imm_hits, graphs):
    lines = []
    lines.append("# BTH factory key-hold — Ghidra scan")
    lines.append("")
    lines.append("- program: `%s`" % currentProgram.getName())
    lines.append("- image base: `0x%x`" % currentProgram.getImageBase().getOffset())
    lines.append("")
    lines.append("## Strings")
    lines.append("")
    lines.append("| string | VA | xrefs | in function |")
    lines.append("|---|---|---|---|")
    for name, addr in found:
        if addr is None:
            lines.append("| `%s` | — | 0 | — |" % name)
            continue
        xs = xref_map.get(name, [])
        fn = func_containing(addr)
        fns = fn.getName() if fn is not None else "—"
        xref_s = ", ".join("`0x%x`" % a.getOffset() for a in xs[:8]) or "—"
        lines.append("| `%s` | `0x%x` | %d | %s |" % (name, addr.getOffset(), len(xs), fns))
        if xs:
            lines.append("|  | xrefs: %s |  |  |" % xref_s)
    lines.append("")
    lines.append("Empty xrefs on `hal_key_boot_handler` are expected (BES trace-hash).")
    lines.append("")
    lines.append("## Immediates 500 / 3000 / 5000 in disassembled code")
    lines.append("")
    if not imm_hits:
        lines.append("None in the instruction listing (run auto-analysis, or the values")
        lines.append("are encoded in a way this scan missed).")
    else:
        lines.append("| VA | function | insn | imm |")
        lines.append("|---|---|---|---|")
        for addr, fname, text, val in imm_hits[:80]:
            lines.append("| `0x%x` | `%s` | `%s` | %d |" % (addr.getOffset(), fname, text, val))
    lines.append("")
    lines.append("## Call-graph stub (callees ← callers)")
    lines.append("")
    for seed, rows in graphs:
        lines.append("### seed `%s`" % seed)
        if not rows:
            lines.append("Function not created yet — analyze, then re-run this script.")
        else:
            for d, name, ea in rows:
                lines.append("- %s`%s` @ `0x%x`" % ("  " * d, name, ea.getOffset()))
        lines.append("")
    lines.append("## Next (manual)")
    lines.append("")
    lines.append("1. `app_init` / `power on case:%d` → branch into `app_factorymode_enter`.")
    lines.append("2. That branch's key event is one of LONGPRESS_500/3000/5000_MS.")
    lines.append("3. Confirm mailbox `BTH_TO_M55_FACTORY_TEST_MODE` (M55: `enter MMI mode!`).")
    text = "\n".join(lines) + "\n"
    parent = os.path.dirname(path)
    if parent and not os.path.isdir(parent):
        os.makedirs(parent)
    f = open(path, "w")
    try:
        f.write(text)
    finally:
        f.close()
    println("[FactoryKeyEntry] wrote %s" % path)


def run():
    args = getScriptArgs()
    out = args[0] if args and len(args) > 0 else None
    if not out:
        # default next to the project
        out = currentProgram.getExecutablePath()
        out = os.path.join(os.path.dirname(str(out)), "..", "analysis", "bth_factory_key_entry.md")
        out = os.path.normpath(out)

    found = []
    xref_map = {}
    for s in STRINGS:
        if monitor.isCancelled():
            break
        addr = find_string(s)
        found.append((s, addr))
        if addr is None:
            println("[FactoryKeyEntry] missing %s" % s)
            continue
        bookmark(addr, "factory-key", s)
        xs = xrefs_to(addr)
        xref_map[s] = xs
        println("[FactoryKeyEntry] %s @ %s xrefs=%d" % (s, addr, len(xs)))

    # Create functions at xrefs that look like code, if analysis left holes
    for s, addr in found:
        if addr is None:
            continue
        for src in xref_map.get(s, []):
            if getFunctionContaining(src) is None:
                createFunction(src, None)

    graphs = []
    for seed in SEED_NAMES:
        fn = None
        listed = getGlobalFunctions(seed)
        if listed and len(listed) > 0:
            fn = listed[0]
        if fn is None:
            syms = getSymbols(seed, None)
            if syms and len(syms) > 0:
                fn = getFunctionAt(syms[0].getAddress())
        graphs.append((seed, callers(fn) if fn is not None else []))

    println("[FactoryKeyEntry] scanning immediates 500/3000/5000 ...")
    imm_hits = scan_immediates()
    println("[FactoryKeyEntry] immediate hits: %d" % len(imm_hits))
    write_report(out, found, xref_map, imm_hits, graphs)


run()
