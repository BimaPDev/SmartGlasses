/* FUN_1402e1c8 @ 0x1402e1c8 */

void FUN_1402e1c8(uint param_1)

{
  *(uint *)(DAT_1402e1e8 + 0x168) =
       *(uint *)(DAT_1402e1e8 + 0x168) & ~(param_1 & 0x7ff | (param_1 & 0x7ff) << 0xb) | 0xca000000;
  return;
}

