/* FUN_2c4e51a4 @ 0x2c4e51a4 */

void FUN_2c4e51a4(float param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float extraout_s0;
  float fVar13;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar6 = DAT_2c4e5be0;
  switch(param_6) {
  case 2:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e54c0) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_2 = (fVar17 * 0.5) / param_2;
    bVar1 = FUN_2c666230(fVar26);
    fVar25 = 1.0 / (param_2 + 1.0);
    fVar16 = (1.0 - extraout_s0_00) * 0.5 * fVar25;
    fVar23 = (1.0 - param_2) * fVar25;
    fVar17 = (1.0 - extraout_s0_00) * fVar25;
    fVar26 = extraout_s0_00;
    goto LAB_2c4e5528;
  case 3:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e5bcc) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_2 = (fVar17 * 0.5) / param_2;
    bVar1 = FUN_2c666230(fVar26);
    fVar25 = 1.0 / (param_2 + 1.0);
    fVar16 = (extraout_s0_05 + 1.0) * 0.5 * fVar25;
    fVar23 = (1.0 - param_2) * fVar25;
    fVar17 = -(fVar25 * (extraout_s0_05 + 1.0));
    fVar26 = extraout_s0_05;
LAB_2c4e5528:
    fVar25 = fVar26 * -2.0 * fVar25;
    param_3[2] = fVar16;
    iVar9 = (int)fVar16;
    param_3[3] = fVar17;
    bVar11 = fVar16 < 0.0;
    param_3[4] = fVar16;
    *param_3 = fVar25;
    iVar21 = (int)fVar23;
    param_3[1] = fVar23;
    uVar12 = in_fpscr & 0xfffffff | (uint)(fVar23 < 0.0) << 0x1f;
    fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
LAB_2c4e5580:
    if (iVar9 != 0) {
      bVar11 = false;
    }
    if ((int)uVar12 < 0) {
      bVar1 = 1;
    }
    if (-1 < (int)uVar12) {
      bVar1 = 0;
    }
    iVar20 = iVar9;
    fVar22 = fVar16;
    fVar24 = fVar19;
    bVar7 = bVar11;
    if (iVar21 == 0) {
      bVar2 = (bool)(bVar1 & 1);
    }
    else {
      bVar2 = false;
    }
    break;
  case 4:
    fVar26 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (fVar26 * DAT_2c4e5bcc) / fVar17;
    fVar26 = (float)FUN_2c6670a0(fVar17);
    bVar1 = FUN_2c666230(fVar17);
    fVar17 = DAT_2c4e5bd0;
    param_3[3] = DAT_2c4e5bd0;
    param_2 = (fVar26 * 0.5) / param_2;
    fVar25 = 1.0 / (param_2 + 1.0);
    fVar22 = fVar26 * -0.5 * fVar25;
    fVar16 = fVar26 * 0.5 * fVar25;
    fVar23 = (1.0 - param_2) * fVar25;
    iVar9 = (int)fVar22;
    param_3[4] = fVar22;
    uVar12 = in_fpscr & 0xfffffff;
    param_3[2] = fVar16;
    fVar25 = extraout_s0_03 * -2.0 * fVar25;
    param_3[1] = fVar23;
    iVar20 = (int)fVar16;
    bVar7 = fVar16 < fVar17;
    *param_3 = fVar25;
    iVar21 = (int)fVar23;
    bVar11 = iVar9 == 0 && fVar22 < fVar17;
    fVar19 = (float)VectorSignedToFloat(iVar20,(byte)(uVar12 >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    uVar12 = uVar12 | (uint)(fVar23 < fVar17) << 0x1f;
    goto LAB_2c4e5332;
  case 5:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e5bcc) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_2 = (fVar17 * 0.5) / param_2;
    bVar1 = FUN_2c666230(fVar26);
    fVar17 = DAT_2c4e5bd0;
    param_3[3] = DAT_2c4e5bd0;
    fVar25 = 1.0 / (param_2 + 1.0);
    fVar16 = param_2 * fVar25;
    fVar23 = (1.0 - param_2) * fVar25;
    fVar25 = extraout_s0_04 * -2.0 * fVar25;
    iVar9 = (int)fVar16;
    param_3[2] = fVar16;
    bVar11 = fVar16 < fVar17;
    param_3[4] = fVar16;
    *param_3 = fVar25;
    iVar21 = (int)fVar23;
    param_3[1] = fVar23;
    uVar12 = in_fpscr & 0xfffffff | (uint)(fVar23 < fVar17) << 0x1f;
    fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    goto LAB_2c4e5580;
  case 6:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e54c0) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_2 = (fVar17 * 0.5) / param_2;
    fVar17 = (float)FUN_2c666230(fVar26);
    uVar12 = in_fpscr & 0xfffffff;
    fVar16 = 1.0 / (param_2 + 1.0);
    fVar23 = (1.0 - param_2) * fVar16;
    param_3[2] = fVar16;
    iVar9 = (int)fVar16;
    param_3[4] = fVar16;
    fVar17 = fVar17 * -2.0 * fVar16;
    param_3[1] = fVar23;
    iVar21 = (int)fVar23;
    param_3[3] = fVar17;
    bVar11 = iVar9 == 0 && param_2 < -1.0;
    fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    bVar2 = iVar21 == 0 && fVar23 < 0.0;
    *param_3 = fVar17;
    iVar20 = iVar9;
    fVar22 = fVar16;
    fVar24 = fVar19;
    fVar25 = fVar17;
    bVar7 = bVar11;
    break;
  case 7:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    iVar9 = 1;
    fVar26 = (fVar17 * DAT_2c4e54c0) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_2 = (fVar17 * 0.5) / param_2;
    fVar26 = (float)FUN_2c666230(fVar26);
    bVar11 = false;
    param_3[4] = 1.0;
    fVar17 = param_2 + 1.0;
    fVar16 = (1.0 - param_2) / fVar17;
    fVar17 = (fVar26 * -2.0) / fVar17;
    uVar12 = in_fpscr & 0xfffffff;
    param_3[2] = fVar16;
    iVar21 = (int)fVar16;
    param_3[1] = fVar16;
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    param_3[3] = fVar17;
    bVar2 = iVar21 == 0 && fVar16 < 0.0;
    *param_3 = fVar17;
    iVar20 = iVar21;
    fVar22 = 1.0;
    fVar19 = fVar18;
    fVar24 = 1.0;
    fVar23 = fVar16;
    fVar25 = fVar17;
    bVar7 = bVar2;
    break;
  case 8:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (fVar17 * DAT_2c4e54c0) / fVar13;
    fVar17 = (float)FUN_2c6670a0(fVar13);
    param_2 = (fVar17 * 0.5) / param_2;
    fVar26 = (float)FUN_2c666d78(0x41200000,param_1 * DAT_2c4e54c4);
    bVar1 = FUN_2c666230(fVar13);
    fVar17 = 1.0 / (param_2 / fVar26 + 1.0);
    fVar22 = (-param_2 * fVar26 + 1.0) * fVar17;
    fVar16 = (param_2 * fVar26 + 1.0) * fVar17;
    fVar23 = (1.0 - param_2 / fVar26) * fVar17;
    iVar9 = (int)fVar22;
    param_3[4] = fVar22;
    uVar12 = in_fpscr & 0xfffffff;
    param_3[2] = fVar16;
    fVar17 = extraout_s0_01 * -2.0 * fVar17;
    iVar20 = (int)fVar16;
    param_3[3] = fVar17;
    iVar21 = (int)fVar23;
    fVar19 = (float)VectorSignedToFloat(iVar20,(byte)(uVar12 >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    fVar25 = fVar17;
    goto LAB_2c4e5316;
  case 9:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e54c0) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_1 = param_1 * DAT_2c4e54c4;
    param_2 = (fVar17 * 0.5) / param_2;
    fVar17 = (float)FUN_2c666d78(0x41200000,param_1);
    fVar26 = (float)FUN_2c666230(fVar26);
    fVar24 = fVar17 + (1.0 - fVar17) * fVar26;
    bVar1 = FUN_2c666d78(0x41200000,param_1 * 0.5);
    fVar18 = fVar17 + 1.0;
    fVar19 = fVar17 - 1.0;
    fVar13 = extraout_s0_02 + extraout_s0_02;
    fVar22 = fVar18 + fVar26 * fVar19;
    fVar25 = 1.0 / (fVar22 + param_2 * fVar13);
    fVar23 = (fVar22 + -param_2 * fVar13) * fVar25;
    fVar22 = (fVar24 + -param_2 * fVar13 + 1.0) * fVar25 * fVar17;
    fVar16 = (fVar24 + param_2 * fVar13 + 1.0) * fVar25 * fVar17;
    fVar17 = (fVar17 + fVar17) * (fVar19 + -fVar26 * fVar18) * fVar25;
    param_3[1] = fVar23;
    iVar9 = (int)fVar22;
    param_3[4] = fVar22;
    uVar12 = in_fpscr & 0xfffffff;
    param_3[2] = fVar16;
    fVar25 = (fVar19 + fVar26 * fVar18) * -2.0 * fVar25;
    param_3[3] = fVar17;
    iVar20 = (int)fVar16;
    *param_3 = fVar25;
    iVar21 = (int)fVar23;
    fVar19 = (float)VectorSignedToFloat(iVar20,(byte)(uVar12 >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    goto LAB_2c4e531e;
  case 10:
    fVar17 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar26 = (fVar17 * DAT_2c4e54c0) / fVar26;
    fVar17 = (float)FUN_2c6670a0(fVar26);
    param_1 = param_1 * DAT_2c4e54c4;
    param_2 = (fVar17 * 0.5) / param_2;
    fVar17 = (float)FUN_2c666d78(0x41200000,param_1);
    fVar26 = (float)FUN_2c666230(fVar26);
    bVar1 = FUN_2c666d78(0x41200000,param_1 * 0.5);
    fVar19 = fVar17 + 1.0;
    fVar24 = extraout_s0 + extraout_s0;
    fVar27 = fVar17 - 1.0;
    fVar13 = fVar19 + fVar27 * fVar26;
    fVar18 = fVar17 + fVar26 * (1.0 - fVar17);
    fVar28 = fVar27 + -fVar26 * fVar19;
    fVar25 = 1.0 / (fVar18 + param_2 * fVar24 + 1.0);
    fVar22 = fVar17 * (fVar13 + -param_2 * fVar24) * fVar25;
    fVar16 = fVar17 * (fVar13 + param_2 * fVar24) * fVar25;
    fVar23 = (fVar18 + -param_2 * fVar24 + 1.0) * fVar25;
    iVar9 = (int)fVar22;
    param_3[4] = fVar22;
    uVar12 = in_fpscr & 0xfffffff;
    param_3[2] = fVar16;
    fVar17 = fVar17 * -2.0 * (fVar27 + fVar26 * fVar19) * fVar25;
    iVar20 = (int)fVar16;
    param_3[3] = fVar17;
    iVar21 = (int)fVar23;
    fVar19 = (float)VectorSignedToFloat(iVar20,(byte)(uVar12 >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x16) & 3);
    fVar25 = (fVar28 + fVar28) * fVar25;
LAB_2c4e5316:
    *param_3 = fVar25;
    param_3[1] = fVar23;
LAB_2c4e531e:
    bVar7 = fVar16 < 0.0;
    bVar11 = iVar9 == 0 && fVar22 < 0.0;
    uVar12 = uVar12 | (uint)(fVar23 < 0.0) << 0x1f;
LAB_2c4e5332:
    if (iVar20 != 0) {
      bVar7 = false;
    }
    if ((int)uVar12 < 0) {
      bVar1 = 1;
    }
    if (-1 < (int)uVar12) {
      bVar1 = 0;
    }
    if (iVar21 == 0) {
      bVar2 = (bool)(bVar1 & 1);
    }
    else {
      bVar2 = false;
    }
    break;
  default:
    fVar16 = 1.0;
    iVar9 = 1;
    bVar11 = false;
    param_3[2] = 1.0;
    param_3[3] = 1.0;
    param_3[4] = 1.0;
    *param_3 = 1.0;
    param_3[1] = 1.0;
    iVar21 = iVar9;
    iVar20 = iVar9;
    fVar26 = fVar16;
    fVar13 = fVar16;
    fVar22 = fVar16;
    iVar14 = iVar9;
    iVar15 = iVar9;
    fVar18 = fVar16;
    fVar17 = fVar16;
    fVar19 = fVar16;
    fVar24 = fVar16;
    fVar23 = fVar16;
    fVar25 = fVar16;
    bVar5 = bVar11;
    bVar2 = bVar11;
    bVar7 = bVar11;
    goto LAB_2c4e53a8;
  }
  uVar12 = uVar12 & 0xfffffff;
  iVar14 = (int)fVar25;
  bVar5 = fVar17 < 0.0;
  if ((0.0 <= fVar25) || (iVar14 != 0)) {
    fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(uVar12 >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat((int)fVar17,(byte)(uVar12 >> 0x16) & 3);
    uVar6 = DAT_2c4e54ac;
    if ((int)fVar17 != 0) {
      bVar5 = false;
    }
  }
  else {
    fVar13 = (float)VectorSignedToFloat((int)fVar17,(byte)(uVar12 >> 0x16) & 3);
    uVar6 = DAT_2c4e5bdc;
    fVar26 = DAT_2c4e5bd0;
    iVar14 = DAT_2c4e5bd8;
    if ((int)fVar17 != 0) {
      bVar5 = false;
    }
  }
  iVar15 = (int)fVar17;
  if (fVar25 <= 0.0) {
    fVar26 = (fVar26 - fVar25) * DAT_2c4e5bd4;
  }
  else {
LAB_2c4e53a8:
    fVar26 = (fVar25 - fVar26) * DAT_2c4e54b0;
  }
  uVar4 = DAT_2c4e54ac;
  if (bVar2 != false) {
    uVar4 = DAT_2c4e54b4;
  }
  if (0.0 < fVar23) {
    fVar23 = fVar23 - fVar18;
  }
  else {
    fVar23 = fVar18 - fVar23;
  }
  uVar3 = DAT_2c4e54ac;
  if (bVar7 != false) {
    uVar3 = DAT_2c4e54b4;
  }
  if (0.0 < fVar16) {
    fVar16 = fVar16 - fVar19;
  }
  else {
    fVar16 = fVar19 - fVar16;
  }
  uVar8 = DAT_2c4e54ac;
  if (bVar5 != false) {
    uVar8 = DAT_2c4e54b4;
  }
  if (0.0 < fVar17) {
    fVar17 = fVar17 - fVar13;
  }
  else {
    fVar17 = fVar13 - fVar17;
  }
  uVar10 = DAT_2c4e54ac;
  if (bVar11 != false) {
    uVar10 = DAT_2c4e54b4;
  }
  if (0.0 < fVar22) {
    fVar22 = fVar22 - fVar24;
  }
  else {
    fVar22 = fVar24 - fVar22;
  }
  FUN_2c6741e8(0x40,DAT_2c4e54bc,DAT_2c4e54b8,uVar6,iVar14,(int)fVar26,uVar4,iVar21,
               (int)(fVar23 * DAT_2c4e54b0),uVar3,iVar20,(int)(fVar16 * DAT_2c4e54b0),uVar8,iVar15,
               (int)(fVar17 * DAT_2c4e54b0),uVar10,iVar9,(int)(fVar22 * DAT_2c4e54b0));
                    /* WARNING: Could not recover jumptable at 0x2c673e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c673e24)(param_3,1);
  return;
}

