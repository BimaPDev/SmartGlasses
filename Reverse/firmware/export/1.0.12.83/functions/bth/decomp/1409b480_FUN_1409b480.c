/* FUN_1409b480 @ 0x1409b480 */

char * FUN_1409b480(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char cVar9;
  char cVar10;
  char *pcVar11;
  char *pcVar13;
  uint uVar14;
  bool bVar15;
  char *pcVar12;
  
  pcVar8 = DAT_1409b5a8;
  pcVar12 = DAT_1409b5a4;
  cVar9 = '[';
  *DAT_1409b5a4 = '\0';
  while( true ) {
    pcVar11 = pcVar12 + 1;
    *pcVar12 = cVar9;
    pcVar6 = DAT_1409b5d4;
    pcVar5 = DAT_1409b5d0;
    pcVar4 = DAT_1409b5cc;
    pcVar3 = DAT_1409b5c8;
    pcVar2 = DAT_1409b5c4;
    pcVar1 = DAT_1409b5b0;
    pcVar12 = DAT_1409b5ac;
    if (cVar9 == '\0') break;
    pcVar8 = pcVar8 + 1;
    cVar9 = *pcVar8;
    pcVar12 = pcVar11;
  }
  if (param_1 != 0) {
    uVar14 = 0xf;
    cVar9 = '\x01';
    do {
      uVar7 = 1 << (uVar14 & 0xff) & param_1;
      pcVar8 = pcVar2;
      if (0x20 < (int)uVar7) {
        pcVar8 = pcVar12;
        if (uVar7 == 0x40) goto joined_r0x1409b554;
        if (uVar7 == 0x80) {
          cVar10 = 'B';
          pcVar8 = pcVar1;
        }
        else {
          cVar10 = 'U';
          pcVar8 = pcVar2;
        }
        goto joined_r0x1409b54a;
      }
      cVar10 = cVar9;
      switch(uVar7) {
      case 0:
        goto switchD_1409b4ce_caseD_0;
      case 1:
        pcVar8 = pcVar3;
        goto LAB_1409b55a;
      case 2:
        pcVar8 = DAT_1409b5bc;
LAB_1409b55a:
        cVar10 = 'H';
        if (cVar9 == '\0') {
          cVar10 = 'H';
          goto LAB_1409b562;
        }
        goto LAB_1409b4fa;
      default:
        if (cVar9 == '\0') {
          cVar10 = 'U';
          goto LAB_1409b562;
        }
        cVar10 = 'U';
        goto LAB_1409b4fa;
      case 4:
        cVar10 = 'H';
        pcVar8 = pcVar5;
        break;
      case 8:
        pcVar8 = pcVar6;
        goto joined_r0x1409b58c;
      case 0x10:
        pcVar8 = pcVar4;
joined_r0x1409b554:
        cVar10 = 'A';
        break;
      case 0x20:
        pcVar8 = DAT_1409b5c0;
joined_r0x1409b58c:
        cVar10 = 'A';
      }
joined_r0x1409b54a:
      if (cVar9 == '\0') {
LAB_1409b562:
        cVar9 = '|';
        pcVar13 = DAT_1409b5b8;
        while (pcVar11[-1] = cVar9, cVar9 != '\0') {
          pcVar13 = pcVar13 + 1;
          pcVar11 = pcVar11 + 1;
          cVar9 = *pcVar13;
        }
      }
LAB_1409b4fa:
      while (pcVar11[-1] = cVar10, cVar10 != '\0') {
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
        cVar10 = *pcVar8;
      }
switchD_1409b4ce_caseD_0:
      bVar15 = uVar14 != 0;
      uVar14 = uVar14 - 1;
      cVar9 = cVar10;
    } while (bVar15);
  }
  cVar9 = ']';
  pcVar8 = DAT_1409b5b4;
  while (pcVar11[-1] = cVar9, cVar9 != '\0') {
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
    cVar9 = *pcVar8;
  }
  return DAT_1409b5a4;
}

