/* FUN_2c5c53a0 @ 0x2c5c53a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c53a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *FUN_2c5c5586;
  iVar1 = FUN_2c66b624(param_2,uRam2c5c558c,param_3,0);
  if (((iVar1 != 0) && (iVar1 = FUN_2c66b624(param_2,uRam2c5c5590), iVar1 != 0)) &&
     (iVar1 = FUN_2c66b624(param_2,uRam2c5c5594), iVar1 != 0)) {
    FUN_2c5c685c();
    iVar1 = FUN_2c5c6cbc();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,uRam2c5c55a8,0x12a,uRam2c5c55a4,uRam2c5c55ac);
    }
    iVar1 = FUN_2c66b624(param_2,uRam2c5c5598);
    if ((iVar1 != 0) && (iVar1 = FUN_2c66b624(param_2,uRam2c5c559c), iVar1 != 0)) {
      FUN_2c5c685c();
      iVar1 = FUN_2c5c6a9c();
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x134,uRam2c5c55a4,uRam2c5c55b0);
      }
      FUN_2c5c685c();
      iVar1 = func_0x2c5c6a48();
      if (iVar1 == 0) {
        FUN_2c5c685c();
        iVar1 = func_0x2c5c6e68();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,uRam2c5c55a8,0x13d,uRam2c5c55a4,uRam2c5c55a0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x144,uRam2c5c55a4,uRam2c5c55c4);
      }
      FUN_2c5c685c();
      iVar1 = FUN_2c5c7174();
      if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x14d,uRam2c5c55a4,uRam2c5c55d0);
      }
      iVar1 = FUN_2c4969b8();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x16f,uRam2c5c55a4,uRam2c5c55d4);
      }
      iVar1 = FUN_2c66b624(param_2,uRam2c5c55b4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x182,uRam2c5c55cc,uRam2c5c55c8);
      }
      iVar1 = FUN_2c66b624(param_2,uRam2c5c55b8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,uRam2c5c55a8,0x187,uRam2c5c55c0,uRam2c5c55bc);
      }
    }
  }
  if (*FUN_2c5c5586 == iVar2) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

