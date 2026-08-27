/* FUN_2c4a3c88 @ 0x2c4a3c88 */

undefined4 FUN_2c4a3c88(int param_1,int param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  sbyte *psVar13;
  int iVar14;
  undefined4 uVar15;
  sbyte *psVar16;
  char *pcVar17;
  sbyte *psVar18;
  
  pcVar17 = DAT_2c4a3f68;
  piVar4 = DAT_2c4a3f24;
  if (*DAT_2c4a3f0c == 0) {
    if (*DAT_2c4a3f64 != '\0') {
LAB_2c4a3e3a:
      *DAT_2c4a3f64 = '\0';
      *pcVar17 = '\0';
      iVar14 = *piVar4;
      if (*(code **)(iVar14 + 0x14) != (code *)0x0) {
        (**(code **)(iVar14 + 0x14))();
        iVar14 = *piVar4;
      }
      if (*(int *)(iVar14 + 0x18) != 0) {
        FUN_2c4a39a8();
      }
      uVar11 = 0x290;
      uVar10 = 0x290;
      uVar15 = DAT_2c4a3f48;
LAB_2c4a3de2:
                    /* WARNING: Subroutine does not return */
      TRACE(4,uVar11,DAT_2c4a3f34,DAT_2c4a3f30,uVar15,DAT_2c4a3f28,uVar10);
    }
LAB_2c4a3cd8:
    if (param_2 != 0) {
      psVar16 = (sbyte *)*DAT_2c4a3f10;
      goto LAB_2c4a3d02;
    }
  }
  else {
    psVar16 = (sbyte *)*DAT_2c4a3f10;
    psVar18 = psVar16 + *DAT_2c4a3f0c + 3;
    psVar9 = psVar16 + 3;
    do {
      psVar13 = psVar9 + 1;
      uVar12 = param_1 >> *psVar9 & 1;
      if (psVar18 == psVar13) {
        if (*DAT_2c4a3f64 == '\0') goto LAB_2c4a3cd4;
        if (uVar12 == 0) goto LAB_2c4a3e3a;
        goto LAB_2c4a3d02;
      }
      psVar9 = psVar13;
    } while (uVar12 == 0);
    do {
      psVar9 = psVar13 + 1;
      psVar13 = psVar13 + 2;
      if (psVar9 == psVar18) {
        if (*DAT_2c4a3f64 != '\0') goto LAB_2c4a3d02;
        goto LAB_2c4a3dae;
      }
    } while (psVar13 != psVar18);
    if (*DAT_2c4a3f64 == '\0') {
LAB_2c4a3cd4:
      if (uVar12 != 0) {
LAB_2c4a3dae:
        *DAT_2c4a3f64 = '\x01';
        *pcVar17 = '\0';
        iVar14 = *piVar4;
        if (*(code **)(iVar14 + 0x10) != (code *)0x0) {
          (**(code **)(iVar14 + 0x10))();
          iVar14 = *piVar4;
        }
        if (*(int *)(iVar14 + 0x18) != 0) {
          FUN_2c4a39a8();
        }
        uVar11 = 0x29d;
        uVar10 = 0x29d;
        uVar15 = DAT_2c4a3f38;
        goto LAB_2c4a3de2;
      }
      goto LAB_2c4a3cd8;
    }
LAB_2c4a3d02:
    if (-1 < (param_1 >> *psVar16 | param_1 >> psVar16[1] | param_1 >> psVar16[2]) << 0x1f) {
      *DAT_2c4a3f68 = '\x01';
      goto LAB_2c4a3d22;
    }
  }
  if (*DAT_2c4a3f68 == '\0') {
    return 0xff;
  }
LAB_2c4a3d22:
  pcVar3 = DAT_2c4a3f6c;
  pcVar17 = DAT_2c4a3f14;
  FUN_2c4a3938(param_1,param_2);
  cVar1 = *pcVar3;
  if ((cVar1 == '\0') || (*DAT_2c4a3f18 != '\0')) {
    *pcVar17 = '\0';
  }
  else {
    *pcVar17 = '\x01';
  }
  pcVar8 = DAT_2c4a408c;
  piVar7 = DAT_2c4a4058;
  pcVar6 = DAT_2c4a3f70;
  pcVar5 = DAT_2c4a3f40;
  piVar4 = DAT_2c4a3f24;
  pcVar2 = DAT_2c4a3f1c;
  if (*DAT_2c4a3f1c != '\0') {
    psVar9 = (sbyte *)*DAT_2c4a3f10;
    if (((param_1 >> *psVar9 | param_1 >> psVar9[1] | param_1 >> psVar9[2]) & 1U) != 0) {
      return 0xff;
    }
    *DAT_2c4a3f3c = 0;
    pcVar6 = DAT_2c4a3f44;
    pcVar3 = DAT_2c4a3f20;
    *pcVar17 = '\0';
    *pcVar2 = '\0';
    *pcVar5 = '\0';
    *pcVar3 = '\0';
    *pcVar6 = '\0';
    FUN_2c4a335c();
    return 0xff;
  }
  if (*DAT_2c4a3f20 == '\0') {
    if (*DAT_2c4a3f44 == '\0') {
      if (*DAT_2c4a3f40 != '\0') {
        if (((*DAT_2c4a3f4c != '\0') || (*DAT_2c4a3f50 == '\0')) &&
           ((*DAT_2c4a3f54 != '\0' || (*DAT_2c4a3f5c == '\0' && *DAT_2c4a3f58 == '\0')))) {
          iVar14 = *DAT_2c4a3f24;
          pcVar17 = DAT_2c4a408c;
          if (*(code **)(iVar14 + 8) != (code *)0x0) {
            (**(code **)(iVar14 + 8))(cVar1,*DAT_2c4a3f70);
            iVar14 = *piVar4;
            pcVar17 = pcVar6;
          }
          if (*(int *)(iVar14 + 0x18) != 0) {
            FUN_2c4a39a8();
          }
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x2ec,DAT_2c4a3f34,DAT_2c4a3f30,DAT_2c4a3f60,DAT_2c4a3f28,0x2ec,*pcVar3,*pcVar17);
        }
        return 0xff;
      }
      if (*DAT_2c4a4088 == '\0') {
        if (*pcVar17 == '\0') {
          return 0xff;
        }
        if ((*DAT_2c4a4070 == '\0') && (*DAT_2c4a4074 != '\0')) {
          return 0xff;
        }
        if ((*DAT_2c4a4078 == '\0') && (*DAT_2c4a4080 != '\0' || *DAT_2c4a407c != '\0')) {
          return 0xff;
        }
        if (*(code **)*DAT_2c4a4058 != (code *)0x0) {
          (**(code **)*DAT_2c4a4058)(cVar1);
        }
        if (*(int *)(*piVar7 + 0x18) != 0) {
          FUN_2c4a39a8();
        }
        cVar1 = *pcVar3;
        uVar11 = 0x310;
        uVar10 = 0x310;
        uVar15 = DAT_2c4a4084;
      }
      else {
        iVar14 = *DAT_2c4a4058;
        if (*(code **)(iVar14 + 4) != (code *)0x0) {
          (**(code **)(iVar14 + 4))(*DAT_2c4a408c);
          iVar14 = *piVar7;
        }
        if (*(int *)(iVar14 + 0x18) != 0) {
          FUN_2c4a39a8();
        }
        cVar1 = *pcVar8;
        uVar11 = 0x2fe;
        uVar10 = 0x2fe;
        uVar15 = DAT_2c4a4064;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,uVar11,DAT_2c4a406c,DAT_2c4a4068,uVar15,DAT_2c4a405c,uVar10,cVar1);
    }
    iVar14 = *DAT_2c4a4058;
    if (*(code **)(iVar14 + 0xc) != (code *)0x0) {
      (**(code **)(iVar14 + 0xc))(1);
      iVar14 = *piVar7;
    }
    if (*(int *)(iVar14 + 0x18) != 0) {
      FUN_2c4a39a8();
    }
    uVar10 = 0x2df;
    uVar11 = DAT_2c4a405c;
    uVar15 = DAT_2c4a4060;
  }
  else {
    iVar14 = *DAT_2c4a3f24;
    if (*(code **)(iVar14 + 0xc) != (code *)0x0) {
      (**(code **)(iVar14 + 0xc))();
      iVar14 = *piVar4;
    }
    if (*(int *)(iVar14 + 0x18) != 0) {
      FUN_2c4a39a8();
    }
    uVar10 = 0x2d4;
    uVar11 = DAT_2c4a3f28;
    uVar15 = DAT_2c4a3f2c;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar10,DAT_2c4a3f34,DAT_2c4a3f30,uVar15,uVar11,uVar10);
}

