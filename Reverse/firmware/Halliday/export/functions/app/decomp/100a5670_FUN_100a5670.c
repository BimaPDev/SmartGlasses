/* FUN_100a5670 @ 0x100a5670 */

void FUN_100a5670(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar1 = DAT_100a56b8;
  if ((*DAT_100a56b8 & 0x40) == 0) {
    FUN_1005d20c();
    if (-1 < (int)((uint)pbVar1[2] << 0x1d)) {
      FUN_100a6260();
    }
    uVar3 = DAT_100a56bc;
    pbVar1[2] = 6;
    uVar3 = FUN_1011a09e(uVar3);
    FUN_10119dc2(DAT_100a56c4,DAT_100a56c0,uVar3);
    pbVar2 = DAT_100a56b8;
    *pbVar1 = *pbVar1 | 0x40;
    FUN_100a5538(pbVar2);
    FUN_100a61d0();
    return;
  }
  return;
}

