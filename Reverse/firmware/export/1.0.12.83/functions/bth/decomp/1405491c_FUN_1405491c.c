/* FUN_1405491c @ 0x1405491c */

void FUN_1405491c(int param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_14057d20(param_3);
  if (iVar1 == 0) {
    return;
  }
  if (param_1 != 0) {
    FUN_14057df0(iVar1,0xe,0x4c,param_4);
    return;
  }
  uVar4 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[3];
  *(undefined4 *)(iVar1 + 0x9c) = param_2[2];
  *(undefined4 *)(iVar1 + 0x94) = uVar4;
  *(undefined4 *)(iVar1 + 0x98) = uVar3;
  *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  FUN_14057df0(iVar1,0xe,0,param_4);
  return;
}

