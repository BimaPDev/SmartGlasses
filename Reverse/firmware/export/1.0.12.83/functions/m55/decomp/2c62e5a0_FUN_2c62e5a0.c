/* FUN_2c62e5a0 @ 0x2c62e5a0 */

void FUN_2c62e5a0(void)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar5 = DAT_2c62e75c;
  pbVar3 = DAT_2c62e750;
  iVar7 = FUN_2c629e10(*DAT_2c62e75c);
  uVar9 = DAT_2c62e754;
  *pbVar3 = *pbVar3 ^ 1;
  puVar8 = (undefined4 *)FUN_2c62ca10(uVar9);
  puVar6 = DAT_2c62e760;
  pcVar4 = DAT_2c62e758;
  uVar9 = DAT_2c62e754;
  do {
    while( true ) {
      if (puVar8 == (undefined4 *)0x0) {
        uVar9 = FUN_2c629df4();
        *puVar5 = uVar9;
        return;
      }
      uVar11 = (uint)*(byte *)((int)puVar8 + 0x42);
      bVar1 = *pbVar3;
      *pcVar4 = '\0';
      if ((uVar11 & 7) >> 2 != (uint)bVar1) break;
LAB_2c62e656:
      puVar8 = (undefined4 *)FUN_2c62ca20(uVar9,puVar8);
    }
    uVar12 = uVar11 & 0xfffffffb | (bVar1 & 1) << 2;
    iVar10 = puVar8[0xc] + iVar7;
    *(char *)((int)puVar8 + 0x42) = (char)uVar12;
    if ((((uint)((int)puVar8[0xc] < 1) & (uVar12 ^ 8) >> 3) != 0) && (-1 < iVar10)) {
      if ((-1 < (int)(uVar11 << 0x1f)) && ((code *)puVar8[5] != (code *)0x0)) {
        iVar10 = (*(code *)puVar8[5])(puVar8);
        puVar8[8] = puVar8[8] + iVar10;
        puVar8[10] = iVar10 + puVar8[10];
      }
      if ((code *)puVar8[2] != (code *)0x0) {
        (*(code *)puVar8[2])(puVar8);
      }
      iVar10 = puVar8[0xc] + iVar7;
      *(byte *)((int)puVar8 + 0x42) = *(byte *)((int)puVar8 + 0x42) | 8;
    }
    puVar8[0xc] = iVar10;
    if (-1 < iVar10) {
      if ((int)puVar8[0xb] < iVar10) {
        puVar8[0xc] = puVar8[0xb];
      }
      iVar10 = (*(code *)puVar8[7])(puVar8);
      if (puVar8[9] != iVar10) {
        puVar8[9] = iVar10;
        if ((code *)puVar8[1] != (code *)0x0) {
          (*(code *)puVar8[1])(*puVar8,iVar10);
        }
      }
      if ((int)puVar8[0xb] <= (int)puVar8[0xc]) {
        if ((*(byte *)((int)puVar8 + 0x42) & 2) == 0) {
          sVar2 = *(short *)(puVar8 + 0x10);
          if ((ushort)(sVar2 - 1U) < 0xfffe) {
            *(short *)(puVar8 + 0x10) = sVar2 + -1;
            if (sVar2 == 1) goto LAB_2c62e684;
LAB_2c62e71c:
            iVar10 = puVar8[0xe];
            puVar8[0xc] = -puVar8[0xf];
            if (iVar10 == 0) goto LAB_2c62e63a;
          }
          else {
            if (sVar2 != 0) goto LAB_2c62e71c;
LAB_2c62e684:
            iVar10 = puVar8[0xe];
            if (iVar10 == 0) goto LAB_2c62e6e8;
          }
          puVar8[0xc] = -puVar8[0xd];
        }
        else {
          if (*(short *)(puVar8 + 0x10) == 0) {
LAB_2c62e6e8:
            FUN_2c62c998(uVar9,puVar8);
            *pcVar4 = '\x01';
            iVar10 = FUN_2c62ca10(uVar9);
            if (iVar10 == 0) {
              FUN_2c62be40(*puVar6);
            }
            else {
              FUN_2c62be4c(*puVar6);
            }
            if ((code *)puVar8[3] != (code *)0x0) {
              (*(code *)puVar8[3])(puVar8);
            }
            if ((code *)puVar8[4] != (code *)0x0) {
              (*(code *)puVar8[4])(puVar8);
            }
            FUN_2c62bea8(puVar8);
            goto LAB_2c62e63a;
          }
          iVar10 = puVar8[0xe];
          puVar8[0xc] = -puVar8[0xf];
          if (iVar10 == 0) goto LAB_2c62e63a;
        }
        puVar8[0xe] = puVar8[0xb];
        puVar8[0xb] = iVar10;
        *(byte *)((int)puVar8 + 0x42) =
             *(byte *)((int)puVar8 + 0x42) & 0xfd | ((*(byte *)((int)puVar8 + 0x42) & 2) == 0) << 1;
        uVar13 = puVar8[10];
        puVar8[10] = puVar8[8];
        puVar8[8] = uVar13;
      }
    }
LAB_2c62e63a:
    if (*pcVar4 == '\0') goto LAB_2c62e656;
    puVar8 = (undefined4 *)FUN_2c62ca10(uVar9);
  } while( true );
}

