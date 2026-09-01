/* FUN_1005457c @ 0x1005457c */

int FUN_1005457c(undefined4 param_1,int param_2,int param_3)

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
    iVar1 = FUN_1011a0c8(param_1,&local_1c,param_3);
    FUN_1011ea40(local_1c,param_2,iVar1);
    param_3 = param_3 - iVar1;
    iVar2 = iVar2 + iVar1;
    param_2 = param_2 + iVar1;
    if (param_3 == 0) break;
  } while (iVar1 != 0);
  uVar3 = FUN_1011a124(param_1,iVar2);
  if ((int)uVar3 != 0) {
    uVar4 = extraout_r2;
    uVar5 = extraout_r3;
    FUN_10119dc2(DAT_100545e0,DAT_100545dc,DAT_100545d8,0x100,uVar3,extraout_r2,extraout_r3,uVar6);
    FUN_1011a1f0(DAT_100545d8,0x100,uVar4,uVar5);
  }
  return iVar2;
}

