/* FUN_2c55d8c0 @ 0x2c55d8c0 */

void FUN_2c55d8c0(int *param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = param_2 * 2;
  iVar5 = *(int *)(*param_1 + -0x10) + (int)param_1;
  piVar8 = *(int **)(iVar5 + 8);
  if (piVar8 != (int *)0x0) {
    if (piVar8[1] == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      iVar6 = piVar8[1] + 1;
      piVar8[1] = iVar6;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar5 + 4);
        iVar5 = *(int *)(*param_1 + -0x10) + (int)param_1;
        piVar9 = *(int **)(iVar5 + 0x10);
        goto joined_r0x2c55d9a8;
      }
      iVar5 = *(int *)(*param_1 + -0x10) + (int)param_1;
    }
  }
  iVar6 = 0;
  piVar9 = *(int **)(iVar5 + 0x10);
joined_r0x2c55d9a8:
  piVar10 = (int *)0x0;
  if (piVar9 != (int *)0x0) {
    if (piVar9[1] == 0) {
      piVar9 = (int *)0x0;
      piVar10 = piVar9;
    }
    else {
      iVar4 = piVar9[1] + 1;
      piVar9[1] = iVar4;
      if (iVar4 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int **)(iVar5 + 0xc);
      }
    }
  }
  FUN_2c62c3b0(*(undefined4 *)(iVar6 + 0x40),0x5600);
  iVar4 = 0;
  iVar11 = DAT_2c55d9ec + param_2 * -8;
  iVar5 = iVar6;
  do {
    while ((iVar7 - iVar4 == 0 || iVar7 < iVar4 && (iVar4 <= iVar7 + 0xc))) {
      uVar3 = *(uint *)(iVar11 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      iVar12 = uVar3 + 1;
      if ((uVar3 & 1) != 0) {
        iVar12 = uVar3 + 2;
      }
      sVar1 = *(short *)(iVar6 + 0xd64);
      *(short *)(iVar5 + 0x4a) = (short)iVar12;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      *(short *)(iVar5 + 0x46) = sVar1 - (short)(iVar12 >> 1);
      iVar5 = iVar5 + 0x60;
      if (iVar4 == 0x23) goto LAB_2c55d966;
    }
    iVar4 = iVar4 + 1;
    uVar2 = *(undefined2 *)(iVar6 + 0xd64);
    *(undefined2 *)(iVar5 + 0x4a) = 1;
    *(undefined2 *)(iVar5 + 0x46) = uVar2;
    iVar5 = iVar5 + 0x60;
  } while (iVar4 != 0x23);
LAB_2c55d966:
  FUN_2c639858(piVar10,iVar6 + 0x44);
  if ((piVar9 != (int *)0x0) && (iVar5 = piVar9[1], piVar9[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*piVar9 + 8))(piVar9);
    iVar5 = piVar9[2];
    piVar9[2] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
  }
  if ((piVar8 != (int *)0x0) && (iVar5 = piVar8[1], piVar8[1] = iVar5 + -1, iVar5 + -1 == 0)) {
    (**(code **)(*piVar8 + 8))(piVar8);
    iVar5 = piVar8[2];
    piVar8[2] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c55d99e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar8 + 0xc))(piVar8);
      return;
    }
  }
  return;
}

