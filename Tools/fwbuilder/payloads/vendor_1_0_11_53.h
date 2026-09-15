/* Vendor functions in Flyme XR 1.0.11.53.20241126_Air_intl_FR, by absolute address.
 *
 * THIS FILE IS THE LINKER. There is no link step: calling through an absolute address
 * makes clang emit movw/movt + blx with nothing to relocate, which is what lets a
 * payload be compiled and dropped straight into the image. See fwcc.py.
 *
 * EVERY ADDRESS HERE IS BUILD-SPECIFIC. The low bit is the Thumb bit and must be kept.
 * Addresses are runtime VAs:
 *     code  VA = file + 0x2C010000        (.text is file 0x4A1270..EOF)
 *     data  VA = file + 0x3BFD7CB0        (PSRAM is file 0x028350..0x4A1270)
 * Both constants differ per build -- see CLAUDE.md. Read them from the boot copy
 * descriptor at file 0x0002C8, never carry them between images.
 */
#ifndef VENDOR_1_0_11_53_H
#define VENDOR_1_0_11_53_H

#include <stdint.h>

/* --- LVGL font callbacks -------------------------------------------------------
 * lv_font_t layout, LVGL 8, and the order is NOT the obvious one:
 *     +0  get_glyph_dsc     (font, dsc_out, letter, letter_next)   opens `cmp r2,#9`
 *     +4  get_glyph_bitmap  (font, letter)                         opens `cmp r1,#9`
 * On get_glyph_dsc, r1 is the OUTPUT STRUCT POINTER. Confusing the two writes glyph
 * metrics to whatever you put in r1. Confirmed by disassembly, not by assumption.
 */
typedef const uint8_t *(*lv_get_glyph_bitmap_t)(const void *font, uint32_t letter);
#define LV_FONT_GET_GLYPH_BITMAP ((lv_get_glyph_bitmap_t)0x2C67B5F1u)  /* file 0x66B5F0 */

typedef int (*lv_get_glyph_dsc_t)(const void *font, void *dsc_out,
                                  uint32_t letter, uint32_t letter_next);
#define LV_FONT_GET_GLYPH_DSC    ((lv_get_glyph_dsc_t)0x2C67B659u)     /* file 0x66B658 */

/* --- where payloads live -------------------------------------------------------
 * XIP .text has ZERO free bytes in 2.19 MB, so code goes in PSRAM. Executability is
 * CONFIRMED ON HARDWARE (FIELD_NOTES 8c).
 */
#define PSRAM_HOLE_VA   0x3C3C4600u   /* file 0x3EC950 */
#define PSRAM_HOLE_SIZE 2270u

#endif
