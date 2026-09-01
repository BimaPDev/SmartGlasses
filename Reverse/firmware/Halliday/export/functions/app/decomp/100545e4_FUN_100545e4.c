/* FUN_100545e4 @ 0x100545e4 */

int FUN_100545e4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_1c;
  
  iVar2 = 0;
  uVar6 = param_1;
  local_1c = param_2;
  do {
    iVar1 = FUN_1011a160(param_1,&local_1c,param_3);
    if (param_2 != 0) {
      FUN_1011ea40(param_2,local_1c,iVar1);
      param_2 = param_2 + iVar1;
    }
    param_3 = param_3 - iVar1;
    iVar2 = iVar2 + iVar1;
  } while ((param_3 != 0) && (iVar1 != 0));
  uVar3 = FUN_1011a1b6(param_1,iVar2);
  if ((int)uVar3 != 0) {
    uVar4 = extraout_r2;
    uVar5 = extraout_r3;
    FUN_10119dc2(DAT_1005464c,DAT_10054648,DAT_10054644,0x14d,uVar3,extraout_r2,extraout_r3,uVar6);
    FUN_1011a1f0(DAT_10054644,0x14d,uVar4,uVar5);
  }
  return iVar2;
}

