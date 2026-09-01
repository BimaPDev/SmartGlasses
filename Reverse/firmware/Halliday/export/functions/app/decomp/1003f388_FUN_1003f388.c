/* FUN_1003f388 @ 0x1003f388 */

void FUN_1003f388(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  iVar3 = DAT_1003f3e0;
  iVar4 = *DAT_1003f3dc;
  *DAT_1003f3e4 = 0;
  iVar6 = *DAT_1003f3e8;
  uVar1 = (**(code **)(iVar6 + 0x10))();
  FUN_100a5b78(DAT_1003f3f0 | (iVar3 - DAT_1003f3ec) * 0x20 & 0xff00U,DAT_1003f3f8,DAT_1003f3f4,
               uVar1,param_1,iVar4,param_3);
  pcVar5 = *(code **)(iVar6 + 8);
  (**(code **)(iVar6 + 0x10))();
  uVar2 = (*pcVar5)();
  uVar1 = 0;
  if (*DAT_1003f3dc != iVar4) {
    uVar2 = FUN_1013cdc0();
    uVar1 = extraout_r2;
  }
  iVar3 = *DAT_1003f37c;
  FUN_1009eeac(DAT_1003f380,*DAT_1003f384,uVar1,DAT_1003f384,uVar2,iVar3,uVar1,unaff_lr);
  if (*DAT_1003f37c != iVar3) {
    FUN_1013cdc0();
  }
  FUN_1012d1ae(DAT_1003f380);
  return;
}

