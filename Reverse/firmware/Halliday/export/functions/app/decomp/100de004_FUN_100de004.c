/* FUN_100de004 @ 0x100de004 */

int FUN_100de004(int param_1,undefined4 param_2,char param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  
  iVar1 = FUN_1013401c(0,0,0xffffffff,0xffffffff);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100de07c | (DAT_100de078 - DAT_100de074) * 0x20 & 0xff00U,DAT_100de080,param_1,
                 param_2);
  }
  else {
    pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8,2);
    if (param_1 == 0) {
      bVar3 = *param_4 << 4;
    }
    else {
      bVar3 = param_3 << 4;
    }
    *pbVar2 = bVar3 | (byte)param_1;
    pbVar2[1] = (byte)param_2;
    if (param_1 == 0) {
      *param_4 = *param_4 + 1 & 0xf;
    }
  }
  return iVar1;
}

