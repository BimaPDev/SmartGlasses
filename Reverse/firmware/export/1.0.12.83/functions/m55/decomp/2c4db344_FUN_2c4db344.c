/* FUN_2c4db344 @ 0x2c4db344 */

int * FUN_2c4db344(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_2c4db3c4;
  if (param_2 == 0) {
    iVar3 = *param_3;
  }
  *param_1 = iVar3;
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + -0xc);
    iVar2 = param_3[9];
  }
  else {
    iVar3 = 0x158;
    iVar2 = DAT_2c4db3c8;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar2 = param_3[10];
  }
  else {
    iVar3 = 0x178;
    iVar2 = DAT_2c4db3cc;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar2 = param_3[0xb];
  }
  else {
    iVar3 = 0x188;
    iVar2 = DAT_2c4db3d0;
  }
  *(int *)((int)param_1 + iVar3) = iVar2;
  iVar3 = DAT_2c4db3d4;
  if (param_2 == 0) {
    iVar3 = param_3[0xc];
  }
  param_1[0x2a] = iVar3;
  piVar1 = DAT_2c4db3d8;
  if (param_2 == 0) {
    piVar1 = param_3 + 5;
  }
  FUN_2c4decac(param_1 + 0x2a,piVar1);
  piVar1 = DAT_2c4db3dc;
  if (param_2 == 0) {
    piVar1 = param_3 + 1;
  }
  FUN_2c4ddaec(param_1,piVar1);
  return param_1;
}

