/* FUN_10043300 @ 0x10043300 */

void FUN_10043300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_10043364;
  iVar1 = FUN_10112e84(PTR_s_RTC_0_10043368,param_2,param_3,0,param_1,param_1,param_3);
  if (iVar1 == 0) {
    if (*(int *)PTR_DAT_10043364 == iVar2) goto LAB_10043326;
  }
  else if (iVar2 == *(int *)PTR_DAT_10043364) {
                    /* WARNING: Could not recover jumptable at 0x10043360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1,param_1);
    return;
  }
  FUN_1013cdc0();
LAB_10043326:
  FUN_100a5b78(((int)PTR_DAT_10043370 - (int)PTR_DAT_1004336c) * 0x20 & 0xff00U | 0x220011,
               PTR_s_system_set_time_10043378,PTR_s_rtc_device_RTC_0_not_found_10043374);
  return;
}

