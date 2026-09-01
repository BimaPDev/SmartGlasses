/* FUN_10042b3c @ 0x10042b3c */

void FUN_10042b3c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (99 < param_1) {
    param_1 = 100;
  }
  iVar1 = *DAT_10042ba0;
  *DAT_10042ba4 = (char)param_1;
  FUN_10042a08();
  FUN_100a5b78((DAT_10042bac - DAT_10042ba8) * 0x20 & 0xff00U | 0x2b0032,DAT_10042bb4,DAT_10042bb0,
               param_1,param_1,param_2,param_3);
  FUN_10067ae0(param_1 / 10);
  FUN_10048728();
  if (*DAT_10042ba0 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_10042ae4();
  return;
}

