/* FUN_100d6c90 @ 0x100d6c90 */

void FUN_100d6c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint extraout_r2;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  
  iVar5 = FUN_100b9d90(0x30);
  if (iVar5 == 0) {
    FUN_100a5b78((DAT_100d6de0 - DAT_100d6ddc) * 0x20 & 0xff00U | 0xad0011,DAT_100d6de8,DAT_100d6de4
                );
    return;
  }
  FUN_1011ea48(iVar5,0,0x30);
  iVar6 = FUN_100d4814(iVar5,3);
  if (iVar6 != 0) {
    bVar4 = false;
    bVar3 = false;
    uVar8 = extraout_r2;
    for (iVar11 = 0; iVar11 < iVar6; iVar11 = iVar11 + 1) {
      iVar13 = iVar5 + iVar11 * 8;
      bVar1 = *(byte *)(iVar13 + 7);
      uVar8 = (uint)bVar1;
      if ((*(byte *)(iVar13 + 6) & 0xe) != 0) {
        bVar3 = true;
      }
      if ((bVar1 & 2) != 0) {
        bVar4 = true;
      }
    }
    puVar12 = (undefined4 *)(iVar5 + 0x18);
    FUN_100d6c3c(puVar12,3,uVar8,iVar11,param_1,param_2,param_3);
    do {
      if ((int)((uint)*(byte *)((int)puVar12 + 6) << 0x1f) < 0) {
        iVar11 = iVar5;
        for (iVar13 = 0; iVar13 < iVar6; iVar13 = iVar13 + 1) {
          iVar14 = iVar11;
          iVar7 = FUN_1011ea30(puVar12,iVar11,6);
          if (iVar7 == 0) {
            bVar2 = *(byte *)(iVar11 + 6);
            bVar1 = (bVar2 | *(byte *)((int)puVar12 + 6)) & 0x10;
            bVar9 = bVar2 & 0xef | bVar1;
            *(byte *)(iVar11 + 6) = bVar9;
            bVar9 = (bVar9 | *(byte *)((int)puVar12 + 6)) & 0x20;
            bVar10 = bVar2 & 0xcf | bVar1 | bVar9;
            *(byte *)(iVar11 + 6) = bVar10;
            *(byte *)(iVar11 + 6) =
                 bVar2 & 0x8f | bVar1 | bVar9 | (bVar10 | *(byte *)((int)puVar12 + 6)) & 0x40;
            *(byte *)(iVar11 + 7) =
                 *(byte *)(iVar11 + 7) & 0xfe |
                 (byte)((byte)(((uint)*(byte *)(iVar11 + 7) << 0x1f) >> 0x18) |
                       (byte)(((uint)*(byte *)((int)puVar12 + 7) << 0x1f) >> 0x18)) >> 7;
            *(byte *)((int)puVar12 + 6) = *(byte *)((int)puVar12 + 6) & 0xfe;
            break;
          }
          iVar11 = iVar14 + 8;
        }
        if ((((!bVar3) || ((*(byte *)((int)puVar12 + 6) & 0xe) == 0)) &&
            ((!bVar4 || (-1 < (int)((uint)*(byte *)((int)puVar12 + 7) << 0x1e))))) &&
           ((iVar13 == iVar6 && (iVar6 < 3)))) {
          iVar11 = iVar6 * 8;
          *(undefined4 *)(iVar5 + iVar6 * 8) = *puVar12;
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar5 + iVar11 + 4) = puVar12[1];
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != (undefined4 *)(iVar5 + 0x30));
    FUN_100d6c70(iVar5,3);
  }
  FUN_100b9e04(iVar5);
  return;
}

