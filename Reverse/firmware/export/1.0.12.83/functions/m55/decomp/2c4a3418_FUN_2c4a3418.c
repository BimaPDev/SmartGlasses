/* FUN_2c4a3418 @ 0x2c4a3418 */

void FUN_2c4a3418(void)

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
  
  pcVar7 = DAT_2c4a3648;
  puVar17 = DAT_2c4a363c;
  pbVar6 = DAT_2c4a3638;
  pcVar15 = DAT_2c4a3630;
  pcVar5 = DAT_2c4a362c;
  pcVar4 = DAT_2c4a3628;
  pbVar12 = (byte *)*DAT_2c4a3620;
  if (*pbVar12 == 0xff) {
    uVar11 = (uint)pbVar12[1];
    if (uVar11 != 0xff) {
      uVar14 = (uint)*DAT_2c4a3624;
LAB_2c4a3510:
      uVar13 = (int)uVar14 >> uVar11 & 1;
      goto LAB_2c4a3492;
    }
    uVar11 = (uint)pbVar12[2];
    if (uVar11 != 0xff) {
LAB_2c4a349e:
      uVar13 = (int)(uint)*DAT_2c4a3624 >> uVar11 & 1;
      goto LAB_2c4a34a6;
    }
    if (*DAT_2c4a3628 != '\0') goto LAB_2c4a351c;
LAB_2c4a34b2:
    if (*DAT_2c4a3630 == '\0') {
      bVar3 = false;
      if (*DAT_2c4a362c == '\0') goto LAB_2c4a34e8;
LAB_2c4a345c:
      pbVar12 = (byte *)*DAT_2c4a3634;
      bVar18 = *DAT_2c4a3638;
      uVar10 = *DAT_2c4a363c;
      if (uVar10 < *(ushort *)(pbVar12 + (uint)bVar18 * 2 + 2)) goto LAB_2c4a35b2;
      *DAT_2c4a363c = uVar10 + 1;
      *pbVar6 = bVar18 + 1;
LAB_2c4a3482:
      if (bVar3) goto LAB_2c4a3578;
      *pcVar4 = '\x01';
      *DAT_2c4a3640 = 0;
      bVar3 = false;
LAB_2c4a357e:
      *DAT_2c4a365c = bVar18;
      goto LAB_2c4a3584;
    }
    if (*DAT_2c4a362c != '\0') {
      bVar3 = false;
      goto LAB_2c4a3598;
    }
    uVar10 = *DAT_2c4a3644;
    iVar16 = *DAT_2c4a3634;
    *DAT_2c4a3644 = uVar10 + 1;
    pcVar5 = DAT_2c4a364c;
    pcVar4 = DAT_2c4a3648;
    if ((ushort)*(byte *)(iVar16 + 1) <= (ushort)(uVar10 + 1)) {
      cVar1 = *DAT_2c4a3648;
      *pcVar15 = '\0';
      *pcVar4 = '\0';
      *pcVar5 = cVar1;
    }
  }
  else {
    uVar11 = (uint)pbVar12[1];
    uVar14 = (uint)*DAT_2c4a3624;
    uVar13 = (int)uVar14 >> (uint)*pbVar12 & 1;
    if (uVar11 == 0xff) {
LAB_2c4a3492:
      uVar11 = (uint)pbVar12[2];
      if (uVar11 != 0xff) {
        if (uVar13 == 0) goto LAB_2c4a349e;
        cVar1 = *DAT_2c4a3628;
        goto joined_r0x2c4a35c8;
      }
LAB_2c4a34a6:
      if (*DAT_2c4a3628 != '\0') {
        if (uVar13 != 0) {
          return;
        }
LAB_2c4a351c:
        *DAT_2c4a3628 = '\0';
        *pcVar5 = '\0';
        pcVar5 = DAT_2c4a3658;
        puVar8 = DAT_2c4a3654;
        pbVar6 = DAT_2c4a3638;
        pcVar4 = DAT_2c4a3630;
        *pcVar7 = '\0';
        *puVar8 = 0;
        *pbVar6 = 0;
        *pcVar5 = '\0';
        *pcVar4 = '\0';
        return;
      }
      if (uVar13 == 0) goto LAB_2c4a34b2;
    }
    else {
      if (uVar13 == 0) goto LAB_2c4a3510;
      cVar1 = *DAT_2c4a3628;
joined_r0x2c4a35c8:
      if (cVar1 != '\0') {
        return;
      }
    }
    if (*DAT_2c4a362c == '\0') {
      *DAT_2c4a3654 = 0;
      puVar17 = DAT_2c4a363c;
      pcVar15 = DAT_2c4a3630;
      bVar18 = *pbVar6;
      pbVar12 = (byte *)*DAT_2c4a3634;
      *DAT_2c4a363c = 0;
      sVar2 = *(short *)(pbVar12 + (uint)bVar18 * 2 + 2);
      cVar1 = *pcVar15;
      *pcVar5 = '\x01';
      if (sVar2 == 0) {
        *puVar17 = 1;
        *pbVar6 = bVar18 + 1;
        if (cVar1 != '\0') {
          *pcVar15 = '\0';
        }
LAB_2c4a3578:
        bVar3 = true;
        *DAT_2c4a3640 = 1;
        goto LAB_2c4a357e;
      }
      *puVar17 = 1;
    }
    else {
      if (*DAT_2c4a3630 == '\0') {
        bVar3 = true;
        goto LAB_2c4a345c;
      }
      bVar3 = true;
LAB_2c4a3598:
      pbVar12 = (byte *)*DAT_2c4a3634;
      bVar18 = *DAT_2c4a3638;
      uVar10 = *DAT_2c4a363c;
      if (*(ushort *)(pbVar12 + (uint)bVar18 * 2 + 2) <= uVar10) {
        *DAT_2c4a363c = uVar10 + 1;
        *pbVar6 = bVar18 + 1;
        *pcVar15 = '\0';
        goto LAB_2c4a3482;
      }
LAB_2c4a35b2:
      *DAT_2c4a363c = uVar10 + 1;
LAB_2c4a3584:
      if (!bVar3) {
        *pcVar5 = '\0';
        if (*puVar17 < (ushort)*pbVar12) goto LAB_2c4a34ee;
        if ((*pbVar6 != 0) || (*pcVar4 != '\0')) {
          if (*DAT_2c4a3658 == '\0') {
            cVar1 = *DAT_2c4a3648;
            *DAT_2c4a365c = *pbVar6 - 1;
            puVar9 = DAT_2c4a3660;
            if (cVar1 != '\0') {
              *DAT_2c4a364c = cVar1;
              *puVar9 = 1;
            }
          }
          *pcVar4 = '\x01';
        }
      }
    }
  }
LAB_2c4a34e8:
  if (*DAT_2c4a3650 == '\0') {
    return;
  }
LAB_2c4a34ee:
  pcVar5 = DAT_2c4a3650;
  pcVar4 = DAT_2c4a3648;
  cVar1 = *DAT_2c4a3648;
  *pcVar15 = '\x01';
  puVar17 = DAT_2c4a3644;
  *pcVar5 = '\0';
  *pcVar4 = cVar1 + '\x01';
  *puVar17 = 0;
  return;
}

