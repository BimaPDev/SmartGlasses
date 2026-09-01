/* FUN_10079c44 @ 0x10079c44 */

void FUN_10079c44(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  uVar9 = CONCAT44(param_2,param_1);
  puVar8 = *(uint **)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  puVar7 = *(uint **)(param_1 + 0x10);
  uVar2 = param_3;
  if ((param_3 & 0x6000) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079d30,
                 PTR_s__flags_____1U_<<_13)___(1U_<<_14_10079d2c,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2dc,param_1,param_2);
    FUN_10119dc2(PTR_LAB_10079d34);
    uVar9 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2dc,param_3,param_4);
    uVar2 = extraout_r2;
  }
  if ((param_3 & 0x74000) == 0x64000) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079d30,
                 PTR_s___flags____1U_<<_14))____0)____(_10079d38,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2df,uVar9);
    FUN_10119dc2(PTR_s_Only_one_of_GPIO_INT_LOW_0__GPIO_10079d3c);
    uVar1 = 0x2df;
    uVar3 = 0x64000;
  }
  else {
    if ((param_3 & 0x64000) != 0x4000) goto LAB_10079caa;
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079d30,DAT_10079d48,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2e6,uVar9);
    FUN_10119dc2(DAT_10079d4c);
    uVar1 = 0x2e6;
    uVar3 = 0x4000;
  }
  uVar9 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,uVar1,uVar2,uVar3);
  uVar2 = extraout_r2_00;
LAB_10079caa:
  uVar4 = *puVar8;
  uVar5 = 1 << (param_2 & 0xff);
  if ((uVar5 & uVar4) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079d30,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10079d40,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2ec,uVar9);
    FUN_10119dc2(PTR_s_Unsupported_pin_10079d44);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10079d28,0x2ec,uVar2,uVar4);
  }
  if (((int)(param_3 << 0x10) < 0) && ((uVar5 & *puVar7) != 0)) {
    param_3 = param_3 ^ 0x60000;
  }
                    /* WARNING: Could not recover jumptable at 0x10079cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar6 + 0x18))(param_1,param_2,param_3 & 0x16000,param_3 & 0x60000);
  return;
}

