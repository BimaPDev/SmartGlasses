/* FUN_2c4b04c8 @ 0x2c4b04c8 */

float FUN_2c4b04c8(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined4 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float extraout_s0;
  float extraout_s0_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  iVar7 = func_0x2c4b03a4(param_4 - param_2,param_5 - param_3,param_1);
  if (iVar7 != 0) {
    iVar7 = 3;
    fVar24 = fRam2c4b07bc;
    fVar9 = fRam2c4b07b8;
    fVar18 = fRam2c4b07b4;
    goto LAB_2c4b0514;
  }
  fVar9 = (float)func_0x2c4b03a4(param_6 - param_2,param_7 - param_3);
  fVar24 = extraout_s0_00 - extraout_s0;
  if (fVar24 == 0.0) {
    *param_9 = fVar9;
    return fVar9;
  }
  if ((int)((uint)(fVar24 < 0.0) << 0x1f) < 0) {
    fVar24 = fVar24 + fRam2c4b07d4;
    if (fRam2c4b07bc < fVar24) goto LAB_2c4b0708;
LAB_2c4b0762:
    iVar7 = 0;
  }
  else {
    if (fVar24 <= fRam2c4b07bc) goto LAB_2c4b0762;
LAB_2c4b0708:
    if (fRam2c4b07e8 < fVar24) {
      if (fRam2c4b07ec < fVar24) {
        iVar7 = 3;
        fVar24 = fVar24 * 0.25;
      }
      else {
        iVar7 = 2;
        fVar24 = fVar24 / 3.0;
      }
    }
    else {
      iVar7 = 1;
      fVar24 = fVar24 * 0.5;
    }
  }
  fVar9 = fVar24 * 0.5;
  fVar21 = fVar9 * fVar9;
  fVar18 = fVar21 * fVar21 * fVar21;
  fVar18 = -fVar21 * fRam2c4b07c4 + 1.0 + fVar21 * fVar21 * fRam2c4b07c8 + -fVar18 * fRam2c4b07cc +
           fVar21 * fVar18 * fRam2c4b07d0;
LAB_2c4b0514:
  fVar6 = fRam2c4b07d0;
  fVar5 = fRam2c4b07cc;
  fVar4 = fRam2c4b07c8;
  fVar3 = fRam2c4b07c4;
  fVar21 = fRam2c4b07c0;
  pfVar11 = (float *)0x0;
  pfVar10 = (float *)0x0;
  fVar25 = extraout_s0;
  do {
    fVar25 = fVar25 + fVar24;
    fVar22 = fVar25 - fVar9;
    if (fVar21 < fVar22) {
      fVar22 = fVar22 - fRam2c4b07d4;
    }
    fVar19 = fVar22 * fVar22;
    fVar1 = -(fVar22 * fVar19) * fRam2c4b07d8;
    fVar16 = fVar22 * fVar19 * fVar19;
    fVar13 = fVar19 * fVar19 * fVar19;
    fVar15 = fVar16 * fVar19;
    fVar16 = fVar16 * fRam2c4b07dc;
    fVar2 = -fVar15 * fRam2c4b07e0;
    fVar15 = fVar15 * fVar19 * fRam2c4b07e4;
    if (fVar25 <= fVar21) {
      fVar23 = fVar25;
      if (iVar7 != 0) goto LAB_2c4b05c0;
LAB_2c4b0694:
      pfVar8 = (float *)FUN_2c4b4980(0x20);
      fVar12 = param_6;
      fVar23 = param_7;
    }
    else {
      fVar23 = fVar25 - fRam2c4b07d4;
      if (iVar7 == 0) goto LAB_2c4b0694;
LAB_2c4b05c0:
      fVar20 = fVar23 * fVar23;
      fVar17 = fVar23 * fVar20 * fVar20;
      fVar12 = fVar20 * fVar20 * fVar20;
      fVar14 = fVar17 * fVar20;
      fVar12 = param_2 + param_1 * (-fVar20 * fVar3 + 1.0 + fVar20 * fVar20 * fVar4 +
                                    -fVar12 * fVar5 + fVar20 * fVar12 * fVar6);
      fVar23 = param_3 + param_1 * (fVar23 + -(fVar23 * fVar20) * fRam2c4b07d8 +
                                    fVar17 * fRam2c4b07dc + -fVar14 * fRam2c4b07e0 +
                                   fVar14 * fVar20 * fRam2c4b07e4);
      pfVar8 = (float *)FUN_2c4b4980(0x20);
    }
    if (pfVar8 == (float *)0x0) {
      return 7.00649e-45;
    }
    *pfVar8 = param_2 + (param_1 / fVar18) *
                        (-fVar19 * fVar3 + 1.0 + fVar19 * fVar19 * fVar4 + -fVar13 * fVar5 +
                        fVar19 * fVar13 * fVar6);
    pfVar8[2] = 0.0;
    pfVar8[1] = param_3 + (param_1 / fVar18) * (fVar22 + fVar1 + fVar16 + fVar2 + fVar15);
    pfVar8[3] = 0.0;
    pfVar8[4] = 0.0;
    pfVar8[5] = 0.0;
    pfVar8[6] = 0.0;
    pfVar8[7] = 0.0;
    *(undefined1 *)((int)pfVar8 + 9) = 1;
    if (pfVar10 == (float *)0x0) {
      pfVar10 = (float *)FUN_2c4b4980(0x20);
      pfVar11 = pfVar8;
    }
    else {
      pfVar10[6] = (float)pfVar8;
      pfVar10 = (float *)FUN_2c4b4980(0x20);
    }
    if (pfVar10 == (float *)0x0) {
      if (pfVar11 == (float *)0x0) {
        return 7.00649e-45;
      }
      FUN_2c4b4990(pfVar11);
      return 7.00649e-45;
    }
    iVar7 = iVar7 + -1;
    *pfVar10 = fVar12;
    pfVar10[2] = 0.0;
    *(undefined1 *)((int)pfVar10 + 9) = 2;
    pfVar10[3] = 0.0;
    pfVar10[4] = 0.0;
    pfVar10[5] = 0.0;
    pfVar10[6] = 0.0;
    pfVar10[7] = 0.0;
    pfVar10[1] = fVar23;
    pfVar8[6] = (float)pfVar10;
    if (iVar7 == -1) {
      pfVar10[6] = 0.0;
      *param_9 = (float)pfVar11;
      return 0.0;
    }
  } while( true );
}

