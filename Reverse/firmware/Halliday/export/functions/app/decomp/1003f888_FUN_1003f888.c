/* FUN_1003f888 @ 0x1003f888 */

int FUN_1003f888(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r2_01;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  puVar1 = PTR_s_GPIOA_1003f9c0;
  iVar4 = *(int *)PTR_DAT_1003f9bc;
  uVar13 = FUN_10112e84(PTR_s_GPIOA_1003f9c0,param_2,param_3,0);
  uVar8 = (uint)uVar13;
  uVar3 = extraout_r2;
  if (uVar8 != 0) goto LAB_1003f8d4;
  FUN_100a5b78(((int)PTR_DAT_1003f9c8 - (int)PTR_DAT_1003f9c4) * 0x20 & 0xff00U | 0x1220012,
               PTR_s_battery_power_enable_1003f9d0,PTR_s_Failed_to_bind_mic_GPIO__d__s__1003f9cc,
               0x12,puVar1);
  iVar9 = -1;
  while (*(int *)PTR_DAT_1003f9bc != iVar4) {
    uVar13 = FUN_1013cdc0();
    uVar3 = extraout_r2_00;
LAB_1003f8d4:
    iVar9 = (int)uVar13;
    puVar11 = *(undefined4 **)(iVar9 + 8);
    iVar5 = **(int **)(iVar9 + 4);
    puVar10 = *(uint **)(iVar9 + 0x10);
    iVar9 = iVar5 << 0xd;
    if (-1 < iVar9) {
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1003f9dc,
                   PTR_s__cfg_>port_pin_mask____gpio_port_1003f9d8,
                   PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x34c,iVar9,
                   (int)((ulonglong)uVar13 >> 0x20));
      FUN_10119dc2(PTR_s_Unsupported_pin_1003f9e0);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x34c,uVar3,iVar5);
    }
    *puVar10 = *puVar10 & 0xfffbffff;
    iVar9 = (*(code *)*puVar11)(uVar8,0x12,0x200);
    if (iVar9 == 0) {
      piVar12 = *(int **)(uVar8 + 0x10);
      iVar5 = **(int **)(uVar8 + 4);
      uVar2 = iVar5 << 0xd;
      lVar14 = (ulonglong)uVar2 << 0x20;
      if (-1 < (int)uVar2) {
        FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1003f9dc,
                     PTR_s__cfg_>port_pin_mask____gpio_port_1003f9d8,
                     PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x50a,0,uVar2);
        FUN_10119dc2(PTR_s_Unsupported_pin_1003f9e0);
        lVar14 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x50a,extraout_r2_01,
                              iVar5);
      }
      iVar5 = *piVar12 << 0xd;
      if (iVar5 < 0) {
        if (param_1 != 0) {
          param_1 = 1;
        }
      }
      else {
        param_1 = (uint)(param_1 == 0);
      }
      iVar6 = **(int **)(uVar8 + 4) << 0xd;
      if (-1 < iVar6) {
        FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1003f9dc,
                     PTR_s__cfg_>port_pin_mask____gpio_port_1003f9d8,
                     PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x4e0,lVar14);
        FUN_10119dc2(PTR_s_Unsupported_pin_1003f9e0);
        FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1003f9d4,0x4e0,iVar5,iVar6);
      }
      if (param_1 == 0) {
        pcVar7 = *(code **)(*(int *)(uVar8 + 8) + 0x10);
      }
      else {
        pcVar7 = *(code **)(*(int *)(uVar8 + 8) + 0xc);
      }
      (*pcVar7)(uVar8,0x40000);
    }
    else {
      uVar8 = ((int)PTR_DAT_1003f9c8 - (int)PTR_DAT_1003f9c4) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_1003f9e4 | uVar8,PTR_s_battery_power_enable_1003f9d0,DAT_1003f9e8,0x12);
    }
  }
  return iVar9;
}

