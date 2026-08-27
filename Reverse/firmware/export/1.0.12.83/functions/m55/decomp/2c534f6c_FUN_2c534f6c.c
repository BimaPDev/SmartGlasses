/* FUN_2c534f6c @ 0x2c534f6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c534f6c(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  piVar2 = _LAB_2c53506c;
  iVar11 = *param_1;
  iVar10 = param_1[1];
  uVar1 = iVar10 - iVar11 >> 4;
  if (uVar1 == 0x7ffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c535070);
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar1 + uVar4;
  iVar12 = _DAT_2c535074;
  if (CARRY4(uVar1,uVar4)) {
LAB_2c535034:
    if (*_LAB_2c53506c == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    iVar3 = FUN_2c47245c(0,iVar12);
    iVar12 = iVar12 + iVar3;
    iVar13 = iVar3 + 0x10;
  }
  else {
    if (uVar5 != 0) {
      if (0x7fffffe < uVar5) {
        uVar5 = 0x7ffffff;
      }
      iVar12 = uVar5 << 4;
      goto LAB_2c535034;
    }
    iVar13 = 0x10;
    iVar3 = 0;
    iVar12 = 0;
  }
  func_0x2c53561c(iVar3 + (param_2 - iVar11),*param_3);
  if (param_2 == iVar11) {
    if (param_2 != iVar10) goto LAB_2c534fdc;
  }
  else {
    iVar13 = 0;
    do {
      iVar14 = iVar13;
      puVar8 = (undefined4 *)(iVar11 + iVar14);
      puVar15 = (undefined4 *)(iVar3 + iVar14);
      uVar6 = puVar8[1];
      uVar7 = puVar8[2];
      uVar9 = puVar8[3];
      *puVar15 = *puVar8;
      puVar15[1] = uVar6;
      puVar15[2] = uVar7;
      puVar15[3] = uVar9;
      iVar13 = iVar14 + 0x10;
    } while (iVar14 + 0x10 != param_2 - iVar11);
    iVar13 = iVar3 + iVar14 + 0x20;
    if (param_2 == iVar10) goto LAB_2c53500a;
LAB_2c534fdc:
    iVar14 = 0;
    do {
      puVar8 = (undefined4 *)(param_2 + iVar14);
      puVar15 = (undefined4 *)(iVar13 + iVar14);
      iVar14 = iVar14 + 0x10;
      uVar6 = puVar8[1];
      uVar7 = puVar8[2];
      uVar9 = puVar8[3];
      *puVar15 = *puVar8;
      puVar15[1] = uVar6;
      puVar15[2] = uVar7;
      puVar15[3] = uVar9;
    } while (iVar10 - param_2 != iVar14);
    iVar13 = iVar13 + (iVar10 - param_2);
  }
  if (iVar11 == 0) {
    param_1[2] = iVar12;
    *param_1 = iVar3;
    param_1[1] = iVar13;
    return;
  }
LAB_2c53500a:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar11);
}

