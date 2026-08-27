/* FUN_2c4e1078 @ 0x2c4e1078 */

int * FUN_2c4e1078(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_2c4e1158;
  if (param_2 == 0) {
    piVar3 = param_3 + 1;
  }
  FUN_2c4e1d3a(param_1,piVar3 + 1,param_3,param_4,param_4);
  iVar2 = *piVar3;
  iVar1 = piVar3[0xd];
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = iVar1;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = piVar3[0xe];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = piVar3[0xf];
  iVar1 = DAT_2c4e115c;
  if (param_2 == 0) {
    iVar1 = *param_3;
  }
  *param_1 = iVar1;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + -0xc);
    iVar2 = param_3[0x11];
  }
  else {
    iVar1 = 0x170;
    iVar2 = DAT_2c4e1160;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar2 = param_3[0x12];
  }
  else {
    iVar1 = 400;
    iVar2 = DAT_2c4e1164;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar2 = param_3[0x13];
  }
  else {
    iVar1 = 0x1a0;
    iVar2 = DAT_2c4e1168;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  param_1[0x47] = -1;
  param_1[0x48] = 0x400;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0x40;
  param_1[0x4a] = 0;
  FUN_2c674268(param_1 + 0x4b,0,0x14);
  FUN_2c674268(param_1 + 0x50,0,0x2c);
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x30;
  }
  else {
    iVar1 = 0x1a0;
  }
  *(undefined4 *)((int)param_1 + iVar1 + 0xc) = 0x44;
  return param_1;
}

