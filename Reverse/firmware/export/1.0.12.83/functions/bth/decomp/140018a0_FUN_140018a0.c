/* FUN_140018a0 @ 0x140018a0 */

void FUN_140018a0(undefined4 param_1,uint param_2)

{
  *(uint *)(DAT_140018b4 + 0x20) =
       (param_2 & 0xff) << 0x10 | *(uint *)(DAT_140018b4 + 0x20) & 0xff00ffff;
  return;
}

