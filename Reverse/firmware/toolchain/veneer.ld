/* ============================ DO NOT USE AS-IS ============================
 * Verified 2026-09-06: this cave is INSIDE the HiFi4 DSP image (0x04E9B4-0x13351C
 * in 12.83, -0x143F14 in 11.53). Splicing ARM code here corrupts the Xtensa DSP
 * payload. The ORIGIN below is also wrong: 0x12F2E4 is PSRAM-copied data, whose
 * runtime address is file_off + 0x3BFD7C0C = 0x3C106EF0, not 0x2C12F2E4.
 * And on 1.0.11.53 the cave does not exist at all (0 zero bytes there).
 * See TOOLCHAIN.md. Fix the target before using this file.
 * ========================================================================= */

/* veneer.ld — place compiled code into the firmware's zero cave.
 *
 * Cave: file 0x12F2E4 / VA 0x2C12F2E4, measured 0x1750 bytes (5968) of zeros,
 * region 0x12F2E4-0x130A34.  Verified by byte-read of platform_tester.bin 1.0.12.83.
 *
 * Usage:
 *   arm-none-eabi-gcc ... -T firmware.ld -T veneer.ld -nostdlib -o veneer.elf
 *   arm-none-eabi-objcopy -O binary veneer.elf veneer.bin
 * Then splice veneer.bin into the image at file offset 0x12F2E4 and retarget a BL.
 *
 * The LENGTH is a hard cap on purpose: overflowing the cave silently corrupts
 * whatever follows it, which is exactly the class of mistake that bricks a unit.
 */

MEMORY
{
  CAVE (rx) : ORIGIN = 0x2C12F2E4, LENGTH = 0x1750
}

SECTIONS
{
  .veneer :
  {
    KEEP(*(.veneer.entry))     /* put your hook entry point in this section */
    *(.text .text.*)
    *(.rodata .rodata.*)
    . = ALIGN(4);
  } > CAVE

  /* No .data/.bss: the cave is execute-in-place flash. Writable state must live
     in an existing firmware buffer you have proven is unused. */
  /DISCARD/ : { *(.ARM.exidx*) *(.comment) *(.note*) }

  cave_used = . - 0x2C12F2E4;
  ASSERT(cave_used <= 0x1750, "ERROR: veneer overflows the 0x1750-byte cave");
}
