/* FUN_1003f160 @ 0x1003f160 */

undefined4 FUN_1003f160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *extraout_r2;
  int iVar4;
  int extraout_r3;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int iStack_10;
  
  iVar4 = *(int *)PTR_DAT_1003f1d4;
  iStack_10 = param_1;
  if ((param_1 == 0) || (iVar1 = FUN_1011ea10(), iVar1 == 0)) {
    if (*(int *)PTR_DAT_1003f1d4 == iVar4) {
      return 0;
    }
  }
  else {
    FUN_10119dc2(PTR_s_bt_manager_set_bt_ble_name__s_1003f1d8,param_1);
    uVar2 = FUN_1011ea10(param_1);
    thunk_FUN_1007375c(PTR_s_BT_LE_NAME_1003f1dc,param_1,uVar2);
    uVar2 = FUN_1011ea10(param_1);
    thunk_FUN_1007375c(PTR_s_BT_NAME_1014e439_0xe_1003f1e0,param_1,uVar2);
    FUN_1012d1ae(PTR_s_BT_NAME_1014e439_0xe_1003f1e0);
    FUN_1012d1ae(PTR_s_BT_LE_NAME_1003f1dc);
    local_18 = (undefined4 *)0x0;
    local_1c = extraout_r1;
    if (*(int *)PTR_DAT_1003f1d4 == iVar4) goto LAB_1003f1b8;
  }
  FUN_1013cdc0();
  local_1c = extraout_r1_00;
  local_18 = extraout_r2;
  iVar4 = extraout_r3;
LAB_1003f1b8:
  local_20 = param_1;
  local_14 = iVar4;
  uVar3 = FUN_1011ea10();
  iVar4 = DAT_100c8030;
  if (uVar3 < 0x21) {
    iVar1 = FUN_1011ea18(DAT_100c8030 + 0x178,param_1);
    if (iVar1 != 0) {
      FUN_1013d428(iVar4 + 0x178,param_1,uVar3,0xa0);
      *(undefined1 *)(iVar4 + uVar3 + 0x178) = 0;
      iVar4 = FUN_10132e28(iVar4 + 0x30);
      if (iVar4 << 0x18 < 0) {
        local_20._0_2_ = CONCAT11((char)uVar3,9);
        local_14 = 1;
        local_1c = param_1;
        local_18 = &local_20;
        FUN_100c66d8(0x2009,&local_18);
      }
      iVar4 = FUN_10131934(DAT_100c8038,DAT_100c8034,uVar3);
      if (iVar4 != 0) {
        FUN_100a5b78(DAT_100c8044 | (DAT_100c8040 - DAT_100c803c) * 0x20 & 0xff00U,DAT_100c804c,
                     DAT_100c8048);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}

