/* FUN_1000ac58 @ 0x1000ac58 */

void FUN_1000ac58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1000acc0;
  iVar2 = *DAT_1000acc4;
  FUN_10131bc4(DAT_1000acc8,param_2,param_3,0,param_1,iVar2,param_3);
  *(undefined1 *)(iVar1 + 5) = 0;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xf0;
  *(undefined2 *)(iVar1 + 6) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_1000a494();
  FUN_10009a7c();
  thunk_FUN_101146e4(iVar1 + 0x10,DAT_1000accc);
  FUN_100be7e0(4,0);
  FUN_10119dc2(DAT_1000acd0);
  if (*DAT_1000acc4 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_10119dc2(DAT_1000acd4,*(byte *)(iVar1 + 10) & 0xf);
  return;
}

