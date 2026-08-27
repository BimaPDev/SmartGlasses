/* FUN_2c557b60 @ 0x2c557b60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c557b60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *(int *)(param_1 + 0x10) = iVar4;
  FUN_2c62e7b4(param_1 + 0x14);
  uVar1 = _LAB_2c557bb0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf4;
  *(undefined4 *)(param_1 + 0x40) = 15000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x14) = param_1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined2 *)(param_1 + 0x54) = 0xffff;
  return;
}

