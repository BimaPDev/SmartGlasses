/* FUN_10041e0c @ 0x10041e0c */

void FUN_10041e0c(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  int extraout_r3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_20 = CONCAT44(param_2,param_1);
  iStack_14 = *DAT_10041e30;
  uStack_18 = 0;
  if (*DAT_10041e30 != iStack_14) {
    uStack_20 = FUN_1013cdc0();
    uStack_18 = extraout_r2;
    iStack_14 = extraout_r3;
  }
  iVar3 = *(int *)PTR_DAT_1000e590;
  FUN_1011ea48(&uStack_20,0,0x14,0);
  uVar1 = uStack_20;
  uStack_20._0_4_ = CONCAT22(0xd208,(undefined2)uStack_20);
  uStack_20._4_4_ = CONCAT31(SUB83(uVar1,5),1);
  FUN_100a5b78(DAT_1000e59c | ((int)PTR_DAT_1000e598 - (int)PTR_DAT_1000e594) * 0x20 & 0xff00U,
               DAT_1000e5a4,DAT_1000e5a0);
  uVar2 = FUN_1009e224();
  FUN_1009ece8(uVar2,&uStack_20);
  if (*(int *)PTR_DAT_1000e590 != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

