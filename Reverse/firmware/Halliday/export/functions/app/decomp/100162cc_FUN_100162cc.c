/* FUN_100162cc @ 0x100162cc */

void FUN_100162cc(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10016314;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_100a4afc((undefined1 *)(param_1 + 0x38));
  if (*DAT_10016314 != iVar1) {
    FUN_1013cdc0();
  }
  FUN_100a5b78((DAT_1001631c - DAT_10016318) * 0x20 & 0xff00U | 0x250031,DAT_10016324,DAT_10016320);
  return;
}

