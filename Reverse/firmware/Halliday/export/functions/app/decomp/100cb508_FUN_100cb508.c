/* FUN_100cb508 @ 0x100cb508 */

char FUN_100cb508(void)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_100cb51c;
  cVar2 = *DAT_100cb51c + '\x01';
  if (cVar2 == '\0') {
    cVar2 = '\x01';
  }
  *DAT_100cb51c = cVar2;
  return *pcVar1;
}

