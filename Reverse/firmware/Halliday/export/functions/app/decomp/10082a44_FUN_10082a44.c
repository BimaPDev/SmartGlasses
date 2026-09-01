/* FUN_10082a44 @ 0x10082a44 */

undefined4 FUN_10082a44(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_10082840(*(undefined4 *)(param_1 + 0x10));
    uVar2 = 0;
    if (iVar1 != 0) {
      FUN_100a5b78(((int)PTR_DAT_10082a7c - (int)PTR_DAT_10082a78) * 0x20 & 0xff00U | 0x1a40011,
                   PTR_s_rtc_acts_get_time_10082a84,PTR_s_failed_to_get_datetime_10082a80,
                   PTR_DAT_10082a78,param_4);
      uVar2 = 0xfffffff3;
    }
  }
  return uVar2;
}

