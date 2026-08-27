/* FUN_2c604248 @ 0x2c604248 */

void FUN_2c604248(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  puVar8 = *(undefined4 **)(param_1 + 8);
  while (((puVar8 != (undefined4 *)0x0 && (puVar8[1] != 0)) &&
         (iVar11 = *(int *)*puVar8, iVar11 != 0))) {
    iVar1 = FUN_2c602340(iVar11,0x21,0);
    if (iVar1 != 0) {
      FUN_2c604248(iVar11);
    }
    puVar8 = *(undefined4 **)(param_1 + 8);
  }
  iVar1 = FUN_2c606bc0(param_1);
  for (iVar11 = FUN_2c62a5c0(0); iVar11 != 0; iVar11 = FUN_2c62a5c0(iVar11)) {
    while( true ) {
      if ((param_1 == *(int *)(iVar11 + 0x24)) || (param_1 == *(int *)(iVar11 + 0x28))) {
        FUN_2c5ff4ec(iVar11,param_1);
      }
      if (param_1 == *(int *)(iVar11 + 0x30)) {
        *(undefined4 *)(iVar11 + 0x30) = 0;
      }
      if ((iVar1 == *(int *)(iVar11 + 0x50)) && (iVar5 = FUN_2c5ff66c(), param_1 == iVar5)) break;
      iVar11 = FUN_2c62a5c0(iVar11);
      if (iVar11 == 0) goto LAB_2c6042d4;
    }
    FUN_2c5ff4ec(iVar11,param_1);
  }
LAB_2c6042d4:
  FUN_2c5ff18c(param_1);
  iVar11 = *(int *)(param_1 + 4);
  if (iVar11 != 0) {
    uVar2 = FUN_2c604204(param_1);
    piVar4 = *(int **)(iVar11 + 8);
    uVar9 = piVar4[1] - 1;
    if (uVar2 < uVar9) {
      uVar2 = uVar2 + 1;
      iVar11 = uVar2 * 4;
      do {
        puVar8 = (undefined4 *)(*piVar4 + iVar11);
        iVar1 = *piVar4 + iVar11;
        iVar11 = iVar11 + 4;
        *(undefined4 *)(iVar1 + -4) = *puVar8;
        piVar4 = *(int **)(*(int *)(param_1 + 4) + 8);
        uVar9 = piVar4[1] - 1;
        bVar12 = uVar2 < uVar9;
        uVar2 = uVar2 + 1;
      } while (bVar12);
    }
    piVar4[1] = uVar9;
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 4) + 8);
    uVar3 = FUN_2c62bebc(*puVar8,puVar8[1] << 2);
    *puVar8 = uVar3;
    FUN_2c62bea8(param_1);
    return;
  }
  iVar11 = FUN_2c604188(param_1);
  uVar2 = *(uint *)(iVar11 + 0x28);
  iVar1 = *(int *)(iVar11 + 0xc);
  if (uVar2 == 0) {
    uVar9 = 0;
LAB_2c604352:
    uVar9 = uVar9 + 1;
    iVar5 = uVar9 * 4;
    do {
      iVar6 = iVar1 + iVar5;
      puVar8 = (undefined4 *)(iVar1 + iVar5);
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar6 + -4) = *puVar8;
      iVar1 = *(int *)(iVar11 + 0xc);
      uVar7 = *(int *)(iVar11 + 0x28) - 1;
      bVar12 = uVar9 < uVar7;
      uVar9 = uVar9 + 1;
    } while (bVar12);
  }
  else {
    piVar4 = (int *)(iVar1 + -4);
    uVar9 = 0;
    do {
      piVar4 = piVar4 + 1;
      if (param_1 == *piVar4) {
        uVar7 = uVar2 - 1;
        if (uVar9 < uVar2 - 1) goto LAB_2c604352;
        break;
      }
      uVar10 = uVar9 + 1;
      uVar7 = uVar9;
      uVar9 = uVar10;
    } while (uVar10 != uVar2);
  }
  *(uint *)(iVar11 + 0x28) = uVar7;
  uVar3 = FUN_2c62bebc(iVar1,uVar7 << 2);
  *(undefined4 *)(iVar11 + 0xc) = uVar3;
  FUN_2c62bea8(param_1);
  return;
}

