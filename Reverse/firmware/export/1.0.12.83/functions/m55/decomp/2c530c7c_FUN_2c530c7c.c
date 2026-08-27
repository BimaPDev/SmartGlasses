/* FUN_2c530c7c @ 0x2c530c7c */

undefined4 FUN_2c530c7c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      iVar3 = *(int *)(param_2 + 8);
    }
    else {
      if (*(int *)(param_2 + 8) == 0) goto LAB_2c530c9a;
      iVar3 = FUN_2c66b624(*(int *)(iVar3 + 8) + 5,*(int *)(param_2 + 8) + 5,param_3,iVar3,param_4);
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
LAB_2c530c9a:
  if (param_1[2] != 0) {
    iVar3 = *(int *)(param_1[2] + 8);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 8);
    }
    else {
      if (*(int *)(param_2 + 8) == 0) goto LAB_2c530cbc;
      iVar3 = FUN_2c66b624(iVar3 + 5,*(int *)(param_2 + 8) + 5);
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
LAB_2c530cbc:
  iVar3 = param_1[7];
  if (iVar3 == param_1[6]) {
    return 0;
  }
  iVar2 = *(int *)(iVar3 + -8);
  piVar4 = *(int **)(iVar3 + -4);
  if (piVar4 != (int *)0x0) {
    iVar3 = piVar4[1] + 1;
    piVar4[1] = iVar3;
  }
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_2 + 8);
joined_r0x2c530d1a:
    if (iVar3 == 0) {
      if (piVar4 == (int *)0x0) {
        return 1;
      }
      uVar5 = 1;
      goto LAB_2c530ce6;
    }
  }
  else if (*(int *)(param_2 + 8) != 0) {
    iVar3 = FUN_2c66b624(iVar1 + 5,*(int *)(param_2 + 8) + 5,iVar2,iVar3,param_4);
    goto joined_r0x2c530d1a;
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar5 = 0;
LAB_2c530ce6:
  iVar3 = piVar4[1];
  piVar4[1] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar3 = piVar4[2];
    piVar4[2] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
  }
  return uVar5;
}

