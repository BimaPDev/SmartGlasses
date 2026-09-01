/* FUN_10052c38 @ 0x10052c38 */

void FUN_10052c38(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined4 extraout_r1;
  uint extraout_r2;
  int iVar2;
  uint uVar3;
  
  iVar2 = *DAT_10052c78;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar1 = FUN_1011ea10(param_3,param_2,param_3,0);
    uVar3 = (uint)uVar1;
  }
  while (*DAT_10052c78 != iVar2) {
    FUN_1013cdc0();
    param_2 = extraout_r1;
    uVar3 = extraout_r2;
  }
  FUN_10052a24(param_1,param_2,param_3,uVar3);
  return;
}

