/* FUN_100e4184 @ 0x100e4184 */

int FUN_100e4184(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_1013401c(0,0,0xffffffff,0xffffffff);
  if (iVar2 == 0) {
    FUN_100a5b78((DAT_100e4210 - DAT_100e420c) * 0x20 & 0xff00U | 0x3f0011,DAT_100e4214);
  }
  else {
    pbVar3 = (byte *)FUN_100c1fe4(iVar2 + 8,3);
    *pbVar3 = *pbVar3 & 0xf0 | (byte)(param_2 << 1) & 0xf;
    if (param_2 == 0) {
      cVar1 = *(char *)(param_1 + 0xb1);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xb2);
    }
    pbVar3[1] = 0x11;
    *pbVar3 = *pbVar3 & 0xf | cVar1 << 4;
    pbVar3[2] = 0xe;
    if (param_2 == 0) {
      *(byte *)(param_1 + 0xb1) = *(char *)(param_1 + 0xb1) + 1U & 0xf;
    }
  }
  return iVar2;
}

