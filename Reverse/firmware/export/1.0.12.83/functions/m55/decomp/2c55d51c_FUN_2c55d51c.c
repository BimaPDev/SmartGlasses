/* FUN_2c55d51c @ 0x2c55d51c */

void FUN_2c55d51c(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  
  iVar6 = *(int *)(*param_1 + -0x10) + (int)param_1;
  piVar9 = *(int **)(iVar6 + 8);
  if (piVar9 != (int *)0x0) {
    if (piVar9[1] == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar8 = piVar9[1] + 1;
      piVar9[1] = iVar8;
      if (iVar8 != 0) {
        iVar8 = *(int *)(iVar6 + 4);
        iVar6 = *(int *)(*param_1 + -0x10) + (int)param_1;
        piVar10 = *(int **)(iVar6 + 0x10);
        goto joined_r0x2c55d5fa;
      }
      iVar6 = *(int *)(*param_1 + -0x10) + (int)param_1;
    }
  }
  iVar8 = 0;
  piVar10 = *(int **)(iVar6 + 0x10);
joined_r0x2c55d5fa:
  if (piVar10 == (int *)0x0) {
    uVar12 = 0;
  }
  else if (piVar10[1] == 0) {
    piVar10 = (int *)0x0;
    uVar12 = 0;
  }
  else {
    iVar11 = piVar10[1] + 1;
    piVar10[1] = iVar11;
    uVar12 = 0;
    if (iVar11 != 0) {
      uVar12 = *(undefined4 *)(iVar6 + 0xc);
    }
  }
  FUN_2c62c3b0(*(undefined4 *)(iVar8 + 0x40),0x5600);
  uVar2 = DAT_2c55d640;
  iVar6 = DAT_2c55d63c;
  uVar3 = param_2 * -2;
  sVar1 = *(short *)(iVar8 + 0xd64);
  iVar11 = iVar8;
  do {
    iVar5 = iVar11 + 0x60;
    uVar4 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    uVar3 = uVar3 + 1;
    uVar4 = *(uint *)(iVar6 + (uVar4 + (uint)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x22) * -0xd) *
                              4);
    iVar7 = uVar4 + 1;
    if ((uVar4 & 1) != 0) {
      iVar7 = uVar4 + 2;
    }
    *(short *)(iVar11 + 0x4a) = (short)iVar7;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    *(short *)(iVar11 + 0x46) = sVar1 - (short)(iVar7 >> 1);
    iVar11 = iVar5;
  } while (iVar8 + 0xd20 != iVar5);
  FUN_2c639858(uVar12,iVar8 + 0x44,0x23);
  if ((piVar10 != (int *)0x0) && (iVar6 = piVar10[1], piVar10[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*piVar10 + 8))(piVar10);
    iVar6 = piVar10[2];
    piVar10[2] = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      (**(code **)(*piVar10 + 0xc))(piVar10);
    }
  }
  if ((piVar9 != (int *)0x0) && (iVar6 = piVar9[1], piVar9[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*piVar9 + 8))(piVar9);
    iVar6 = piVar9[2];
    piVar9[2] = iVar6 + -1;
    if (iVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar9 + 0xc))(piVar9);
      return;
    }
  }
  return;
}

