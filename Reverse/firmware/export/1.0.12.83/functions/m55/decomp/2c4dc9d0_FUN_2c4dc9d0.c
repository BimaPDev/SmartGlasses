/* FUN_2c4dc9d0 @ 0x2c4dc9d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4dc9d0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = _LAB_2c4dcb24;
  if (param_2 == 0) {
    piVar4 = param_3 + 1;
  }
  else {
    func_0x2c4dd3dc(param_1 + 0x70);
  }
  func_0x2c4e1068(param_1,piVar4 + 2);
  iVar2 = piVar4[1];
  iVar1 = piVar4[0x19];
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = iVar1;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = piVar4[0x1a];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = piVar4[0x1b];
  param_1[0x2a] = piVar4[0x1c];
  iVar2 = *piVar4;
  iVar1 = piVar4[0x1d];
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = iVar1;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = piVar4[0x1e];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = piVar4[0x1f];
  param_1[0x2a] = piVar4[0x20];
  iVar1 = _LAB_2c4dcb38;
  if (param_2 == 0) {
    iVar1 = *param_3;
  }
  *param_1 = iVar1;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + -0xc);
    iVar2 = param_3[0x22];
  }
  else {
    iVar1 = 0x1c0;
    iVar2 = _LAB_2c4dcb3c;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar2 = param_3[0x23];
  }
  else {
    iVar1 = 0x1e0;
    iVar2 = _LAB_2c4dcb40;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar2 = param_3[0x24];
  }
  else {
    iVar1 = 0x1f0;
    iVar2 = _LAB_2c4dcb44;
  }
  *(int *)((int)param_1 + iVar1) = iVar2;
  piVar4 = _LAB_2c4dcb28;
  iVar1 = _LAB_2c4dcb48;
  if (param_2 == 0) {
    iVar1 = param_3[0x25];
  }
  param_1[0x2a] = iVar1;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  iVar1 = piVar4[1];
  iVar2 = piVar4[2];
  iVar3 = piVar4[3];
  param_1[0x68] = *piVar4;
  param_1[0x69] = iVar1;
  param_1[0x6a] = iVar2;
  param_1[0x6b] = iVar3;
  iVar1 = piVar4[5];
  iVar2 = piVar4[6];
  iVar3 = piVar4[7];
  param_1[0x6c] = piVar4[4];
  param_1[0x6d] = iVar1;
  param_1[0x6e] = iVar2;
  param_1[0x6f] = iVar3;
  FUN_2c4e0504(_LAB_2c4dcb2c,7,0,0,_LAB_2c4dcb34,0x18,_LAB_2c4dcb30,0x1300,0);
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + -0xc) + 0x30;
  }
  else {
    iVar1 = 0x1f0;
  }
  *(undefined4 *)((int)param_1 + iVar1 + 0xc) = 0x38;
  param_1[0x32] = 0x400;
  param_1[0x33] = 0x40;
  param_1[8] = 0x400;
  param_1[9] = 0x100;
  return param_1;
}

