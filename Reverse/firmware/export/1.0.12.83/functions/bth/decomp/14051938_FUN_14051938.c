/* FUN_14051938 @ 0x14051938 */

char FUN_14051938(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_14051948 + 0x123);
  if (cVar1 == -1) {
    cVar1 = *(char *)(DAT_14051948 + 0x121);
  }
  return cVar1;
}

