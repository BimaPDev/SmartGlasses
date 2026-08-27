/* FUN_1400183c @ 0x1400183c */

void FUN_1400183c(undefined4 param_1,int param_2)

{
  do {
  } while (*(int *)(DAT_14001858 + 0xc) << 0x1f < 0);
  if (param_2 != 0) {
    *(uint *)(DAT_14001858 + 0x14) = *(uint *)(DAT_14001858 + 0x14) | 0x10;
    return;
  }
  *(uint *)(DAT_14001858 + 0x14) = *(uint *)(DAT_14001858 + 0x14) & 0xffffffef;
  return;
}

