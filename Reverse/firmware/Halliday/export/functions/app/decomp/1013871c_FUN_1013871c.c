/* FUN_1013871c @ 0x1013871c */

int FUN_1013871c(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_100e4184();
  if (iVar1 != 0) {
    pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    *pbVar2 = *pbVar2 & 0xf0 | param_3 & 0xf;
    pbVar2[1] = 0x48;
    pbVar2[4] = 0x19;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[5] = 0x58;
    pbVar2[6] = param_4;
  }
  return iVar1;
}

