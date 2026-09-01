/* FUN_100a6fec @ 0x100a6fec */

void FUN_100a6fec(int param_1,uint param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint local_c [2];
  
  pbVar3 = DAT_100a703c;
  if ((param_2 & 1) != 0) {
    DAT_100a703c[1] = param_3;
  }
  bVar6 = (param_2 & 4) != 0;
  if (bVar6) {
    *pbVar3 = param_3;
    pbVar3[1] = param_3;
  }
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  if (bVar1 < bVar2) {
    *pbVar3 = bVar2 - 1;
  }
  if (*pbVar3 < bVar1) {
    *pbVar3 = *pbVar3 + 1;
  }
  else if (bVar2 <= bVar1 && !bVar6) {
    return;
  }
  local_c[0] = (uint)*pbVar3;
  if (*DAT_10064504 == 0) {
    uVar4 = 0xc1;
    uVar5 = DAT_10064508;
  }
  else {
    if (param_1 != 0) {
      FUN_1011dc6e(*DAT_10064504,param_1,0x91,local_c,param_1);
      return;
    }
    uVar4 = 0xc3;
    uVar5 = DAT_10064514;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10064510,uVar4,DAT_1006450c,uVar5);
}

