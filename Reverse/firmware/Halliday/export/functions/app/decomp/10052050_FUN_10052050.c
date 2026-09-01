/* FUN_10052050 @ 0x10052050 */

void FUN_10052050(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_r3;
  
  iVar2 = *(int *)PTR_DAT_100520c4;
  iVar1 = FUN_10051fdc();
  FUN_100a5b78(((int)PTR_DAT_100520c8 - (int)PTR_DAT_100520cc) * 0x20 & 0xff00U | 0xb30033,
               PTR_s_stream_ble_tx_cfg_changed_100520d8,PTR_s__s_attr__p__enable__d_100520d4,
               PTR_s_WEST_TOPDIR_application_bt_watch_100520d0,param_1,param_2);
  iVar1 = *(int *)(iVar1 + 0x54);
  *(byte *)(iVar1 + 0x2c) = *(byte *)(iVar1 + 0x2c) & 0xf9 | (byte)((param_2 & 3) << 1);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x28);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (*(int *)PTR_DAT_100520c4 == iVar2) {
      return;
    }
  }
  else if (*(int *)PTR_DAT_100520c4 == iVar2) goto LAB_100520aa;
  FUN_1013cdc0();
  UNRECOVERED_JUMPTABLE = extraout_r3;
LAB_100520aa:
                    /* WARNING: Could not recover jumptable at 0x100520b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

