/* FUN_10077c0c @ 0x10077c0c */

void FUN_10077c0c(void)

{
  char cVar1;
  
  cVar1 = *DAT_10077c20;
  *DAT_10077c20 = cVar1 + -1;
  if ((char)(cVar1 + -1) == '\0') {
    *DAT_10077c24 = 0;
  }
  return;
}

