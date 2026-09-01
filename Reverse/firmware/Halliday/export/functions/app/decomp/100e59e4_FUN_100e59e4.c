/* FUN_100e59e4 @ 0x100e59e4 */

void FUN_100e59e4(ushort *param_1,int param_2,byte *param_3)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  undefined *puVar19;
  char *pcVar20;
  uint uVar21;
  int local_48;
  uint local_44;
  
  puVar5 = PTR_s_END_VCARD_100e5bf0;
  puVar19 = PTR_s_BEGIN_VCARD_1018cf90_1_100e5bec;
  iVar17 = 0;
  uVar2 = param_1[1];
  do {
    uVar12 = (uint)uVar2;
    if (*param_1 <= uVar12) {
LAB_100e5a76:
      *param_3 = 0;
      return;
    }
    uVar11 = *param_1 - uVar12 & 0xffff;
    uVar13 = 0;
    do {
      cVar1 = *(char *)((int)param_1 + uVar13 + uVar12 + 4);
      uVar15 = uVar13 & 0xffff;
      if ((cVar1 != '\r') && (cVar1 != '\n')) goto LAB_100e5a22;
      uVar13 = uVar13 + 1;
    } while ((uVar13 & 0xffff) < uVar11);
    uVar15 = 0;
LAB_100e5a22:
    pcVar20 = (char *)((int)param_1 + uVar12 + 3);
    uVar13 = 0;
    while( true ) {
      pcVar20 = pcVar20 + 1;
      uVar14 = uVar13 + 1 & 0xffff;
      if ((*pcVar20 == '\r') || (*pcVar20 == '\n')) break;
      uVar13 = uVar14;
      if (uVar11 == uVar14) goto LAB_100e5a76;
    }
    if (((uVar11 <= uVar14) ||
        ((cVar1 = *(char *)((int)param_1 + uVar14 + uVar12 + 4), cVar1 != '\r' && (cVar1 != '\n'))))
       && (uVar14 = uVar13, uVar13 == 0)) goto LAB_100e5a76;
    uVar13 = uVar15 + uVar12 & 0xffff;
    uVar11 = uVar14 + uVar12 & 0xffff;
    sVar4 = (short)(uVar14 + uVar12);
    if (iVar17 == 0) {
      uVar12 = FUN_1011ea10(puVar19);
      if (uVar12 <= uVar11 - uVar13) {
        uVar7 = FUN_1011ea10(puVar19);
        iVar8 = FUN_1011ea20(puVar19,uVar13 + 4 + (int)param_1,uVar7);
        if (iVar8 == 0) goto LAB_100e5aa0;
      }
      param_1[1] = sVar4 + 1;
    }
    else {
      uVar7 = FUN_1011ea10(puVar5);
      iVar8 = FUN_1011ea20(puVar5,uVar13 + 4 + (int)param_1,uVar7);
      if (iVar8 == 0) {
        if (uVar11 != 0) {
          iVar8 = param_1[1] + 4;
          uVar13 = (uVar11 - param_1[1]) + 1 & 0xffff;
          uVar12 = 0;
          uVar11 = 0;
          local_48 = 0;
          break;
        }
        goto LAB_100e5a76;
      }
LAB_100e5aa0:
      iVar17 = 1;
    }
    uVar2 = sVar4 + 1;
  } while( true );
LAB_100e5ada:
  if (uVar13 <= uVar11) {
LAB_100e5b30:
    *param_3 = (byte)uVar12;
    param_1[1] = sVar4 + 1;
    return;
  }
  pcVar16 = (char *)((int)param_1 + uVar11 + iVar8);
  uVar14 = uVar13 - uVar11 & 0xffff;
  pcVar20 = pcVar16;
  uVar15 = 0;
  while( true ) {
    uVar21 = uVar15 + 1;
    local_44 = uVar21 & 0xffff;
    if ((*pcVar20 == '\r') || (*pcVar20 == '\n')) break;
    pcVar20 = pcVar20 + 1;
    uVar15 = uVar21;
    if (uVar14 <= (uVar21 & 0xffff)) goto LAB_100e5b30;
  }
  *pcVar20 = '\0';
  iVar9 = uVar15 + 1;
  if ((iVar9 < (int)uVar14) && ((pcVar16[iVar9] == '\r' || (pcVar16[iVar9] == '\n')))) {
    local_44 = uVar15 + 2 & 0xffff;
    pcVar16[iVar9] = '\0';
    if (local_44 == 0) goto LAB_100e5b30;
  }
  if (local_48 == 0) {
    uVar7 = FUN_1011ea10(PTR_s_BEGIN_VCARD_1018cf90_1_100e5bec);
    iVar18 = FUN_1011ea20(PTR_s_BEGIN_VCARD_1018cf90_1_100e5bec,pcVar16,uVar7);
    iVar9 = iVar17;
    if (iVar18 != 0) goto LAB_100e5b50;
  }
  else {
LAB_100e5b50:
    iVar9 = FUN_1011ea18(PTR_s_END_VCARD_100e5bf0,pcVar16);
    if (iVar9 == 0) goto LAB_100e5b30;
    iVar18 = 0;
    puVar19 = PTR_DAT_100e5bf4;
    do {
      bVar3 = puVar19[1];
      iVar10 = FUN_1011ea20(*(undefined4 *)(puVar19 + 4),pcVar16);
      iVar9 = local_48;
      if ((iVar10 == 0) && (*(byte *)((int)param_1 + (uint)bVar3 + uVar11 + iVar8) - 0x3a < 2)) {
        iVar10 = 0;
        if (uVar12 < *param_3) {
          iVar10 = param_2 + uVar12 * 8;
          *(undefined *)(param_2 + uVar12 * 8) = PTR_DAT_100e5bf4[iVar18 * 8];
          uVar6 = FUN_1011ea10(pcVar16);
          *(undefined2 *)(iVar10 + 2) = uVar6;
          *(char **)(iVar10 + 4) = pcVar16;
          iVar10 = iVar17;
        }
        uVar12 = uVar12 + iVar10 & 0xff;
        break;
      }
      iVar18 = iVar18 + 1;
      puVar19 = puVar19 + 8;
    } while (iVar18 != 6);
  }
  local_48 = iVar9;
  uVar11 = uVar11 + local_44 & 0xffff;
  goto LAB_100e5ada;
}

