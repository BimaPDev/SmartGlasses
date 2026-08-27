/* FUN_2c49fc64 @ 0x2c49fc64 */

void FUN_2c49fc64(undefined1 param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  pcVar1 = DAT_2c49fcb0;
  *DAT_2c49fcac = param_1;
  puVar5 = DAT_2c49fcb8;
  *DAT_2c49fcb4 = 0;
  puVar6 = DAT_2c49fcbc;
  *puVar5 = 0;
  *puVar6 = 0;
  puVar5 = DAT_2c49fcc4;
  *DAT_2c49fcc0 = 0;
  *puVar5 = 0;
  puVar5 = DAT_2c49fccc;
  cVar7 = *pcVar1;
  *DAT_2c49fcc8 = 0;
  *puVar5 = 0;
  if ((cVar7 == '\0') && (param_2 == 0)) {
    cVar7 = *DAT_2c49fcd0;
    pcVar1 = DAT_2c49fc58;
    piVar2 = DAT_2c49fc5c;
    pbVar3 = DAT_2c49fc60;
  }
  else {
    FUN_2c49f79c();
    cVar7 = *DAT_2c49fcd0;
    pcVar1 = DAT_2c49fc58;
    piVar2 = DAT_2c49fc5c;
    pbVar3 = DAT_2c49fc60;
  }
  if (cVar7 == '\0') {
    DAT_2c49fc58 = pcVar1;
    DAT_2c49fc5c = piVar2;
    DAT_2c49fc60 = pbVar3;
    return;
  }
  DAT_2c49fc58 = pcVar1;
  DAT_2c49fc5c = piVar2;
  DAT_2c49fc60 = pbVar3;
  if (*pcVar1 == '\0') {
    iVar11 = *piVar2;
    iVar17 = *DAT_2c49fc4c;
    uVar13 = (uint)*pbVar3;
    bVar4 = false;
    iVar10 = 0;
    iVar16 = iVar11;
    do {
      bVar8 = *(byte *)(iVar16 + 6);
      uVar15 = (uint)bVar8;
      if (uVar15 == 0) {
        cVar7 = *(char *)(iVar16 + 7);
        if (cVar7 == '\0') {
          uVar12 = 0;
          if (((int)uVar13 >> *(sbyte *)(iVar16 + 3) & 1U) == 0) goto LAB_2c49fa9a;
          *(undefined1 *)(iVar16 + 8) = 0;
          *(undefined1 *)(iVar16 + 6) = 1;
LAB_2c49fb60:
          *(undefined1 *)(iVar16 + 7) = 0;
          uVar12 = 1;
          uVar14 = 1;
          if (((int)uVar13 >> *(sbyte *)(iVar16 + 4) & 1U) != 0) goto LAB_2c49fb72;
          goto LAB_2c49fb3e;
        }
        *(char *)(iVar16 + 9) = *(char *)(iVar16 + 9) + '\x01';
        uVar12 = (int)uVar13 >> *(sbyte *)(iVar16 + 3) & 1;
        if (uVar12 == 0) goto LAB_2c49fa9a;
        *(undefined1 *)(iVar16 + 6) = 1;
        *(byte *)(iVar16 + 8) = bVar8;
        if (cVar7 != '\x02') goto LAB_2c49fb60;
        bVar8 = 0;
        if (-1 < ((int)uVar13 >> *(sbyte *)(iVar16 + 4)) << 0x1f) goto LAB_2c49fb3e;
LAB_2c49fb7a:
        if (bVar8 < *(byte *)(iVar17 + 9)) {
LAB_2c49fbbc:
          *(undefined1 *)(iVar16 + 6) = 0;
          uVar14 = (int)uVar13 >> *(sbyte *)(iVar16 + 5) & 1;
          cVar7 = *(char *)(iVar16 + 7);
          if ((uVar14 == 0) || (cVar7 != '\0')) goto LAB_2c49fb96;
          *(undefined1 *)(iVar16 + 9) = 0;
          *(undefined1 *)(iVar16 + 7) = 1;
          *(undefined1 *)(iVar16 + 6) = 0;
        }
        else {
          *(undefined1 *)(iVar16 + 8) = 0;
          *(undefined1 *)(iVar16 + 6) = 2;
          uVar14 = (int)uVar13 >> *(sbyte *)(iVar16 + 5) & 1;
          if (uVar14 == 0) {
            cVar7 = *(char *)(iVar16 + 7);
            goto LAB_2c49fb96;
          }
          bVar8 = 0;
LAB_2c49fac2:
          puVar5 = DAT_2c49fc50;
          if (*(byte *)(iVar17 + 9) <= bVar8) {
            iVar11 = iVar11 + iVar10 * 7;
            *(undefined1 *)(iVar11 + 6) = 0;
            *puVar5 = 1;
            *(undefined1 *)(iVar11 + 8) = 0;
            return;
          }
LAB_2c49faca:
          *(undefined1 *)(iVar16 + 6) = 0;
LAB_2c49facc:
          cVar7 = *(char *)(iVar16 + 7);
          if (cVar7 != '\0') {
            if (uVar14 == 0) goto LAB_2c49fbde;
            goto LAB_2c49fb96;
          }
          *(undefined1 *)(iVar16 + 9) = 0;
          *(undefined1 *)(iVar16 + 7) = 1;
          if (*(char *)(iVar16 + 6) != '\x02') {
            *(undefined1 *)(iVar16 + 6) = 0;
          }
        }
        if (uVar14 != 0) {
          bVar8 = 0;
LAB_2c49fbf0:
          if (*(byte *)(iVar17 + 9) <= bVar8) {
            *(undefined1 *)(iVar16 + 9) = 0;
            *(undefined1 *)(iVar16 + 7) = 2;
            if (uVar12 == 0) {
              bVar8 = 0;
              goto LAB_2c49faea;
            }
            bVar8 = 0;
LAB_2c49fc06:
            puVar5 = DAT_2c49fc54;
            if (*(byte *)(iVar17 + 9) <= bVar8) {
              iVar11 = iVar11 + iVar10 * 7;
              *(undefined1 *)(iVar11 + 7) = 0;
              *puVar5 = 1;
              *(undefined1 *)(iVar11 + 9) = 0;
              return;
            }
          }
          bVar8 = *(byte *)(iVar16 + 9);
          goto LAB_2c49fbae;
        }
        bVar8 = 0;
LAB_2c49faea:
        bVar9 = *(byte *)(iVar17 + 8);
        if (bVar9 <= bVar8) goto LAB_2c49fbb8;
LAB_2c49faf0:
        if (bVar9 < *(byte *)(iVar16 + 8)) {
          bVar8 = 1;
        }
        else {
          bVar8 = 0;
        }
      }
      else {
        cVar7 = *(char *)(iVar16 + 7);
        *(char *)(iVar16 + 8) = *(char *)(iVar16 + 8) + '\x01';
        if (cVar7 == '\0') {
          uVar12 = (int)uVar13 >> *(sbyte *)(iVar16 + 3) & 1;
        }
        else {
          *(char *)(iVar16 + 9) = *(char *)(iVar16 + 9) + '\x01';
          uVar12 = (int)uVar13 >> *(sbyte *)(iVar16 + 3) & 1;
        }
LAB_2c49fa9a:
        if (((int)uVar13 >> *(sbyte *)(iVar16 + 4)) << 0x1f < 0) {
          uVar14 = uVar12;
          if (uVar15 == 1) {
LAB_2c49fb72:
            bVar8 = *(byte *)(iVar16 + 8);
            uVar12 = uVar14;
            if (bVar8 <= *(byte *)(iVar17 + 8)) goto LAB_2c49fb7a;
            goto LAB_2c49fbbc;
          }
          uVar14 = (int)uVar13 >> *(sbyte *)(iVar16 + 5) & 1;
          if (uVar14 != 0) goto LAB_2c49fab4;
LAB_2c49fb96:
          bVar8 = *(byte *)(iVar16 + 9);
          if (cVar7 != '\x01') goto LAB_2c49fb9c;
          if (bVar8 <= *(byte *)(iVar17 + 8)) goto LAB_2c49fbf0;
        }
        else {
LAB_2c49fb3e:
          if (((int)uVar13 >> *(sbyte *)(iVar16 + 5)) << 0x1f < 0) {
            uVar14 = 0;
            uVar15 = (uint)*(byte *)(iVar16 + 6);
LAB_2c49fab4:
            if (uVar15 - 1 < 2) {
              bVar8 = *(byte *)(iVar16 + 8);
              if (bVar8 <= *(byte *)(iVar17 + 8)) goto LAB_2c49fac2;
              goto LAB_2c49faca;
            }
            goto LAB_2c49facc;
          }
LAB_2c49fbde:
          bVar8 = *(byte *)(iVar16 + 9);
LAB_2c49fb9c:
          if ((uVar12 == 0) || (*(char *)(iVar16 + 7) != '\x02')) goto LAB_2c49faea;
          if (bVar8 <= *(byte *)(iVar17 + 8)) goto LAB_2c49fc06;
        }
LAB_2c49fbae:
        *(undefined1 *)(iVar16 + 7) = 0;
        bVar9 = *(byte *)(iVar17 + 8);
        if (bVar8 < bVar9) goto LAB_2c49faf0;
LAB_2c49fbb8:
        bVar8 = 1;
      }
      iVar10 = iVar10 + 1;
      bVar4 = (bool)(bVar4 | bVar8);
      iVar16 = iVar16 + 7;
    } while (iVar10 != 0xf);
    if (bVar4) {
      *pcVar1 = '\x01';
    }
  }
  iVar10 = *piVar2;
  uVar13 = 0;
  uVar15 = (uint)*pbVar3;
  iVar16 = iVar10 + 0x69;
  do {
    uVar13 = uVar13 | ((int)uVar15 >> *(sbyte *)(iVar10 + 3) | (int)uVar15 >> *(sbyte *)(iVar10 + 4)
                      | (int)uVar15 >> *(sbyte *)(iVar10 + 5)) & 1U;
    if (uVar13 == 0) {
      *(undefined1 *)(iVar10 + 9) = 0;
      *(undefined1 *)(iVar10 + 8) = 0;
      *(undefined1 *)(iVar10 + 7) = 0;
      *(undefined1 *)(iVar10 + 6) = 0;
    }
    iVar10 = iVar10 + 7;
  } while (iVar10 != iVar16);
  if (uVar13 == 0) {
    *pcVar1 = '\0';
  }
  return;
}

