/* FUN_10060178 @ 0x10060178 */

undefined4 FUN_10060178(byte param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10060f48(0x44);
  pbVar1 = DAT_100601c0;
  iVar2 = FUN_1011c114(0x44,0xd0,1,DAT_100601c0,2,0);
  if (iVar2 == 0) {
    *pbVar1 = *pbVar1 & 0xcf | (param_1 & 3) << 4;
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

