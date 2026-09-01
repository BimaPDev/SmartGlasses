/* FUN_10016530 @ 0x10016530 */

void FUN_10016530(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1001656c;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfd | (*(byte *)(param_1 + 0x49) ^ 2) & 2
  ;
  if (*DAT_1001656c != iVar1) {
    param_1 = FUN_1013cdc0();
  }
  FUN_100174e0(param_1,1);
  return;
}

