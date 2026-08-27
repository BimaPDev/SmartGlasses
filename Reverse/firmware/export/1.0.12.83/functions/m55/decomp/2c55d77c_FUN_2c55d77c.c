/* FUN_2c55d77c @ 0x2c55d77c */

int FUN_2c55d77c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_2c55d7bc;
  iVar4 = (int)param_1 + *(int *)(*param_1 + -0x1c);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0x1c)) = DAT_2c55d7b8;
  piVar2 = *(int **)(iVar4 + 0x14);
  *(undefined4 *)(iVar4 + 4) = uVar1;
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar2 = *(int **)(iVar4 + 0xc);
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return iVar4;
}

