/* FUN_2c4a3938 @ 0x2c4a3938 */

void FUN_2c4a3938(undefined1 param_1,int param_2)

{
  sbyte sVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  sbyte *psVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte bVar14;
  int iVar15;
  char cVar16;
  int *piVar17;
  uint uVar18;
  
  pcVar2 = DAT_2c4a3984;
  *DAT_2c4a3980 = param_1;
  puVar5 = DAT_2c4a398c;
  *DAT_2c4a3988 = 0;
  puVar6 = DAT_2c4a3990;
  *puVar5 = 0;
  *puVar6 = 0;
  puVar5 = DAT_2c4a3998;
  *DAT_2c4a3994 = 0;
  *puVar5 = 0;
  puVar5 = DAT_2c4a39a0;
  cVar16 = *pcVar2;
  *DAT_2c4a399c = 0;
  *puVar5 = 0;
  if ((cVar16 == '\0') && (param_2 == 0)) {
    cVar16 = *DAT_2c4a39a4;
    pcVar2 = DAT_2c4a3910;
    pbVar13 = DAT_2c4a3914;
    puVar10 = DAT_2c4a3918;
    pcVar3 = DAT_2c4a391c;
    pbVar4 = DAT_2c4a3920;
  }
  else {
    FUN_2c4a3418();
    cVar16 = *DAT_2c4a39a4;
    pcVar2 = DAT_2c4a3910;
    pbVar13 = DAT_2c4a3914;
    puVar10 = DAT_2c4a3918;
    pcVar3 = DAT_2c4a391c;
    pbVar4 = DAT_2c4a3920;
  }
  if (cVar16 == '\0') {
    DAT_2c4a3910 = pcVar2;
    DAT_2c4a3914 = pbVar13;
    DAT_2c4a3918 = puVar10;
    DAT_2c4a391c = pcVar3;
    DAT_2c4a3920 = pbVar4;
    return;
  }
  DAT_2c4a3910 = pcVar2;
  DAT_2c4a3914 = pbVar13;
  DAT_2c4a3918 = puVar10;
  DAT_2c4a391c = pcVar3;
  DAT_2c4a3920 = pbVar4;
  if (*pcVar2 != '\0') goto LAB_2c4a3672;
  bVar7 = *pbVar4;
  uVar11 = (uint)bVar7;
  if (uVar11 == 0) {
    cVar16 = *pcVar3;
    if (cVar16 == '\0') {
      psVar8 = (sbyte *)*puVar10;
      uVar18 = (uint)*pbVar13;
      if (-1 < ((int)uVar18 >> *psVar8) << 0x1f) goto LAB_2c4a36d2;
      *pbVar4 = 1;
      pbVar9 = DAT_2c4a3924;
      *DAT_2c4a3924 = 0;
LAB_2c4a3756:
      sVar1 = psVar8[1];
      *pcVar3 = '\0';
      if (((int)uVar18 >> sVar1) << 0x1f < 0) goto LAB_2c4a380c;
      goto LAB_2c4a3764;
    }
    psVar8 = (sbyte *)*puVar10;
    uVar18 = (uint)*pbVar13;
    *DAT_2c4a3928 = *DAT_2c4a3928 + 1;
    if (-1 < ((int)uVar18 >> *psVar8) << 0x1f) goto LAB_2c4a36d2;
    *pbVar4 = 1;
    pbVar9 = DAT_2c4a3924;
    *DAT_2c4a3924 = bVar7;
    if (cVar16 != '\x02') goto LAB_2c4a3756;
    if (-1 < ((int)uVar18 >> psVar8[1]) << 0x1f) goto LAB_2c4a3764;
    iVar15 = *DAT_2c4a392c;
    bVar14 = *(byte *)(iVar15 + 8);
    bVar7 = 0;
LAB_2c4a37c0:
    piVar17 = DAT_2c4a392c;
    if (bVar7 < *(byte *)(iVar15 + 9)) {
LAB_2c4a381e:
      piVar17 = DAT_2c4a392c;
      sVar1 = psVar8[2];
      *pcVar2 = '\x01';
      *pbVar4 = 0;
      pbVar9 = DAT_2c4a3928;
      uVar12 = (int)uVar18 >> sVar1 & 1;
      if (uVar12 != 0) {
        if (*pcVar3 == '\0') {
          *pcVar3 = '\x01';
          *pbVar9 = 0;
          goto LAB_2c4a386e;
        }
        iVar15 = *piVar17;
        bVar14 = *(byte *)(iVar15 + 8);
      }
LAB_2c4a3832:
      cVar16 = *pcVar3;
      goto LAB_2c4a36fa;
    }
    sVar1 = psVar8[2];
    *pbVar4 = 2;
    bVar7 = 0;
    uVar12 = (int)uVar18 >> sVar1 & 1;
    *pbVar9 = 0;
    if (uVar12 == 0) goto LAB_2c4a3832;
LAB_2c4a37de:
    puVar5 = DAT_2c4a3930;
    if (*(byte *)(iVar15 + 9) <= bVar7) {
      *pbVar4 = 0;
      *pbVar9 = 0;
      *puVar5 = 1;
      return;
    }
LAB_2c4a3890:
    *pcVar2 = '\x01';
    *pbVar4 = 0;
LAB_2c4a3848:
    if (*pcVar3 != '\0') {
      iVar15 = *piVar17;
      bVar14 = *(byte *)(iVar15 + 8);
      if (uVar12 == 0) {
        bVar7 = *DAT_2c4a3928;
        goto LAB_2c4a3706;
      }
      goto LAB_2c4a3832;
    }
    *pcVar3 = '\x01';
    pbVar9 = DAT_2c4a3928;
    *DAT_2c4a3928 = 0;
    if (*pbVar4 != 2) {
LAB_2c4a386e:
      *pbVar4 = 0;
    }
    if (uVar12 != 0) {
      iVar15 = *piVar17;
      bVar7 = 0;
      bVar14 = *(byte *)(iVar15 + 8);
      goto LAB_2c4a38b4;
    }
    bVar14 = *(byte *)(*piVar17 + 8);
    bVar7 = 0;
  }
  else {
    cVar16 = *pcVar3;
    *DAT_2c4a3924 = *DAT_2c4a3924 + 1;
    puVar10 = DAT_2c4a3918;
    pbVar13 = DAT_2c4a3914;
    if (cVar16 == '\0') {
      uVar18 = (uint)*DAT_2c4a3914;
      psVar8 = (sbyte *)*DAT_2c4a3918;
    }
    else {
      uVar18 = (uint)*DAT_2c4a3914;
      psVar8 = (sbyte *)*DAT_2c4a3918;
      *DAT_2c4a3928 = *DAT_2c4a3928 + 1;
    }
LAB_2c4a36d2:
    if (((int)uVar18 >> psVar8[1]) << 0x1f < 0) {
      pbVar9 = DAT_2c4a3924;
      if (uVar11 == 1) {
LAB_2c4a380c:
        bVar7 = *pbVar9;
        iVar15 = *DAT_2c4a392c;
        bVar14 = *(byte *)(iVar15 + 8);
        if (bVar7 <= bVar14) goto LAB_2c4a37c0;
        goto LAB_2c4a381e;
      }
      uVar12 = (int)uVar18 >> psVar8[2] & 1;
      if (uVar12 != 0) goto LAB_2c4a383e;
      iVar15 = *DAT_2c4a392c;
      bVar14 = *(byte *)(iVar15 + 8);
LAB_2c4a36fa:
      bVar7 = *DAT_2c4a3928;
      if (cVar16 != '\x01') goto LAB_2c4a3706;
      pbVar9 = DAT_2c4a3928;
      if (bVar7 <= bVar14) {
LAB_2c4a38b4:
        if (bVar7 < *(byte *)(iVar15 + 9)) goto LAB_2c4a38a0;
        bVar7 = 0;
        *pcVar3 = '\x02';
        *pbVar9 = 0;
        if (((int)uVar18 >> *psVar8 & 1U) == 0) {
          bVar7 = 0;
          goto LAB_2c4a3718;
        }
LAB_2c4a38d4:
        puVar5 = DAT_2c4a3934;
        if (*(byte *)(iVar15 + 9) <= bVar7) {
          *pcVar3 = '\0';
          *pbVar9 = 0;
          *puVar5 = 1;
          return;
        }
      }
    }
    else {
LAB_2c4a3764:
      if (((int)uVar18 >> psVar8[2]) << 0x1f < 0) {
        uVar11 = (uint)*pbVar4;
        uVar12 = 0;
LAB_2c4a383e:
        piVar17 = DAT_2c4a392c;
        if (uVar11 - 1 < 2) {
          iVar15 = *DAT_2c4a392c;
          bVar7 = *DAT_2c4a3924;
          pbVar9 = DAT_2c4a3924;
          if (bVar7 <= *(byte *)(iVar15 + 8)) goto LAB_2c4a37de;
          goto LAB_2c4a3890;
        }
        goto LAB_2c4a3848;
      }
      iVar15 = *DAT_2c4a392c;
      bVar7 = *DAT_2c4a3928;
      bVar14 = *(byte *)(iVar15 + 8);
LAB_2c4a3706:
      if ((-1 < ((int)uVar18 >> *psVar8) << 0x1f) || (*pcVar3 != '\x02')) goto LAB_2c4a3718;
      pbVar9 = DAT_2c4a3928;
      if (bVar7 <= bVar14) goto LAB_2c4a38d4;
    }
LAB_2c4a38a0:
    *pcVar2 = '\x01';
    *pcVar3 = '\0';
  }
LAB_2c4a3718:
  if ((bVar14 <= bVar7) || (bVar14 < *DAT_2c4a3924)) {
    *pcVar2 = '\x01';
  }
LAB_2c4a3672:
  pbVar4 = DAT_2c4a3920;
  psVar8 = (sbyte *)*puVar10;
  uVar11 = (uint)*pbVar13;
  if ((((int)uVar11 >> *psVar8 | (int)uVar11 >> psVar8[1] | (int)uVar11 >> psVar8[2]) & 1U) == 0) {
    *DAT_2c4a391c = '\0';
    pbVar9 = DAT_2c4a3928;
    pbVar13 = DAT_2c4a3924;
    *pcVar2 = '\0';
    *pbVar4 = 0;
    *pbVar13 = 0;
    *pbVar9 = 0;
  }
  return;
}

