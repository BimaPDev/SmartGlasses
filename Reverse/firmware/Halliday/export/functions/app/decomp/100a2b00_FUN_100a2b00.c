/* FUN_100a2b00 @ 0x100a2b00 */

void FUN_100a2b00(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100a2b44;
  FUN_1011dbf4(iVar2 + 0x10,0xffffffff);
  iVar1 = DAT_100a2b48;
  *(char *)(iVar2 + 0x24) = *(char *)(iVar2 + 0x24) + -1;
  FUN_100a5b78(DAT_100a2b50 | (DAT_100a2b4c - iVar1) * 0x20 & 0xff00U,DAT_100a2b58,DAT_100a2b54);
  thunk_FUN_10113e2c(iVar2 + 0x10);
  return;
}

