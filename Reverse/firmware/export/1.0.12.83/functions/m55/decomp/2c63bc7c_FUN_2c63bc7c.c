/* FUN_2c63bc7c @ 0x2c63bc7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63bc7c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if (((param_1 != 0) && (param_3 != 0)) &&
     (iVar2 = FUN_2c489a64(), uVar1 = _LAB_2c63bccc, iVar2 == 0)) {
    *_LAB_2c63bcd0 = 1;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x25b,_LAB_2c63bcd8,_LAB_2c63bcd4,uVar1,param_2);
  }
  if (param_2 != 10) {
    FUN_2c63b92c();
    return;
  }
  if (param_1 == 0) {
    iVar2 = FUN_2c489a64();
    if (iVar2 != 0) {
      if (*DAT_2c63bb80 != '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x218,DAT_2c63bb90,DAT_2c63bb8c,DAT_2c63bb88);
      }
      FUN_2c4899f4();
      FUN_2c5dc53c(0x13,10,0,0,DAT_2c63bb84,0,unaff_r4,unaff_lr);
      FUN_2c5dc5e0();
      iVar2 = FUN_2c63c57c();
      if ((iVar2 == 1) && (iVar2 = FUN_2c5e1150(), iVar2 == 0)) {
        FUN_2c49666c(1);
        return;
      }
    }
  }
  else {
    FUN_2c63b0a8();
    iVar2 = FUN_2c489a64();
    if (iVar2 == 0) {
      FUN_2c489968();
      FUN_2c5dc53c(0x13,10,0,0,DAT_2c63bb84,0);
      FUN_2c5dc5e0();
      return;
    }
  }
  return;
}

