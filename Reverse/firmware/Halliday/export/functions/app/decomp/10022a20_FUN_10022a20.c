/* FUN_10022a20 @ 0x10022a20 */

void FUN_10022a20(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_10022a98;
  iVar5 = *(int *)PTR_DAT_10022a94;
  FUN_100a5b78(((int)PTR_DAT_10022a8c - (int)PTR_DAT_10022a90) * 0x20 & 0xff00U | 0x1f00031,
               PTR_s_appNotifyCfg_setStyle_10022aa4,PTR_s_APP_GLOBAL_CFG_FILE___func_____s_10022a9c,
               PTR_s_appNotifyCfg_setStyle_10022aa0,param_1,iVar5,param_3);
  FUN_1011ea48(puVar1,0,0x28e);
  FUN_10021cec(puVar1);
  puVar2 = PTR_s_gAppnotifyCfg_10022aa8;
  *puVar1 = *param_1;
  iVar3 = FUN_100227b4(puVar2,puVar1,0x55a);
  if (iVar3 < 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = 8;
  }
  if (*(int *)PTR_DAT_10022a94 != iVar5) {
    FUN_1013cdc0(uVar4);
  }
  return;
}

