/* FUN_2c5d0eac @ 0x2c5d0eac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d0eac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x71) != '\0') || (*(char *)(param_1 + 0x70) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d0f48,0x256,_DAT_2c5d0f44,_DAT_2c5d0f40);
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar1 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
  iVar6 = iVar6 + 1;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = iVar6;
  if (iVar6 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar2 <= iVar1) {
    FUN_2c5d0d64(param_1);
    iVar1 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar1;
    iVar2 = FUN_2c6041fc(*(undefined4 *)(param_1 + 8));
    if (iVar2 + -1 < iVar1) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
    }
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),uVar3);
    FUN_2c605208(uVar3,1);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
    uVar3 = FUN_2c6041dc(uVar3,0);
    FUN_2c606b6c(uVar3,0x10);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
    uVar3 = FUN_2c6041dc(uVar3,1);
    FUN_2c606b6c(uVar3,0x10);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x2c) * 4) + 8);
    uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_2c6041dc(uVar3,0);
    FUN_2c5eb89c(uVar5,uVar3,0,DAT_2c5d0e04,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5d0f48,0x28f,_LAB_2c5d0f50,_LAB_2c5d0f4c,iVar1,iVar4,iVar6);
}

