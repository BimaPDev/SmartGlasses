/* FUN_2c602f64 @ 0x2c602f64 */

void FUN_2c602f64(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_2c62ca10();
  while (piVar2 != (int *)0x0) {
    if (*piVar2 == param_2) {
      return;
    }
    piVar2 = (int *)FUN_2c62ca20(param_1);
  }
  iVar3 = FUN_2c606bc0(param_2);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar5 + 8) == 0) || (**(int **)(*(int *)(iVar5 + 8) + 0xc) != param_2))
    goto LAB_2c602fa4;
    bVar1 = *(byte *)(iVar3 + 0x1c);
    *(byte *)(iVar3 + 0x1c) = bVar1 | 8;
    if ((int)((uint)bVar1 << 0x1d) < 0) {
      FUN_2c602e74();
    }
    else {
      FUN_2c602e40();
    }
    *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) & 0xf7 | bVar1 & 8;
  }
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 == 0) {
    FUN_2c606bc8(param_2);
    iVar5 = *(int *)(param_2 + 8);
  }
LAB_2c602fa4:
  *(int *)(iVar5 + 8) = param_1;
  piVar2 = (int *)FUN_2c62c968(param_1);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
    piVar4 = (int *)FUN_2c62ca10(param_1);
    if (piVar2 == piVar4) {
      bVar1 = *(byte *)(param_1 + 0x1c);
      *(byte *)(param_1 + 0x1c) = bVar1 | 8;
      if ((int)((uint)bVar1 << 0x1d) < 0) {
        FUN_2c602e74(param_1);
      }
      else {
        FUN_2c602e40();
      }
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | bVar1 & 8;
      return;
    }
  }
  return;
}

