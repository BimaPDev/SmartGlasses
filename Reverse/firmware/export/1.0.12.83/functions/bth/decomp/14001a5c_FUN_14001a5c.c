/* FUN_14001a5c @ 0x14001a5c */

void FUN_14001a5c(void)

{
  int iVar1;
  
  iVar1 = DAT_14001a78;
  if ((*(uint *)(DAT_14001a78 + 0x34) & 0x100) == 0) {
    *(uint *)(DAT_14001a78 + 0x34) = *(uint *)(DAT_14001a78 + 0x34) | 0x100;
    do {
    } while (*(int *)(iVar1 + 0xc) << 0x1f < 0);
  }
  return;
}

