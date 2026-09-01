/* FUN_10060e18 @ 0x10060e18 */

byte FUN_10060e18(void)

{
  int iVar1;
  byte bVar2;
  undefined4 in_r3;
  
  iVar1 = DAT_10060e50;
  FUN_100a5b78(DAT_10060e54 | (DAT_10060e4c - DAT_10060e48) * 0x20 & 0xff00U,DAT_10060e5c,
               DAT_10060e58,*(undefined1 *)(DAT_10060e50 + 0x2c),in_r3);
  bVar2 = FUN_10060880(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10));
  return bVar2 ^ 1;
}

