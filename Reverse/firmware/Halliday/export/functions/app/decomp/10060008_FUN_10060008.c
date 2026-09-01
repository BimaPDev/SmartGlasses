/* FUN_10060008 @ 0x10060008 */

undefined4 FUN_10060008(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = (DAT_10060074 - DAT_10060070) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_10060078 | uVar5,DAT_10060080,DAT_1006007c,DAT_10060070,param_1,param_2);
  FUN_10060f48(0x44);
  pbVar1 = DAT_10060084;
  iVar3 = FUN_1011c114(0x44,0xd0,1,DAT_10060084,2,0);
  uVar2 = DAT_1006008c;
  uVar4 = DAT_10060080;
  if (iVar3 == 0) {
    uVar5 = DAT_10060088 | uVar5;
    *pbVar1 = *pbVar1 | 2;
    FUN_100a5b78(uVar5,uVar4,uVar2);
    iVar3 = FUN_1011c14c(0x44,0xd0,1,pbVar1,2,1);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

