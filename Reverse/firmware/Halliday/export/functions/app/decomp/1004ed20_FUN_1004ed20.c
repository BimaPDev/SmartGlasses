/* FUN_1004ed20 @ 0x1004ed20 */

void FUN_1004ed20(byte param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1004ed78;
  iVar3 = *DAT_1004ed74;
  *(byte *)(DAT_1004ed78 + 4) = param_1;
  *(short *)(iVar1 + 2) = (short)(((ulonglong)param_1 << 6) / 100) + 0xc0;
  iVar2 = DAT_1004ed7c;
  FUN_1004ec7c();
  FUN_100a5b78(DAT_1004ed84 | (iVar2 - DAT_1004ed80) * 0x20 & 0xff00U,DAT_1004ed8c,DAT_1004ed88,
               *(undefined1 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 2));
  if (*DAT_1004ed74 != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

