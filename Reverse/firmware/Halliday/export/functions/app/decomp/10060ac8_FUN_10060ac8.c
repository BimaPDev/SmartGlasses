/* FUN_10060ac8 @ 0x10060ac8 */

void FUN_10060ac8(int param_1,int param_2)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  FUN_100a5b78((DAT_10060b50 - DAT_10060b4c) * 0x20 & 0xff00U | 0xd10032,DAT_10060b58,DAT_10060b54,
               param_1,param_2,param_2);
  uVar2 = FUN_10060664(*(undefined4 *)(param_1 + 8),0x12,DAT_10060b5c);
  if (param_1 + 0x10 == 0) {
    FUN_10119dc2(DAT_10060b68,DAT_10060b64,DAT_10060b60,0x553,uVar2);
    FUN_10119dc2(DAT_10060b6c);
    FUN_1011a1f0(DAT_10060b60,0x553,extraout_r2,extraout_r3);
  }
  *(undefined4 *)(param_1 + 0x14) = DAT_10060b70;
  *(undefined4 *)(param_1 + 0x18) = 0x40000;
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1c);
  if (param_2 == 0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x10060b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(int *)(param_1 + 8),param_1 + 0x10,uVar1);
  return;
}

