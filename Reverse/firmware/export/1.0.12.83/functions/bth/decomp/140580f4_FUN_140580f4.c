/* FUN_140580f4 @ 0x140580f4 */

void FUN_140580f4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[3];
  *(undefined4 *)(param_4 + 0x7c) = param_2[2];
  *(undefined4 *)(param_4 + 0x80) = uVar1;
  *(undefined4 *)(param_4 + 0x74) = uVar3;
  *(undefined4 *)(param_4 + 0x78) = uVar2;
  FUN_14057df0(param_4,8,param_1);
  return;
}

