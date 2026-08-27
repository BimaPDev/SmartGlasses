/* FUN_2c4e618c @ 0x2c4e618c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c4e618c(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  short *psVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar24;
  int iStackY_5c;
  int iStackY_58;
  undefined4 *puStackY_54;
  uint uStackY_50;
  short sStackY_2c;
  
  if (param_5 == 0x10) {
    sStackY_2c = (short)param_7;
    iVar7 = (int)sStackY_2c;
    iStackY_5c = param_4 - param_6;
    iStackY_58 = iVar7 * iStackY_5c;
    if (((-1 < iStackY_5c) && (0 < iVar7)) && (0 < (int)param_6)) {
      iVar8 = param_6 * -2;
      puVar22 = (undefined4 *)(param_2 + (param_6 + iStackY_5c) * 2);
      puVar15 = (undefined4 *)(param_2 + iStackY_5c * 2);
      uVar19 = param_6 & 0xfffffffe;
      puVar3 = (undefined4 *)(param_2 + (iStackY_5c + 1) * 2);
      puStackY_54 = (undefined4 *)(param_3 + iStackY_58 * 2);
      do {
        iVar16 = 0;
        iVar21 = iStackY_58;
        puVar23 = puStackY_54;
        do {
          if ((param_6 - 1 < 10) || (puVar5 = puVar23, puVar12 = puVar15, puVar23 == puVar3)) {
            puVar6 = (undefined2 *)((int)puVar23 + -2);
            puVar5 = puVar15;
            do {
              puVar12 = (undefined4 *)((int)puVar5 + 2);
              puVar6 = puVar6 + 1;
              *puVar6 = *(undefined2 *)puVar5;
              puVar5 = puVar12;
            } while (puVar12 != puVar22);
          }
          else {
            do {
              puVar11 = puVar12 + 1;
              *puVar5 = *puVar12;
              puVar5 = puVar5 + 1;
              puVar12 = puVar11;
            } while (puVar15 + (param_6 >> 1) != puVar11);
            if (uVar19 != param_6) {
              *(undefined2 *)(param_3 + (uVar19 + iVar21) * 2) =
                   *(undefined2 *)(param_2 + (iStackY_5c + uVar19) * 2);
            }
          }
          iVar16 = iVar16 + 1;
          iVar21 = iVar21 + param_6;
          puVar23 = (undefined4 *)((int)puVar23 + param_6 * 2);
        } while (iVar7 != iVar16);
        iStackY_58 = iStackY_58 - param_6 * iVar7;
        puStackY_54 = (undefined4 *)((int)puStackY_54 + param_6 * iVar7 * -2);
        puVar15 = (undefined4 *)((int)puVar15 + iVar8);
        puVar22 = (undefined4 *)((int)puVar22 + iVar8);
        puVar3 = (undefined4 *)((int)puVar3 + iVar8);
        iStackY_5c = iStackY_5c - param_6;
      } while (-1 < iStackY_5c);
    }
    param_4 = param_4 * param_7;
    if (param_1[2] != param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4e5f18,_LAB_2c4e5f14);
    }
    if (*param_1 != 0) {
      return 0;
    }
    if (param_4 < 1) {
      iVar7 = param_1[3];
      if (iVar7 < 1) {
        return 0;
      }
    }
    else {
      psVar2 = (short *)(param_3 + -2);
      psVar17 = psVar2 + param_4;
      iVar7 = 0;
      do {
        psVar2 = psVar2 + 1;
        fVar24 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x16) & 3);
        pfVar13 = (float *)(param_1[5] + iVar7);
        iVar7 = iVar7 + 4;
        *pfVar13 = fVar24 * (float)param_1[4];
      } while (psVar17 != psVar2);
      iVar7 = param_1[3];
      if (iVar7 < 1) goto LAB_2c4e5eb2;
    }
    iVar8 = 0;
    piVar18 = param_1 + 6;
    do {
      while (*piVar18 == 0) {
        iVar8 = iVar8 + 1;
        piVar18 = piVar18 + 3;
        if (iVar7 <= iVar8) goto LAB_2c4e5eaa;
      }
      iVar21 = param_1[5] + iVar8 * 4;
      iVar8 = iVar8 + 1;
      FUN_2c49a4d4(piVar18,iVar21,iVar21,param_4 / iVar7,iVar7);
      iVar7 = param_1[3];
      piVar18 = piVar18 + 3;
    } while (iVar8 < iVar7);
LAB_2c4e5eaa:
    if (param_4 < 1) {
      return 0;
    }
LAB_2c4e5eb2:
    puVar6 = (undefined2 *)(param_3 + -2);
    iVar7 = 0;
    do {
      coprocessor_function2(10,0xf,3,in_cr7,in_cr8,in_cr7);
      iVar8 = (int)*(float *)(param_1[5] + iVar7 * 4);
      uVar1 = SignedSaturate(iVar8,0xf);
      SignedDoesSaturate(iVar8,0xf);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = (short)uVar1;
    } while (param_4 - iVar7 != 0 && iVar7 <= param_4);
    return 0;
  }
  iStackY_58 = param_4 - param_6;
  puStackY_54 = (undefined4 *)(iStackY_58 * param_7);
  if (((-1 < iStackY_58) && (0 < param_7)) && (0 < (int)param_6)) {
    uVar20 = param_6 & 0xfffffffc;
    uVar19 = param_2 + iStackY_58 * 4;
    iVar21 = param_2 + (iStackY_58 + 1) * 4;
    uStackY_50 = param_3 + (int)puStackY_54 * 4;
    iVar7 = uVar20 + 1;
    iVar8 = uVar20 + 2;
    do {
      iVar16 = 0;
      uVar4 = uStackY_50;
      puVar22 = puStackY_54;
      do {
        if ((((uVar19 | uVar4) & 0xf) == 0 && 8 < uVar4 - iVar21) && (8 < param_6 - 1)) {
          uVar9 = 0;
          uVar10 = uVar4;
          uVar14 = uVar19;
          do {
            uVar9 = uVar9 + 1;
            coprocessor_load(0xf,in_cr7,uVar14);
            coprocessor_store(0xf,in_cr7,uVar10);
            uVar10 = uVar10 + 0x10;
            uVar14 = uVar14 + 0x10;
          } while (param_6 >> 2 != uVar9);
          if (((param_6 != uVar20) &&
              (*(undefined4 *)(param_3 + ((int)puVar22 + uVar20) * 4) =
                    *(undefined4 *)(param_2 + (iStackY_58 + uVar20) * 4), iVar7 < (int)param_6)) &&
             (*(undefined4 *)(param_3 + (iVar7 + (int)puVar22) * 4) =
                   *(undefined4 *)(param_2 + (iVar7 + iStackY_58) * 4), iVar8 < (int)param_6)) {
            *(undefined4 *)(param_3 + (iVar8 + (int)puVar22) * 4) =
                 *(undefined4 *)(param_2 + (iVar8 + iStackY_58) * 4);
          }
        }
        else {
          puVar15 = (undefined4 *)(uVar19 - 4);
          puVar3 = (undefined4 *)(uVar4 - 4);
          uVar10 = 0;
          do {
            uVar10 = uVar10 + 1;
            puVar15 = puVar15 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar15;
          } while (param_6 != uVar10);
        }
        iVar16 = iVar16 + 1;
        puVar22 = (undefined4 *)((int)puVar22 + param_6);
        uVar4 = uVar4 + param_6 * 4;
      } while (param_7 != iVar16);
      puStackY_54 = (undefined4 *)((int)puStackY_54 - param_6 * param_7);
      uStackY_50 = uStackY_50 + param_6 * param_7 * -4;
      uVar19 = uVar19 + param_6 * -4;
      iVar21 = iVar21 + param_6 * -4;
      iStackY_58 = iStackY_58 - param_6;
    } while (-1 < iStackY_58);
  }
  param_4 = param_4 * param_7;
  if (param_1[2] != param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4e5fe8,param_4);
  }
  if (*param_1 != 0) {
    return 0;
  }
  if (param_4 < 1) {
    iVar7 = param_1[3];
    if (iVar7 < 1) {
      return 0;
    }
  }
  else {
    iVar8 = param_3 + -4;
    iVar7 = 0;
    do {
      puVar22 = (undefined4 *)(iVar8 + 4);
      iVar8 = iVar8 + 4;
      fVar24 = (float)VectorSignedToFloat(*puVar22,(byte)(in_fpscr >> 0x16) & 3);
      iVar21 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(float *)(param_1[5] + iVar21) = fVar24 * (float)param_1[4];
    } while (param_4 - iVar7 != 0);
    iVar7 = param_1[3];
    if (iVar7 < 1) goto LAB_2c4e5f84;
  }
  piVar18 = param_1 + 6;
  iVar8 = 0;
  do {
    while (*piVar18 == 0) {
      iVar8 = iVar8 + 1;
      piVar18 = piVar18 + 3;
      if (iVar7 <= iVar8) goto LAB_2c4e5f7e;
    }
    iVar21 = param_1[5] + iVar8 * 4;
    iVar8 = iVar8 + 1;
    FUN_2c49a4d4(piVar18,iVar21,iVar21,param_4 / iVar7,iVar7);
    iVar7 = param_1[3];
    piVar18 = piVar18 + 3;
  } while (iVar8 < iVar7);
LAB_2c4e5f7e:
  if (param_4 < 1) {
    return 0;
  }
LAB_2c4e5f84:
  puVar22 = (undefined4 *)(param_3 + -4);
  iVar7 = 0;
  do {
    coprocessor_function2(10,0xf,3,in_cr7,in_cr8,in_cr7);
    iVar8 = (int)*(float *)(param_1[5] + iVar7 * 4);
    uVar1 = SignedSaturate(iVar8,0x17);
    SignedDoesSaturate(iVar8,0x17);
    iVar7 = iVar7 + 1;
    puVar22 = puVar22 + 1;
    *puVar22 = uVar1;
  } while (param_4 - iVar7 != 0 && iVar7 <= param_4);
  return 0;
}

