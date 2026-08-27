/* FUN_2c1406b8 @ 0x2c1406b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c1406b8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if ((param_1 != (int *)0x0) && (param_1[0x15] - 1U < 0x15)) {
    *(undefined4 *)(_DAT_2c14071c + (param_1[0x15] - 1U) * 4) = 0;
  }
  uVar5 = (uint)*(byte *)((int)param_1 + 2);
  param_1[0x15] = 0;
  *(undefined2 *)param_1 = 0;
  piVar3 = param_1;
  if ((int)(uVar5 << 0x1e) < 0) {
    if ((*(byte *)((int)param_1 + 2) & 0x10) == 0) {
      piVar3 = (int *)FUN_2c13f5d4(_DAT_2c140720[0x1d],param_1[0xc]);
      uVar5 = (uint)*(byte *)((int)param_1 + 2);
    }
    else {
      piVar3 = (int *)FUN_2c141cb0(_DAT_2c140720[0x21]);
      uVar5 = (uint)*(byte *)((int)param_1 + 2);
    }
  }
  piVar2 = _DAT_2c140720;
  if (-1 < (int)(uVar5 << 0x1f)) {
    return piVar3;
  }
  iVar4 = _DAT_2c140720[0x22];
  if (iVar4 == 0) {
    iVar4 = _DAT_2c140720[0x20];
    piVar3 = _DAT_2c140720;
    if ((iVar4 != 0) && (param_1 != (int *)0x0)) {
      piVar2 = (int *)(iVar4 + 8);
      piVar6 = (int *)0x0;
      do {
        piVar3 = piVar2;
        if (piVar3 == param_1 + -2) {
          *(uint *)(iVar4 + 4) = *(int *)(iVar4 + 4) - (piVar3[1] & 0xfffffffcU);
          if (piVar6 == (int *)0x0) {
            piVar3[1] = 0;
          }
          else {
            piVar3 = (int *)*piVar3;
            *piVar6 = (int)piVar3;
          }
          FUN_2c13eda4(iVar4,param_1,1,piVar3,unaff_r4,unaff_lr);
          return (int *)0x1;
        }
        piVar2 = (int *)*piVar3;
        piVar6 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
    }
    FUN_2c13eda4(iVar4,param_1,0,piVar3,unaff_r4,unaff_lr);
    return (int *)0x0;
  }
  if (((iVar4 != 0) && (*(int **)(iVar4 + 0xc) <= param_1)) && (param_1 < *(int **)(iVar4 + 0x10)))
  {
    piVar3 = (int *)(iVar4 + 0x14);
    do {
      do {
        *param_1 = *piVar3;
        DataMemoryBarrier(0x1f);
        ExclusiveAccess(piVar3);
      } while (*param_1 != *piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = (int)param_1;
    piVar3 = (int *)(iVar4 + 4);
    do {
      ExclusiveAccess(piVar3);
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + -1;
    FUN_2c13edb0(iVar4,param_1,0,piVar3,piVar2,unaff_r4);
    return (int *)0x0;
  }
  FUN_2c13edb0(iVar4,param_1,0xfffffffc,iVar4,_DAT_2c140720,unaff_r4);
  return (int *)0xfffffffc;
}

