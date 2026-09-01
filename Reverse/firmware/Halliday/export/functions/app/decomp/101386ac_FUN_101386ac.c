/* FUN_101386ac @ 0x101386ac */

int FUN_101386ac(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4,char param_5)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_100e4184();
  if (iVar1 != 0) {
    pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8,5);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    *pbVar2 = *pbVar2 & 0xf0 | param_3 & 0xf;
    pbVar2[1] = pbVar2[1] & 7 | 0x48;
    pbVar2[2] = 0x7c;
    pbVar2[3] = param_4 & 0x7f | param_5 << 7;
  }
  return iVar1;
}

