/* FUN_1005fb64 @ 0x1005fb64 */

undefined4 FUN_1005fb64(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN_1013d02e(param_1 - param_2);
  uVar3 = ((int)PTR_DAT_1005fbdc - (int)PTR_DAT_1005fbd8) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x3900034,PTR_s_iqs7222c_slide_precess_1005fbe4,
               PTR_s_iqs777c_is_press__d__slide_value_1005fbe0,0,param_1,param_2,uVar1);
  if (uVar1 < 0x1f41) {
    uVar2 = 0;
  }
  else if (param_2 < param_1) {
    FUN_100a5b78(DAT_1005fbe8 | uVar3,PTR_s_iqs7222c_slide_precess_1005fbe4,DAT_1005fbec);
    FUN_10060db0(0xb,0);
    uVar2 = 0xb;
  }
  else {
    FUN_100a5b78(DAT_1005fbf0 | uVar3,PTR_s_iqs7222c_slide_precess_1005fbe4,DAT_1005fbf4);
    FUN_10060db0(0xc,0);
    uVar2 = 0xc;
  }
  return uVar2;
}

