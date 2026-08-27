/* FUN_2c5a3ee4 @ 0x2c5a3ee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a3ee4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  
  piVar3 = *(int **)(param_1 + 0x18);
  iStack_14 = param_2;
  if ((piVar3 == (int *)0x0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5a3f94,0x146,DAT_2c5a3f88,_LAB_2c5a3f98);
  }
  iVar1 = FUN_2c66b624(param_2,_LAB_2c5a3f7c);
  if ((iVar1 != 0) && (iVar1 = FUN_2c66b624(param_2,DAT_2c5a3f80), iVar1 != 0)) {
    if ((*piVar3 == 0) || (iVar1 = FUN_2c66b624(*piVar3,param_2), iVar1 != 0)) {
      *DAT_2c5a3f84 = 1;
    }
    else {
      *DAT_2c5a3f84 = 0;
    }
    FUN_2c5a3e3c(param_1,&iStack_14,piVar3);
    iVar1 = iStack_14;
    uVar2 = FUN_2c66c4ec(iStack_14);
    FUN_2c5a72a8(0x1777,uVar2,iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x135,DAT_2c5a3f94,DAT_2c5a3f90,DAT_2c5a3f8c,DAT_2c5a3f88);
}

