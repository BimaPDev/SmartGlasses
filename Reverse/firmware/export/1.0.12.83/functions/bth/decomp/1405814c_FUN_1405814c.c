/* FUN_1405814c @ 0x1405814c */

void FUN_1405814c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[3];
  *(undefined4 *)(param_4 + 0x9c) = param_2[2];
  *(undefined4 *)(param_4 + 0xa0) = uVar1;
  *(undefined4 *)(param_4 + 0x94) = uVar3;
  *(undefined4 *)(param_4 + 0x98) = uVar2;
  FUN_14057df0(param_4,9,param_1);
  return;
}

