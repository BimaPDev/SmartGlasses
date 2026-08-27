/* FUN_2c5d0e08 @ 0x2c5d0e08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d0e08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x71) != '\0') || (*(char *)(param_1 + 0x70) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d0ea0,0x244,_LAB_2c5d0e9c,_LAB_2c5d0e98);
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
  iVar6 = iVar6 + -1;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar3 = iVar6;
  if (iVar6 < iVar4) {
    iVar3 = iVar4;
  }
  if (iVar3 <= iVar1) {
    FUN_2c5d0d64(param_1);
    iVar3 = *(int *)(param_1 + 0x2c) + -1;
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 < 0) {
      iVar3 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 0x2c) = iVar3 + -1;
    }
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8));
    FUN_2c605208(uVar2,1);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
    uVar2 = FUN_2c6041dc(uVar2,0);
    FUN_2c606b6c(uVar2,0x10);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
    uVar2 = FUN_2c6041dc(uVar2,1);
    FUN_2c606b6c(uVar2,0x10);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c) * 4) + 8);
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8));
    uVar2 = FUN_2c6041dc(uVar2,0);
    FUN_2c5eb89c(uVar5,uVar2,0,DAT_2c5d0e04,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5d0ea0,0x28f,_LAB_2c5d0ea8,_LAB_2c5d0ea4,iVar1,iVar4,iVar6);
}

