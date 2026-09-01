/* FUN_10048018 @ 0x10048018 */

void FUN_10048018(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_28 [2];
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_20;
  int iStack_18;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = *DAT_10048078;
  iStack_18 = param_1;
  uStack_10 = param_3;
  FUN_100a5b78((DAT_10048070 - DAT_10048074) * 0x20 & 0xff00U | 0xe40031,DAT_10048080,DAT_1004807c,
               param_1);
  if (param_1 == 0) {
    if (*DAT_10048078 == local_14) {
      uVar1 = 0xd9;
      goto LAB_1001b848;
    }
LAB_10048050:
    FUN_1013cdc0();
  }
  else if (*DAT_10048078 != local_14) goto LAB_10048050;
  uVar1 = 0xd8;
LAB_1001b848:
  local_14 = *DAT_1001b88c;
  FUN_1011ea48(auStack_28,0,0x14,0);
  local_26 = 0xcc;
  local_20 = 3;
  local_25 = uVar1;
  FUN_1009ece8(DAT_1001b890,auStack_28);
  if (*DAT_1001b88c != local_14) {
    FUN_1013cdc0();
  }
  return;
}

