/* FUN_1008740c @ 0x1008740c */

void FUN_1008740c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return;
  }
  FUN_10087374(param_2);
  for (piVar1 = (int *)FUN_1012b06a(param_1); piVar1 != (int *)0x0;
      piVar1 = (int *)FUN_1012b076(param_1,piVar1)) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  iVar2 = FUN_10124ce2(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 8);
    if ((iVar2 == 0) || (**(int **)(iVar2 + 0xc) != param_2)) goto LAB_1008744a;
    FUN_10124532();
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_10089398(param_2);
  }
LAB_1008744a:
  *(int *)(*(int *)(param_2 + 8) + 8) = param_1;
  piVar1 = (int *)FUN_100940fc(param_1);
  if (piVar1 == (int *)0x0) {
    uVar4 = FUN_10094174(3,DAT_100874cc,0x8f,DAT_100874d0,DAT_100874c8,DAT_100874c4,DAT_100874c0);
    FUN_10119dc2(DAT_100874d8,DAT_100874d4,DAT_100874cc,0x8f,uVar4);
    FUN_10119dc2(DAT_100874dc);
    FUN_1011a1f0(DAT_100874cc,0x8f,extraout_r2,extraout_r3);
    return;
  }
  *piVar1 = param_2;
  piVar3 = (int *)FUN_1012b06a(param_1);
  if (piVar1 != piVar3) {
    return;
  }
  FUN_10124532(param_1);
  return;
}

