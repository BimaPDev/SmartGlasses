/* FUN_2c4e5e44 @ 0x2c4e5e44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e5e44(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  short *psVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar10;
  
  if (param_1[2] != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4e5f18,_LAB_2c4e5f14);
  }
  if (*param_1 != 0) {
    return 0;
  }
  if (param_3 < 1) {
    iVar4 = param_1[3];
    if (iVar4 < 1) {
      return 0;
    }
  }
  else {
    psVar2 = (short *)(param_2 + -2);
    psVar7 = psVar2 + param_3;
    iVar4 = 0;
    do {
      psVar2 = psVar2 + 1;
      fVar10 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x16) & 3);
      pfVar6 = (float *)(param_1[5] + iVar4);
      iVar4 = iVar4 + 4;
      *pfVar6 = fVar10 * (float)param_1[4];
    } while (psVar7 != psVar2);
    iVar4 = param_1[3];
    if (iVar4 < 1) goto LAB_2c4e5eb2;
  }
  iVar9 = 0;
  piVar8 = param_1 + 6;
  do {
    while (*piVar8 == 0) {
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 3;
      if (iVar4 <= iVar9) goto LAB_2c4e5eaa;
    }
    iVar5 = param_1[5] + iVar9 * 4;
    iVar9 = iVar9 + 1;
    FUN_2c49a4d4(piVar8,iVar5,iVar5,param_3 / iVar4,iVar4);
    iVar4 = param_1[3];
    piVar8 = piVar8 + 3;
  } while (iVar9 < iVar4);
LAB_2c4e5eaa:
  if (param_3 < 1) {
    return 0;
  }
LAB_2c4e5eb2:
  puVar3 = (undefined2 *)(param_2 + -2);
  iVar4 = 0;
  do {
    coprocessor_function2(10,0xf,3,in_cr7,in_cr8,in_cr7);
    iVar9 = (int)*(float *)(param_1[5] + iVar4 * 4);
    uVar1 = SignedSaturate(iVar9,0xf);
    SignedDoesSaturate(iVar9,0xf);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = (short)uVar1;
  } while (iVar4 < param_3);
  return 0;
}

