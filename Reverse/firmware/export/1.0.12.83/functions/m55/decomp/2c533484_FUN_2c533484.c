/* FUN_2c533484 @ 0x2c533484 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c533484(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  iVar1 = FUN_2c532a4c();
  if (iVar1 == 0) {
    iVar1 = FUN_2c5e8cf4(3,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c53354c,0x92,_LAB_2c533548,_LAB_2c533544,3);
    }
    FUN_2c5332dc(param_1,uVar2);
    iVar1 = FUN_2c5e8cf4(3,0);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0xc)) {
      FUN_2c532414(param_1,0);
    }
    iVar1 = FUN_2c5e8cf4(3,0);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c532bdc,0xc6,_LAB_2c532bd8,_LAB_2c532bd4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c53354c,0x92,_LAB_2c533548,_LAB_2c533544,3);
}

