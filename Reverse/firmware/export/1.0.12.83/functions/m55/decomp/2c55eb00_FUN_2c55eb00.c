/* FUN_2c55eb00 @ 0x2c55eb00 */

void FUN_2c55eb00(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*param_1 + -0x10);
  *(undefined4 *)((int)param_1 + iVar4 + 0xc) = *param_2;
  iVar5 = param_2[1];
  if (iVar5 != 0) {
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  piVar2 = *(int **)((int)param_1 + iVar4 + 0x10);
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *(int *)((int)param_1 + iVar4 + 0x10) = iVar5;
  FUN_2c62e7b4((int)param_1 + *(int *)(*param_1 + -0x10) + 0x14);
  iVar4 = *(int *)(*param_1 + -0x10);
  *(undefined4 *)((int)param_1 + iVar4 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + iVar4 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + iVar4 + 0x3c) = 0x29;
  uVar1 = DAT_2c55eb84;
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x10) + 0x40) = 0x578;
  *(int **)((int)param_1 + *(int *)(*param_1 + -0x10) + 0x14) = param_1;
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x10) + 0x18) = uVar1;
  *(undefined2 *)((int)param_1 + *(int *)(*param_1 + -0x10) + 0x54) = 0xffff;
  return;
}

