/* FUN_10133d42 @ 0x10133d42 */

int FUN_10133d42(void)

{
  int iVar1;
  
  iVar1 = FUN_100ca22c();
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xd) != '\x06')) {
    FUN_100ca13c();
    iVar1 = 0;
  }
  return iVar1;
}

