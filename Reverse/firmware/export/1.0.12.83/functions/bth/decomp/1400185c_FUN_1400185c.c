/* FUN_1400185c @ 0x1400185c */

void FUN_1400185c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_14001874 + 0x14) = *(uint *)(DAT_14001874 + 0x14) | 8;
    return;
  }
  *(uint *)(DAT_14001874 + 0x14) = *(uint *)(DAT_14001874 + 0x14) & 0xfffffff7;
  return;
}

