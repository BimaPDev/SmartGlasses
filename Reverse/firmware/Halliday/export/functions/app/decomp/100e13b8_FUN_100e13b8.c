/* FUN_100e13b8 @ 0x100e13b8 */

char FUN_100e13b8(void)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_100e13cc;
  cVar2 = *DAT_100e13cc + '\x01';
  if (cVar2 == '\0') {
    cVar2 = '\x01';
  }
  *DAT_100e13cc = cVar2;
  return *pcVar1;
}

