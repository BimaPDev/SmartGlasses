/* FUN_14037c58 @ 0x14037c58 */

uint FUN_14037c58(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xfffffffe) - (param_1 + 4U & 0xfffffffe);
  return ~(~(((uVar1 & 0x3fffff) >> 0xc | (uVar1 >> 0x1f) << 10) << 0x14) >> 0x14) & 0xffff |
         ((((uVar1 ^ 0x400000) & 0x7fffff) >> 0x16 ^ (uint)((int)uVar1 < 0)) << 0xb |
          ((uint)((int)uVar1 < 0) ^ ((uVar1 ^ 0x800000) & 0xffffff) >> 0x17) << 0xd |
          (uVar1 & 0xfff) >> 1 | 0x9000) << 0x10;
}

