/* FUN_100777ec @ 0x100777ec */

uint FUN_100777ec(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    if ((int)(*DAT_1007784c << 0x18) < 0) {
      uVar1 = *DAT_1007784c & 0x3f;
      if ((*DAT_1007784c & 0x38) != 0) {
        uVar1 = uVar1 - 8;
      }
    }
    else {
      FUN_100a5b78(DAT_10077858 | (DAT_10077854 - DAT_10077850) * 0x20 & 0xff00U,DAT_10077860,
                   DAT_1007785c);
      uVar1 = 0xffffffff;
    }
  }
  else {
    FUN_100a5b78((DAT_10077854 - DAT_10077850) * 0x20 & 0xff00U | 0x14e0011,DAT_10077860,
                 DAT_10077864,param_1);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}

