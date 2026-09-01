/* FUN_10022b4c @ 0x10022b4c */

void FUN_10022b4c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r7;
  
  iVar1 = DAT_10022bf4;
  uVar7 = 0;
  iVar4 = *(int *)PTR_DAT_10022bf8;
  FUN_100a5b78(((int)PTR_DAT_10022bfc - (int)PTR_DAT_10022c00) * 0x20 & 0xff00U | 0x2080031,
               PTR_s_appNotifyCfg_setPin_10022c0c,PTR_s_APP_GLOBAL_CFG_FILE___func_____s_10022c04,
               PTR_s_appNotifyCfg_setPin_10022c08,param_1);
  FUN_1011ea48(iVar1,0,0x28e);
  FUN_10021cec(iVar1);
  puVar5 = param_1 + 1;
  *(undefined1 *)(iVar1 + 2) = *param_1;
  iVar6 = iVar1;
  do {
    if ((uVar7 & 0xff) < (uint)*(byte *)(iVar1 + 2)) {
      uVar7 = uVar7 + 1;
      unaff_r7 = iVar6 + 0x41;
      if (uVar7 == 6) goto LAB_10022bac;
    }
    else {
LAB_10022bac:
      FUN_1002222c(DAT_10022bf4);
      iVar2 = FUN_100227b4(PTR_s_gAppnotifyCfg_10022c10,DAT_10022bf4,0x55a);
      if (iVar2 < 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = 8;
      }
      if (*(int *)PTR_DAT_10022bf8 == iVar4) {
        return;
      }
      FUN_1013cdc0(uVar3);
    }
    *(undefined1 *)(unaff_r7 + -0x3e) = *puVar5;
    FUN_1011ea40(iVar6 + 4,puVar5 + 1);
    puVar5 = puVar5 + 1 + *(byte *)(unaff_r7 + -0x3e);
    iVar6 = unaff_r7;
  } while( true );
}

