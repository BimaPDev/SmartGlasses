/* FUN_100a2b5c @ 0x100a2b5c */

void FUN_100a2b5c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_100a2ba4;
  FUN_1011dbf4(iVar2 + 0x10,0xffffffff);
  iVar1 = DAT_100a2bac - DAT_100a2ba8;
  *(char *)(iVar2 + 0x24) = *(char *)(iVar2 + 0x24) + '\x01';
  FUN_100a5b78(iVar1 * 0x20 & 0xff00U | 0x1a20031,DAT_100a2bb4,DAT_100a2bb0);
  thunk_FUN_10113e2c(iVar2 + 0x10);
  return;
}

