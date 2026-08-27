// Overlay the BTH image at the BEST1600 NC flash alias 0x30000000.
// @category StarAir

import java.io.ByteArrayInputStream;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.mem.MemoryConflictException;

public class AddBesNcOverlay extends GhidraScript {

	private static final long NC_BASE = 0x30000000L;

	@Override
	public void run() throws Exception {
		Memory mem = currentProgram.getMemory();
		Address nc = toAddr(NC_BASE);
		MemoryBlock existing = mem.getBlock(nc);
		if (existing != null) {
			println("[AddBesNcOverlay] 0x30000000 already mapped as " + existing.getName());
			return;
		}
		MemoryBlock src = null;
		for (MemoryBlock block : mem.getBlocks()) {
			if (block.isInitialized() && !block.isOverlay() && block.getSize() > 0x1000) {
				src = block;
				break;
			}
		}
		if (src == null || !src.isInitialized()) {
			println("[AddBesNcOverlay] no initialized source block at image base");
			return;
		}
		int size = (int) src.getSize();
		byte[] buf = new byte[size];
		src.getBytes(src.getStart(), buf);
		try {
			mem.createInitializedBlock("FLASH_NC", nc, new ByteArrayInputStream(buf), size, monitor,
				true);
			println("[AddBesNcOverlay] overlay FLASH_NC @ 0x30000000 size 0x" +
				Integer.toHexString(size));
		}
		catch (MemoryConflictException e) {
			println("[AddBesNcOverlay] conflict: " + e.getMessage());
		}
	}
}
