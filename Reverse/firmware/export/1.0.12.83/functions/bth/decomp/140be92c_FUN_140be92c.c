/* FUN_140be92c @ 0x140be92c */

uint FUN_140be92c(void)

{
  uint uVar1;
  int local_18;
  uint local_14;
  int local_c;
  
  local_c = *DAT_140be97c;
  FUN_140e53d8(&local_18,0x400,0xffffffff,0);
  if (local_18 == 8) {
    uVar1 = (local_14 & 0x7ff) >> 10;
    FUN_140e5098(*DAT_140be980,0xffff);
  }
  else {
    uVar1 = 0;
  }
  if (*DAT_140be97c == local_c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

