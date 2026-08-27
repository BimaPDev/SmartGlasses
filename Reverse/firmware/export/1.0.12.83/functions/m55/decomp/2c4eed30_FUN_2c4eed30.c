/* FUN_2c4eed30 @ 0x2c4eed30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eed30(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_2c4eda80();
  iVar1 = _LAB_2c4eed44;
  bVar3 = *(byte *)(iVar2 + 0x60) & 0x1f;
  if (bVar3 == 7) {
    FUN_2c62c314(*(int *)(iVar2 + 0x68) + 8,-(_LAB_2c4eed44 != 0),
                 ((int)(((*(uint *)(iVar2 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
                 (uint)(*(ushort *)(iVar2 + 0x62) >> 5));
    FUN_2c607df0(iVar2);
    return;
  }
  if (bVar3 != 0xb) {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x62);
    if (*(ushort *)(iVar2 + 0x62) >> 5 != 0) {
      uVar6 = 0;
      uVar5 = *(uint *)(iVar2 + 0x60);
      do {
        if ((uVar5 & 0x1fffff) >> 10 != 0) {
          uVar4 = 0;
          do {
            FUN_2c611e18(iVar2 + 0x60,(int)(short)uVar4,(int)(short)uVar6,iVar1);
            FUN_2c611d2c(iVar2 + 0x60,(int)(short)uVar4,(int)(short)uVar6,0xff);
            uVar5 = *(uint *)(iVar2 + 0x60);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uVar5 & 0x1fffff) >> 10);
          uVar4 = (uint)*(ushort *)(iVar2 + 0x62);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4 >> 5);
    }
    FUN_2c607df0(iVar2);
    return;
  }
  FUN_2c62c314(*(undefined4 *)(iVar2 + 0x68),0xff,
               ((int)(((*(uint *)(iVar2 + 0x60) & 0x1fffff) >> 10) + 7) >> 3) *
               (uint)(*(ushort *)(iVar2 + 0x62) >> 5));
  FUN_2c607df0(iVar2);
  return;
}

