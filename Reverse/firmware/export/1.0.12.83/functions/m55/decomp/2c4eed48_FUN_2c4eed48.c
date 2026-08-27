/* FUN_2c4eed48 @ 0x2c4eed48 */

void FUN_2c4eed48(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_2c4eda80();
  bVar2 = *(byte *)(iVar1 + 0x60) & 0x1f;
  if (bVar2 == 7) {
    FUN_2c62c314(*(int *)(iVar1 + 0x68) + 8,0xff,
                 ((int)(((*(uint *)(iVar1 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
                 (uint)(*(ushort *)(iVar1 + 0x62) >> 5));
    FUN_2c607df0(iVar1);
    return;
  }
  if (bVar2 == 0xb) {
    FUN_2c62c314(*(undefined4 *)(iVar1 + 0x68),0xff,
                 ((int)(((*(uint *)(iVar1 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
                 (uint)(*(ushort *)(iVar1 + 0x62) >> 5));
    FUN_2c607df0(iVar1);
    return;
  }
  uVar3 = (uint)*(ushort *)(iVar1 + 0x62);
  if (*(ushort *)(iVar1 + 0x62) >> 5 != 0) {
    uVar5 = 0;
    uVar4 = *(uint *)(iVar1 + 0x60);
    do {
      if ((uVar4 & 0x1fffff) >> 10 != 0) {
        uVar3 = 0;
        do {
          FUN_2c611e18(iVar1 + 0x60,(int)(short)uVar3,(int)(short)uVar5,0xff00ff00);
          FUN_2c611d2c(iVar1 + 0x60,(int)(short)uVar3,(int)(short)uVar5,0xff);
          uVar4 = *(uint *)(iVar1 + 0x60);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uVar4 & 0x1fffff) >> 10);
        uVar3 = (uint)*(ushort *)(iVar1 + 0x62);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3 >> 5);
  }
  FUN_2c607df0(iVar1);
  return;
}

