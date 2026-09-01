/* FUN_10012bb4 @ 0x10012bb4 */

void FUN_10012bb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10012c04;
  FUN_10138b9c(0xf,param_2,param_3,0,param_1,iVar1,param_3);
  FUN_1012d1ae(0);
  FUN_100f0298(0);
  if (*DAT_10012c04 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_10012c0c - DAT_10012c08) * 0x20 & 0xff00U | 0x500031,DAT_10012c14,DAT_10012c10);
  return;
}

