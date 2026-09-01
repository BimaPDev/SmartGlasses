/* FUN_101156b4 @ 0x101156b4 */

void FUN_101156b4(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *param_1;
  if (((param_1 != (int *)0x0) && (param_1 != *(int **)(DAT_101156e4 + 4))) && (iVar3 != 0)) {
    uVar1 = *(uint *)(iVar3 + 0x10);
    uVar4 = param_1[4];
    iVar5 = param_1[5];
    *(uint *)(iVar3 + 0x10) = uVar1 + uVar4;
    *(uint *)(iVar3 + 0x14) = iVar5 + *(int *)(iVar3 + 0x14) + (uint)CARRY4(uVar1,uVar4);
  }
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

