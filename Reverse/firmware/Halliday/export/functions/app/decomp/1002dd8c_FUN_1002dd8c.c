/* FUN_1002dd8c @ 0x1002dd8c */

void FUN_1002dd8c(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_1002e06c;
  uVar6 = (uint)*param_1;
  uVar7 = (uint)param_1[4];
  uVar13 = (DAT_1002e070 - DAT_1002e074) * 0x20 & 0xff00;
  uVar8 = (uint)param_1[3];
  uVar9 = (uint)param_1[0xb];
  uVar10 = (uint)param_1[0xc];
  uVar11 = (uint)*(ushort *)(param_1 + 0xe);
  FUN_100a5b78(DAT_1002e080 | uVar13,DAT_1002e07c,DAT_1002e078,param_1[1],uVar11,uVar10,uVar9,uVar8,
               uVar7,uVar6);
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  iVar2 = FUN_1006ba84(&local_38,DAT_1002e084,3);
  if (-1 < iVar2) goto LAB_1002de1a;
  FUN_1002db7c();
  iVar2 = FUN_1006ba84(&local_38,DAT_1002e084,3);
  if (-1 < iVar2) goto LAB_1002de1a;
  FUN_100a5b78(DAT_1002e088 | uVar13,DAT_1002e07c,DAT_1002e08c,DAT_1002e084,uVar11,uVar10,uVar9,
               uVar8,uVar7,uVar6);
LAB_1002de06:
  do {
    uVar3 = 0xffffffff;
    while( true ) {
      if (*DAT_1002e06c == local_2c) {
        return;
      }
      FUN_1013cdc0(uVar3);
LAB_1002de1a:
      pcVar4 = (char *)thunk_FUN_1009f30c(0x114,DAT_1002e090);
      if (pcVar4 == (char *)0x0) break;
      uVar14 = 0;
      FUN_1011ea48(pcVar4,0,0x114);
      uVar3 = DAT_1002e0c8;
      bVar15 = 0;
      uVar16 = uVar13 | DAT_1002e0c4;
      do {
        iVar2 = FUN_1006bd24(&local_38,uVar14 * 0x114,0);
        uVar11 = uVar14 & 0xff;
        if ((iVar2 < 0) || (iVar2 = FUN_1006bc84(&local_38,pcVar4,0x114), iVar2 != 0x114))
        goto LAB_1002dea6;
        if (*pcVar4 != '\0') {
          bVar1 = pcVar4[1];
          if (bVar15 < bVar1) {
            bVar15 = bVar1;
          }
          FUN_100a5b78(uVar16,DAT_1002e07c,uVar3,bVar1,uVar14);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x14);
      uVar11 = 0x14;
LAB_1002dea6:
      if (param_1[1] == 0xff) {
        param_1[1] = bVar15 + 1;
      }
      if (0x12 < uVar11) {
        iVar2 = FUN_1006bd24(&local_38,0);
        if (iVar2 < 0) {
          uVar11 = 0x388;
          FUN_100a5b78(uVar13 | 0x3880012,DAT_1002e07c,DAT_1002e09c,DAT_1002e090,0x388);
          goto LAB_1002de06;
        }
        iVar2 = FUN_1006bc84(&local_38,pcVar4,0x114);
        if (iVar2 == 0x114) {
          FUN_100a5b78(DAT_1002e0a0 | uVar13,DAT_1002e07c,DAT_1002e0a4);
          FUN_1002cb88(pcVar4,0);
        }
        else {
          FUN_100a5b78(DAT_1002e0bc | uVar13,DAT_1002e07c,DAT_1002e0c0,DAT_1002e090,0x392);
        }
        FUN_100a5b78(uVar13 | 0x3940031,DAT_1002e07c,DAT_1002e0a8);
        uVar3 = DAT_1002e090;
        iVar2 = 0x114;
        uVar14 = uVar13 | DAT_1002e0cc;
        do {
          iVar5 = FUN_1006bd24(&local_38,iVar2,0);
          if ((((-1 < iVar5) && (iVar5 = FUN_1006bc84(&local_38,pcVar4,0x114), -1 < iVar5)) &&
              (iVar5 = FUN_1006bd24(&local_38,iVar2 + -0x114,0), -1 < iVar5)) &&
             (iVar5 = FUN_1006bcd4(&local_38,pcVar4,0x114), iVar5 < 0)) {
            FUN_100a5b78(uVar14,DAT_1002e07c,DAT_1002e0ac,uVar3,0x3af);
          }
          iVar2 = iVar2 + 0x114;
        } while (iVar2 != 0x16a4);
        FUN_1011ea48(pcVar4,0,0x114);
        iVar2 = FUN_1006bd24(&local_38,0x147c,0);
        if (iVar2 < 0) {
          uVar17 = 0x3b9;
          uVar14 = DAT_1002e0b0 | uVar13;
          uVar3 = DAT_1002e09c;
        }
        else {
          iVar2 = FUN_1006bcd4(&local_38,pcVar4,0x114);
          if (-1 < iVar2) goto LAB_1002dfb6;
          uVar17 = 0x3c0;
          uVar14 = uVar13 | 0x3c00012;
          uVar3 = DAT_1002e0ac;
        }
        FUN_100a5b78(uVar14,DAT_1002e07c,uVar3,DAT_1002e090,uVar17);
      }
LAB_1002dfb6:
      uVar14 = uVar11;
      if (0x12 < uVar11) {
        uVar14 = 0x13;
      }
      iVar2 = FUN_1006bd24(&local_38,uVar14 * 0x114,0);
      if (iVar2 < 0) {
        uVar18 = 0x3cc;
        uVar16 = uVar13 | 0x3cc0012;
        uVar3 = DAT_1002e07c;
        uVar17 = DAT_1002e09c;
        uVar12 = DAT_1002e090;
LAB_1002dfe6:
        FUN_100a5b78(uVar16,uVar3,uVar17,uVar12,uVar18);
      }
      else {
        iVar2 = FUN_1006bcd4(&local_38,param_1,0x114);
        if (iVar2 < 0) {
          uVar18 = 0x3d3;
          uVar16 = DAT_1002e0f8 | uVar13;
          uVar3 = DAT_1002e104;
          uVar17 = DAT_1002e0fc;
          uVar12 = DAT_1002e100;
          goto LAB_1002dfe6;
        }
      }
      FUN_100a5b78(DAT_1002e0b4 | uVar13,DAT_1002e07c,DAT_1002e0b8,param_1[1],uVar11);
      FUN_1002d288(param_1,uVar14);
      uVar13 = (uint)param_1[10];
      FUN_100a5174(uVar13 * 0xe10 + (uint)param_1[9] * 0x3c,uVar14 + 3 & 0xff,2);
      FUN_1006bc30(&local_38);
      FUN_1012d1f4(pcVar4);
      uVar3 = 0;
    }
    FUN_100a5b78(DAT_1002e094 | uVar13,DAT_1002e07c,DAT_1002e098,0x114,uVar11,uVar10,uVar9,uVar8,
                 uVar7,uVar6);
    FUN_1006bc30(&local_38);
  } while( true );
}

