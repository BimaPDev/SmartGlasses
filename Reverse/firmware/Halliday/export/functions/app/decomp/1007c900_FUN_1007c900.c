/* FUN_1007c900 @ 0x1007c900 */

void FUN_1007c900(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_14;
  
  iVar1 = DAT_1007ca68;
  uVar9 = *(uint *)(DAT_1007ca68 + 0x1d0);
  local_14 = param_4;
  iVar5 = FUN_1011ed20(1,&local_14,param_3,param_4,param_1,param_2,param_3);
  uVar8 = (DAT_1007ca6c - DAT_1007ca70) * 0x20 & 0xff00;
  if (iVar5 == 0) {
    uVar9 = local_14 & 0xff;
    FUN_100a5b78(DAT_1007cac8 | uVar8,DAT_1007ca84,DAT_1007cacc,uVar9);
    FUN_1007c100(0xf800,uVar9 << 0xb);
  }
  else {
    uVar9 = (uVar9 & 0xffff) >> 0xb;
    FUN_100a5b78(DAT_1007ca74 | uVar8,DAT_1007ca7c,DAT_1007ca78);
  }
  FUN_100a5b78(DAT_1007ca80 | uVar8,DAT_1007ca84,DAT_1007ca88,uVar9);
  uVar9 = *(uint *)(iVar1 + 0x1d0);
  iVar5 = FUN_1011ed20(0,&local_14);
  if (iVar5 == 0) {
    uVar9 = local_14 & 0xff;
    FUN_100a5b78(DAT_1007cad0 | uVar8,DAT_1007ca84,DAT_1007cad4,uVar9);
    FUN_1007c100(0x3e0,uVar9 << 5);
  }
  else {
    uVar9 = (uVar9 & 0x3ff) >> 5;
    FUN_100a5b78(DAT_1007ca8c | uVar8,DAT_1007ca94,DAT_1007ca90);
  }
  FUN_100a5b78(DAT_1007ca98 | uVar8,DAT_1007ca84,DAT_1007ca9c,uVar9);
  uVar3 = DAT_1007caa0;
  uVar2 = DAT_1007ca84;
  if (uVar9 < 5) {
    bVar6 = 0x85 - (char)uVar9;
  }
  else {
    bVar6 = (char)uVar9 - 5;
  }
  uVar7 = (uint)bVar6;
  *(byte *)(iVar1 + 0x1e3) = bVar6;
  FUN_100a5b78(uVar3 | uVar8,uVar2,PTR_s_const_voltage_cal__d__offset__0x_1007caa4,uVar9,uVar7);
  uVar9 = FUN_100567c0();
  iVar5 = FUN_1011ed20(3,&local_14);
  if (iVar5 == 0) {
    uVar9 = local_14 & 0xff;
    FUN_100a5b78(DAT_1007cad8 | uVar8,DAT_1007ca84,DAT_1007cadc,uVar9,uVar7);
  }
  else {
    uVar9 = (uVar9 & 0x7ff) >> 6;
    FUN_100a5b78(uVar8 | 0x4000011,PTR_s_bat_charge_chargiadc_calibration_1007caac,
                 PTR_s_Chargiadc_cal_fail__1007caa8);
  }
  FUN_100a5b78(DAT_1007cab0 | uVar8,DAT_1007ca84,DAT_1007cab4,uVar9);
  FUN_100567a8(0x7c0,uVar9 << 6);
  uVar9 = DAT_1007cab8;
  if (*(byte *)(iVar1 + 9) < 5) {
    *(byte *)(iVar1 + 0x143) = *(byte *)(iVar1 + 9);
    bVar6 = *(byte *)(iVar1 + 0x13e) & 0xfe;
  }
  else {
    *(undefined1 *)(iVar1 + 0x143) = 4;
    bVar6 = *(byte *)(iVar1 + 0x13e) | 1;
  }
  uVar4 = DAT_1007cabc;
  uVar2 = DAT_1007ca84;
  *(byte *)(iVar1 + 0x13e) = bVar6;
  FUN_100a5b78(uVar9 | uVar8,uVar2,uVar4,*(undefined1 *)(iVar1 + 0x143));
  FUN_1011fee0(*(undefined1 *)(iVar1 + 0x143));
  uVar4 = DAT_1007cac4;
  uVar2 = DAT_1007cac0;
  *(undefined1 *)(iVar1 + 0x168) = 0xff;
  thunk_FUN_101146e4(uVar4,uVar2);
  return;
}

