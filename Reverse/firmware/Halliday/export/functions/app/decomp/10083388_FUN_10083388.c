/* FUN_10083388 @ 0x10083388 */

void FUN_10083388(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  uVar1 = FUN_100561f8(0);
  FUN_100a5b78(((int)PTR_DAT_100833c0 - (int)PTR_DAT_100833c4) * 0x20 & 0xff00U | 0x5b0031,
               PTR_s_alarm8hz_acts_pmu_notify_100833cc,PTR_s_alarm8hz_wakeup_cur_8hz__d_100833c8,
               uVar1);
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100833ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(puVar2[1]);
    return;
  }
  return;
}

