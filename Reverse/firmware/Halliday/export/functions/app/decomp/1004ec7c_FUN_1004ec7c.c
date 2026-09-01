/* FUN_1004ec7c @ 0x1004ec7c */

void FUN_1004ec7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_1004ecd4;
  iVar2 = *DAT_1004ecd8;
  thunk_FUN_1009efe8(DAT_1004ecdc,DAT_1004ecd4,6,0,param_1,param_2,param_3);
  FUN_1012d1ae(DAT_1004ecdc);
  FUN_100a5b78((DAT_1004ece4 - DAT_1004ece0) * 0x20 & 0xff00U | 0x4d0033,DAT_1004ecec,DAT_1004ece8,
               *puVar1,*(undefined2 *)(puVar1 + 2),puVar1[4]);
  if (*DAT_1004ecd8 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

