/* FUN_2c4db9f0 @ 0x2c4db9f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4db9f0(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = _LAB_2c4dbb38;
  if (param_2 == 0) {
    piVar6 = param_3 + 1;
  }
  else {
    func_0x2c4dd3dc(param_1 + 0x6a);
  }
  func_0x2c4e1068(param_1,piVar6 + 2);
  iVar5 = piVar6[1];
  iVar4 = piVar6[0x19];
  *param_1 = iVar5;
  *(int *)((int)param_1 + *(int *)(iVar5 + -0xc)) = iVar4;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = piVar6[0x1a];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = piVar6[0x1b];
  param_1[0x2a] = piVar6[0x1c];
  iVar5 = *piVar6;
  iVar4 = piVar6[0x1d];
  *param_1 = iVar5;
  *(int *)((int)param_1 + *(int *)(iVar5 + -0xc)) = iVar4;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = piVar6[0x1e];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = piVar6[0x1f];
  param_1[0x2a] = piVar6[0x20];
  func_0x2c4dc4d0(param_1 + 0x66,param_1);
  iVar4 = _LAB_2c4dbb48;
  if (param_2 == 0) {
    iVar4 = *param_3;
  }
  *param_1 = iVar4;
  if (param_2 == 0) {
    iVar4 = *(int *)(iVar4 + -0xc);
    iVar5 = param_3[0x22];
  }
  else {
    iVar4 = 0x1a8;
    iVar5 = _LAB_2c4dbb4c;
  }
  *(int *)((int)param_1 + iVar4) = iVar5;
  if (param_2 == 0) {
    iVar4 = *(int *)(*param_1 + -0xc) + 0x20;
    iVar5 = param_3[0x23];
  }
  else {
    iVar4 = 0x1c8;
    iVar5 = _LAB_2c4dbb50;
  }
  *(int *)((int)param_1 + iVar4) = iVar5;
  if (param_2 == 0) {
    iVar4 = *(int *)(*param_1 + -0xc) + 0x30;
    iVar5 = param_3[0x24];
  }
  else {
    iVar4 = 0x1d8;
    iVar5 = _LAB_2c4dbb54;
  }
  *(int *)((int)param_1 + iVar4) = iVar5;
  iVar4 = _LAB_2c4dbb58;
  if (param_2 == 0) {
    iVar4 = param_3[0x25];
  }
  param_1[0x2a] = iVar4;
  uVar2 = _LAB_2c4dbb40;
  uVar1 = _LAB_2c4dbb3c;
  param_1[0x67] = 0;
  uVar3 = _DAT_2c4dbb44;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  FUN_2c4e0504(uVar2,7,0,0,uVar3,0xe,uVar1,0x1300,0);
  if (param_2 == 0) {
    iVar4 = *(int *)(*param_1 + -0xc) + 0x30;
  }
  else {
    iVar4 = 0x1d8;
  }
  *(undefined4 *)((int)param_1 + iVar4 + 0xc) = 0x40;
  param_1[0x32] = 0x800;
  param_1[0x33] = 7;
  param_1[8] = 0x1000;
  return param_1;
}

