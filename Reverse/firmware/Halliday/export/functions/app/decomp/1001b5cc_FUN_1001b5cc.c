/* FUN_1001b5cc @ 0x1001b5cc */

void FUN_1001b5cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1001b610;
  FUN_10138b9c(0xc,param_2,param_3,0,param_1,iVar1,param_3);
  if (*DAT_1001b610 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_1001b618 - DAT_1001b614) * 0x20 & 0xff00U | 0x370031,DAT_1001b620,DAT_1001b61c);
  return;
}

