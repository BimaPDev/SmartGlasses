/* FUN_10022aac @ 0x10022aac */

void FUN_10022aac(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)PTR_DAT_10022b24;
  uVar4 = ((int)PTR_DAT_10022b28 - (int)PTR_DAT_10022b2c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10022b30 | uVar4,PTR_s_appNotifyCfg_setOnOff_10022b3c,
               PTR_s_APP_GLOBAL_CFG_FILE___func_____s_10022b38,PTR_s_appNotifyCfg_setOnOff_10022b34,
               param_1,iVar3,param_3);
  iVar1 = DAT_10022b40;
  FUN_100a5b78(uVar4 | 0x1fc0031,PTR_s_appNotifyCfg_setOnOff_10022b3c,DAT_10022b44,*param_1);
  FUN_1011ea48(iVar1,0,0x28e);
  FUN_10021cec(iVar1);
  uVar2 = DAT_10022b48;
  *(undefined1 *)(iVar1 + 1) = *param_1;
  iVar1 = FUN_100227b4(uVar2,iVar1,0x55a);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 8;
  }
  if (*(int *)PTR_DAT_10022b24 != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

