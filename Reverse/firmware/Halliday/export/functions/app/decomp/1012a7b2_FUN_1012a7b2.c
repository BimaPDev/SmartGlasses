/* FUN_1012a7b2 @ 0x1012a7b2 */

void FUN_1012a7b2(void)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  pbVar3 = DAT_10093240;
  puVar7 = DAT_1009323c;
  iVar5 = FUN_1012a764(*DAT_1009323c);
  uVar6 = FUN_1012a75c();
  bVar1 = *pbVar3;
  *puVar7 = uVar6;
  uVar6 = DAT_10093244;
  *pbVar3 = bVar1 ^ 1;
  puVar7 = (undefined4 *)FUN_1012b06a(uVar6);
  pcVar4 = DAT_1009324c;
  uVar6 = DAT_10093244;
LAB_10093108:
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return;
    }
    *pcVar4 = '\0';
    uVar9 = (uint)*(byte *)((int)puVar7 + 0x42);
    if ((uVar9 & 7) >> 2 != (uint)*pbVar3) {
      uVar10 = uVar9 & 0xfffffffb | (*pbVar3 & 1) << 2;
      *(char *)((int)puVar7 + 0x42) = (char)uVar10;
      if (((-1 < (int)(uVar10 << 0x1c)) && ((int)puVar7[0xc] < 1)) && (-1 < puVar7[0xc] + iVar5)) {
        if ((-1 < (int)(uVar9 << 0x1f)) && ((code *)puVar7[5] != (code *)0x0)) {
          iVar8 = (*(code *)puVar7[5])(puVar7);
          puVar7[8] = puVar7[8] + iVar8;
          puVar7[10] = iVar8 + puVar7[10];
        }
        if ((code *)puVar7[2] != (code *)0x0) {
          (*(code *)puVar7[2])(puVar7);
        }
        *(byte *)((int)puVar7 + 0x42) = *(byte *)((int)puVar7 + 0x42) | 8;
      }
      iVar8 = puVar7[0xc] + iVar5;
      puVar7[0xc] = iVar8;
      if (-1 < iVar8) {
        if ((int)puVar7[0xb] < iVar8) {
          puVar7[0xc] = puVar7[0xb];
        }
        iVar8 = (*(code *)puVar7[7])(puVar7);
        if (puVar7[9] != iVar8) {
          puVar7[9] = iVar8;
          if ((code *)puVar7[1] != (code *)0x0) {
            (*(code *)puVar7[1])(*puVar7,iVar8);
          }
        }
        if ((int)puVar7[0xb] <= (int)puVar7[0xc]) {
          bVar1 = *(byte *)((int)puVar7 + 0x42);
          iVar8 = puVar7[0xe];
          if ((bVar1 & 2) == 0) {
            sVar2 = *(short *)(puVar7 + 0x10);
            if (sVar2 == 0) goto LAB_100931ac;
            if (sVar2 != -1) {
              *(short *)(puVar7 + 0x10) = sVar2 + -1;
              goto LAB_100931f2;
            }
          }
          else {
LAB_100931f2:
            if (*(short *)(puVar7 + 0x10) == 0) {
LAB_100931ac:
              if ((iVar8 == 0) || ((bVar1 & 2) != 0)) {
                FUN_1012b018(uVar6,puVar7);
                FUN_100930a8();
                if ((code *)puVar7[3] != (code *)0x0) {
                  (*(code *)puVar7[3])(puVar7);
                }
                if ((code *)puVar7[4] != (code *)0x0) {
                  (*(code *)puVar7[4])(puVar7);
                }
                FUN_10094268(puVar7,DAT_10093248);
                goto LAB_100931d4;
              }
            }
          }
          puVar7[0xc] = -puVar7[0xf];
          if (iVar8 != 0) {
            if ((bVar1 & 2) == 0) {
              puVar7[0xc] = -puVar7[0xd];
            }
            *(byte *)((int)puVar7 + 0x42) =
                 *(byte *)((int)puVar7 + 0x42) & 0xfd | ((bVar1 & 2) == 0) << 1;
            uVar11 = puVar7[10];
            puVar7[0xe] = puVar7[0xb];
            puVar7[10] = puVar7[8];
            puVar7[0xb] = iVar8;
            puVar7[8] = uVar11;
          }
        }
      }
LAB_100931d4:
      if (*pcVar4 != '\0') {
        puVar7 = (undefined4 *)FUN_1012b06a(uVar6);
        goto LAB_10093108;
      }
    }
    puVar7 = (undefined4 *)FUN_1012b076(uVar6,puVar7);
  } while( true );
}

