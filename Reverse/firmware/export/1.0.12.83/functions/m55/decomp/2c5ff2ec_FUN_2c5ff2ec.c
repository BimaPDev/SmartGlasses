/* FUN_2c5ff2ec @ 0x2c5ff2ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ff2ec(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar3 = _LAB_2c5ff318;
  iVar2 = *_LAB_2c5ff318;
  if (iVar2 == 0) {
    iVar2 = FUN_2c602d28();
    *piVar3 = iVar2;
  }
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)FUN_2c62ca10();
  while (piVar3 != (int *)0x0) {
    if (*piVar3 == param_2) {
      return;
    }
    piVar3 = (int *)FUN_2c62ca20(iVar2);
  }
  iVar4 = FUN_2c606bc0(param_2);
  if (iVar4 != 0) {
    iVar6 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar6 + 8) == 0) || (**(int **)(*(int *)(iVar6 + 8) + 0xc) != param_2))
    goto LAB_2c602fa4;
    bVar1 = *(byte *)(iVar4 + 0x1c);
    *(byte *)(iVar4 + 0x1c) = bVar1 | 8;
    if ((int)((uint)bVar1 << 0x1d) < 0) {
      FUN_2c602e74();
    }
    else {
      FUN_2c602e40();
    }
    *(byte *)(iVar4 + 0x1c) = *(byte *)(iVar4 + 0x1c) & 0xf7 | bVar1 & 8;
  }
  iVar6 = *(int *)(param_2 + 8);
  if (iVar6 == 0) {
    FUN_2c606bc8(param_2);
    iVar6 = *(int *)(param_2 + 8);
  }
LAB_2c602fa4:
  *(int *)(iVar6 + 8) = iVar2;
  piVar3 = (int *)FUN_2c62c968(iVar2);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_2;
    piVar5 = (int *)FUN_2c62ca10(iVar2);
    if (piVar3 == piVar5) {
      bVar1 = *(byte *)(iVar2 + 0x1c);
      *(byte *)(iVar2 + 0x1c) = bVar1 | 8;
      if ((int)((uint)bVar1 << 0x1d) < 0) {
        FUN_2c602e74(iVar2);
      }
      else {
        FUN_2c602e40();
      }
      *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xf7 | bVar1 & 8;
      return;
    }
  }
  return;
}

