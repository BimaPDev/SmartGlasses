/* FUN_2c4e1d08 @ 0x2c4e1d08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e1d08(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0x2c4df80c(param_1 + 0x31);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == _LAB_2c4de3a4) {
LAB_2c4de39c:
    *param_3 = (int)(param_1 + 0x22);
    return 1;
  }
  if (param_2 < _LAB_2c4de3a4 + 1) {
    if (param_2 == _LAB_2c4de3a8) {
LAB_2c4de37c:
      iVar1 = param_1[0x15];
      iVar2 = param_1[0x16];
      iVar3 = param_1[0x17];
      *param_3 = param_1[0x14];
      param_3[1] = iVar1;
      param_3[2] = iVar2;
      param_3[3] = iVar3;
      iVar1 = param_1[0x19];
      iVar2 = param_1[0x1a];
      iVar3 = param_1[0x1b];
      param_3[4] = param_1[0x18];
      param_3[5] = iVar1;
      param_3[6] = iVar2;
      param_3[7] = iVar3;
      iVar1 = param_1[0x1d];
      iVar2 = param_1[0x1e];
      iVar3 = param_1[0x1f];
      param_3[8] = param_1[0x1c];
      param_3[9] = iVar1;
      param_3[10] = iVar2;
      param_3[0xb] = iVar3;
      iVar1 = param_1[0x21];
      param_3[0xc] = param_1[0x20];
      param_3[0xd] = iVar1;
      return 1;
    }
    if (param_2 == _LAB_2c4de3ac) goto LAB_2c4de39c;
  }
  else if ((param_2 == _LAB_2c4de3b0) || (param_2 == _LAB_2c4de3b4)) goto LAB_2c4de37c;
  iVar1 = *(int *)(*param_1 + -0xc);
  if (param_2 != _LAB_2c4de574) {
    if (param_2 < _LAB_2c4de574) {
      if (param_2 == _LAB_2c4de578) {
        iVar1 = *(int *)((int)param_1 + iVar1 + 0x3c);
        goto LAB_2c4de56a;
      }
    }
    else if ((param_2 == _LAB_2c4de57c) || (param_2 == _LAB_2c4de57c + 0x9005b34)) {
      iVar1 = func_0x2c4de9bc((int)param_1 + iVar1 + 0x30);
      *param_3 = iVar1;
      return 1;
    }
    if (param_2 == _LAB_2c4de5c8) {
      iVar2 = *(int *)((int)param_1 + iVar1 + 0xc);
      *param_3 = *(int *)((int)param_1 + iVar1 + 8);
      param_3[1] = iVar2;
    }
    else {
      if (param_2 != _LAB_2c4de5c8 + 0x56015306) {
        return 0;
      }
      *param_3 = (int)param_1 + iVar1 + 8;
    }
    return 1;
  }
  iVar1 = *(int *)((int)param_1 + iVar1 + 0x38);
LAB_2c4de56a:
  *param_3 = iVar1;
  return 1;
}

