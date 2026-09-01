/* FUN_100600ac @ 0x100600ac */

undefined4 FUN_100600ac(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10060f48(0x44);
  pbVar1 = DAT_10060110;
  iVar2 = FUN_1011c114(0x44,0xd0,1,DAT_10060110,2,0);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_1006011c | (DAT_10060118 - DAT_10060114) * 0x20 & 0xff00U,DAT_10060124,
                 DAT_10060120);
    *pbVar1 = *pbVar1 & 0xf2 | 5;
    iVar2 = FUN_1011c14c(0x44,0xd0,1,pbVar1,2,1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

