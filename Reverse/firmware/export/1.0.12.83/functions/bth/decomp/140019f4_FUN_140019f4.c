/* FUN_140019f4 @ 0x140019f4 */

void FUN_140019f4(undefined4 param_1,uint param_2)

{
  *(uint *)(DAT_14001a0c + 0xb0) = *(uint *)(DAT_14001a0c + 0xb0) & ~(2 << (param_2 & 0xff));
  return;
}

