/* FUN_100be38c @ 0x100be38c */

void FUN_100be38c(byte param_1)

{
  int iVar1;
  
  iVar1 = DAT_100be3a0;
  *(byte *)(DAT_100be3a0 + 0x14) = param_1 | *(byte *)(DAT_100be3a0 + 0x14);
  FUN_1011dc0a(iVar1 + 0x50,0);
  return;
}

