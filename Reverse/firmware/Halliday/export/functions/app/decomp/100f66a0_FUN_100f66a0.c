/* FUN_100f66a0 @ 0x100f66a0 */

undefined4 FUN_100f66a0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  FUN_100e81e4();
  if (param_1 == 0) {
LAB_100f66ac:
    piVar6 = DAT_100f6988;
    pcVar1 = DAT_100f6984;
    if (*DAT_100f6984 != '\0') {
      *DAT_100f6984 = *DAT_100f6984 + '\x01';
      goto LAB_100f66d4;
    }
    if (*DAT_100f6988 == 0) {
      iVar2 = FUN_100e825c(0x4000);
      *piVar6 = iVar2;
      if (iVar2 != 0) goto LAB_100f66bc;
      FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0xb60031,DAT_100f699c,
                   DAT_100f69bc);
    }
    else {
LAB_100f66bc:
      iVar2 = FUN_100fb64c(DAT_100f698c);
      if (iVar2 == 0) {
        *pcVar1 = *pcVar1 + '\x01';
LAB_100f66d4:
        FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0xc90031,DAT_100f699c,
                     DAT_100f6998);
        return *DAT_100f698c;
      }
      FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0xbe0031,DAT_100f699c,
                   DAT_100f69c0,iVar2);
    }
    puVar5 = DAT_100f69ac;
    piVar7 = DAT_100f69b8;
    piVar8 = DAT_100f69d8;
    piVar9 = DAT_100f69dc;
    piVar10 = DAT_100f69e0;
    if (param_1 == 0) goto LAB_100f6828;
  }
  else {
    iVar2 = FUN_10138c9e();
    piVar7 = DAT_100f69a4;
    piVar6 = DAT_100f69a0;
    *DAT_100f69a0 = iVar2;
    uVar3 = FUN_10138ca2();
    piVar8 = DAT_100f69d8;
    *DAT_100f69a8 = uVar3;
    iVar2 = FUN_10138c9a();
    iVar4 = *piVar6;
    *piVar7 = iVar2;
    iVar2 = FUN_100e825c(iVar4 * 0x50);
    *piVar8 = iVar2;
    if (iVar2 == 0) {
      FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0x7e0011,DAT_100f699c,
                   DAT_100f69c4);
      puVar5 = DAT_100f69ac;
      piVar6 = DAT_100f6988;
      piVar7 = DAT_100f69b8;
      piVar9 = DAT_100f69dc;
      piVar10 = DAT_100f69e0;
    }
    else {
      iVar4 = *piVar6;
      FUN_1011ea48(iVar2,0,iVar4 * 0x50);
      iVar2 = FUN_100e825c(iVar4 * 0x38);
      piVar9 = DAT_100f69dc;
      *DAT_100f69dc = iVar2;
      if (iVar2 == 0) {
        FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0x860011,DAT_100f699c,
                     DAT_100f69c8);
        puVar5 = DAT_100f69ac;
        piVar6 = DAT_100f6988;
        piVar7 = DAT_100f69b8;
        piVar10 = DAT_100f69e0;
      }
      else {
        FUN_1011ea48(iVar2,0,*piVar6 * 0x38);
        iVar2 = FUN_10138cac();
        piVar10 = DAT_100f69e0;
        if (iVar2 != 0) {
          iVar2 = FUN_100e825c(*piVar7 * 0x78);
          *piVar10 = iVar2;
          if (iVar2 == 0) {
            FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0x900011,DAT_100f699c,
                         DAT_100f69d4);
            puVar5 = DAT_100f69ac;
            piVar6 = DAT_100f6988;
            piVar7 = DAT_100f69b8;
            goto LAB_100f6888;
          }
          FUN_1011ea48(iVar2,0,*piVar7 * 0x78);
        }
        iVar2 = FUN_10138cac();
        puVar5 = DAT_100f69ac;
        if (iVar2 != 0) {
          *DAT_100f69ac = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          iVar2 = FUN_10138cb0();
          iVar2 = FUN_100e8428(iVar2 * 0x1c);
          puVar5[3] = iVar2;
          if (iVar2 == 0) {
            FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0x9c0011,DAT_100f699c,
                         DAT_100f69cc);
            piVar6 = DAT_100f6988;
            piVar7 = DAT_100f69b8;
            piVar10 = DAT_100f69e0;
            goto LAB_100f6888;
          }
          iVar2 = FUN_10138cb0();
          piVar6 = DAT_100f69b4;
          iVar2 = *DAT_100f69b0 + iVar2 * 0x1c;
          iVar4 = *DAT_100f69b4;
          *DAT_100f69b0 = iVar2;
          if (iVar4 < iVar2) {
            *piVar6 = iVar2;
          }
        }
        iVar2 = FUN_10138c9e();
        iVar2 = FUN_100e825c(iVar2 << 4);
        piVar7 = DAT_100f69b8;
        *DAT_100f69b8 = iVar2;
        if (iVar2 != 0) {
          iVar4 = FUN_10138c9e();
          FUN_1011ea48(iVar2,0,iVar4 << 4);
          goto LAB_100f66ac;
        }
        FUN_100a5b78((DAT_100f6994 - DAT_100f6990) * 0x20 & 0xff00U | 0xa90011,DAT_100f699c,
                     DAT_100f69d0);
        puVar5 = DAT_100f69ac;
        piVar6 = DAT_100f6988;
        piVar10 = DAT_100f69e0;
      }
    }
  }
LAB_100f6888:
  if (*piVar8 != 0) {
    FUN_100e833c();
    *piVar8 = 0;
  }
  if (*piVar9 != 0) {
    FUN_100e833c();
    *piVar9 = 0;
  }
  if (*piVar10 != 0) {
    FUN_100e833c();
    *piVar10 = 0;
  }
  if (puVar5[3] != 0) {
    FUN_100e8474();
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  if (*piVar7 != 0) {
    FUN_100e833c();
    *piVar7 = 0;
  }
LAB_100f6828:
  if (*piVar6 == 0) {
    return 0;
  }
  FUN_100e833c();
  *piVar6 = 0;
  return 0;
}

