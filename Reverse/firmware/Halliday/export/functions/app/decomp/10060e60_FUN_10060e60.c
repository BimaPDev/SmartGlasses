/* FUN_10060e60 @ 0x10060e60 */

void FUN_10060e60(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x1a';
  do {
    cVar2 = cVar2 + -1;
    FUN_101153fc(2,0);
    if (cVar2 == '\0') {
      FUN_101188d0(DAT_10060e88);
      return;
    }
    iVar1 = FUN_10060e18();
  } while (iVar1 != 0);
  return;
}

