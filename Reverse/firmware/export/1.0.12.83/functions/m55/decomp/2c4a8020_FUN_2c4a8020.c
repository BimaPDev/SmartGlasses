/* FUN_2c4a8020 @ 0x2c4a8020 */

undefined4 FUN_2c4a8020(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  sbyte *psVar11;
  undefined4 uVar12;
  sbyte *psVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  sbyte *psVar17;
  int iVar18;
  undefined4 *puVar19;
  sbyte *psVar20;
  
  pcVar2 = DAT_2c4a8288;
  piVar5 = DAT_2c4a8268;
  if (*DAT_2c4a8244 == 0) {
    if (*DAT_2c4a8284 != '\0') {
LAB_2c4a8204:
      *DAT_2c4a8284 = '\0';
      *pcVar2 = '\0';
      iVar18 = *piVar5;
      if (*(code **)(iVar18 + 0x14) != (code *)0x0) {
        (**(code **)(iVar18 + 0x14))();
        iVar18 = *piVar5;
      }
      if (*(int *)(iVar18 + 0x18) != 0) {
        FUN_2c4a7d40();
      }
      uVar15 = 0x297;
      uVar14 = 0x297;
      uVar12 = DAT_2c4a8280;
LAB_2c4a81ac:
                    /* WARNING: Subroutine does not return */
      TRACE(4,uVar15,DAT_2c4a8278,DAT_2c4a8274,uVar12,DAT_2c4a826c,uVar14);
    }
LAB_2c4a8070:
    if (param_2 != 0) {
      psVar20 = (sbyte *)*DAT_2c4a8248;
      goto LAB_2c4a809a;
    }
  }
  else {
    psVar20 = (sbyte *)*DAT_2c4a8248;
    psVar11 = psVar20 + *DAT_2c4a8244 + 3;
    psVar13 = psVar20 + 3;
    do {
      psVar17 = psVar13 + 1;
      uVar16 = param_1 >> *psVar13 & 1;
      if (psVar11 == psVar17) {
        if (*DAT_2c4a8284 == '\0') goto LAB_2c4a806a;
        if (uVar16 == 0) goto LAB_2c4a8204;
        goto LAB_2c4a809a;
      }
      psVar13 = psVar17;
    } while (uVar16 == 0);
    do {
      psVar13 = psVar17 + 1;
      psVar17 = psVar17 + 2;
      if (psVar13 == psVar11) {
        if (*DAT_2c4a8284 != '\0') goto LAB_2c4a809a;
        goto LAB_2c4a8178;
      }
    } while (psVar17 != psVar11);
    if (*DAT_2c4a8284 == '\0') {
LAB_2c4a806a:
      if (uVar16 != 0) {
LAB_2c4a8178:
        *DAT_2c4a8284 = '\x01';
        *pcVar2 = '\0';
        iVar18 = *piVar5;
        if (*(code **)(iVar18 + 0x10) != (code *)0x0) {
          (**(code **)(iVar18 + 0x10))();
          iVar18 = *piVar5;
        }
        if (*(int *)(iVar18 + 0x18) != 0) {
          FUN_2c4a7d40();
        }
        uVar15 = 0x2a4;
        uVar14 = 0x2a4;
        uVar12 = DAT_2c4a827c;
        goto LAB_2c4a81ac;
      }
      goto LAB_2c4a8070;
    }
LAB_2c4a809a:
    if (-1 < (param_1 >> *psVar20 | param_1 >> psVar20[1] | param_1 >> psVar20[2]) << 0x1f) {
      *DAT_2c4a8288 = '\x01';
      goto LAB_2c4a80ba;
    }
  }
  if (*DAT_2c4a8288 == '\0') {
    return 0xff;
  }
LAB_2c4a80ba:
  pcVar2 = DAT_2c4a8250;
  uVar12 = 0xff;
  *DAT_2c4a824c = (char)param_1;
  pcVar6 = DAT_2c4a828c;
  *DAT_2c4a8254 = 0;
  pcVar8 = DAT_2c4a8294;
  pcVar7 = DAT_2c4a8290;
  puVar3 = DAT_2c4a825c;
  pcVar4 = DAT_2c4a8258;
  *pcVar2 = '\0';
  *pcVar6 = '\0';
  *pcVar4 = '\0';
  *pcVar7 = '\0';
  *puVar3 = 0;
  *pcVar8 = '\0';
  FUN_2c4a7820();
  if (*DAT_2c4a8260 != '\0') {
    FUN_2c4a7a6c();
  }
  cVar1 = *pcVar8;
  if ((cVar1 == '\0') || (*DAT_2c4a8264 != '\0')) {
    *pcVar2 = '\0';
  }
  else {
    *pcVar2 = '\x01';
  }
  piVar10 = DAT_2c4a8450;
  pcVar9 = DAT_2c4a8298;
  piVar5 = DAT_2c4a8268;
  puVar3 = DAT_2c4a8254;
  if (*DAT_2c4a8298 != '\0') {
    psVar13 = (sbyte *)*DAT_2c4a8248;
    if (((param_1 >> *psVar13 | param_1 >> psVar13[1] | param_1 >> psVar13[2]) & 1U) == 0) {
      *pcVar2 = '\0';
      *puVar3 = 0;
      *pcVar6 = '\0';
      *pcVar4 = '\0';
      *pcVar7 = '\0';
      *pcVar9 = '\0';
      FUN_2c4a7764();
    }
    return 0xff;
  }
  if (*pcVar4 == '\0') {
    if (*pcVar7 == '\0') {
      if (*pcVar6 != '\0') {
        if ((*DAT_2c4a843c == '\0') && (*DAT_2c4a8440 != '\0')) {
          return 0xff;
        }
        if ((*DAT_2c4a8444 == '\0') && (*DAT_2c4a844c != '\0' || *DAT_2c4a8448 != '\0')) {
          return 0xff;
        }
        iVar18 = *DAT_2c4a8450;
        if (*(code **)(iVar18 + 8) != (code *)0x0) {
          (**(code **)(iVar18 + 8))(cVar1,*DAT_2c4a8454);
          iVar18 = *piVar10;
        }
        if (*(int *)(iVar18 + 0x18) != 0) {
          FUN_2c4a7d40();
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2f3,DAT_2c4a8458,DAT_2c4a8464,DAT_2c4a8460,DAT_2c4a845c,0x2f3,*pcVar8,
              *DAT_2c4a8454);
      }
      if (*DAT_2c4a8468 != '\0') {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x2fd,DAT_2c4a8458,DAT_2c4a8464,LAB_2c4a8470,DAT_2c4a845c,0x2fd,0x2fd,*DAT_2c4a8454)
        ;
      }
      if (*pcVar2 == '\0') {
        return 0xff;
      }
      if ((*DAT_2c4a843c == '\0') && (*DAT_2c4a8440 != '\0')) {
        return 0xff;
      }
      if ((*DAT_2c4a8444 == '\0') && (*DAT_2c4a844c != '\0' || *DAT_2c4a8448 != '\0')) {
        return 0xff;
      }
      puVar19 = (undefined4 *)*DAT_2c4a8450;
      if ((code *)*puVar19 != (code *)0x0) {
        (*(code *)*puVar19)(cVar1);
        puVar19 = (undefined4 *)*piVar10;
      }
      if (puVar19[6] != 0) {
        uVar12 = FUN_2c4a7d40();
      }
      pcVar8 = DAT_2c4a8468;
      *pcVar2 = '\0';
      *pcVar8 = '\0';
      *pcVar6 = '\0';
      *pcVar4 = '\0';
      *pcVar7 = '\0';
      return uVar12;
    }
    iVar18 = *DAT_2c4a8450;
    if (*(code **)(iVar18 + 0xc) != (code *)0x0) {
      (**(code **)(iVar18 + 0xc))(1);
      iVar18 = *piVar10;
    }
    if (*(int *)(iVar18 + 0x18) != 0) {
      FUN_2c4a7d40();
    }
    uVar14 = 0x2e6;
    uVar12 = DAT_2c4a845c;
    uVar15 = DAT_2c4a846c;
  }
  else {
    iVar18 = *DAT_2c4a8268;
    if (*(code **)(iVar18 + 0xc) != (code *)0x0) {
      (**(code **)(iVar18 + 0xc))();
      iVar18 = *piVar5;
    }
    if (*(int *)(iVar18 + 0x18) != 0) {
      FUN_2c4a7d40();
    }
    uVar14 = 0x2db;
    uVar12 = DAT_2c4a826c;
    uVar15 = DAT_2c4a8270;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar14,DAT_2c4a8278,DAT_2c4a8274,uVar15,uVar12,uVar14);
}

