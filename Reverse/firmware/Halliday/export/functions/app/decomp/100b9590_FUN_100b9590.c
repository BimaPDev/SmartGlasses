/* FUN_100b9590 @ 0x100b9590 */

void FUN_100b9590(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  byte bVar4;
  undefined4 in_r3;
  byte *pbVar5;
  
  uVar2 = FUN_100b9308(1);
  pbVar1 = DAT_100b95e8;
  pbVar5 = DAT_100b95e8 + ((uVar2 & 0x1fff) >> 5) * 0x600 + 0x18;
  if (*DAT_100b95e8 < 7) {
    FUN_100b9a34(pbVar5,0x100,extraout_r2,*DAT_100b95e8,in_r3);
  }
  else {
    uVar3 = FUN_100b9308(*(int *)(DAT_100b95e8 + 4) + 1);
    FUN_100b9ba4(pbVar5,uVar3);
  }
  FUN_100b9320();
  bVar4 = *pbVar1;
  if (3 < bVar4) {
    if (bVar4 < 10) {
      bVar4 = bVar4 - 3;
    }
    else {
      bVar4 = bVar4 - 6;
    }
    *pbVar1 = bVar4;
    return;
  }
  *pbVar1 = 0;
  return;
}

