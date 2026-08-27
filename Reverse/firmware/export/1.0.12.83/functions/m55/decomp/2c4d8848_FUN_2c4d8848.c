/* FUN_2c4d8848 @ 0x2c4d8848 */

void FUN_2c4d8848(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  
  local_e8 = param_1[0x21] + param_1[1] >> 1;
  local_e0 = local_e8 - param_1[0x21];
  iVar57 = param_1[0x20] + *param_1 >> 1;
  local_e4 = iVar57 - param_1[0x20];
  iVar17 = param_1[0x10] + param_1[0x30] >> 1;
  iVar5 = param_1[0x11] + param_1[0x31] >> 1;
  iVar38 = iVar17 - param_1[0x30];
  iVar3 = iVar17 + iVar57;
  iVar21 = iVar5 - param_1[0x31];
  iVar7 = param_1[0x14] + param_1[0x34] >> 1;
  iVar57 = iVar57 - iVar17;
  iVar16 = iVar7 - param_1[0x34];
  iVar17 = param_1[4];
  param_1[4] = iVar57;
  iVar58 = iVar5 + local_e8;
  local_e8 = local_e8 - iVar5;
  *param_1 = iVar3;
  local_f0 = local_e4 + iVar21;
  iVar17 = iVar17 + param_1[0x24] >> 1;
  local_e4 = local_e4 - iVar21;
  local_ec = local_e0 - iVar38;
  iVar33 = iVar17 - param_1[0x24];
  local_e0 = local_e0 + iVar38;
  iVar5 = param_1[5];
  param_1[1] = iVar58;
  param_1[5] = local_e8;
  iVar5 = param_1[0x25] + iVar5 >> 1;
  iVar44 = iVar5 - param_1[0x25];
  iVar38 = param_1[3];
  iVar21 = param_1[0x22] + param_1[2] >> 1;
  iVar45 = iVar21 - param_1[0x22];
  param_1[3] = local_ec;
  iVar11 = param_1[6];
  iVar38 = param_1[0x23] + iVar38 >> 1;
  iVar46 = iVar38 - param_1[0x23];
  iVar12 = param_1[7];
  param_1[6] = local_e4;
  iVar11 = param_1[0x26] + iVar11 >> 1;
  iVar26 = iVar11 - param_1[0x26];
  param_1[2] = local_f0;
  param_1[7] = local_e0;
  iVar12 = param_1[0x27] + iVar12 >> 1;
  iVar22 = iVar12 - param_1[0x27];
  param_1[0x14] = iVar17 - iVar7;
  param_1[0x10] = iVar7 + iVar17;
  iVar18 = param_1[0x15] + param_1[0x35] >> 1;
  iVar8 = iVar18 - param_1[0x35];
  iVar7 = param_1[0x16] + param_1[0x36] >> 1;
  iVar23 = iVar7 - param_1[0x36];
  iVar17 = param_1[0x13] + param_1[0x33] >> 1;
  iVar13 = param_1[0x12] + param_1[0x32] >> 1;
  iVar9 = iVar17 - param_1[0x33];
  iVar27 = iVar13 - param_1[0x32];
  iVar10 = param_1[0x17] + param_1[0x37] >> 1;
  iVar6 = iVar10 - param_1[0x37];
  param_1[0x11] = iVar18 + iVar5;
  param_1[0x15] = iVar5 - iVar18;
  param_1[0x12] = iVar33 + iVar8;
  param_1[0x16] = iVar33 - iVar8;
  param_1[0x17] = iVar44 + iVar16;
  param_1[0x13] = iVar44 - iVar16;
  param_1[0x20] = iVar13 + iVar21;
  param_1[0x24] = iVar21 - iVar13;
  param_1[0x21] = iVar17 + iVar38;
  param_1[0x25] = iVar38 - iVar17;
  param_1[0x22] = iVar45 + iVar9;
  param_1[0x23] = iVar46 - iVar27;
  param_1[0x26] = iVar45 - iVar9;
  param_1[0x27] = iVar27 + iVar46;
  param_1[0x30] = iVar7 + iVar11;
  param_1[0x34] = iVar11 - iVar7;
  param_1[0x31] = iVar10 + iVar12;
  param_1[0x35] = iVar12 - iVar10;
  param_1[0x32] = iVar26 + iVar6;
  param_1[0x36] = iVar26 - iVar6;
  param_1[0x33] = iVar22 - iVar23;
  param_1[0x37] = iVar23 + iVar22;
  iVar17 = param_1[0x29] + param_1[9] >> 1;
  iVar13 = iVar17 - param_1[0x29];
  iVar5 = param_1[0x28] + param_1[8] >> 1;
  iVar16 = iVar5 - param_1[0x28];
  iVar12 = param_1[0x1c] + param_1[0x3c] >> 1;
  iVar46 = iVar12 - param_1[0x3c];
  iVar18 = param_1[0x18] + param_1[0x38] >> 1;
  iVar38 = param_1[0x19] + param_1[0x39] >> 1;
  iVar21 = param_1[0xc] + param_1[0x2c] >> 1;
  iVar47 = iVar21 - param_1[0x2c];
  iVar11 = iVar18 - param_1[0x38];
  iVar34 = iVar5 - iVar18;
  iVar7 = iVar38 - param_1[0x39];
  iVar18 = iVar18 + iVar5;
  iVar26 = iVar38 + iVar17;
  iVar17 = iVar17 - iVar38;
  param_1[8] = iVar18;
  param_1[9] = iVar26;
  iVar42 = iVar16 + iVar7;
  param_1[0xc] = iVar34;
  iVar16 = iVar16 - iVar7;
  iVar7 = iVar13 + iVar11;
  iVar13 = iVar13 - iVar11;
  iVar5 = param_1[0xd];
  param_1[0x18] = iVar12 + iVar21;
  param_1[0xd] = iVar17;
  iVar5 = param_1[0x2d] + iVar5 >> 1;
  iVar27 = iVar5 - param_1[0x2d];
  iVar38 = param_1[10];
  param_1[10] = iVar42;
  iVar38 = param_1[0x2a] + iVar38 >> 1;
  iVar28 = iVar38 - param_1[0x2a];
  param_1[0x1c] = iVar21 - iVar12;
  iVar21 = param_1[0x2b] + param_1[0xb] >> 1;
  iVar33 = iVar21 - param_1[0x2b];
  param_1[0xb] = iVar13;
  iVar11 = param_1[0x2e] + param_1[0xe] >> 1;
  iVar29 = iVar11 - param_1[0x2e];
  iVar12 = param_1[0xf];
  param_1[0xe] = iVar16;
  param_1[0xf] = iVar7;
  iVar12 = param_1[0x2f] + iVar12 >> 1;
  iVar44 = iVar12 - param_1[0x2f];
  iVar6 = param_1[0x1b] + param_1[0x3b] >> 1;
  iVar8 = iVar6 - param_1[0x3b];
  iVar19 = param_1[0x1d] + param_1[0x3d] >> 1;
  iVar30 = iVar19 - param_1[0x3d];
  iVar45 = param_1[0x1a] + param_1[0x3a] >> 1;
  iVar24 = iVar45 - param_1[0x3a];
  iVar9 = param_1[0x1e] + param_1[0x3e] >> 1;
  iVar22 = iVar9 - param_1[0x3e];
  iVar10 = param_1[0x1f] + param_1[0x3f] >> 1;
  iVar23 = iVar10 - param_1[0x3f];
  param_1[0x19] = iVar19 + iVar5;
  param_1[0x1d] = iVar5 - iVar19;
  param_1[0x1a] = iVar47 + iVar30;
  param_1[0x1e] = iVar47 - iVar30;
  param_1[0x1f] = iVar27 + iVar46;
  param_1[0x1b] = iVar27 - iVar46;
  param_1[0x28] = iVar45 + iVar38;
  param_1[0x2c] = iVar38 - iVar45;
  param_1[0x29] = iVar6 + iVar21;
  param_1[0x2d] = iVar21 - iVar6;
  param_1[0x2e] = iVar28 - iVar8;
  param_1[0x2a] = iVar28 + iVar8;
  param_1[0x2f] = iVar24 + iVar33;
  param_1[0x2b] = iVar33 - iVar24;
  param_1[0x38] = iVar9 + iVar11;
  param_1[0x3c] = iVar11 - iVar9;
  param_1[0x39] = iVar10 + iVar12;
  param_1[0x3d] = iVar12 - iVar10;
  param_1[0x3a] = iVar29 + iVar23;
  param_1[0x3e] = iVar29 - iVar23;
  param_1[0x3b] = iVar44 - iVar22;
  param_1[0x3f] = iVar44 + iVar22;
  piVar4 = param_1 + 0x10;
  while( true ) {
    iVar5 = (int)((ulonglong)((longlong)iVar42 * 0x5a82) >> 0x10);
    iVar21 = (int)((ulonglong)((longlong)iVar7 * 0x5a82) >> 0x10);
    iVar38 = (int)((ulonglong)((longlong)iVar13 * 0x5a82) >> 0x10);
    iVar11 = (int)((ulonglong)((longlong)iVar16 * 0x5a82) >> 0x10);
    iVar12 = iVar38 - iVar5;
    iVar38 = iVar38 + iVar5;
    piVar4[-0x10] = (iVar18 >> 1) + (iVar3 >> 1);
    piVar4[-8] = (iVar3 >> 1) - (iVar18 >> 1);
    piVar4[-0xf] = (iVar26 >> 1) + (iVar58 >> 1);
    piVar4[-0xc] = (iVar17 >> 1) + (iVar57 >> 1);
    piVar4[-0xe] = iVar38 + (local_f0 >> 1);
    piVar4[-7] = (iVar58 >> 1) - (iVar26 >> 1);
    iVar5 = iVar21 - iVar11;
    iVar11 = iVar11 + iVar21;
    piVar4[-0xb] = (local_e8 >> 1) - (iVar34 >> 1);
    piVar4[-0xd] = iVar12 + (local_ec >> 1);
    piVar4[-4] = (iVar57 >> 1) - (iVar17 >> 1);
    piVar4[-3] = (iVar34 >> 1) + (local_e8 >> 1);
    piVar4[-6] = (local_f0 >> 1) - iVar38;
    piVar4[-5] = (local_ec >> 1) - iVar12;
    piVar4[-10] = iVar5 + (local_e4 >> 1);
    piVar4[-9] = (local_e0 >> 1) - iVar11;
    piVar4[-2] = (local_e4 >> 1) - iVar5;
    piVar4[-1] = iVar11 + (local_e0 >> 1);
    if (param_1 + 0x50 == piVar4 + 0x10) break;
    local_f0 = piVar4[2];
    local_ec = piVar4[3];
    local_e4 = piVar4[6];
    iVar57 = piVar4[4];
    local_e8 = piVar4[5];
    local_e0 = piVar4[7];
    iVar3 = *piVar4;
    iVar58 = piVar4[1];
    iVar42 = piVar4[10];
    iVar13 = piVar4[0xb];
    iVar16 = piVar4[0xe];
    iVar7 = piVar4[0xf];
    iVar18 = piVar4[8];
    iVar26 = piVar4[9];
    iVar34 = piVar4[0xc];
    iVar17 = piVar4[0xd];
    piVar4 = piVar4 + 0x10;
  }
  iVar18 = (param_1[0x30] >> 1) + (param_1[0x20] >> 1) >> 1;
  iVar57 = (param_1[0x20] >> 1) - (param_1[0x30] >> 1) >> 1;
  iVar26 = (param_1[0x21] >> 1) - (param_1[0x31] >> 1) >> 1;
  iVar17 = (int)((ulonglong)((longlong)param_1[0x14] * 0x5a82) >> 0x10);
  iVar10 = (param_1[0x31] >> 1) + (param_1[0x21] >> 1) >> 1;
  iVar11 = (int)((ulonglong)((longlong)param_1[0x15] * 0x5a82) >> 0x10);
  iVar31 = iVar17 + iVar11;
  iVar11 = iVar11 - iVar17;
  iVar17 = (int)((ulonglong)((longlong)param_1[0x1c] * 0x5a82) >> 0x10);
  iVar12 = (int)((ulonglong)((longlong)param_1[0x1d] * 0x5a82) >> 0x10);
  sVar2 = (short)((uint)DAT_2c4d9040 >> 0x10);
  sVar1 = (short)DAT_2c4d9040;
  iVar59 = (int)((uint6)((int6)param_1[0x13] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x12] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar36 = (int)((uint6)((int6)param_1[0x12] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x13] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar48 = (int)((uint6)((int6)param_1[0x1b] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x1a] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar60 = (int)((uint6)((int6)param_1[0x1a] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x1b] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar49 = (int)((uint6)((int6)param_1[0x33] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x32] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar22 = (int)((uint6)((int6)param_1[0x32] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x33] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar27 = (int)((uint6)((int6)param_1[0x3b] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x3a] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar61 = (int)((uint6)((int6)param_1[0x3a] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x3b] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar13 = *param_1;
  iVar20 = iVar12 - iVar17;
  iVar12 = iVar12 + iVar17;
  iVar17 = (int)((ulonglong)((longlong)param_1[0x35] * 0x5a82) >> 0x10);
  iVar38 = (int)((ulonglong)((longlong)param_1[0x34] * 0x5a82) >> 0x10);
  iVar16 = param_1[1];
  iVar23 = iVar17 - iVar38;
  iVar38 = iVar38 + iVar17;
  iVar7 = (int)((ulonglong)((longlong)param_1[0x3d] * 0x5a82) >> 0x10);
  iVar17 = (int)((ulonglong)((longlong)param_1[0x3c] * 0x5a82) >> 0x10);
  iVar33 = iVar7 - iVar17;
  iVar7 = iVar7 + iVar17;
  sVar2 = (short)((uint)DAT_2c4d9044 >> 0x10);
  sVar1 = (short)DAT_2c4d9044;
  iVar8 = (int)((uint6)((int6)param_1[0x17] * (int6)sVar1 +
                       (int6)-(int)((ulonglong)((longlong)param_1[0x16] * (longlong)sVar2) >> 0x10)
                       * 0x10000) >> 0x10);
  iVar34 = (int)((uint6)((int6)param_1[0x16] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x17] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar44 = param_1[2];
  iVar45 = param_1[3];
  iVar46 = param_1[4];
  iVar19 = param_1[5];
  iVar24 = param_1[6];
  iVar58 = param_1[10];
  iVar42 = param_1[7];
  iVar21 = param_1[8];
  iVar28 = param_1[0xb];
  iVar9 = param_1[0xc];
  iVar29 = param_1[0xd];
  iVar39 = (int)((uint6)((int6)param_1[0x1f] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x1e] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar25 = (int)((uint6)((int6)param_1[0x1e] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x1f] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar17 = (int)((ulonglong)((longlong)((param_1[0x39] >> 1) + (param_1[0x28] >> 1)) * 0x5a82) >>
                0x10);
  iVar5 = (int)((ulonglong)((longlong)((param_1[0x28] >> 1) - (param_1[0x39] >> 1)) * 0x5a82) >>
               0x10);
  iVar3 = (int)((ulonglong)((longlong)((param_1[0x29] >> 1) - (param_1[0x38] >> 1)) * 0x5a82) >>
               0x10);
  iVar6 = (int)((ulonglong)((longlong)((param_1[0x38] >> 1) + (param_1[0x29] >> 1)) * 0x5a82) >>
               0x10);
  iVar62 = iVar3 - iVar17;
  iVar3 = iVar3 + iVar17;
  iVar32 = iVar6 - iVar5;
  iVar6 = iVar6 + iVar5;
  iVar47 = param_1[0xe];
  iVar14 = param_1[0xf];
  iVar40 = (int)((uint6)((int6)param_1[0x37] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x36] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar15 = (int)((uint6)((int6)param_1[0x36] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x37] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar41 = (int)((uint6)((int6)param_1[0x3f] * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)param_1[0x3e] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar30 = (int)((uint6)((int6)param_1[0x3e] * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)param_1[0x3f] * (longlong)sVar2) >> 0x10)
                        * 0x10000) >> 0x10);
  iVar17 = (param_1[0x10] >> 1) + (iVar13 >> 1) >> 1;
  *param_1 = iVar18 + iVar17;
  param_1[0x20] = iVar17 - iVar18;
  iVar17 = (param_1[0x11] >> 1) + (param_1[1] >> 1) >> 1;
  param_1[1] = iVar10 + iVar17;
  param_1[0x21] = iVar17 - iVar10;
  iVar17 = (iVar13 >> 1) - (param_1[0x10] >> 1) >> 1;
  param_1[0x10] = iVar26 + iVar17;
  param_1[0x30] = iVar17 - iVar26;
  iVar17 = (iVar16 >> 1) - (param_1[0x11] >> 1) >> 1;
  param_1[0x11] = iVar17 - iVar57;
  param_1[0x31] = iVar57 + iVar17;
  iVar57 = (param_1[0x19] >> 1) + (iVar21 >> 1) >> 1;
  param_1[8] = iVar3 + iVar57;
  iVar17 = (param_1[9] >> 1) - (param_1[0x18] >> 1) >> 1;
  iVar5 = (iVar21 >> 1) - (param_1[0x19] >> 1) >> 1;
  iVar21 = (param_1[0x18] >> 1) + (param_1[9] >> 1) >> 1;
  iVar18 = iVar49 + (param_1[0x23] >> 1);
  iVar49 = (param_1[0x23] >> 1) - iVar49;
  iVar16 = iVar22 + (param_1[0x22] >> 1);
  iVar22 = (param_1[0x22] >> 1) - iVar22;
  iVar50 = iVar23 + (param_1[0x25] >> 1);
  iVar23 = (param_1[0x25] >> 1) - iVar23;
  iVar26 = (param_1[0x24] >> 1) - iVar38;
  iVar38 = iVar38 + (param_1[0x24] >> 1);
  iVar51 = iVar40 + (param_1[0x27] >> 1);
  iVar40 = (param_1[0x27] >> 1) - iVar40;
  iVar37 = iVar15 + (param_1[0x26] >> 1);
  iVar15 = (param_1[0x26] >> 1) - iVar15;
  iVar52 = (param_1[0x2b] >> 1) - iVar61;
  iVar61 = iVar61 + (param_1[0x2b] >> 1);
  iVar35 = iVar27 + (param_1[0x2a] >> 1);
  iVar27 = (param_1[0x2a] >> 1) - iVar27;
  iVar53 = (param_1[0x2d] >> 1) - iVar7;
  iVar7 = iVar7 + (param_1[0x2d] >> 1);
  iVar63 = iVar33 + (param_1[0x2c] >> 1);
  iVar33 = (param_1[0x2c] >> 1) - iVar33;
  iVar54 = (param_1[0x2f] >> 1) - iVar30;
  iVar30 = iVar30 + (param_1[0x2f] >> 1);
  iVar10 = iVar41 + (param_1[0x2e] >> 1);
  iVar41 = (param_1[0x2e] >> 1) - iVar41;
  sVar2 = (short)((uint)DAT_2c4d940c >> 0x10);
  sVar1 = (short)DAT_2c4d940c;
  iVar13 = (int)((uint6)((int6)iVar18 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar16 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar55 = (int)((uint6)((int6)iVar16 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar18 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar16 = (int)((uint6)((int6)iVar49 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar22 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar43 = (int)((uint6)((int6)iVar22 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar49 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  sVar2 = (short)((uint)DAT_2c4d9410 >> 0x10);
  sVar1 = (short)DAT_2c4d9410;
  iVar18 = (int)((uint6)((int6)iVar50 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar38 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar49 = (int)((uint6)((int6)iVar38 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar50 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar22 = (int)((uint6)((int6)iVar23 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar26 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar50 = (int)((uint6)((int6)iVar26 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar23 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  sVar2 = (short)((uint)DAT_2c4d9414 >> 0x10);
  sVar1 = (short)DAT_2c4d9414;
  iVar56 = (int)((uint6)((int6)iVar51 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar37 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar37 = (int)((uint6)((int6)iVar37 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar51 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar51 = (int)((uint6)((int6)iVar40 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar15 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar15 = (int)((uint6)((int6)iVar15 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar40 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  sVar2 = (short)((uint)DAT_2c4d9418 >> 0x10);
  sVar1 = (short)DAT_2c4d9418;
  iVar40 = (int)((uint6)((int6)iVar52 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar35 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar26 = (int)((uint6)((int6)iVar35 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar52 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar35 = (int)((uint6)((int6)iVar61 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar27 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar27 = (int)((uint6)((int6)iVar27 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar61 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  sVar2 = (short)((uint)(DAT_2c4d9418 + 0xbd3e9df) >> 0x10);
  sVar1 = (short)(DAT_2c4d9418 + 0xbd3e9df);
  iVar52 = (int)((uint6)((int6)iVar53 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar63 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar23 = (int)((uint6)((int6)iVar63 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar53 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar61 = (int)((uint6)((int6)iVar7 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar33 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar53 = (int)((uint6)((int6)iVar33 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar7 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  sVar2 = (short)((uint)DAT_2c4d941c >> 0x10);
  sVar1 = (short)DAT_2c4d941c;
  iVar33 = (int)((uint6)((int6)iVar54 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar10 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar54 = (int)((uint6)((int6)iVar10 * (int6)sVar1 +
                        (int6)(int)((ulonglong)((longlong)iVar54 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar10 = (int)((uint6)((int6)iVar30 * (int6)sVar1 +
                        (int6)-(int)((ulonglong)((longlong)iVar41 * (longlong)sVar2) >> 0x10) *
                        0x10000) >> 0x10);
  iVar7 = (int)((uint6)((int6)iVar41 * (int6)sVar1 +
                       (int6)(int)((ulonglong)((longlong)iVar30 * (longlong)sVar2) >> 0x10) *
                       0x10000) >> 0x10);
  iVar38 = iVar36 + (param_1[2] >> 1) >> 1;
  param_1[2] = iVar55 + iVar38;
  param_1[0x22] = iVar38 - iVar55;
  iVar38 = iVar59 + (param_1[3] >> 1) >> 1;
  param_1[3] = iVar13 + iVar38;
  param_1[0x23] = iVar38 - iVar13;
  iVar38 = (iVar44 >> 1) - iVar36 >> 1;
  param_1[0x12] = iVar16 + iVar38;
  param_1[0x32] = iVar38 - iVar16;
  iVar38 = (iVar45 >> 1) - iVar59 >> 1;
  param_1[0x13] = iVar38 - iVar43;
  param_1[0x33] = iVar43 + iVar38;
  iVar38 = iVar31 + (param_1[4] >> 1) >> 1;
  param_1[4] = iVar49 + iVar38;
  param_1[0x24] = iVar38 - iVar49;
  iVar38 = iVar11 + (param_1[5] >> 1) >> 1;
  param_1[0x25] = iVar38 - iVar18;
  param_1[5] = iVar18 + iVar38;
  iVar38 = (iVar46 >> 1) - iVar31 >> 1;
  param_1[0x14] = iVar22 + iVar38;
  param_1[0x34] = iVar38 - iVar22;
  iVar38 = (iVar19 >> 1) - iVar11 >> 1;
  param_1[0x15] = iVar38 - iVar50;
  param_1[0x35] = iVar50 + iVar38;
  iVar38 = iVar34 + (param_1[6] >> 1) >> 1;
  param_1[6] = iVar37 + iVar38;
  param_1[0x26] = iVar38 - iVar37;
  iVar38 = iVar8 + (param_1[7] >> 1) >> 1;
  param_1[7] = iVar56 + iVar38;
  param_1[0x27] = iVar38 - iVar56;
  param_1[9] = iVar62 + iVar17;
  iVar38 = (iVar24 >> 1) - iVar34 >> 1;
  param_1[0x16] = iVar51 + iVar38;
  param_1[0x28] = iVar57 - iVar3;
  param_1[0x36] = iVar38 - iVar51;
  iVar57 = (iVar42 >> 1) - iVar8 >> 1;
  param_1[0x29] = iVar17 - iVar62;
  param_1[0x37] = iVar15 + iVar57;
  param_1[0x18] = iVar32 + iVar5;
  param_1[0x17] = iVar57 - iVar15;
  iVar57 = iVar48 + (param_1[10] >> 1) >> 1;
  param_1[0x19] = iVar21 - iVar6;
  param_1[0x38] = iVar5 - iVar32;
  param_1[10] = iVar26 + iVar57;
  iVar17 = (param_1[0xb] >> 1) - iVar60 >> 1;
  param_1[0x2a] = iVar57 - iVar26;
  param_1[0xb] = iVar40 + iVar17;
  param_1[0x39] = iVar6 + iVar21;
  param_1[0x2b] = iVar17 - iVar40;
  iVar57 = (iVar58 >> 1) - iVar48 >> 1;
  param_1[0x1a] = iVar35 + iVar57;
  param_1[0x3a] = iVar57 - iVar35;
  iVar57 = iVar60 + (iVar28 >> 1) >> 1;
  param_1[0x1b] = iVar57 - iVar27;
  param_1[0x3b] = iVar27 + iVar57;
  iVar57 = iVar20 + (param_1[0xc] >> 1) >> 1;
  param_1[0xc] = iVar23 + iVar57;
  param_1[0x2c] = iVar57 - iVar23;
  iVar57 = (param_1[0xd] >> 1) - iVar12 >> 1;
  param_1[0x2d] = iVar57 - iVar52;
  param_1[0xd] = iVar52 + iVar57;
  iVar57 = (iVar9 >> 1) - iVar20 >> 1;
  param_1[0x3c] = iVar57 - iVar61;
  param_1[0x1c] = iVar61 + iVar57;
  iVar57 = iVar12 + (iVar29 >> 1) >> 1;
  param_1[0x1d] = iVar57 - iVar53;
  param_1[0x3d] = iVar53 + iVar57;
  iVar57 = iVar39 + (param_1[0xe] >> 1) >> 1;
  param_1[0xe] = iVar54 + iVar57;
  iVar17 = (param_1[0xf] >> 1) - iVar25 >> 1;
  param_1[0x2e] = iVar57 - iVar54;
  param_1[0xf] = iVar33 + iVar17;
  param_1[0x2f] = iVar17 - iVar33;
  iVar57 = (iVar47 >> 1) - iVar39 >> 1;
  param_1[0x1e] = iVar10 + iVar57;
  param_1[0x3e] = iVar57 - iVar10;
  iVar57 = iVar25 + (iVar14 >> 1) >> 1;
  param_1[0x1f] = iVar57 - iVar7;
  param_1[0x3f] = iVar7 + iVar57;
  return;
}

