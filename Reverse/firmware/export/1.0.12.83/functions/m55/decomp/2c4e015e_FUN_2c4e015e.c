/* FUN_2c4e015e @ 0x2c4e015e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e015e(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = func_0x2c4de348();
  if (iVar1 != 0) {
    return iVar1;
  }
  piVar2 = (int *)(param_1 + 0xa8);
  if (param_2 != _LAB_2c4df4c4) {
    if (param_2 < _LAB_2c4df4c4) {
      uVar4 = _DAT_2c4df4cc;
      if (param_2 == _DAT_2c4df4c8) {
LAB_2c4df4ae:
        *param_3 = param_1 + 0x130;
        return 1;
      }
    }
    else {
      if (param_2 == _LAB_2c4df4d0) goto LAB_2c4df4ae;
      uVar4 = _LAB_2c4df4d0 + 0x3a522b28;
    }
    if (param_2 != uVar4) {
      iVar1 = *(int *)(*piVar2 + -0xc);
      if (param_2 == _LAB_2c4de574) {
        iVar1 = *(int *)((int)piVar2 + iVar1 + 0x38);
LAB_2c4de56a:
        *param_3 = iVar1;
        return 1;
      }
      if (param_2 < _LAB_2c4de574) {
        if (param_2 == _LAB_2c4de578) {
          iVar1 = *(int *)((int)piVar2 + iVar1 + 0x3c);
          goto LAB_2c4de56a;
        }
      }
      else if ((param_2 == _LAB_2c4de57c) || (param_2 == _LAB_2c4de57c + 0x9005b34)) {
        iVar1 = func_0x2c4de9bc((int)piVar2 + iVar1 + 0x30);
        *param_3 = iVar1;
        return 1;
      }
      if (param_2 == _LAB_2c4de5c8) {
        iVar3 = *(int *)((int)piVar2 + iVar1 + 0xc);
        *param_3 = *(int *)((int)piVar2 + iVar1 + 8);
        param_3[1] = iVar3;
      }
      else {
        if (param_2 != _LAB_2c4de5c8 + 0x56015306) {
          return 0;
        }
        *param_3 = (int)piVar2 + iVar1 + 8;
      }
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar3 = *(int *)(param_1 + 0x100);
  iVar5 = *(int *)(param_1 + 0x104);
  *param_3 = *(int *)(param_1 + 0xf8);
  param_3[1] = iVar1;
  param_3[2] = iVar3;
  param_3[3] = iVar5;
  iVar1 = *(int *)(param_1 + 0x10c);
  iVar3 = *(int *)(param_1 + 0x110);
  iVar5 = *(int *)(param_1 + 0x114);
  param_3[4] = *(int *)(param_1 + 0x108);
  param_3[5] = iVar1;
  param_3[6] = iVar3;
  param_3[7] = iVar5;
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar3 = *(int *)(param_1 + 0x120);
  iVar5 = *(int *)(param_1 + 0x124);
  param_3[8] = *(int *)(param_1 + 0x118);
  param_3[9] = iVar1;
  param_3[10] = iVar3;
  param_3[0xb] = iVar5;
  iVar1 = *(int *)(param_1 + 300);
  param_3[0xc] = *(int *)(param_1 + 0x128);
  param_3[0xd] = iVar1;
  return 1;
}

