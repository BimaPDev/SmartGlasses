/* FUN_2c557d60 @ 0x2c557d60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c557d60(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int *piStack_54;
  
  piVar5 = *(int **)(param_1 + 8);
  piVar4 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    if (piVar5[1] == 0) {
      piVar4 = (int *)0x0;
      piVar5 = piVar4;
    }
    else {
      iVar3 = piVar5[1] + 1;
      piVar5[1] = iVar3;
      piVar4 = (int *)0x0;
      if (iVar3 != 0) {
        piVar4 = *(int **)(param_1 + 4);
      }
    }
  }
  piVar6 = *(int **)(param_1 + 0x10);
  piStack_54 = piVar6;
  if (piVar6 != (int *)0x0) {
    if (piVar6[1] == 0) {
      piVar6 = (int *)0x0;
      piStack_54 = piVar6;
    }
    else {
      iVar3 = piVar6[1] + 1;
      piVar6[1] = iVar3;
      if (iVar3 == 0) {
        piStack_54 = (int *)0x0;
      }
      else {
        piStack_54 = *(int **)(param_1 + 0xc);
      }
    }
  }
  FUN_2c62c3b0(piVar4[0x10],0x5600);
  fVar1 = fRam2c557f48;
  fVar12 = (float)VectorSignedToFloat(-param_2,(byte)(in_fpscr >> 0x16) & 3);
  iVar3 = piVar4[0x359];
  fVar12 = fVar12 * fRam2c557f40;
  iVar8 = 0;
  pfVar2 = _LAB_2c557f4c;
  piVar7 = piVar4;
  fVar13 = fRam2c557f44;
  while( true ) {
    fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = SUB84((double)(fVar12 + fVar10 * 0.25),0);
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar9 = func_0x2c557ce8(uVar9);
      fVar10 = (float)FUN_2c6670a0(((float)(double)CONCAT44(extraout_s1_00,uVar9) + 1.0) * 0.5 *
                                   fVar1);
      fVar10 = fVar10 * 8.0;
    }
    else {
      uVar9 = func_0x2c557ce8(uVar9);
      fVar10 = (float)FUN_2c6670a0(((float)(double)CONCAT44(extraout_s1,uVar9) + 1.0) * 0.5 * fVar1)
      ;
      fVar10 = fVar10 * 23.0;
    }
    iVar11 = (int)((fVar10 + 2.0) * fVar13);
    iVar8 = iVar8 + 1;
    if (iVar11 < 2) {
      iVar11 = 2;
    }
    if (-1 < iVar11 << 0x1f) {
      iVar11 = iVar11 + 1;
    }
    *(short *)((int)piVar7 + 0x4a) = (short)iVar11;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    *(short *)((int)piVar7 + 0x46) = (short)iVar3 - (short)(iVar11 >> 1);
    if (iVar8 == 0x23) break;
    fVar13 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    piVar7 = piVar7 + 0x18;
  }
  FUN_2c639858(piStack_54,piVar4 + 0x11,0x23);
  if ((piVar6 != (int *)0x0) && (iVar3 = piVar6[1], piVar6[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
    iVar3 = piVar6[2];
    piVar6[2] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
  }
  if ((piVar5 != (int *)0x0) && (iVar3 = piVar5[1], piVar5[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar5 + 8))(piVar5);
    iVar3 = piVar5[2];
    piVar5[2] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c557f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return;
    }
  }
  return;
}

