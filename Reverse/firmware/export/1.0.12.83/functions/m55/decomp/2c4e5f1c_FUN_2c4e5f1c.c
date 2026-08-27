/* FUN_2c4e5f1c @ 0x2c4e5f1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e5f1c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  undefined4 in_cr7;
  undefined4 in_cr8;
  float fVar7;
  
  if (param_1[2] != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4e5fe8,param_3);
  }
  if (*param_1 != 0) {
    return 0;
  }
  if (param_3 < 1) {
    iVar5 = param_1[3];
    if (iVar5 < 1) {
      return 0;
    }
  }
  else {
    iVar2 = param_2 + -4;
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(iVar2 + 4);
      iVar2 = iVar2 + 4;
      fVar7 = (float)VectorSignedToFloat(*puVar3,(byte)(in_fpscr >> 0x16) & 3);
      iVar4 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1[5] + iVar4) = fVar7 * (float)param_1[4];
    } while (param_3 != iVar5);
    iVar5 = param_1[3];
    if (iVar5 < 1) goto LAB_2c4e5f84;
  }
  piVar6 = param_1 + 6;
  iVar2 = 0;
  do {
    while (*piVar6 == 0) {
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 3;
      if (iVar5 <= iVar2) goto LAB_2c4e5f7e;
    }
    iVar4 = param_1[5] + iVar2 * 4;
    iVar2 = iVar2 + 1;
    FUN_2c49a4d4(piVar6,iVar4,iVar4,param_3 / iVar5,iVar5);
    iVar5 = param_1[3];
    piVar6 = piVar6 + 3;
  } while (iVar2 < iVar5);
LAB_2c4e5f7e:
  if (param_3 < 1) {
    return 0;
  }
LAB_2c4e5f84:
  puVar3 = (undefined4 *)(param_2 + -4);
  iVar5 = 0;
  do {
    coprocessor_function2(10,0xf,3,in_cr7,in_cr8,in_cr7);
    iVar2 = (int)*(float *)(param_1[5] + iVar5 * 4);
    uVar1 = SignedSaturate(iVar2,0x17);
    SignedDoesSaturate(iVar2,0x17);
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  } while (iVar5 < param_3);
  return 0;
}

