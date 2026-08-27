/* FUN_2c46f11c @ 0x2c46f11c */

void FUN_2c46f11c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(iVar1 + 8))();
    uVar2 = DAT_2c46f14c;
    if (iVar1 != 1) {
      uVar2 = DAT_2c46f150;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1da,DAT_2c46f15c,DAT_2c46f158,DAT_2c46f154,uVar2);
  }
  return;
}

