/* FUN_2c49f79c @ 0x2c49f79c */

void FUN_2c49f79c(void)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte bVar17;
  int iVar18;
  
  puVar8 = DAT_2c49f9e4;
  pcVar11 = DAT_2c49f9d4;
  pbVar7 = DAT_2c49f9cc;
  pcVar5 = DAT_2c49f9c0;
  pcVar4 = DAT_2c49f9bc;
  uVar13 = 0;
  iVar14 = *DAT_2c49f9b4;
  uVar10 = (uint)*DAT_2c49f9b8;
  iVar18 = iVar14 + 0x69;
LAB_2c49f7be:
  do {
    iVar15 = iVar14;
    if (*(byte *)(iVar14 + 3) != 0xff) {
      if (uVar13 != 0) goto LAB_2c49f7b0;
      uVar13 = (int)uVar10 >> (uint)*(byte *)(iVar14 + 3) & 1;
    }
    while (*(byte *)(iVar15 + 4) != 0xff) {
      if (uVar13 == 0) {
        uVar13 = (int)uVar10 >> (uint)*(byte *)(iVar15 + 4) & 1;
        break;
      }
      if (*(char *)(iVar15 + 5) != -1) goto LAB_2c49f7b8;
      iVar14 = iVar15 + 7;
      if (iVar18 == iVar14) {
LAB_2c49f86c:
        if (*DAT_2c49f9bc != '\0') {
          return;
        }
        uVar13 = 1;
        goto LAB_2c49f876;
      }
      pcVar1 = (char *)(iVar15 + 10);
      iVar15 = iVar14;
      if (*pcVar1 != -1) {
LAB_2c49f7b0:
        do {
          if ((*(char *)(iVar15 + 4) != -1) || (*(char *)(iVar15 + 5) != -1)) {
            uVar13 = 1;
            goto LAB_2c49f7b8;
          }
          iVar14 = iVar15 + 7;
          if (iVar18 == iVar14) goto LAB_2c49f86c;
          pcVar1 = (char *)(iVar15 + 10);
          iVar15 = iVar14;
        } while (*pcVar1 != -1);
        uVar13 = 1;
      }
    }
    if ((*(byte *)(iVar15 + 5) != 0xff) && (uVar13 == 0)) {
      iVar14 = iVar15 + 7;
      uVar13 = (int)uVar10 >> (uint)*(byte *)(iVar15 + 5) & 1;
      if (iVar18 == iVar14) break;
      goto LAB_2c49f7be;
    }
LAB_2c49f7b8:
    iVar14 = iVar15 + 7;
  } while (iVar18 != iVar14);
  if (*DAT_2c49f9bc != '\0') {
    if (uVar13 != 0) {
      return;
    }
    *DAT_2c49f9bc = '\0';
    *pcVar5 = '\0';
    pcVar5 = DAT_2c49f9d4;
    pcVar4 = DAT_2c49f9d0;
    pbVar7 = DAT_2c49f9cc;
    puVar6 = DAT_2c49f9c8;
    *DAT_2c49f9c4 = '\0';
    *puVar6 = 0;
    *pbVar7 = 0;
    *pcVar4 = '\0';
    *pcVar5 = '\0';
    return;
  }
  if (uVar13 == 0) {
    if (*DAT_2c49f9d4 == '\0') {
      if (*DAT_2c49f9c0 != '\0') {
LAB_2c49f98c:
        pbVar16 = (byte *)*DAT_2c49f9dc;
        bVar17 = *DAT_2c49f9cc;
        uVar12 = *DAT_2c49f9e4;
        if (uVar12 < *(ushort *)(pbVar16 + (uint)bVar17 * 2 + 2)) goto LAB_2c49f940;
        *DAT_2c49f9e4 = uVar12 + 1;
        *pbVar7 = bVar17 + 1;
        goto LAB_2c49f8c0;
      }
    }
    else {
      if (*DAT_2c49f9c0 != '\0') goto LAB_2c49f8ea;
      uVar12 = *DAT_2c49f9d8;
      iVar14 = *DAT_2c49f9dc;
      *DAT_2c49f9d8 = uVar12 + 1;
      pcVar5 = DAT_2c49f9e0;
      pcVar4 = DAT_2c49f9c4;
      if ((ushort)*(byte *)(iVar14 + 1) <= (ushort)(uVar12 + 1)) {
        cVar2 = *DAT_2c49f9c4;
        *pcVar11 = '\0';
        *pcVar4 = '\0';
        *pcVar5 = cVar2;
      }
    }
  }
  else {
LAB_2c49f876:
    if (*DAT_2c49f9c0 == '\0') {
      pbVar16 = (byte *)*DAT_2c49f9dc;
      bVar17 = *DAT_2c49f9cc;
      *DAT_2c49f9c8 = 0;
      *puVar8 = 0;
      pcVar11 = DAT_2c49f9d4;
      sVar3 = *(short *)(pbVar16 + (uint)bVar17 * 2 + 2);
      *pcVar5 = '\x01';
      cVar2 = *pcVar11;
      uVar12 = 0;
      if (sVar3 != 0) goto LAB_2c49f940;
      *puVar8 = 1;
      *pbVar7 = bVar17 + 1;
      if (cVar2 != '\0') goto LAB_2c49f8bc;
LAB_2c49f934:
      *DAT_2c49f9e8 = 1;
LAB_2c49f8cc:
      *DAT_2c49f9ec = bVar17;
    }
    else {
      if (*DAT_2c49f9d4 == '\0') goto LAB_2c49f98c;
LAB_2c49f8ea:
      pbVar16 = (byte *)*DAT_2c49f9dc;
      bVar17 = *DAT_2c49f9cc;
      uVar12 = *DAT_2c49f9e4;
      if (*(ushort *)(pbVar16 + (uint)bVar17 * 2 + 2) <= uVar12) {
        *DAT_2c49f9e4 = uVar12 + 1;
        *pbVar7 = bVar17 + 1;
LAB_2c49f8bc:
        *pcVar11 = '\0';
LAB_2c49f8c0:
        if (uVar13 != 0) goto LAB_2c49f934;
        *pcVar4 = '\x01';
        *DAT_2c49f9e8 = 0;
        goto LAB_2c49f8cc;
      }
LAB_2c49f940:
      *puVar8 = uVar12 + 1;
    }
    if (uVar13 == 0) {
      *pcVar5 = '\0';
      if (*puVar8 < (ushort)*pbVar16) goto LAB_2c49f91c;
      if ((*pbVar7 != 0) || (*pcVar4 != '\0')) {
        if (*DAT_2c49f9d0 == '\0') {
          cVar2 = *DAT_2c49f9c4;
          *DAT_2c49f9ec = *pbVar7 - 1;
          puVar9 = DAT_2c49f9f4;
          if (cVar2 != '\0') {
            *DAT_2c49f9e0 = cVar2;
            *puVar9 = 1;
          }
        }
        *pcVar4 = '\x01';
      }
    }
  }
  if (*DAT_2c49f9f0 == '\0') {
    return;
  }
LAB_2c49f91c:
  pcVar5 = DAT_2c49f9f0;
  pcVar4 = DAT_2c49f9c4;
  cVar2 = *DAT_2c49f9c4;
  *pcVar11 = '\x01';
  puVar8 = DAT_2c49f9d8;
  *pcVar5 = '\0';
  *pcVar4 = cVar2 + '\x01';
  *puVar8 = 0;
  return;
}

