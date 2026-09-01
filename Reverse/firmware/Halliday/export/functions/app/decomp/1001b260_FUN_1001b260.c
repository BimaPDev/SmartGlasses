/* FUN_1001b260 @ 0x1001b260 */

void FUN_1001b260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1001b2a4;
  FUN_100a5b78((DAT_1001b2a8 - DAT_1001b2ac) * 0x20 & 0xff00U | 0x510031,DAT_1001b2b4,DAT_1001b2b0,
               DAT_1001b2ac,param_1,iVar1,param_3);
  if (*DAT_1001b2a4 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a3170(1);
  return;
}

