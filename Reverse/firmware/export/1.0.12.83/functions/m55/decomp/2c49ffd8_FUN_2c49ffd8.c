/* FUN_2c49ffd8 @ 0x2c49ffd8 */

undefined4 FUN_2c49ffd8(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  sbyte *psVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  sbyte *psVar15;
  sbyte *psVar16;
  char *pcVar17;
  undefined4 uVar18;
  
  piVar4 = DAT_2c4a0294;
  pcVar17 = DAT_2c4a0280;
  if (*DAT_2c4a0278 == 0) {
    if (*DAT_2c4a02d0 != '\0') {
LAB_2c4a01a2:
      *DAT_2c4a02d0 = '\0';
      *pcVar17 = '\0';
      iVar12 = *piVar4;
      if (*(code **)(iVar12 + 0x14) != (code *)0x0) {
        (**(code **)(iVar12 + 0x14))();
        iVar12 = *piVar4;
      }
      if (*(int *)(iVar12 + 0x18) != 0) {
        FUN_2c49fcd4();
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2d3,DAT_2c4a02a0,DAT_2c4a029c,DAT_2c4a02b4);
    }
LAB_2c4a0026:
    if (param_2 != 0) {
      iVar12 = *DAT_2c4a027c;
      goto LAB_2c4a004c;
    }
LAB_2c4a00ea:
    if (*DAT_2c4a0280 == '\0') {
      return 0xff;
    }
  }
  else {
    iVar12 = *DAT_2c4a027c;
    psVar9 = (sbyte *)(iVar12 + (uint)*DAT_2c4a0278 + 0x6c);
    psVar16 = (sbyte *)(iVar12 + 0x6c);
    do {
      psVar15 = psVar16 + 1;
      uVar10 = param_1 >> *psVar16 & 1;
      if (psVar9 == psVar15) {
        if (*DAT_2c4a02d0 == '\0') goto LAB_2c4a0022;
        if (uVar10 == 0) goto LAB_2c4a01a2;
        goto LAB_2c4a004c;
      }
      psVar16 = psVar15;
    } while (uVar10 == 0);
    do {
      psVar16 = psVar15 + 1;
      psVar15 = psVar15 + 2;
      if (psVar9 == psVar16) {
        if (*DAT_2c4a02d0 != '\0') goto LAB_2c4a004c;
        goto LAB_2c4a0104;
      }
    } while (psVar9 != psVar15);
    if (*DAT_2c4a02d0 == '\0') {
LAB_2c4a0022:
      if (uVar10 != 0) {
LAB_2c4a0104:
        *DAT_2c4a02d0 = '\x01';
        *pcVar17 = '\0';
        iVar12 = *piVar4;
        if (*(code **)(iVar12 + 0x10) != (code *)0x0) {
          (**(code **)(iVar12 + 0x10))();
          iVar12 = *piVar4;
        }
        if (*(int *)(iVar12 + 0x18) != 0) {
          FUN_2c49fcd4();
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2e0,DAT_2c4a02a0,DAT_2c4a029c,DAT_2c4a02a4);
      }
      goto LAB_2c4a0026;
    }
LAB_2c4a004c:
    uVar10 = 0;
    iVar14 = iVar12;
    do {
      iVar13 = iVar14 + 7;
      uVar10 = uVar10 | (param_1 >> *(sbyte *)(iVar14 + 3) | param_1 >> *(sbyte *)(iVar14 + 4) |
                        param_1 >> *(sbyte *)(iVar14 + 5)) & 1U;
      iVar14 = iVar13;
    } while (iVar12 + 0x69 != iVar13);
    if (uVar10 != 0) goto LAB_2c4a00ea;
    *DAT_2c4a0280 = '\x01';
  }
  pcVar3 = DAT_2c4a02d4;
  pcVar17 = DAT_2c4a0284;
  FUN_2c49fc64(param_1,param_2);
  cVar1 = *pcVar3;
  if ((cVar1 == '\0') || (*DAT_2c4a0288 != '\0')) {
    *pcVar17 = '\0';
  }
  else {
    *pcVar17 = '\x01';
  }
  pcVar8 = DAT_2c4a0420;
  piVar7 = DAT_2c4a03f0;
  pcVar6 = DAT_2c4a02d8;
  pcVar5 = DAT_2c4a02ac;
  piVar4 = DAT_2c4a0294;
  pcVar2 = DAT_2c4a028c;
  if (*DAT_2c4a028c == '\0') {
    if (*DAT_2c4a0290 != '\0') {
      iVar12 = *DAT_2c4a0294;
      if (*(code **)(iVar12 + 0xc) != (code *)0x0) {
        (**(code **)(iVar12 + 0xc))();
        iVar12 = *piVar4;
      }
      if (*(int *)(iVar12 + 0x18) != 0) {
        FUN_2c49fcd4();
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x325,DAT_2c4a02a0,DAT_2c4a029c,DAT_2c4a0298);
    }
    if (*DAT_2c4a02b0 != '\0') {
      iVar12 = *DAT_2c4a03f0;
      if (*(code **)(iVar12 + 0xc) != (code *)0x0) {
        (**(code **)(iVar12 + 0xc))(1);
        iVar12 = *piVar7;
      }
      if (*(int *)(iVar12 + 0x18) != 0) {
        FUN_2c49fcd4();
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x330,DAT_2c4a03fc,DAT_2c4a03f8,DAT_2c4a03f4);
    }
    if (*DAT_2c4a02ac == '\0') {
      if (*DAT_2c4a041c == '\0') {
        if (((*pcVar17 != '\0') && ((*DAT_2c4a0400 != '\0' || (*DAT_2c4a0404 == '\0')))) &&
           ((*DAT_2c4a0408 != '\0' || (*DAT_2c4a0410 == '\0' && *DAT_2c4a040c == '\0')))) {
          if (*(code **)*DAT_2c4a03f0 != (code *)0x0) {
            (**(code **)*DAT_2c4a03f0)(cVar1);
          }
          if (*(int *)(*piVar7 + 0x18) != 0) {
            FUN_2c49fcd4();
          }
          cVar1 = *pcVar3;
          uVar11 = 0x361;
          uVar18 = DAT_2c4a0418;
          goto LAB_2c4a0372;
        }
      }
      else if (((*DAT_2c4a0400 != '\0') || (*DAT_2c4a0404 == '\0')) &&
              ((*DAT_2c4a0408 != '\0' || (*DAT_2c4a0410 == '\0' && *DAT_2c4a040c == '\0')))) {
        iVar12 = *DAT_2c4a03f0;
        if (*(code **)(iVar12 + 4) != (code *)0x0) {
          (**(code **)(iVar12 + 4))(*DAT_2c4a0420);
          iVar12 = *piVar7;
        }
        if (*(int *)(iVar12 + 0x18) != 0) {
          FUN_2c49fcd4();
        }
        cVar1 = *pcVar8;
        uVar11 = 0x34f;
        uVar18 = DAT_2c4a0414;
LAB_2c4a0372:
                    /* WARNING: Subroutine does not return */
        TRACE(4,uVar11,DAT_2c4a03fc,DAT_2c4a03f8,uVar18,cVar1);
      }
    }
    else if (((*DAT_2c4a02b8 != '\0') || (*DAT_2c4a02bc == '\0')) &&
            ((*DAT_2c4a02c0 != '\0' || (*DAT_2c4a02c8 == '\0' && *DAT_2c4a02c4 == '\0')))) {
      iVar12 = *DAT_2c4a0294;
      pcVar17 = DAT_2c4a0420;
      if (*(code **)(iVar12 + 8) != (code *)0x0) {
        (**(code **)(iVar12 + 8))(cVar1,*DAT_2c4a02d8);
        iVar12 = *piVar4;
        pcVar17 = pcVar6;
      }
      if (*(int *)(iVar12 + 0x18) != 0) {
        FUN_2c49fcd4();
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x33d,DAT_2c4a02a0,DAT_2c4a029c,DAT_2c4a02cc,*pcVar3,*pcVar17);
    }
  }
  else {
    uVar10 = 0;
    iVar12 = *DAT_2c4a027c;
    do {
      iVar14 = iVar12 + 7;
      uVar10 = uVar10 | (param_1 >> *(sbyte *)(iVar12 + 3) | param_1 >> *(sbyte *)(iVar12 + 4) |
                        param_1 >> *(sbyte *)(iVar12 + 5)) & 1U;
      iVar12 = iVar14;
    } while (*DAT_2c4a027c + 0x69 != iVar14);
    if (uVar10 == 0) {
      *DAT_2c4a02a8 = 0;
      pcVar6 = DAT_2c4a02b0;
      pcVar3 = DAT_2c4a0290;
      *pcVar17 = '\0';
      *pcVar2 = '\0';
      *pcVar5 = '\0';
      *pcVar3 = '\0';
      *pcVar6 = '\0';
      FUN_2c49f6c4();
    }
  }
  return 0xff;
}

