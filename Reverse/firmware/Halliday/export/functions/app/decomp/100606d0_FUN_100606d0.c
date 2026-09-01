/* FUN_100606d0 @ 0x100606d0 */

void FUN_100606d0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0xff);
  uVar1 = **(uint **)(param_1 + 4);
  if ((uVar2 & uVar1) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10060724,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10060720,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_1006071c,0x4e0,param_1,param_2);
    FUN_10119dc2(PTR_s_Unsupported_pin_10060728);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1006071c,0x4e0,param_3,uVar1);
  }
  if (param_3 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x10060712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

