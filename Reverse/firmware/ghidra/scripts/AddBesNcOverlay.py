# Overlay the BTH image at the BEST1600 NC flash alias 0x30000000.
# GUI: Script Manager → StarAir. Headless: import_bth.sh (uses the Java twin).
# @category StarAir
# @runtime PyGhidra

from ghidra.program.model.mem import MemoryConflictException

NC_BASE = 0x30000000


def add_overlay():
    mem = currentProgram.getMemory()
    nc = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(NC_BASE)
    if mem.getBlock(nc) is not None:
        println("[AddBesNcOverlay] 0x30000000 already mapped")
        return
    fbs = mem.getAllFileBytes()
    if fbs is None or len(fbs) == 0:
        println("[AddBesNcOverlay] no FileBytes; skip overlay")
        return
    fb = fbs[0]
    size = fb.getSize()
    try:
        mem.createInitializedBlock("FLASH_NC", nc, fb, 0, size, True)
        println("[AddBesNcOverlay] overlay FLASH_NC @ 0x30000000 size 0x%x" % size)
    except Exception:
        println("[AddBesNcOverlay] overlay failed (already mapped or API mismatch)")


add_overlay()
