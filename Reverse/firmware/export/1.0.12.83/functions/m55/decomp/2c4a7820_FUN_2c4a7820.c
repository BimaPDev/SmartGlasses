/* FUN_2c4a7820 @ 0x2c4a7820 */

void FUN_2c4a7820(void)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  ushort *puVar17;
  byte bVar18;
  
  pcVar7 = DAT_2c4a7a50;
  puVar17 = DAT_2c4a7a44;
  pbVar6 = DAT_2c4a7a40;
  pcVar15 = DAT_2c4a7a38;
  pcVar5 = DAT_2c4a7a34;
  pcVar4 = DAT_2c4a7a30;
  pbVar12 = (byte *)*DAT_2c4a7a28;
  if (*pbVar12 == 0xff) {
    uVar11 = (uint)pbVar12[1];
    if (uVar11 != 0xff) {
      uVar14 = (uint)*DAT_2c4a7a2c;
LAB_2c4a7918:
      uVar13 = (int)uVar14 >> uVar11 & 1;
      goto LAB_2c4a789a;
    }
    uVar11 = (uint)pbVar12[2];
    if (uVar11 != 0xff) {
LAB_2c4a78a6:
      uVar13 = (int)(uint)*DAT_2c4a7a2c >> uVar11 & 1;
      goto LAB_2c4a78ae;
    }
    if (*DAT_2c4a7a30 != '\0') goto LAB_2c4a7924;
LAB_2c4a78ba:
    if (*DAT_2c4a7a38 == '\0') {
      bVar3 = false;
      if (*DAT_2c4a7a34 == '\0') goto LAB_2c4a78f0;
LAB_2c4a7864:
      pbVar12 = (byte *)*DAT_2c4a7a3c;
      bVar18 = *DAT_2c4a7a40;
      uVar10 = *DAT_2c4a7a44;
      if (uVar10 < *(ushort *)(pbVar12 + (uint)bVar18 * 2 + 2)) goto LAB_2c4a79ba;
      *DAT_2c4a7a44 = uVar10 + 1;
      *pbVar6 = bVar18 + 1;
LAB_2c4a788a:
      if (bVar3) goto LAB_2c4a7980;
      *pcVar4 = '\x01';
      *DAT_2c4a7a48 = 0;
      bVar3 = false;
LAB_2c4a7986:
      *DAT_2c4a7a64 = bVar18;
      goto LAB_2c4a798c;
    }
    if (*DAT_2c4a7a34 != '\0') {
      bVar3 = false;
      goto LAB_2c4a79a0;
    }
    uVar10 = *DAT_2c4a7a4c;
    iVar16 = *DAT_2c4a7a3c;
    *DAT_2c4a7a4c = uVar10 + 1;
    pcVar5 = DAT_2c4a7a54;
    pcVar4 = DAT_2c4a7a50;
    if ((ushort)*(byte *)(iVar16 + 1) <= (ushort)(uVar10 + 1)) {
      cVar1 = *DAT_2c4a7a50;
      *pcVar15 = '\0';
      *pcVar4 = '\0';
      *pcVar5 = cVar1;
    }
  }
  else {
    uVar11 = (uint)pbVar12[1];
    uVar14 = (uint)*DAT_2c4a7a2c;
    uVar13 = (int)uVar14 >> (uint)*pbVar12 & 1;
    if (uVar11 == 0xff) {
LAB_2c4a789a:
      uVar11 = (uint)pbVar12[2];
      if (uVar11 != 0xff) {
        if (uVar13 == 0) goto LAB_2c4a78a6;
        cVar1 = *DAT_2c4a7a30;
        goto joined_r0x2c4a79d0;
      }
LAB_2c4a78ae:
      if (*DAT_2c4a7a30 != '\0') {
        if (uVar13 != 0) {
          return;
        }
LAB_2c4a7924:
        *DAT_2c4a7a30 = '\0';
        *pcVar5 = '\0';
        pcVar5 = DAT_2c4a7a60;
        puVar8 = DAT_2c4a7a5c;
        pbVar6 = DAT_2c4a7a40;
        pcVar4 = DAT_2c4a7a38;
        *pcVar7 = '\0';
        *puVar8 = 0;
        *pbVar6 = 0;
        *pcVar5 = '\0';
        *pcVar4 = '\0';
        return;
      }
      if (uVar13 == 0) goto LAB_2c4a78ba;
    }
    else {
      if (uVar13 == 0) goto LAB_2c4a7918;
      cVar1 = *DAT_2c4a7a30;
joined_r0x2c4a79d0:
      if (cVar1 != '\0') {
        return;
      }
    }
    if (*DAT_2c4a7a34 == '\0') {
      *DAT_2c4a7a5c = 0;
      puVar17 = DAT_2c4a7a44;
      pcVar15 = DAT_2c4a7a38;
      bVar18 = *pbVar6;
      pbVar12 = (byte *)*DAT_2c4a7a3c;
      *DAT_2c4a7a44 = 0;
      sVar2 = *(short *)(pbVar12 + (uint)bVar18 * 2 + 2);
      cVar1 = *pcVar15;
      *pcVar5 = '\x01';
      if (sVar2 == 0) {
        *puVar17 = 1;
        *pbVar6 = bVar18 + 1;
        if (cVar1 != '\0') {
          *pcVar15 = '\0';
        }
LAB_2c4a7980:
        bVar3 = true;
        *DAT_2c4a7a48 = 1;
        goto LAB_2c4a7986;
      }
      *puVar17 = 1;
    }
    else {
      if (*DAT_2c4a7a38 == '\0') {
        bVar3 = true;
        goto LAB_2c4a7864;
      }
      bVar3 = true;
LAB_2c4a79a0:
      pbVar12 = (byte *)*DAT_2c4a7a3c;
      bVar18 = *DAT_2c4a7a40;
      uVar10 = *DAT_2c4a7a44;
      if (*(ushort *)(pbVar12 + (uint)bVar18 * 2 + 2) <= uVar10) {
        *DAT_2c4a7a44 = uVar10 + 1;
        *pbVar6 = bVar18 + 1;
        *pcVar15 = '\0';
        goto LAB_2c4a788a;
      }
LAB_2c4a79ba:
      *DAT_2c4a7a44 = uVar10 + 1;
LAB_2c4a798c:
      if (!bVar3) {
        *pcVar5 = '\0';
        if (*puVar17 < (ushort)*pbVar12) goto LAB_2c4a78f6;
        if ((*pbVar6 != 0) || (*pcVar4 != '\0')) {
          if (*DAT_2c4a7a60 == '\0') {
            cVar1 = *DAT_2c4a7a50;
            *DAT_2c4a7a64 = *pbVar6 - 1;
            puVar9 = DAT_2c4a7a68;
            if (cVar1 != '\0') {
              *DAT_2c4a7a54 = cVar1;
              *puVar9 = 1;
            }
          }
          *pcVar4 = '\x01';
        }
      }
    }
  }
LAB_2c4a78f0:
  if (*DAT_2c4a7a58 == '\0') {
    return;
  }
LAB_2c4a78f6:
  pcVar5 = DAT_2c4a7a58;
  pcVar4 = DAT_2c4a7a50;
  cVar1 = *DAT_2c4a7a50;
  *pcVar15 = '\x01';
  puVar17 = DAT_2c4a7a4c;
  *pcVar5 = '\0';
  *pcVar4 = cVar1 + '\x01';
  *puVar17 = 0;
  return;
}

