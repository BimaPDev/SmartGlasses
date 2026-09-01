/* FUN_1007a48c @ 0x1007a48c */

void FUN_1007a48c(undefined2 param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_1007a4ac;
  bVar1 = *(byte *)(DAT_1007a4ac + 0x30);
  *(undefined2 *)(DAT_1007a4ac + (uint)bVar1 * 2) = param_1;
  *(char *)(iVar2 + 0x30) = (char)((bVar1 + 1) % 0x18);
  FUN_1007a430();
  return;
}

