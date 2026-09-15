/* Render every decimal digit as 9 minus itself -- BOTH halves of the font interface.
 *
 * The first version of this payload detoured only get_glyph_bitmap, and on hardware the
 * digits came out garbled rather than flipped. The payload ran correctly; the FONT
 * INTERFACE was left inconsistent:
 *
 *   get_glyph_bitmap  returned the FLIPPED glyph's pixels
 *   get_glyph_dsc     still returned the ORIGINAL glyph's box_w / box_h / advance
 *
 * LVGL decodes a glyph bitmap as a continuous bitstream with no row padding, so the
 * dimensions are what slice it into rows. Feed it the right pixels with the wrong width
 * and every row after the first is offset -- which is precisely what the panel showed.
 * Measured: box_w across these faces takes values 1,2,3,4,5,7,9,10, so most digit pairs
 * disagree and only the accidentally-matching ones rendered cleanly.
 *
 * So both callbacks must be remapped with the SAME function. Note the argument position
 * differs between them -- letter is arg 2 in one and arg 3 in the other.
 */
#include "vendor_1_0_11_53.h"

__attribute__((always_inline))
static inline uint32_t flip(uint32_t letter)
{
    if (letter >= '0' && letter <= '9')
        return (uint32_t)('9' - (letter - '0'));
    return letter;
}

/* lv_font_t +4 */
const uint8_t *bitmap_stub(const void *font, uint32_t letter)
{
    return LV_FONT_GET_GLYPH_BITMAP(font, flip(letter));
}

/* lv_font_t +0. r1 is the OUTPUT struct pointer and is passed through untouched;
 * only the two letters are remapped. letter_next drives kerning, so remapping it too
 * keeps the spacing consistent with the glyphs actually drawn. */
int dsc_stub(const void *font, void *dsc_out, uint32_t letter, uint32_t letter_next)
{
    return LV_FONT_GET_GLYPH_DSC(font, dsc_out, flip(letter), flip(letter_next));
}
