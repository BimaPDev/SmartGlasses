/* FUN_100bdac8 @ 0x100bdac8 */

char * FUN_100bdac8(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_100bdae8;
  iVar2 = 0;
  if (*DAT_100bdae8 != '\0') {
    if (DAT_100bdae8[8] != '\0') {
      return (char *)0x0;
    }
    iVar2 = 1;
  }
  DAT_100bdae8[iVar2 * 8] = (byte)iVar2 | 0x80;
  return pcVar1 + iVar2 * 8;
}

