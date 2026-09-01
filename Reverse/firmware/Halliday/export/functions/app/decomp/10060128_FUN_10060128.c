/* FUN_10060128 @ 0x10060128 */

undefined4 FUN_10060128(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10060f48(0x44);
  pbVar1 = DAT_10060174;
  uVar3 = 1;
  iVar2 = FUN_1011c114(0x44,0xd0,1,DAT_10060174,1,0,param_3);
  if (iVar2 == 0) {
    FUN_10060f48(0x44);
    *pbVar1 = *pbVar1 | 1;
    iVar2 = FUN_1011c14c(0x44,0xd0,1,pbVar1,1,1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

