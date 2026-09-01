/* FUN_101386f0 @ 0x101386f0 */

int FUN_101386f0(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_100e4184();
  if (iVar1 != 0) {
    pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8,3);
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = param_4;
    *pbVar2 = *pbVar2 & 0xf0 | param_3 & 0xf;
    pbVar2[1] = 0xff;
  }
  return iVar1;
}

