/* FUN_2c63b92c @ 0x2c63b92c */

void FUN_2c63b92c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_2c489a64();
    if (iVar1 != 0) {
      if (*DAT_2c63b9d0 != '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1fd,DAT_2c63b9e0,DAT_2c63b9dc,DAT_2c63b9d8);
      }
      FUN_2c4899f4();
      FUN_2c5dc53c(0x13,10,0,0,DAT_2c63b9d4,0);
      FUN_2c5dc5e0();
      FUN_2c490020(5,0);
      iVar1 = FUN_2c63c57c();
      if ((iVar1 == 1) && (iVar1 = FUN_2c5e1150(), iVar1 == 0)) {
        FUN_2c49666c(1);
        return;
      }
    }
  }
  else {
    FUN_2c63b0a8();
    iVar1 = FUN_2c489a64();
    if (iVar1 == 0) {
      FUN_2c489968();
      FUN_2c5dc53c(0x13,10,0,0,DAT_2c63b9d4,0);
      FUN_2c5dc5e0();
      FUN_2c490020(4,0);
      return;
    }
  }
  return;
}

