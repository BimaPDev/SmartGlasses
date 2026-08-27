/* FUN_2c4b3842 @ 0x2c4b3842 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b3842(float *param_1,int param_2,float *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  char *pcVar16;
  short *psVar17;
  uint uVar18;
  uint in_fpscr;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *pfStack_40;
  float *pfStack_3c;
  float *pfStack_38;
  
  if (param_3 == (float *)0x0) {
LAB_2c4b3866:
    uVar6 = 1;
  }
  else {
    if (param_4 != 0) {
      pbVar8 = (byte *)(param_2 + -1);
      do {
        pbVar8 = pbVar8 + 1;
        if (0x11 < *pbVar8) goto LAB_2c4b3866;
      } while ((byte *)(param_4 + -1 + param_2) != pbVar8);
    }
    fVar15 = param_1[0xb];
    uVar12 = (uint)*(byte *)((int)param_1 + 0x11);
    if (fVar15 == 0.0) {
      func_0x2c4b37dc(param_2,param_4,uVar12);
      fVar15 = (float)FUN_2c669578();
      param_1[0xb] = fVar15;
    }
    if (uVar12 < 3) {
      iVar14 = *(int *)(_DAT_2c4b3bec + uVar12 * 4);
    }
    else {
      iVar14 = 4;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (param_4 == 0) {
      param_1[10] = 0.0;
      uVar6 = 0;
    }
    else {
      pbVar8 = (byte *)(param_2 + -1);
      fVar10 = 0.0;
      bVar5 = false;
      fVar21 = fRam2c4b3bf0;
      fVar23 = fRam2c4b3bf0;
      pfStack_40 = param_3;
      pfStack_3c = param_3;
      pfStack_38 = param_3;
      do {
        pbVar8 = pbVar8 + 1;
        uVar12 = (uint)*pbVar8;
        *(byte *)((int)fVar15 + (int)fVar10) = *pbVar8;
        fVar10 = (float)((int)fVar10 + 1);
        fVar19 = fVar21;
        fVar20 = fVar23;
        if ((uVar12 < 0x12) && (iVar7 = *(int *)(_DAT_2c4b3bf4 + uVar12 * 4), 0 < iVar7)) {
          if (uVar12 < 2) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar12 & 1;
          }
          uVar11 = ((int)fVar10 + iVar14) - 1U & -iVar14;
          if (uVar12 < 10) {
            if (iVar7 >> 1 != 0) {
              pcVar16 = (char *)(uVar11 + 1 + (int)fVar15);
              psVar17 = (short *)(uVar11 + 2 + (int)fVar15);
              pfVar13 = (float *)(uVar11 + 4 + (int)fVar15);
              pfVar9 = param_3;
              do {
                param_3 = pfVar9;
                switch(*(undefined1 *)((int)param_1 + 0x11)) {
                case 0:
                  pfVar9 = (float *)((int)pfStack_38 + 2);
                  cVar2 = *(char *)pfStack_38;
                  pcVar16[-1] = cVar2;
                  cVar1 = *(char *)((int)pfStack_38 + 1);
                  fVar19 = (float)VectorSignedToFloat((int)cVar2,(byte)(in_fpscr >> 0x16) & 3);
                  *pcVar16 = cVar1;
                  fVar20 = (float)VectorSignedToFloat((int)cVar1,(byte)(in_fpscr >> 0x16) & 3);
                  pfStack_38 = pfVar9;
                  if (uVar18 == 0) goto LAB_2c4b3b1a;
                  goto LAB_2c4b3bb4;
                case 1:
                  sVar4 = *(short *)pfStack_3c;
                  psVar17[-1] = sVar4;
                  sVar3 = *(short *)((int)pfStack_3c + 2);
                  fVar19 = (float)VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x16) & 3);
                  *psVar17 = sVar3;
                  fVar20 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x16) & 3);
                  pfStack_3c = pfStack_3c + 1;
                  break;
                case 2:
                  fVar10 = *pfStack_40;
                  pfVar13[-1] = fVar10;
                  fVar20 = pfStack_40[1];
                  fVar19 = (float)VectorSignedToFloat(fVar10,(byte)(in_fpscr >> 0x16) & 3);
                  *pfVar13 = fVar20;
                  fVar20 = (float)VectorSignedToFloat(fVar20,(byte)(in_fpscr >> 0x16) & 3);
                  pfStack_40 = pfStack_40 + 2;
                  break;
                case 3:
                  fVar19 = *pfVar9;
                  pfVar13[-1] = fVar19;
                  param_3 = pfVar9 + 2;
                  fVar20 = pfVar9[1];
                  *pfVar13 = fVar20;
                  if (uVar18 != 0) {
                    fVar19 = fVar19 + fVar21;
                    fVar20 = fVar20 + fVar23;
                  }
                  goto LAB_2c4b3b1a;
                default:
                  goto LAB_2c4b3866;
                }
                if (uVar18 != 0) {
LAB_2c4b3bb4:
                  fVar19 = fVar19 + fVar21;
                  fVar20 = fVar20 + fVar23;
                }
LAB_2c4b3b1a:
                pcVar16 = pcVar16 + 2;
                psVar17 = psVar17 + 2;
                in_fpscr = in_fpscr & 0xfffffff;
                pfVar13 = pfVar13 + 2;
                coprocessor_function2(10,3,4,in_cr5,in_cr7,in_cr5);
                *param_1 = *param_1;
                coprocessor_function2(10,7,5,in_cr5,in_cr5,in_cr7);
                param_1[2] = param_1[2];
                coprocessor_function2(10,3,0,in_cr6,in_cr7,in_cr6);
                param_1[1] = param_1[1];
                coprocessor_function2(10,7,4,in_cr6,in_cr6,in_cr7);
                param_1[3] = param_1[3];
                pfVar9 = param_3;
              } while (pcVar16 != (char *)((int)fVar15 + 1 + uVar11 + (iVar7 >> 1) * 2));
            }
          }
          else {
            fVar10 = *param_3;
            pfVar9 = (float *)((int)fVar15 + uVar11);
            *pfVar9 = fVar10;
            fVar25 = param_3[1];
            pfVar9[1] = fVar25;
            pfVar9[2] = param_3[2];
            fVar19 = param_3[3];
            pfVar9[3] = fVar19;
            fVar20 = param_3[4];
            pfVar9[4] = fVar20;
            if (uVar18 != 0) {
              fVar19 = fVar19 + fVar21;
              fVar20 = fVar20 + fVar23;
            }
            param_3 = param_3 + 5;
            fVar24 = fVar19 + fVar10 * 2.0;
            fVar25 = fVar20 + fVar25 * 2.0;
            in_fpscr = in_fpscr & 0xfffffff;
            fVar10 = *param_1;
            if (fVar24 <= *param_1) {
              fVar10 = fVar24;
            }
            *param_1 = fVar10;
            coprocessor_function2(10,3,0,in_cr6,in_cr5,in_cr6);
            param_1[2] = fVar24;
            fVar24 = param_1[1];
            if (fVar25 <= param_1[1]) {
              fVar24 = fVar25;
            }
            param_1[1] = fVar24;
            coprocessor_function2(10,7,5,in_cr6,in_cr5,in_cr6);
            param_1[3] = fVar25;
            fVar25 = fVar21 + pfVar9[1] * 2.0;
            fVar22 = fVar23 + pfVar9[1] * 2.0;
            if (fVar25 <= fVar10) {
              fVar10 = fVar25;
            }
            *param_1 = fVar10;
            coprocessor_function2(10,3,0,in_cr5,in_cr6,in_cr5);
            param_1[2] = fVar25;
            if (fVar22 <= fVar24) {
              fVar24 = fVar22;
            }
            param_1[1] = fVar24;
            coprocessor_function2(10,7,5,in_cr5,in_cr6,in_cr5);
            param_1[3] = fVar22;
            fVar25 = fVar19 + -*pfVar9 * 2.0;
            fVar22 = fVar20 + -pfVar9[1] * 2.0;
            if (fVar25 <= fVar10) {
              fVar10 = fVar25;
            }
            *param_1 = fVar10;
            coprocessor_function2(10,3,0,in_cr6,in_cr5,in_cr6);
            param_1[2] = fVar25;
            if (fVar22 <= fVar24) {
              fVar24 = fVar22;
            }
            param_1[1] = fVar24;
            coprocessor_function2(10,7,5,in_cr6,in_cr5,in_cr6);
            param_1[3] = fVar22;
            fVar21 = fVar21 + -pfVar9[1] * 2.0;
            fVar23 = fVar23 + -pfVar9[1] * 2.0;
            bVar5 = true;
            if (fVar21 <= fVar10) {
              fVar10 = fVar21;
            }
            *param_1 = fVar10;
            coprocessor_function2(10,3,0,in_cr5,in_cr6,in_cr5);
            param_1[2] = fVar21;
            if (fVar23 <= fVar24) {
              fVar24 = fVar23;
            }
            param_1[1] = fVar24;
            coprocessor_function2(10,7,5,in_cr5,in_cr6,in_cr5);
            param_1[3] = fVar23;
          }
          fVar10 = (float)(iVar7 * iVar14 + uVar11);
        }
        fVar21 = fVar19;
        fVar23 = fVar20;
      } while ((byte *)(param_2 + param_4 + -1) != pbVar8);
      param_1[10] = fVar10;
      uVar6 = 0;
      if (bVar5) {
        uVar6 = FUN_2c4b31a0(*param_1,param_1[1],param_1[2],param_1[3],param_1,3,
                             *(undefined1 *)(param_1 + 4),fVar10,param_1[0xb]);
      }
    }
  }
  return uVar6;
}

