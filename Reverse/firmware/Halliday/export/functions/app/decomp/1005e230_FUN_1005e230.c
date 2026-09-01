/* FUN_1005e230 @ 0x1005e230 */

void FUN_1005e230(int param_1,uint param_2,uint param_3)

{
  uint extraout_r2;
  uint uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  uVar3 = 1 << (param_2 & 0xff);
  uVar2 = **(uint **)(param_1 + 4);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar1 = param_3;
  if ((uVar3 & uVar2) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1005e2bc,
                 PTR_s__cfg_>port_pin_mask____gpio_port_1005e2b8,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_1005e2b4,0x50a,param_1,param_2);
    FUN_10119dc2(PTR_s_Unsupported_pin_1005e2c0);
    uVar5 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1005e2b4,0x50a,param_3,uVar2);
    uVar1 = extraout_r2;
  }
  if ((uVar3 & *puVar4) != 0) {
    param_3 = param_3 ^ 1;
  }
  uVar2 = **(uint **)(param_1 + 4);
  if ((uVar3 & uVar2) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1005e2bc,
                 PTR_s__cfg_>port_pin_mask____gpio_port_1005e2b8,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_1005e2b4,0x4e0,uVar5);
    FUN_10119dc2(PTR_s_Unsupported_pin_1005e2c0);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1005e2b4,0x4e0,uVar1,uVar2);
  }
  if (param_3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x1005e2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

