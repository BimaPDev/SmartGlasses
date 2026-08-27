/* FUN_2c6457d0 @ 0x2c6457d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c6457d0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if ((param_1 != (int *)0x0) && (param_1[0x15] - 1U < 0x21)) {
    *(undefined4 *)(_LAB_2c645834 + (param_1[0x15] - 1U) * 4) = 0;
  }
  uVar6 = (uint)*(byte *)((int)param_1 + 2);
  param_1[0x15] = 0;
  *(undefined2 *)param_1 = 0;
  piVar2 = param_1;
  if ((int)(uVar6 << 0x1e) < 0) {
    if ((*(byte *)((int)param_1 + 2) & 0x10) == 0) {
      piVar2 = (int *)FUN_2c64447c(*(undefined4 *)(_LAB_2c645838 + 0x74),param_1[0xc]);
      uVar6 = (uint)*(byte *)((int)param_1 + 2);
    }
    else {
      piVar2 = (int *)FUN_2c64749c(*(undefined4 *)(_LAB_2c645838 + 0x84));
      uVar6 = (uint)*(byte *)((int)param_1 + 2);
    }
  }
  iVar5 = _LAB_2c645838;
  if (-1 < (int)(uVar6 << 0x1f)) {
    return piVar2;
  }
  iVar3 = *(int *)(_LAB_2c645838 + 0x88);
  if (iVar3 == 0) {
    iVar3 = *(int *)(_LAB_2c645838 + 0x80);
    if ((iVar3 != 0) && (param_1 != (int *)0x0)) {
      piVar2 = (int *)(iVar3 + 8);
      piVar7 = (int *)(uint)(param_1 == (int *)0x0);
      do {
        piVar4 = piVar2;
        if (piVar4 == param_1 + -2) {
          *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) - (piVar4[1] & 0xfffffffcU);
          if (piVar7 == (int *)0x0) {
            piVar4[1] = 0;
          }
          else {
            piVar4 = (int *)*piVar4;
            *piVar7 = (int)piVar4;
          }
          FUN_2c6439dc(iVar3,param_1,1,piVar4,unaff_r4,unaff_lr);
          return (int *)0x1;
        }
        iVar5 = 0;
        piVar2 = (int *)*piVar4;
        piVar7 = piVar4;
      } while ((int *)*piVar4 != (int *)0x0);
    }
    FUN_2c6439dc(iVar3,param_1,0,iVar5,unaff_r4,unaff_lr);
    return (int *)0x0;
  }
  if (((iVar3 != 0) && (*(int **)(iVar3 + 0xc) <= param_1)) && (param_1 < *(int **)(iVar3 + 0x10)))
  {
    piVar2 = (int *)(iVar3 + 0x14);
    do {
      do {
        *param_1 = *piVar2;
        DataMemoryBarrier(0x1f);
        ExclusiveAccess(piVar2);
      } while (*param_1 != *piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = (int)param_1;
    piVar2 = (int *)(iVar3 + 4);
    do {
      ExclusiveAccess(piVar2);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
    FUN_2c6439e8(iVar3,param_1,0,piVar2,iVar5,unaff_r4);
    return (int *)0x0;
  }
  FUN_2c6439e8(iVar3,param_1,0xfffffffc,iVar3,_LAB_2c645838,unaff_r4);
  return (int *)0xfffffffc;
}

