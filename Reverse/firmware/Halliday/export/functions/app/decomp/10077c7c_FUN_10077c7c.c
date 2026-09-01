/* FUN_10077c7c @ 0x10077c7c */

void FUN_10077c7c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  undefined8 uVar6;
  
  iVar3 = **(int **)(param_1 + 4);
  iVar2 = iVar3 << 5;
  piVar5 = *(int **)(param_1 + 0x10);
  iVar1 = param_1;
  if (-1 < iVar2) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10077d04,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10077d00,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10077cfc,0x50a,param_1,iVar2);
    FUN_10119dc2(PTR_s_Unsupported_pin_10077d08);
    uVar6 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10077cfc,0x50a,param_3,iVar3);
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    iVar1 = (int)uVar6;
  }
  iVar3 = *piVar5 << 5;
  if (iVar3 < 0) {
    param_2 = param_2 ^ 1;
  }
  iVar4 = **(int **)(param_1 + 4) << 5;
  if (-1 < iVar4) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10077d04,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10077d00,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10077cfc,0x4e0,iVar1,iVar2);
    FUN_10119dc2(PTR_s_Unsupported_pin_10077d08);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10077cfc,0x4e0,iVar3,iVar4);
  }
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x10077cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,0x4000000);
  return;
}

