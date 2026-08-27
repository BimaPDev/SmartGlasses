/* FUN_2c59e860 @ 0x2c59e860 */

int * FUN_2c59e860(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_2 + 8) == 0) {
    iVar4 = param_2 + 4;
  }
  else {
    uVar9 = *param_3;
    uVar8 = param_3[1];
    iVar3 = *(int *)(param_2 + 8);
    do {
      iVar4 = iVar3;
      uVar6 = *(uint *)(iVar4 + 0x14);
      uVar7 = *(undefined4 *)(iVar4 + 0x10);
      uVar5 = uVar8;
      if (uVar6 <= uVar8) {
        uVar5 = uVar6;
      }
      if ((uVar5 == 0) || (iVar2 = FUN_2c66960c(uVar9,uVar7,uVar5), iVar2 == 0)) {
        iVar2 = uVar8 - uVar6;
      }
      piVar1 = (int *)(iVar4 + 0xc);
      if (-1 >= iVar2) {
        piVar1 = (int *)(iVar4 + 8);
      }
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
    iVar3 = iVar4;
    if (-1 < iVar2) goto LAB_2c59e8ae;
  }
  if (*(int *)(param_2 + 0xc) == iVar4) {
    *param_1 = 0;
    param_1[1] = iVar4;
    return param_1;
  }
  iVar3 = thunk_FUN_2c64e460(iVar4);
  uVar7 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(uint *)(iVar3 + 0x14);
  uVar9 = *param_3;
  uVar8 = param_3[1];
  uVar5 = uVar6;
  if (uVar8 <= uVar6) {
    uVar5 = uVar8;
  }
LAB_2c59e8ae:
  if ((uVar5 == 0) || (iVar2 = FUN_2c66960c(uVar7,uVar9,uVar5), iVar2 == 0)) {
    iVar2 = uVar6 - uVar8;
  }
  if (iVar2 < 0) {
    *param_1 = 0;
    param_1[1] = iVar4;
  }
  else {
    *param_1 = iVar3;
    param_1[1] = 0;
  }
  return param_1;
}

