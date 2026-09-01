/* FUN_1007d0d8 @ 0x1007d0d8 */

uint FUN_1007d0d8(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r4;
  uint uVar7;
  undefined4 unaff_r5;
  uint uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  iVar1 = DAT_1007d1d0;
  if ((*(byte *)(DAT_1007d1d0 + 0x13c) & 0x10) != 0) {
    return param_1;
  }
  FUN_1007d09c();
  uVar4 = FUN_1007d068();
  if (uVar4 == 1) {
    if (*(char *)(iVar1 + 0x1bc) != '\0') {
      return 1;
    }
    uVar4 = FUN_1007d058();
    if (*(int *)(iVar1 + 0x1c4) == 0) {
      uVar7 = (DAT_1007d1d8 - DAT_1007d1d4) * 0x20 & 0xff00;
      FUN_100a5b78(uVar7 | 0x1f80031,PTR_s_bat_charge_check_cv_state_1007d1e0,
                   PTR_s_cv_stage__d_1007d1dc,uVar4);
      uVar5 = FUN_1011fee8();
      *(undefined4 *)(iVar1 + 0x1c4) = uVar5;
      uVar4 = FUN_100a5b78(uVar7 | 0x1fa0031,PTR_s_bat_charge_check_cv_state_1007d1e0,
                           PTR_s_cv1_begin___d_1007d1e4,uVar5);
      return uVar4;
    }
    if (6 < *(byte *)(iVar1 + 9)) {
      return uVar4;
    }
    iVar6 = FUN_1011fee8();
    uVar4 = iVar6 - *(int *)(iVar1 + 0x1c4);
    if (uVar4 <= DAT_1007d1e8) {
      return uVar4;
    }
    FUN_100a5b78(DAT_1007d1ec | (DAT_1007d1d8 - DAT_1007d1d4) * 0x20 & 0xff00U,
                 PTR_s_bat_charge_check_cv_state_1007d1e0,DAT_1007d1f0);
  }
  else if (uVar4 != 2) {
    return uVar4;
  }
  FUN_1007d058();
  if (*(char *)(iVar1 + 0x1b6) == '\0') {
    uVar4 = FUN_1007cff4();
    iVar1 = DAT_1007c570;
    *(undefined1 *)(DAT_1007c570 + 0x1b6) = 1;
    *(undefined1 *)(iVar1 + 0x1b4) = 0;
    *(byte *)(iVar1 + 0x1b5) = (byte)((uint)(*(int *)(iVar1 + 0x1d0) << 0x16) >> 0x1b);
    return uVar4;
  }
  if (*(int *)(iVar1 + 0x1c8) == 0) {
    uVar4 = (DAT_1007d1d8 - DAT_1007d1d4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1007d1f4 | uVar4,PTR_s_bat_charge_check_cv_state_1007d1e0,DAT_1007d1f8,2);
    uVar5 = FUN_1011fee8();
    *(undefined4 *)(iVar1 + 0x1c8) = uVar5;
    FUN_100a5b78(uVar4 | 0x2180031,PTR_s_bat_charge_check_cv_state_1007d1e0,DAT_1007d1fc,uVar5);
  }
  puVar3 = PTR_DAT_1007c5e8;
  puVar2 = PTR_DAT_1007c5e4;
  iVar1 = DAT_1007c5e0;
  if (*(int *)(DAT_1007c5e0 + 0x1c8) != 0) {
    *(undefined1 *)(DAT_1007c5e0 + 0x1bc) = 0;
    *(undefined1 *)(iVar1 + 0x1bd) = *(undefined1 *)(iVar1 + 9);
    uVar4 = ((int)puVar3 - (int)puVar2) * 0x20 & 0xff00;
    uVar8 = *(uint *)(iVar1 + 0x1d0);
    *(ushort *)(iVar1 + 0x1c0) = (ushort)*(byte *)(iVar1 + 0xe);
    FUN_100a5b78(uVar4 | 0x3780031,PTR_s_bat_charge_adjust_current_1007c5f0,
                 PTR_s_charge_stop_current___dma_1007c5ec,*(byte *)(iVar1 + 0xe),unaff_r4,unaff_r5,
                 unaff_r6,unaff_lr);
    uVar7 = (uint)*(byte *)(iVar1 + 0x1bd);
    if (uVar7 != (uVar8 & 0xf)) {
      FUN_100a5b78(DAT_1007c5f4 | uVar4,PTR_s_bat_charge_adjust_current_1007c5f0,DAT_1007c5f8,uVar7,
                   unaff_r4,unaff_r5,unaff_r6,unaff_lr);
      FUN_1007cff4();
      FUN_1007c100(0xf,uVar7);
      return 1;
    }
  }
  return 0;
}

