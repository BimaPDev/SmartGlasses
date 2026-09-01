/* FUN_10060664 @ 0x10060664 */

void FUN_10060664(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  uVar2 = 1 << (param_2 & 0xff);
  uVar1 = **(uint **)(param_1 + 4);
  puVar4 = *(undefined4 **)(param_1 + 8);
  puVar3 = *(uint **)(param_1 + 0x10);
  if ((uVar2 & uVar1) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100606c8,
                 PTR_s__cfg_>port_pin_mask____gpio_port_100606c4,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_100606c0,0x34c,param_1,param_2);
    FUN_10119dc2(PTR_s_Unsupported_pin_100606cc);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_100606c0,0x34c,param_3,uVar1);
  }
  UNRECOVERED_JUMPTABLE = (code *)*puVar4;
  *puVar3 = *puVar3 & ~uVar2;
                    /* WARNING: Could not recover jumptable at 0x100606be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

