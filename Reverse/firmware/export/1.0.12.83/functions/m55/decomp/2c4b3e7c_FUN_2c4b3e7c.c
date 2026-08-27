/* FUN_2c4b3e7c @ 0x2c4b3e7c */

void FUN_2c4b3e7c(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float local_250 [4];
  float local_240 [2];
  float *local_238;
  float local_234;
  float local_230;
  float afStack_22c [32];
  float local_1ac [32];
  float local_12c [16];
  float afStack_ec [40];
  float fStack_4c;
  float local_48 [7];
  float local_2c [2];
  
  pfVar6 = local_250;
  local_2c[0] = *DAT_2c4b41ac;
  pfVar19 = param_2;
  if ((param_3 != (float *)0x0 && param_2 != (float *)0x0) &&
     (uVar15 = (uint)(param_1 == 0), pfVar19 = param_2, param_1 != 0)) {
    pfVar19 = afStack_22c;
    pfVar11 = local_250;
    do {
      iVar8 = *(int *)(param_1 + uVar15 * 8);
      fVar13 = param_2[uVar15 * 2];
      iVar10 = -iVar8;
      iVar9 = *(int *)(param_1 + 4 + uVar15 * 8);
      fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      fVar17 = param_2[uVar15 * 2 + 1];
      uVar15 = uVar15 + 1;
      pfVar19[0x23] = fVar21;
      *pfVar19 = fVar21;
      iVar8 = -iVar9;
      fVar22 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
      fVar21 = (float)VectorSignedToFloat((int)fVar17 * iVar10,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[0x25] = 1.0;
      fVar20 = (float)VectorSignedToFloat((int)fVar13 * iVar10,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[2] = 1.0;
      pfVar19[0x24] = fVar22;
      pfVar19[1] = fVar22;
      uVar23 = VectorSignedToFloat(fVar13,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[0x22] = DAT_2c4b41b0;
      pfVar19[0x21] = DAT_2c4b41b0;
      *pfVar11 = (float)uVar23;
      fVar22 = (float)VectorSignedToFloat((int)fVar17 * iVar8,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[0x20] = DAT_2c4b41b0;
      uVar23 = VectorSignedToFloat(fVar17,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[5] = DAT_2c4b41b0;
      pfVar19[4] = DAT_2c4b41b0;
      pfVar19[3] = DAT_2c4b41b0;
      pfVar11[4] = (float)uVar23;
      pfVar19[6] = fVar20;
      fVar13 = (float)VectorSignedToFloat(iVar8 * (int)fVar13,(byte)(in_fpscr >> 0x16) & 3);
      pfVar19[0x26] = fVar21;
      pfVar19[0x27] = fVar22;
      pfVar19[7] = fVar13;
      pfVar19 = pfVar19 + 8;
      pfVar11 = pfVar11 + 1;
    } while (uVar15 != 4);
    pfVar11 = afStack_22c + 8;
    pfVar19 = local_12c;
    iVar10 = 0;
    do {
      pfVar3 = pfVar19;
      pfVar1 = pfVar11 + -8;
      do {
        pfVar12 = pfVar1;
        *pfVar3 = *pfVar12;
        pfVar3 = pfVar3 + 1;
        pfVar1 = pfVar12 + 1;
      } while (pfVar12 + 1 != pfVar11);
      iVar10 = iVar10 + 8;
      pfVar19 = pfVar19 + 8;
      pfVar11 = pfVar12 + 9;
    } while (iVar10 != 0x40);
    pfVar12 = (float *)0x0;
    pfVar11 = local_12c + 1;
    pfVar1 = (float *)0x0;
    pfVar3 = afStack_ec;
    pfVar16 = &fStack_4c;
    pfVar18 = (float *)0x1;
    fVar13 = DAT_2c4b41b0;
LAB_2c4b3fbc:
    pfVar19 = pfVar11 + -1;
    pfVar2 = pfVar1;
    pfVar4 = pfVar18;
    fVar17 = *pfVar19;
    do {
      while( true ) {
        fVar20 = pfVar19[8];
        iVar9 = (int)pfVar4 << 3;
        iVar10 = (uint)(fVar20 < 0.0) << 0x1f;
        iVar8 = (uint)(fVar17 < 0.0) << 0x1f;
        if (iVar10 < 0) {
          fVar13 = -fVar20;
        }
        if (-1 < iVar10) {
          fVar13 = fVar20;
        }
        if (iVar8 < 0) {
          fVar21 = -fVar17;
        }
        if (-1 < iVar8) {
          fVar21 = fVar17;
        }
        pfVar14 = pfVar6;
        pfVar1 = pfVar18;
        if (fVar13 <= fVar21) break;
        pfVar5 = (float *)((int)pfVar4 + 1);
        pfVar19 = pfVar19 + 8;
        pfVar2 = pfVar4;
        pfVar4 = pfVar5;
        fVar17 = fVar20;
        if (pfVar5 == (float *)&NMI) goto LAB_2c4b4016;
      }
      pfVar5 = (float *)((int)pfVar4 + 1);
      iVar9 = (int)pfVar2 << 3;
      pfVar19 = pfVar19 + 8;
      pfVar4 = pfVar5;
    } while (pfVar5 != (float *)&NMI);
LAB_2c4b4016:
    do {
      if ((int)((uint)(fVar17 < 0.0) << 0x1f) < 0) {
        pfVar5 = (float *)(uint)(DAT_2c4b41b8 < fVar17);
      }
      else {
        iVar10 = (uint)(fVar17 < DAT_2c4b41b4) << 0x1f;
        if (iVar10 < 0) {
          pfVar5 = (float *)0x1;
        }
        if (-1 < iVar10) {
          pfVar5 = (float *)0x0;
        }
      }
      if (pfVar5 != (float *)0x0) break;
      if (pfVar2 != pfVar12) {
        pfVar18 = local_12c + (int)((int)pfVar12 + iVar9 + 1);
        pfVar6 = pfVar11 + -1;
        pfVar19 = pfVar1;
        while( true ) {
          fVar21 = *pfVar6;
          *pfVar6 = fVar17;
          pfVar6 = pfVar6 + 1;
          pfVar18[-1] = fVar21;
          if (pfVar19 == (float *)&NMI) break;
          fVar17 = *pfVar18;
          pfVar18 = pfVar18 + 1;
          pfVar19 = (float *)((int)pfVar19 + 1);
        }
        fVar21 = *pfVar14;
        *pfVar14 = local_250[(int)pfVar2];
        local_250[(int)pfVar2] = fVar21;
      }
      if (pfVar1 == (float *)&NMI) {
        pfVar19 = local_2c;
        iVar8 = 6;
        pfVar11 = &local_234;
        iVar10 = 8;
        pfVar6 = &local_230;
        fVar21 = local_234;
        goto LAB_2c4b4090;
      }
      pfVar6 = pfVar14 + 1;
      iVar10 = (int)pfVar1 << 3;
      fVar13 = -1.0 / pfVar11[-1];
      pfVar2 = pfVar3;
      pfVar4 = pfVar6;
      pfVar18 = pfVar11;
      do {
        fVar21 = fVar13 * pfVar18[7];
        pfVar19 = pfVar11;
        pfVar5 = pfVar18 + 8;
        do {
          pfVar7 = pfVar5;
          fVar17 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          *pfVar7 = *pfVar7 + fVar17 * fVar21;
          pfVar5 = pfVar7 + 1;
        } while (pfVar5 != pfVar2);
        iVar10 = iVar10 + 8;
        pfVar2 = pfVar7 + 9;
        *pfVar4 = *pfVar4 + fVar21 * *pfVar14;
        pfVar4 = pfVar4 + 1;
        pfVar18 = pfVar18 + 8;
      } while (iVar10 != 0x40);
      pfVar12 = (float *)((int)pfVar12 + 1);
      pfVar11 = pfVar11 + 9;
      pfVar3 = pfVar3 + 8;
      pfVar18 = (float *)((int)pfVar1 + 1);
      pfVar16 = pfVar16 + 1;
      if (pfVar18 != (float *)&NMI) goto LAB_2c4b3fbc;
      fVar17 = *pfVar16;
      iVar9 = 0x38;
      pfVar2 = (float *)0x7;
      pfVar14 = pfVar6;
      pfVar1 = pfVar18;
    } while( true );
  }
  local_238 = pfVar19;
  uVar23 = 1;
LAB_2c4b40a0:
  if (((uint)*DAT_2c4b41ac ^ (uint)local_2c[0]) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar23,local_238,(uint)*DAT_2c4b41ac ^ (uint)local_2c[0],0);
  while( true ) {
    do {
      fVar13 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar21 = fVar21 + -*pfVar1 * fVar13;
      pfVar1 = pfVar1 + 1;
    } while (&local_230 != pfVar6);
    *pfVar11 = fVar21 / pfVar3[-10];
    pfVar3 = pfVar19;
    pfVar6 = pfVar11;
    if (iVar8 == -1) break;
    while( true ) {
      iVar10 = iVar10 + -1;
      iVar8 = iVar8 + -1;
      pfVar19 = pfVar3 + -9;
      pfVar11 = pfVar6 + -1;
      fVar21 = pfVar6[-1];
      pfVar1 = pfVar19;
      if (iVar10 != 8) break;
LAB_2c4b4090:
      pfVar6[-1] = fVar21 / pfVar19[-1];
      pfVar3 = pfVar19;
      pfVar6 = pfVar11;
    }
  }
  *param_3 = local_250[0];
  param_3[1] = local_250[1];
  param_3[2] = local_250[2];
  param_3[3] = local_250[3];
  param_3[4] = local_240[0];
  param_3[5] = local_240[1];
  param_3[8] = 1.0;
  uVar23 = 0;
  param_3[6] = (float)local_238;
  param_3[7] = local_234;
  goto LAB_2c4b40a0;
}

