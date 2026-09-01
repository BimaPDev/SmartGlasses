/* FUN_1001b8c8 @ 0x1001b8c8 */

void FUN_1001b8c8(undefined4 param_1)

{
  undefined1 auStack_28 [2];
  undefined1 local_26;
  undefined4 local_20;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_1;
  if (*DAT_1001b90c == 0) {
    if (*DAT_1001b908 == *DAT_1001b908) {
      FUN_10048018();
      return;
    }
  }
  else if (*DAT_1001b908 == *DAT_1001b908) goto LAB_1001b8e8;
  param_1 = FUN_1013cdc0();
LAB_1001b8e8:
  local_14 = *(int *)PTR_DAT_1001bbd0;
  FUN_100a5b78(((int)PTR_DAT_1001bbc8 - (int)PTR_DAT_1001bbcc) * 0x20 & 0xff00U | 0xb20031,
               PTR_s_mp3_rec_switch_1001bbd8,PTR_s_mp3_rec_switch__d_1001bbd4,param_1);
  FUN_1011ea48(auStack_28,0,0x14);
  local_26 = 0xcd;
  local_20 = param_1;
  FUN_1009ece8(PTR_s_launcher_10156a52_0x1c_1001bbdc,auStack_28);
  if (*(int *)PTR_DAT_1001bbd0 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

