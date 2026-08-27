/* FUN_2c4a7a6c @ 0x2c4a7a6c */

void FUN_2c4a7a6c(void)

{
  sbyte sVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte bVar6;
  sbyte *psVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  char cVar15;
  int *piVar16;
  uint uVar17;
  
  pbVar4 = DAT_2c4a7d28;
  pcVar3 = DAT_2c4a7d24;
  puVar9 = DAT_2c4a7d20;
  pbVar12 = DAT_2c4a7d1c;
  pcVar2 = DAT_2c4a7d18;
  if (*DAT_2c4a7d18 != '\0') goto LAB_2c4a7a7a;
  bVar6 = *DAT_2c4a7d28;
  uVar10 = (uint)bVar6;
  if (uVar10 == 0) {
    cVar15 = *DAT_2c4a7d24;
    if (cVar15 == '\0') {
      psVar7 = (sbyte *)*DAT_2c4a7d20;
      uVar17 = (uint)*DAT_2c4a7d1c;
      if (-1 < ((int)uVar17 >> *psVar7) << 0x1f) goto LAB_2c4a7ada;
      *DAT_2c4a7d28 = 1;
      pbVar8 = DAT_2c4a7d2c;
      *DAT_2c4a7d2c = 0;
LAB_2c4a7b5e:
      sVar1 = psVar7[1];
      *pcVar3 = '\0';
      if (((int)uVar17 >> sVar1) << 0x1f < 0) goto LAB_2c4a7c14;
      goto LAB_2c4a7b6c;
    }
    psVar7 = (sbyte *)*DAT_2c4a7d20;
    uVar17 = (uint)*DAT_2c4a7d1c;
    *DAT_2c4a7d30 = *DAT_2c4a7d30 + 1;
    if (-1 < ((int)uVar17 >> *psVar7) << 0x1f) goto LAB_2c4a7ada;
    *pbVar4 = 1;
    pbVar8 = DAT_2c4a7d2c;
    *DAT_2c4a7d2c = bVar6;
    if (cVar15 != '\x02') goto LAB_2c4a7b5e;
    if (-1 < ((int)uVar17 >> psVar7[1]) << 0x1f) goto LAB_2c4a7b6c;
    iVar14 = *DAT_2c4a7d34;
    bVar13 = *(byte *)(iVar14 + 8);
    bVar6 = 0;
LAB_2c4a7bc8:
    piVar16 = DAT_2c4a7d34;
    if (bVar6 < *(byte *)(iVar14 + 9)) {
LAB_2c4a7c26:
      piVar16 = DAT_2c4a7d34;
      sVar1 = psVar7[2];
      *pcVar2 = '\x01';
      *pbVar4 = 0;
      pbVar8 = DAT_2c4a7d30;
      uVar11 = (int)uVar17 >> sVar1 & 1;
      if (uVar11 != 0) {
        if (*pcVar3 == '\0') {
          *pcVar3 = '\x01';
          *pbVar8 = 0;
          goto LAB_2c4a7c76;
        }
        iVar14 = *piVar16;
        bVar13 = *(byte *)(iVar14 + 8);
      }
LAB_2c4a7c3a:
      cVar15 = *pcVar3;
      goto LAB_2c4a7b02;
    }
    sVar1 = psVar7[2];
    *pbVar4 = 2;
    bVar6 = 0;
    uVar11 = (int)uVar17 >> sVar1 & 1;
    *pbVar8 = 0;
    if (uVar11 == 0) goto LAB_2c4a7c3a;
LAB_2c4a7be6:
    puVar5 = DAT_2c4a7d38;
    if (*(byte *)(iVar14 + 9) <= bVar6) {
      *pbVar4 = 0;
      *pbVar8 = 0;
      *puVar5 = 1;
      return;
    }
LAB_2c4a7c98:
    *pcVar2 = '\x01';
    *pbVar4 = 0;
LAB_2c4a7c50:
    if (*pcVar3 != '\0') {
      iVar14 = *piVar16;
      bVar13 = *(byte *)(iVar14 + 8);
      if (uVar11 == 0) {
        bVar6 = *DAT_2c4a7d30;
        goto LAB_2c4a7b0e;
      }
      goto LAB_2c4a7c3a;
    }
    *pcVar3 = '\x01';
    pbVar8 = DAT_2c4a7d30;
    *DAT_2c4a7d30 = 0;
    if (*pbVar4 != 2) {
LAB_2c4a7c76:
      *pbVar4 = 0;
    }
    if (uVar11 != 0) {
      iVar14 = *piVar16;
      bVar6 = 0;
      bVar13 = *(byte *)(iVar14 + 8);
      goto LAB_2c4a7cbc;
    }
    bVar13 = *(byte *)(*piVar16 + 8);
    bVar6 = 0;
  }
  else {
    cVar15 = *DAT_2c4a7d24;
    *DAT_2c4a7d2c = *DAT_2c4a7d2c + 1;
    puVar9 = DAT_2c4a7d20;
    pbVar12 = DAT_2c4a7d1c;
    if (cVar15 == '\0') {
      uVar17 = (uint)*DAT_2c4a7d1c;
      psVar7 = (sbyte *)*DAT_2c4a7d20;
    }
    else {
      uVar17 = (uint)*DAT_2c4a7d1c;
      psVar7 = (sbyte *)*DAT_2c4a7d20;
      *DAT_2c4a7d30 = *DAT_2c4a7d30 + 1;
    }
LAB_2c4a7ada:
    if (((int)uVar17 >> psVar7[1]) << 0x1f < 0) {
      pbVar8 = DAT_2c4a7d2c;
      if (uVar10 == 1) {
LAB_2c4a7c14:
        bVar6 = *pbVar8;
        iVar14 = *DAT_2c4a7d34;
        bVar13 = *(byte *)(iVar14 + 8);
        if (bVar6 <= bVar13) goto LAB_2c4a7bc8;
        goto LAB_2c4a7c26;
      }
      uVar11 = (int)uVar17 >> psVar7[2] & 1;
      if (uVar11 != 0) goto LAB_2c4a7c46;
      iVar14 = *DAT_2c4a7d34;
      bVar13 = *(byte *)(iVar14 + 8);
LAB_2c4a7b02:
      bVar6 = *DAT_2c4a7d30;
      if (cVar15 != '\x01') goto LAB_2c4a7b0e;
      pbVar8 = DAT_2c4a7d30;
      if (bVar6 <= bVar13) {
LAB_2c4a7cbc:
        if (bVar6 < *(byte *)(iVar14 + 9)) goto LAB_2c4a7ca8;
        bVar6 = 0;
        *pcVar3 = '\x02';
        *pbVar8 = 0;
        if (((int)uVar17 >> *psVar7 & 1U) == 0) {
          bVar6 = 0;
          goto LAB_2c4a7b20;
        }
LAB_2c4a7cdc:
        puVar5 = DAT_2c4a7d3c;
        if (*(byte *)(iVar14 + 9) <= bVar6) {
          *pcVar3 = '\0';
          *pbVar8 = 0;
          *puVar5 = 1;
          return;
        }
      }
    }
    else {
LAB_2c4a7b6c:
      if (((int)uVar17 >> psVar7[2]) << 0x1f < 0) {
        uVar10 = (uint)*pbVar4;
        uVar11 = 0;
LAB_2c4a7c46:
        piVar16 = DAT_2c4a7d34;
        if (uVar10 - 1 < 2) {
          iVar14 = *DAT_2c4a7d34;
          bVar6 = *DAT_2c4a7d2c;
          pbVar8 = DAT_2c4a7d2c;
          if (bVar6 <= *(byte *)(iVar14 + 8)) goto LAB_2c4a7be6;
          goto LAB_2c4a7c98;
        }
        goto LAB_2c4a7c50;
      }
      iVar14 = *DAT_2c4a7d34;
      bVar6 = *DAT_2c4a7d30;
      bVar13 = *(byte *)(iVar14 + 8);
LAB_2c4a7b0e:
      if ((-1 < ((int)uVar17 >> *psVar7) << 0x1f) || (*pcVar3 != '\x02')) goto LAB_2c4a7b20;
      pbVar8 = DAT_2c4a7d30;
      if (bVar6 <= bVar13) goto LAB_2c4a7cdc;
    }
LAB_2c4a7ca8:
    *pcVar2 = '\x01';
    *pcVar3 = '\0';
  }
LAB_2c4a7b20:
  if ((bVar13 <= bVar6) || (bVar13 < *DAT_2c4a7d2c)) {
    *pcVar2 = '\x01';
  }
LAB_2c4a7a7a:
  pbVar4 = DAT_2c4a7d28;
  psVar7 = (sbyte *)*puVar9;
  uVar10 = (uint)*pbVar12;
  if ((((int)uVar10 >> *psVar7 | (int)uVar10 >> psVar7[1] | (int)uVar10 >> psVar7[2]) & 1U) == 0) {
    *DAT_2c4a7d24 = '\0';
    pbVar8 = DAT_2c4a7d30;
    pbVar12 = DAT_2c4a7d2c;
    *pcVar2 = '\0';
    *pbVar4 = 0;
    *pbVar12 = 0;
    *pbVar8 = 0;
  }
  return;
}

