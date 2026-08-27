/* FUN_2c55010c @ 0x2c55010c */

undefined4 FUN_2c55010c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar11 = *(uint *)(param_2 + 8);
  uVar12 = uVar11;
  if (uVar8 <= uVar11) {
    uVar12 = uVar8;
  }
  if ((uVar12 != 0) &&
     (iVar1 = FUN_2c66960c(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4)), iVar1 != 0))
  {
    return 0;
  }
  if (uVar11 != uVar8) {
    return 0;
  }
  uVar11 = *(uint *)(param_2 + 0x20);
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar12 = uVar11;
  if (uVar8 <= uVar11) {
    uVar12 = uVar8;
  }
  if ((uVar12 != 0) &&
     (iVar1 = FUN_2c66960c(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x1c)),
     iVar1 != 0)) {
    return 0;
  }
  if (uVar11 != uVar8) {
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if (uVar12 == 0) {
    return 1;
  }
  puVar9 = *(undefined4 **)(param_2 + 0x34);
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  if (puVar9 == puVar5) {
    return 1;
  }
  if (((((int)puVar5 - (int)puVar9 == 0x18) && (uVar8 = puVar9[1], uVar8 <= uVar12)) && (uVar8 != 0)
      ) && ((iVar1 = FUN_2c66960c(*puVar9,*(undefined4 *)(param_1 + 0x34),uVar8), iVar1 == 0 &&
            (uVar12 == uVar8)))) {
    return 1;
  }
  piVar2 = (int *)FUN_2c54fe64(puVar9,puVar5,param_1 + 0x34);
  piVar10 = *(int **)(param_2 + 0x38);
  if (piVar10 != piVar2) {
    return 1;
  }
  pcVar6 = *(char **)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x38);
  pcVar3 = pcVar6 + iVar1;
  if (0 < iVar1 >> 2) {
    pcVar4 = pcVar6 + (iVar1 >> 2) * 4;
    do {
      if (9 < (int)*pcVar6 - 0x30U) goto LAB_2c5501c6;
      if (9 < (int)pcVar6[1] - 0x30U) {
        pcVar6 = pcVar6 + 1;
        goto LAB_2c5501c6;
      }
      if (9 < (int)pcVar6[2] - 0x30U) {
        pcVar6 = pcVar6 + 2;
        goto LAB_2c5501c6;
      }
      if (9 < (int)pcVar6[3] - 0x30U) {
        pcVar6 = pcVar6 + 3;
        goto LAB_2c5501c6;
      }
      pcVar6 = pcVar6 + 4;
    } while (pcVar4 != pcVar6);
    iVar1 = (int)pcVar3 - (int)pcVar6;
  }
  if (iVar1 == 2) {
LAB_2c55024a:
    if ((int)*pcVar6 - 0x30U < 10) {
      pcVar6 = pcVar6 + 1;
LAB_2c5501fe:
      if ((int)*pcVar6 - 0x30U < 10) goto LAB_2c550208;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 1) goto LAB_2c550208;
      goto LAB_2c5501fe;
    }
    if ((int)*pcVar6 - 0x30U < 10) {
      pcVar6 = pcVar6 + 1;
      goto LAB_2c55024a;
    }
  }
LAB_2c5501c6:
  if (pcVar3 != pcVar6) {
    return 0;
  }
LAB_2c550208:
  piVar2 = *(int **)(param_2 + 0x34);
  do {
    if (piVar10 == piVar2) {
      return 0;
    }
    if (piVar2[1] != 0) {
      iVar7 = *piVar2;
      iVar1 = FUN_2c643680(iVar7,0x2d);
      if ((iVar1 != 0) && (iVar1 - iVar7 != -1)) {
        return 1;
      }
    }
    piVar2 = piVar2 + 6;
  } while( true );
}

