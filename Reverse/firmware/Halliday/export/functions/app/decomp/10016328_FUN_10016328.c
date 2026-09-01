/* FUN_10016328 @ 0x10016328 */

void FUN_10016328(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_10016370;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_100a4c48((undefined1 *)(param_1 + 0x38),0,param_3,0,param_1,iVar1,param_3);
  if (*DAT_10016370 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_10016378 - DAT_10016374) * 0x20 & 0xff00U | 0x2c0031,DAT_10016380,DAT_1001637c);
  return;
}

