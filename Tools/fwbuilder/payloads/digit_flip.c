/* Render every decimal digit as 9 minus itself. 07:24 becomes 92:75.
 *
 * This is the toolchain's proving payload, and it is deliberately NOT the same thing
 * the hand-assembled stub did. That stub was a tail call: it forced one constant and
 * jumped. It proved PSRAM executes, but it would have compiled to the same four
 * instructions whether or not a compiler was involved.
 *
 * This one needs a range test, arithmetic on the argument, and two call paths. If it
 * renders, then conditionals, ALU work and a call back into vendor .text all work from
 * PSRAM -- and the result is unmistakable at a glance, and different from both stock
 * and the all-8s build, so it cannot be confused with either.
 *
 * `stub` must be the FIRST function in the file: the blob is placed at the hole and
 * entered at offset 0.
 */
#include "vendor_1_0_11_53.h"

const uint8_t *stub(const void *font, uint32_t letter)
{
    if (letter >= '0' && letter <= '9')
        letter = (uint32_t)('9' - (letter - '0'));
    return LV_FONT_GET_GLYPH_BITMAP(font, letter);
}
