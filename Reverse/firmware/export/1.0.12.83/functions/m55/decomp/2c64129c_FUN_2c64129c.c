/* FUN_2c64129c @ 0x2c64129c */

void FUN_2c64129c(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  
  pcVar1 = DAT_2c641320;
  if (*DAT_2c641320 == '\x01') {
    iVar3 = FUN_2c536358();
    if (iVar3 != 7) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c64132c,0x39,DAT_2c641328,DAT_2c641324);
    }
    iVar3 = FUN_2c52498c();
    if (iVar3 == 0) {
      bVar2 = thunk_FUN_2c489a64();
      FUN_2c63b92c(bVar2 ^ 1);
    }
    else {
      FUN_2c5249e0();
    }
  }
  else if (*DAT_2c641320 == '\x02') {
    iVar3 = thunk_FUN_2c489a64();
    if (iVar3 != 0) {
      iVar3 = thunk_FUN_2c640a50();
      if (iVar3 == 0) {
        FUN_2c63faf0();
      }
      else {
        iVar3 = FUN_2c640208();
        if (iVar3 != 0) {
          FUN_2c63f6e8(0,1);
        }
      }
    }
    FUN_2c63b8cc(2);
  }
  *pcVar1 = '\0';
  return;
}

