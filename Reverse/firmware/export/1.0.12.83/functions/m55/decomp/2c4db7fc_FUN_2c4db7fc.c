/* FUN_2c4db7fc @ 0x2c4db7fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4db7fc(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _LAB_2c4db898;
  if (param_2 == 0) {
    iVar3 = *param_3;
  }
  *param_1 = iVar3;
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + -0xc);
    iVar2 = param_3[0x19];
  }
  else {
    iVar3 = 0x1b0;
    iVar2 = _LAB_2c4db89c;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar2 = param_3[0x1a];
  }
  else {
    iVar3 = 0x1d0;
    iVar2 = _LAB_2c4db8a0;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar2 = param_3[0x1b];
  }
  else {
    iVar3 = 0x1e0;
    iVar2 = _DAT_2c4db8a4;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
  }
  else {
    iVar3 = 0x1e0;
  }
  iVar3 = FUN_2c4de9c0(iVar3 + (int)param_1);
  if (iVar3 != 0) {
    if (param_2 == 0) {
      iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
    }
    else {
      iVar3 = 0x1e0;
    }
    FUN_2c4dea30(iVar3 + (int)param_1);
  }
  piVar1 = _LAB_2c4db8a8;
  if (param_2 == 0) {
    piVar1 = param_3 + 1;
  }
  func_0x2c4e296c(param_1,piVar1);
  if (param_2 << 0x1e < 0) {
    FUN_2c4dd428(param_1 + 0x6c);
  }
  return param_1;
}

