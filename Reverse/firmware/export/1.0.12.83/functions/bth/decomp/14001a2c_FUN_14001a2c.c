/* FUN_14001a2c @ 0x14001a2c */

void FUN_14001a2c(undefined4 param_1,int param_2)

{
  do {
  } while (*(int *)(DAT_14001a48 + 0xc) << 0x1f < 0);
  if (param_2 != 0) {
    *(uint *)(DAT_14001a48 + 0x40) = *(uint *)(DAT_14001a48 + 0x40) | 0xc;
    return;
  }
  *(uint *)(DAT_14001a48 + 0x40) = *(uint *)(DAT_14001a48 + 0x40) & 0xfffffff3;
  return;
}

