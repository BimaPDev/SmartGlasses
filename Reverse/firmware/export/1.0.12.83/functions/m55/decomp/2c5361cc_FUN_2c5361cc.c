/* FUN_2c5361cc @ 0x2c5361cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5361cc(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  param_1[4] = param_2;
  piVar5 = _LAB_2c53630c;
  param_1[5] = param_4;
  uVar1 = (undefined1)param_4;
  *(undefined1 *)(param_1 + 6) = uVar1;
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  param_1[0x29] = param_4;
  param_1[10] = (int)(param_1 + 0xc);
  param_1[0xb] = param_4;
  param_1[0x10] = (int)(param_1 + 0x12);
  param_1[0x11] = param_4;
  param_1[0x16] = (int)(param_1 + 0x18);
  param_1[0x17] = param_4;
  param_1[0x1c] = (int)(param_1 + 0x1e);
  param_1[0x1d] = param_4;
  *param_1 = param_4;
  param_1[1] = param_4;
  param_1[2] = param_4;
  param_1[3] = param_4;
  param_1[0x22] = (int)(param_1 + 0x24);
  param_1[0x23] = param_4;
  param_1[0x2b] = param_4;
  param_1[0x2c] = param_4;
  param_1[0x2d] = param_4;
  param_1[0x2e] = param_4;
  param_1[0x2f] = param_4;
  param_1[0x30] = param_4;
  param_1[0x31] = param_4;
  param_1[0x32] = param_4;
  param_1[0x2a] = param_3;
  if (*piVar5 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  iVar2 = FUN_2c47245c(0,0x20);
  iVar6 = *piVar5;
  param_1[0x29] = iVar2;
  uVar7 = param_1[0x2a] - 1U >> 1;
  iVar8 = iVar2 + uVar7 * 4;
  if (iVar6 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  uVar3 = FUN_2c47245c(0,0x1f8);
  *(undefined4 *)(iVar2 + uVar7 * 4) = uVar3;
  param_1[0x2e] = iVar8;
  iVar6 = *(int *)(iVar2 + uVar7 * 4);
  param_1[0x32] = iVar8;
  param_1[0x2c] = iVar6;
  param_1[0x2d] = iVar6 + 0x1f8;
  iVar2 = *(int *)(iVar2 + uVar7 * 4);
  param_1[0x2b] = iVar6;
  param_1[0x3b] = 0;
  param_1[0x2f] = iVar2;
  param_1[0x30] = iVar2;
  param_1[0x31] = iVar2 + 0x1f8;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_2c530730(param_1 + 0x33);
  iVar2 = *piVar5;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined2 *)(param_1 + 0x28) = 0x707;
  if (iVar2 == 0) {
    FUN_2c4723c4();
    *piVar5 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,4);
  *puVar4 = 0;
  FUN_2c5dc8f0();
  *puVar4 = _LAB_2c536310;
  piVar5 = (int *)*param_1;
  *param_1 = (int)puVar4;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  return param_1;
}

