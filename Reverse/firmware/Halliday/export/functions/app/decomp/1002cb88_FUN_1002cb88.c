/* FUN_1002cb88 @ 0x1002cb88 */

void FUN_1002cb88(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1002cbf4;
  FUN_100a5b78((DAT_1002cbec - DAT_1002cbf0) * 0x20 & 0xff00U | 0x4e0033,DAT_1002cbfc,DAT_1002cbf8,
               *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 9),param_2,param_3);
  if (*DAT_1002cbf4 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5174((uint)*(byte *)(param_1 + 10) * 0xe10 + (uint)*(byte *)(param_1 + 9) * 0x3c,
               param_2 + 3U & 0xff,1);
  return;
}

