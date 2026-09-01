/* FUN_10079d50 @ 0x10079d50 */

void FUN_10079d50(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  uVar2 = 1 << (param_2 & 0xff);
  uVar1 = **(uint **)(param_1 + 4);
  puVar4 = *(undefined4 **)(param_1 + 8);
  puVar3 = *(uint **)(param_1 + 0x10);
  if ((uVar2 & uVar1) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079dbc,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10079db8,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079db4,0x34c,param_1,param_2);
    FUN_10119dc2(PTR_s_Unsupported_pin_10079dc0);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10079db4,0x34c,param_3,uVar1);
  }
  uVar1 = *puVar3;
  if (param_3 == 0x100) {
    uVar1 = uVar1 & ~uVar2;
  }
  else {
    uVar1 = uVar1 | uVar2;
  }
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x10079db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1,param_2,param_3);
  return;
}

