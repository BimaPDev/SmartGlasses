/* FUN_1400181c @ 0x1400181c */

void FUN_1400181c(undefined4 param_1,int param_2)

{
  do {
  } while (*(int *)(DAT_14001838 + 0xc) << 0x1f < 0);
  if (param_2 != 0) {
    *(uint *)(DAT_14001838 + 0x14) = *(uint *)(DAT_14001838 + 0x14) | 0x20;
    return;
  }
  *(uint *)(DAT_14001838 + 0x14) = *(uint *)(DAT_14001838 + 0x14) & 0xffffffdf;
  return;
}

