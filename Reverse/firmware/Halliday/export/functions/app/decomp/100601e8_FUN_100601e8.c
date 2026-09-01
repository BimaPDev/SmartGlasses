/* FUN_100601e8 @ 0x100601e8 */

bool FUN_100601e8(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_1011c0f4(0x44,0x10,1,DAT_10060234,0xc,1);
  if ((iVar1 == 0) && (iVar1 = FUN_1011c114(0x44,0x20,1,DAT_10060238,0x14,0), iVar1 == 0)) {
    iVar1 = FUN_1011c114(0x44,0x30,1,DAT_1006023c,0x14,1);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

