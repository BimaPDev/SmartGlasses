/* FUN_2c55ca28 @ 0x2c55ca28 */

void FUN_2c55ca28(int *param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  int *piVar18;
  uint in_fpscr;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  int *local_6c;
  
  iVar14 = param_2 * 2;
  iVar13 = *(int *)(*param_1 + -0x10) + (int)param_1;
  piVar17 = *(int **)(iVar13 + 8);
  if (piVar17 != (int *)0x0) {
    if (piVar17[1] == 0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar9 = piVar17[1] + 1;
      piVar17[1] = iVar9;
      if (iVar9 != 0) {
        iVar9 = *(int *)(iVar13 + 4);
        iVar13 = *(int *)(*param_1 + -0x10) + (int)param_1;
        piVar18 = *(int **)(iVar13 + 0x10);
        goto joined_r0x2c55cc00;
      }
      iVar13 = *(int *)(*param_1 + -0x10) + (int)param_1;
    }
  }
  iVar9 = 0;
  piVar18 = *(int **)(iVar13 + 0x10);
joined_r0x2c55cc00:
  local_6c = piVar18;
  if (piVar18 != (int *)0x0) {
    if (piVar18[1] == 0) {
      piVar18 = (int *)0x0;
      local_6c = piVar18;
    }
    else {
      iVar11 = piVar18[1] + 1;
      piVar18[1] = iVar11;
      if (iVar11 == 0) {
        local_6c = (int *)0x0;
      }
      else {
        local_6c = *(int **)(iVar13 + 0xc);
      }
    }
  }
  FUN_2c62c3b0(*(undefined4 *)(iVar9 + 0x40),0x5600);
  iVar13 = DAT_2c55ccf8;
  fVar6 = DAT_2c55ccec;
  fVar5 = DAT_2c55cce8;
  fVar4 = DAT_2c55cce4;
  dVar3 = DAT_2c55ccd0;
  uVar16 = 1;
  fVar25 = (float)VectorSignedToFloat(0xf - (iVar14 + (((int)((ulonglong)
                                                              ((longlong)DAT_2c55cce0 *
                                                              (longlong)iVar14) >> 0x20) + iVar14 >>
                                                       3) - (iVar14 >> 0x1f)) * -0xf),
                                      (byte)(in_fpscr >> 0x16) & 3);
  uVar19 = in_fpscr & 0xfffffff | (uint)(fVar25 == 0.0) << 0x1e | (uint)(0.0 <= fVar25) << 0x1d;
  fVar26 = *(float *)(DAT_2c55ccf0 + param_2 * 8);
  uVar15 = 0;
  bVar2 = (byte)(uVar19 >> 0x18);
  iVar14 = iVar9;
  iVar11 = iVar9;
  dVar24 = DAT_2c55ccd8;
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) goto LAB_2c55caee;
  do {
    uVar20 = uVar19 & 0xfffffff | (uint)(fVar25 < 15.0) << 0x1f;
    uVar19 = uVar20 | (uint)NAN(fVar25) << 0x1c;
    iVar11 = iVar14;
    if ((byte)(uVar20 >> 0x1f) == ((byte)(uVar19 >> 0x1c) & 1)) {
      dVar24 = 1.0;
    }
    else {
      dVar24 = (double)(fVar25 / 15.0 + fVar4);
    }
LAB_2c55caee:
    do {
      iVar14 = 10;
      dVar27 = DAT_2c55ccd8;
      do {
        uVar7 = FUN_2c66b19c();
        iVar14 = iVar14 + -1;
        dVar23 = (double)VectorSignedToFloat(uVar7,(byte)(uVar19 >> 0x16) & 3);
        dVar27 = dVar27 + (dVar23 / dVar3) * 2.0 + -1.0;
      } while (iVar14 != 0);
      fVar22 = (float)ABS((dVar27 * dVar24) / 10.0);
      uVar20 = uVar19 & 0xfffffff | (uint)(fVar22 == 0.0) << 0x1e | (uint)(0.0 <= fVar22) << 0x1d;
      bVar2 = (byte)(uVar20 >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        fVar22 = 1.5;
      }
      else {
        uVar20 = uVar19 & 0xfffffff | (uint)(fVar22 < 1.0) << 0x1f;
        if (SUB41(uVar20 >> 0x1f,0) == NAN(fVar22)) {
          fVar22 = 5.0;
        }
        else {
          fVar22 = (fVar6 + fVar22 * fVar5) * 5.0;
        }
      }
      uVar19 = uVar20 & 0xfffffff | (uint)(fVar26 == 0.0) << 0x1e | (uint)(0.0 <= fVar26) << 0x1d;
      bVar2 = (byte)(uVar19 >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        uVar12 = 1;
        sVar8 = 0;
      }
      else {
        fVar21 = (float)VectorSignedToFloat(uVar16,(byte)(uVar19 >> 0x16) & 3);
        uVar19 = uVar20 & 0xfffffff | (uint)(fVar26 < 10.0) << 0x1f;
        fVar22 = fVar21 + 1.0 + fVar21 * fVar22;
        if (SUB41(uVar19 >> 0x1f,0) != NAN(fVar26)) {
          fVar22 = ((fVar22 - 1.0) * fVar26) / 10.0 + 1.0;
        }
        iVar14 = (int)fVar22;
        if (-1 < iVar14 << 0x1f) {
          iVar14 = iVar14 + 1;
        }
        iVar10 = iVar14;
        if (iVar14 < 0) {
          iVar10 = iVar14 + 1;
        }
        uVar12 = (undefined2)iVar14;
        sVar8 = -(short)(iVar10 >> 1);
      }
      sVar1 = *(short *)(iVar9 + 0xd64);
      uVar15 = uVar15 + 1;
      *(undefined2 *)(iVar11 + 0x4a) = uVar12;
      iVar14 = iVar11 + 0x60;
      *(short *)(iVar11 + 0x46) = sVar8 + sVar1;
      if (uVar15 == 0x23) {
        FUN_2c639858(local_6c,iVar9 + 0x44,0x23);
        if ((piVar18 != (int *)0x0) &&
           (iVar13 = piVar18[1], piVar18[1] = iVar13 + -1, iVar13 + -1 == 0)) {
          (**(code **)(*piVar18 + 8))(piVar18);
          iVar13 = piVar18[2];
          piVar18[2] = iVar13 + -1;
          if (iVar13 + -1 == 0) {
            (**(code **)(*piVar18 + 0xc))(piVar18);
          }
        }
        if ((piVar17 != (int *)0x0) &&
           (iVar13 = piVar17[1], piVar17[1] = iVar13 + -1, iVar13 + -1 == 0)) {
          (**(code **)(*piVar17 + 8))(piVar17);
          iVar13 = piVar17[2];
          piVar17[2] = iVar13 + -1;
          if (iVar13 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55cc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar17 + 0xc))(piVar17);
            return;
          }
        }
        return;
      }
      uVar19 = uVar19 & 0xfffffff | (uint)(fVar25 == 0.0) << 0x1e | (uint)(0.0 <= fVar25) << 0x1d;
      bVar2 = (byte)(uVar19 >> 0x18);
      uVar16 = *(undefined4 *)
                (iVar13 + (uVar15 + (uint)((ulonglong)DAT_2c55ccf4 * (ulonglong)uVar15 >> 0x23) *
                                    -0xc) * 4);
      iVar11 = iVar14;
      dVar24 = DAT_2c55ccd8;
    } while (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6));
  } while( true );
}

