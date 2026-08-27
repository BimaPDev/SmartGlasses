/* FUN_1400166c @ 0x1400166c */

void FUN_1400166c(undefined4 param_1,int param_2)

{
  *(uint *)(DAT_14001684 + 4) =
       DAT_14001688 & param_2 << 0xc | *(uint *)(DAT_14001684 + 4) & 0xfe000fff;
  return;
}

