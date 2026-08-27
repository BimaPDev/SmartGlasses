/* FUN_2c5cc56c @ 0x2c5cc56c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cc56c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *_LAB_2c5cc6f0;
  iVar1 = FUN_2c48e86c(param_2,param_2,param_3,0);
  if (iVar1 != 0) {
    iVar1 = FUN_2c48e42c(param_2,_LAB_2c5cc6f4);
    iVar2 = FUN_2c48e84c();
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
      uVar3 = FUN_2c48e42c(param_2,_LAB_2c5cc6f8);
      iVar1 = FUN_2c66b624(*(undefined4 *)(iVar1 + 0x10),_LAB_2c5cc6fc);
      if ((iVar1 == 0) && (iVar1 = FUN_2c48e86c(uVar3), iVar1 != 0)) {
        uVar3 = FUN_2c48e42c(uVar3,_LAB_2c5cc700);
        iVar1 = FUN_2c48e85c();
        if (iVar1 != 0) {
          uVar3 = FUN_2c48e3f0(uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,_LAB_2c5cc70c,0x6cd,_LAB_2c5cc708,_LAB_2c5cc704,uVar3);
        }
      }
    }
  }
  if (*_LAB_2c5cc6f0 == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

