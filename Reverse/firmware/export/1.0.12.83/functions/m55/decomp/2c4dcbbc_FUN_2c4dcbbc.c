/* FUN_2c4dcbbc @ 0x2c4dcbbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4dcbbc(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _LAB_2c4dcc5c;
  if (param_2 == 0) {
    iVar3 = *param_3;
  }
  *param_1 = iVar3;
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + -0xc);
    iVar2 = param_3[0x22];
  }
  else {
    iVar3 = 0x1c0;
    iVar2 = _LAB_2c4dcc60;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar2 = param_3[0x23];
  }
  else {
    iVar3 = 0x1e0;
    iVar2 = _LAB_2c4dcc64;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar2 = param_3[0x24];
  }
  else {
    iVar3 = 0x1f0;
    iVar2 = _LAB_2c4dcc68;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  iVar3 = _LAB_2c4dcc6c;
  if (param_2 == 0) {
    iVar3 = param_3[0x25];
  }
  param_1[0x2a] = iVar3;
  if (param_1[0x66] != 0) {
    if (param_2 == 0) {
      iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
    }
    else {
      iVar3 = 0x1f0;
    }
    FUN_2c4dea30(iVar3 + (int)param_1);
  }
  piVar1 = _LAB_2c4dcc70;
  if (param_2 == 0) {
    piVar1 = param_3 + 1;
  }
  func_0x2c4dbd10(param_1,piVar1);
  if (param_2 << 0x1e < 0) {
    FUN_2c4dd428(param_1 + 0x70);
  }
  return param_1;
}

