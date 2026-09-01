/* FUN_10022c14 @ 0x10022c14 */

void FUN_10022c14(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r7;
  
  iVar1 = DAT_10022ccc;
  iVar4 = *(int *)PTR_DAT_10022cbc;
  uVar7 = 0;
  FUN_100a5b78(DAT_10022cc8 | ((int)PTR_DAT_10022cc0 - (int)PTR_DAT_10022cc4) * 0x20 & 0xff00U,
               PTR_s_appNotifyCfg_setFilters_10022cd8,
               PTR_s_APP_GLOBAL_CFG_FILE___func_____s_10022cd4,
               PTR_s_appNotifyCfg_setFilters_10022cd0,param_1);
  FUN_1011ea48(iVar1,0,0x28e);
  FUN_10021cec(iVar1);
  puVar5 = param_1 + 1;
  *(undefined1 *)(iVar1 + 0x148) = *param_1;
  iVar6 = iVar1;
  do {
    if ((uVar7 & 0xff) < (uint)*(byte *)(iVar1 + 0x148)) {
      uVar7 = uVar7 + 1;
      unaff_r7 = iVar6 + 0x41;
      if (uVar7 == 6) goto LAB_10022c72;
    }
    else {
LAB_10022c72:
      FUN_1002222c(DAT_10022ccc);
      iVar2 = FUN_100227b4(PTR_s_gAppnotifyCfg_10022cdc,DAT_10022ccc,0x55a);
      if (iVar2 < 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = 8;
      }
      if (*(int *)PTR_DAT_10022cbc == iVar4) {
        return;
      }
      FUN_1013cdc0(uVar3);
    }
    *(undefined1 *)(unaff_r7 + 0x108) = *puVar5;
    FUN_1011ea40(iVar6 + 0x14a,puVar5 + 1);
    puVar5 = puVar5 + 1 + *(byte *)(unaff_r7 + 0x108);
    iVar6 = unaff_r7;
  } while( true );
}

