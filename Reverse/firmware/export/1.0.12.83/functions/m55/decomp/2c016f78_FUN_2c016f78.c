/* FUN_2c016f78 @ 0x2c016f78 */

undefined4 FUN_2c016f78(uint param_1,uint param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined4 unaff_lr;
  char *pcVar18;
  
  puVar5 = DAT_2c0172a8;
  puVar4 = DAT_2c017288;
  pcVar3 = DAT_2c017284;
  if ((1 < param_1 - 6) && ((DAT_2c017280 & param_2) == 0x28000000)) {
    FUN_2c00d570(1,0xb86,DAT_2c01729c,DAT_2c017298,DAT_2c017294,param_2);
    return 5;
  }
  if (*DAT_2c017284 == '\0') {
    return 7;
  }
  if (0x1a < param_1) {
    return 3;
  }
  if (DAT_2c017284[param_1 * 0x2c + 4] == '\0') {
    return 7;
  }
  uVar6 = param_2 & 0x3ffffff;
  if ((uVar6 < (*(uint *)(DAT_2c017284 + param_1 * 0x2c + 8) & 0x3ffffff)) &&
     ((*(uint *)(DAT_2c017284 + param_1 * 0x2c + 8) & 0x3ffffff) +
      *(int *)(DAT_2c017284 + param_1 * 0x2c + 0xc) < uVar6 + param_4)) {
    return 5;
  }
  if ((param_4 == 0) ||
     (uVar15 = (uint)(byte)DAT_2c017284[param_1 * 0x2c + 5],
     uVar6 / DAT_2c0172a8[uVar15] != (param_4 + -1 + uVar6) / DAT_2c0172a8[uVar15])) {
    return 6;
  }
  if (param_5 != '\0') {
    if (uVar15 != 0) {
      uVar6 = *(uint *)(DAT_2c017284 + param_1 * 0x2c + 0x14);
      pcVar11 = *(char **)(DAT_2c017284 + param_1 * 0x2c + 0x24);
      iVar8 = uVar6 * (param_2 / uVar6);
      param_2 = param_2 - iVar8;
      if (pcVar11 == (char *)0x0) {
LAB_2c017274:
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c0172a4,DAT_2c0172a0,uVar15);
      }
LAB_2c017024:
      pcVar12 = *(char **)(pcVar11 + 0x1c);
      if (*(int *)(pcVar11 + 4) != iVar8) goto LAB_2c017032;
      if (*pcVar11 == '\x01') {
        if (pcVar11[0x18] != '\0') goto LAB_2c017032;
        puVar14 = (undefined1 *)(param_3 + -1);
        puVar7 = puVar14 + param_4;
        puVar9 = (undefined1 *)(*(int *)(pcVar11 + 0x14) + (param_2 - 1));
        do {
          puVar14 = puVar14 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar14;
        } while (puVar7 != puVar14);
        uVar15 = *(uint *)(pcVar11 + 0xc);
        uVar16 = 0;
        uVar6 = param_2;
        if (uVar15 <= param_2) {
          uVar6 = uVar15;
        }
        *(uint *)(pcVar11 + 0xc) = uVar6;
        if (uVar15 + *(int *)(pcVar11 + 0x10) < param_4 + param_2) {
          iVar8 = (param_4 + param_2) - uVar6;
        }
        else {
          iVar8 = (uVar15 + *(int *)(pcVar11 + 0x10)) - uVar6;
        }
        *(int *)(pcVar11 + 0x10) = iVar8;
        goto LAB_2c01724c;
      }
      goto LAB_2c017036;
    }
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = isIRQinterruptsEnabled();
    }
    if (-1 < iVar8 << 0x1f) {
      *DAT_2c017288 = 0x2c017004;
      puVar4[1] = unaff_lr;
      disableIRQinterrupts();
    }
    *DAT_2c01728c = iVar8;
    uVar6 = *(uint *)(pcVar3 + param_1 * 0x2c + 0x14);
    pcVar11 = *(char **)(pcVar3 + param_1 * 0x2c + 0x24);
    iVar8 = uVar6 * (param_2 / uVar6);
    param_2 = param_2 - iVar8;
    if (pcVar11 != (char *)0x0) goto LAB_2c017024;
LAB_2c017036:
    pcVar12 = DAT_2c017290;
    uVar15 = (uint)(byte)pcVar3[param_1 * 0x2c + 5];
    if (uVar15 != 0) goto LAB_2c017274;
    pcVar18 = DAT_2c017290 + 0xd8;
    pcVar17 = DAT_2c017290;
    do {
      if (*pcVar17 == '\0') {
        *pcVar17 = '\x01';
        *(int *)(pcVar17 + 8) = iVar8;
        pcVar17[4] = '\x01';
        *(int *)(pcVar17 + 0x14) = param_4;
        *(uint *)(pcVar17 + 0xc) = uVar6;
        *(uint *)(pcVar17 + 0x10) = param_2;
        if (uVar6 == 0x20) goto LAB_2c01733a;
        if (uVar6 != *puVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(DAT_2c0173c4,DAT_2c0173c0);
        }
        if (*DAT_2c0173b4 != '\0') goto LAB_2c017344;
        pcVar18 = DAT_2c0173b4 + 1;
        *DAT_2c0173b4 = '\x01';
        goto LAB_2c0172e4;
      }
      pcVar17 = pcVar17 + 0x24;
    } while (pcVar18 != pcVar17);
    uVar16 = 1;
    goto LAB_2c017068;
  }
  if (uVar15 == 0) {
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = isIRQinterruptsEnabled();
    }
    if (-1 < iVar8 << 0x1f) {
      *DAT_2c017288 = 0x2c0170e2;
      puVar4[1] = unaff_lr;
      disableIRQinterrupts();
    }
    *DAT_2c01728c = iVar8;
  }
  pcVar11 = *(char **)(pcVar3 + 0x4ac);
  if (pcVar11 != pcVar3 + param_1 * 0x2c + 4 && pcVar11 != (char *)0x0) {
    do {
      iVar8 = 0;
LAB_2c0171cc:
      do {
        if (pcVar11[0x28] == '\x01') goto LAB_2c01711a;
        if (*(code **)(pcVar3 + 0x4b0) != (code *)0x0) {
          iVar10 = (**(code **)(pcVar3 + 0x4b0))();
          if (iVar10 == 0) goto LAB_2c0171cc;
          pcVar3[0x4b0] = '\0';
          pcVar3[0x4b1] = '\0';
          pcVar3[0x4b2] = '\0';
          pcVar3[0x4b3] = '\0';
        }
        iVar8 = FUN_2c016170(pcVar11,1);
      } while (iVar8 != 0);
      pcVar3[0x4ac] = '\0';
      pcVar3[0x4ad] = '\0';
      pcVar3[0x4ae] = '\0';
      pcVar3[0x4af] = '\0';
    } while( true );
  }
  iVar8 = 0;
LAB_2c01711a:
  do {
    if (*(code **)(pcVar3 + 0x4b0) == (code *)0x0) {
LAB_2c0171e8:
      iVar8 = FUN_2c016170(pcVar3 + param_1 * 0x2c + 4,1);
    }
    else {
      iVar10 = (**(code **)(pcVar3 + 0x4b0))();
      if (iVar10 != 0) {
        pcVar3[0x4b0] = '\0';
        pcVar3[0x4b1] = '\0';
        pcVar3[0x4b2] = '\0';
        pcVar3[0x4b3] = '\0';
        goto LAB_2c0171e8;
      }
    }
  } while (iVar8 != 0);
  FUN_2c015e74(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
  FUN_2c016004(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
  iVar8 = FUN_2c00668c(pcVar3[param_1 * 0x2c + 5],param_2,param_3,param_4);
  FUN_2c016094(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
  iVar10 = FUN_2c00647c(pcVar3[param_1 * 0x2c + 5],0x7c);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c0173bc,DAT_2c0173b8,iVar10);
  }
  uVar16 = 0;
  if (iVar8 != 0) {
    if (iVar8 == 0xb) {
      uVar16 = 5;
    }
    else if (iVar8 == 0xc) {
      uVar16 = 6;
    }
    else {
      uVar16 = 0xc;
    }
  }
  FUN_2c016124(pcVar3[param_1 * 0x2c + 5],param_2,param_4);
  cVar1 = pcVar3[param_1 * 0x2c + 5];
  goto joined_r0x2c0171ac;
LAB_2c017032:
  pcVar11 = pcVar12;
  if (pcVar12 == (char *)0x0) goto LAB_2c017036;
  goto LAB_2c017024;
LAB_2c01733a:
  if (*pcVar12 != '\0') goto code_r0x2c01733e;
  pcVar18 = pcVar12 + 4;
  *pcVar12 = '\x01';
  uVar6 = *(uint *)(pcVar17 + 0xc);
LAB_2c0172e4:
  *(char **)(pcVar17 + 0x18) = pcVar18;
  if (pcVar11 == (char *)0x0) {
    FUN_2c016004(0,*(undefined4 *)(pcVar17 + 8));
    iVar10 = *(int *)(pcVar17 + 0xc);
    iVar13 = *(int *)(pcVar17 + 0x18);
    iVar8 = *(int *)(pcVar17 + 8);
    uVar16 = 0;
    if (iVar10 != 0) {
      puVar14 = (undefined1 *)(iVar13 + -1);
      do {
        puVar9 = puVar14 + ((iVar8 + 1) - iVar13);
        puVar14 = puVar14 + 1;
        *puVar14 = *puVar9;
      } while ((undefined1 *)(iVar10 + -1 + iVar13) != puVar14);
      iVar8 = *(int *)(pcVar17 + 8);
      uVar16 = *(undefined4 *)(pcVar17 + 0xc);
    }
    FUN_2c016094(pcVar3[param_1 * 0x2c + 5],iVar8,uVar16);
LAB_2c0172fc:
    pcVar18 = *(char **)(pcVar17 + 0x18);
  }
  else if (uVar6 != 0) {
    pcVar11 = pcVar18 + -1;
    do {
      pcVar11 = pcVar11 + 1;
      *pcVar11 = -1;
    } while (pcVar11 != pcVar18 + (uVar6 - 1));
    goto LAB_2c0172fc;
  }
  pcVar11 = (char *)(param_3 + -1);
  pcVar12 = pcVar11 + param_4;
  pcVar18 = pcVar18 + (param_2 - 1);
  do {
    pcVar11 = pcVar11 + 1;
    pcVar18 = pcVar18 + 1;
    *pcVar18 = *pcVar11;
  } while (pcVar12 != pcVar11);
  pcVar17[0x1c] = '\0';
  uVar16 = *(undefined4 *)(pcVar3 + param_1 * 0x2c + 0x24);
  *(char **)(pcVar3 + param_1 * 0x2c + 0x24) = pcVar17 + 4;
  *(undefined4 *)(pcVar17 + 0x20) = uVar16;
  uVar16 = 0;
  goto LAB_2c01724c;
code_r0x2c01733e:
  pcVar12 = pcVar12 + 0x24;
  if (pcVar18 == pcVar12) goto LAB_2c017344;
  goto LAB_2c01733a;
LAB_2c017344:
  uVar16 = 1;
  pcVar17[0x18] = '\0';
  pcVar17[0x19] = '\0';
  pcVar17[0x1a] = '\0';
  pcVar17[0x1b] = '\0';
  FUN_2c015fb0(0,pcVar17 + 4);
LAB_2c01724c:
  cVar1 = pcVar3[param_1 * 0x2c + 5];
joined_r0x2c0171ac:
  if (cVar1 != '\0') {
    return uVar16;
  }
LAB_2c017068:
  if (-1 < *DAT_2c01728c << 0x1f) {
    *DAT_2c017288 = 0xffffffff;
    enableIRQinterrupts();
  }
  return uVar16;
}

