/* FUN_2c4b2cc8 @ 0x2c4b2cc8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c4b2e2a */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
FUN_2c4b2cc8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int *param_6
            ,int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 unaff_r8;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  uint uVar6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  float extraout_s0;
  undefined4 uVar7;
  undefined8 in_d0;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 in_d1;
  float fVar11;
  float in_s4;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  double dVar28;
  float fVar29;
  float local_70;
  float local_6c;
  
  if ((((param_5 == (int *)0x0) || (*param_5 == 0)) || (param_6 == (int *)0x0)) || (param_4 == 0)) {
    uVar3 = 1;
  }
  else {
    fVar21 = (float)in_d0;
    fVar18 = (float)((ulonglong)in_d0 >> 0x20);
    fVar9 = (float)in_d1;
    local_70 = (float)((ulonglong)in_d1 >> 0x20);
    if (param_3 == 0) {
      uVar3 = SUB84((double)((fVar9 / DAT_2c4b30c8) * DAT_2c4b30cc),0);
      FUN_2c666b28(uVar3);
      FUN_2c666ce0(uVar3);
      fVar11 = ((float)*(undefined8 *)(param_4 + 8) - local_70) * 0.5;
      fVar24 = ((float)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x20) - in_s4) * 0.5;
      local_6c = in_s4;
    }
    else {
      uVar27 = *(undefined8 *)(param_4 + 8);
      local_6c = in_s4 + (float)((ulonglong)uVar27 >> 0x20);
      uVar3 = SUB84((double)((fVar9 / DAT_2c4b30c8) * DAT_2c4b30cc),0);
      FUN_2c666b28(uVar3);
      FUN_2c666ce0(uVar3);
      fVar11 = -(local_70 * 0.5);
      fVar24 = -(in_s4 * 0.5);
      local_70 = local_70 + (float)uVar27;
    }
    dVar8 = (double)CONCAT44(fVar18,uVar3);
    fVar23 = (float)(double)CONCAT44(fVar18,uVar3);
    fVar22 = (float)dVar8;
    fVar14 = fVar21 * fVar21;
    fVar10 = fVar24 * fVar22 + fVar11 * fVar23;
    fVar25 = fVar24 * fVar23 + -fVar22 * fVar11;
    fVar11 = fVar18 * fVar18;
    fVar21 = ABS(fVar21);
    fVar24 = ABS(fVar18);
    fVar29 = fVar10 * fVar10;
    fVar26 = fVar29 / fVar14 + (fVar25 * fVar25) / fVar11;
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar26 < 1.0) << 0x1f | (uint)(fVar26 == 1.0) << 0x1e;
    uVar5 = uVar6 | (uint)NAN(fVar26) << 0x1c;
    bVar1 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      dVar28 = (double)fVar26;
      uVar5 = in_fpscr & 0xfffffff | (uint)(dVar28 < 0.0) << 0x1f | (uint)(dVar28 == 0.0) << 0x1e |
              (uint)(0.0 <= dVar28) << 0x1d;
      if ((int)uVar5 < 0) {
        uVar3 = SUB84(dVar28,0);
        FUN_2c667350(uVar3);
        fVar11 = (float)(double)CONCAT44(fVar18,uVar3);
        FUN_2c667350(uVar3);
        dVar8 = (double)CONCAT44(fVar18,uVar3);
        fVar18 = (float)dVar8;
      }
      else {
        fVar18 = (float)SQRT(dVar28);
        fVar11 = fVar18;
      }
      fVar21 = fVar21 * fVar11;
      fVar24 = fVar24 * fVar18;
      fVar14 = fVar21 * fVar21;
      fVar11 = fVar24 * fVar24;
    }
    fVar18 = fVar25 * fVar25 * fVar14;
    coprocessor_function2(10,4,5,in_cr8,in_cr11,in_cr8);
    fVar11 = (-fVar18 + fVar14 * fVar11 + -fVar29 * fVar11) / (fVar18 + fVar29 * fVar11);
    uVar6 = uVar5 & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e |
            (uint)(0.0 <= fVar11) << 0x1d;
    fVar18 = DAT_2c4b30d0;
    if (-1 < (int)uVar6) {
      dVar8 = (double)fVar11;
      uVar6 = uVar5 & 0xfffffff | (uint)(dVar8 < 0.0) << 0x1f | (uint)(dVar8 == 0.0) << 0x1e |
              (uint)(0.0 <= dVar8) << 0x1d;
      if ((int)uVar6 < 0) {
        FUN_2c667350();
        dVar28 = dVar8;
      }
      else {
        dVar28 = SQRT(dVar8);
      }
      fVar18 = (float)dVar28;
    }
    fVar14 = (fVar21 * fVar25) / fVar24;
    fVar25 = (fVar10 + -fVar14 * fVar18 * 1.0) / fVar21;
    FUN_2c4afe84(0x3f800000,(int)((ulonglong)dVar8 >> 0x20),fVar25);
    extraout_s0 = SUB84(dVar8,0);
    uVar3 = (undefined4)((ulonglong)(double)extraout_s0 >> 0x20);
    fVar11 = SUB84((double)extraout_s0,0);
    FUN_2c667300(fVar11,uVar3,(int)DAT_2c4b30c0);
    FUN_2c4afe84(fVar25,uVar3,(-fVar10 + -fVar14 * fVar18 * 1.0) / fVar21);
    uVar6 = uVar6 & 0xfffffff;
    uVar3 = (undefined4)((ulonglong)(double)fVar11 >> 0x20);
    FUN_2c667300(SUB84((double)fVar11,0),uVar3,(int)DAT_2c4b30c0);
    fVar18 = *(float *)(param_4 + 8);
    if (param_3 != 0) {
      unaff_r8 = 7;
    }
    fVar10 = *(float *)(param_4 + 0xc);
    if (param_3 == 0) {
      unaff_r8 = 6;
    }
    coprocessor_function2(0xb,0xb,2,in_cr7,in_cr10,in_cr7);
    iVar16 = (int)(ABS(fVar11) / DAT_2c4b30d4);
    iVar2 = FUN_2c4b4980(*param_6 + param_7 + iVar16 * 0x14);
    if (iVar2 != 0) {
      FUN_2c674668(iVar2,*param_5,*param_6);
      FUN_2c4b4990(*param_5);
      *param_5 = iVar2;
      uVar27 = *(undefined8 *)(param_4 + 8);
      iVar4 = *param_6;
      if (0 < iVar16) {
        fVar25 = (float)VectorSignedToFloat(iVar16,(byte)(uVar6 >> 0x16) & 3);
        uVar7 = SUB84((double)extraout_s0,0);
        FUN_2c666b28(uVar7);
        fVar18 = fVar18 + -(float)(double)CONCAT44(uVar3,uVar7) * fVar21;
        FUN_2c666ce0(uVar7);
        fVar26 = (fVar11 / fVar25) * 0.5;
        fVar10 = fVar10 + -(float)(double)CONCAT44(uVar3,uVar7) * fVar24;
        dVar8 = (double)fVar26;
        FUN_2c666b28(SUB84(dVar8,0));
        iVar2 = iVar2 + iVar4 + 0x14;
        fVar14 = extraout_s0;
        do {
          iVar16 = iVar16 + -1;
          fVar14 = fVar14 + fVar11 / fVar25;
          uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
          uVar3 = SUB84((double)(fVar14 - fVar26),0);
          FUN_2c666b28(uVar3);
          FUN_2c666ce0(uVar3);
          fVar19 = ((float)(double)CONCAT44(uVar7,uVar3) * fVar21) / fVar26 + fVar18;
          fVar29 = ((float)(double)CONCAT44(uVar7,uVar3) * fVar24) / fVar26 + fVar10;
          uVar3 = SUB84((double)fVar14,0);
          FUN_2c666b28(uVar3);
          fVar20 = fVar18 + (float)(double)CONCAT44(uVar7,uVar3) * fVar21;
          FUN_2c666ce0(uVar3);
          dVar8 = (double)CONCAT44(uVar7,uVar3);
          fVar15 = fVar10 + (float)dVar8 * fVar24;
          if (fVar9 != 0.0) {
            fVar12 = *(float *)(param_4 + 8);
            fVar17 = fVar20 - fVar12;
            fVar13 = *(float *)(param_4 + 0xc);
            fVar20 = fVar29 - fVar13;
            fVar29 = fVar13 + (fVar19 - fVar12) * fVar22 + fVar20 * fVar23;
            fVar19 = fVar12 + (fVar19 - fVar12) * fVar23 + -fVar20 * fVar22;
            fVar20 = fVar12 + fVar17 * fVar23 + -(fVar15 - fVar13) * fVar22;
            fVar15 = fVar13 + fVar17 * fVar22 + (fVar15 - fVar13) * fVar23;
          }
          if (iVar16 == 0) {
            fVar15 = local_6c;
            fVar20 = local_70;
          }
          fVar12 = fVar15;
          fVar13 = fVar20;
          if (param_3 != 0) {
            fVar13 = fVar20 - (float)uVar27;
            fVar17 = (float)((ulonglong)uVar27 >> 0x20);
            fVar12 = fVar15 - fVar17;
            fVar19 = fVar19 - (float)uVar27;
            fVar29 = fVar29 - fVar17;
            uVar27 = CONCAT44(fVar15,fVar20);
          }
          *(undefined1 *)(iVar2 + -0x14) = unaff_r8;
          *(float *)(iVar2 + -0x10) = fVar19;
          *(float *)(iVar2 + -0xc) = fVar29;
          *(float *)(iVar2 + -8) = fVar13;
          *(float *)(iVar2 + -4) = fVar12;
          *param_6 = *param_6 + 0x14;
          iVar2 = iVar2 + 0x14;
        } while (iVar16 != 0);
      }
      *(float *)(param_4 + 8) = local_70;
      *(float *)(param_4 + 0xc) = local_6c;
      *(float *)(param_4 + 0x10) = local_70;
      *(float *)(param_4 + 0x14) = local_6c;
      return 0;
    }
    uVar3 = 2;
  }
  return uVar3;
}

