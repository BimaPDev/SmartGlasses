/* FUN_2c534e60 @ 0x2c534e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c534e60(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  
  piVar2 = DAT_2c534f60;
  iVar10 = *param_1;
  iVar9 = param_1[1];
  uVar1 = iVar9 - iVar10 >> 4;
  if (uVar1 == 0x7ffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c534f64);
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar1 + uVar4;
  iVar11 = DAT_2c534f68;
  if (CARRY4(uVar1,uVar4)) {
LAB_2c534f28:
    if (*DAT_2c534f60 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    iVar3 = FUN_2c47245c(0,iVar11);
    iVar11 = iVar11 + iVar3;
    iVar12 = iVar3 + 0x10;
  }
  else {
    if (uVar5 != 0) {
      if (0x7fffffe < uVar5) {
        uVar5 = 0x7ffffff;
      }
      iVar11 = uVar5 << 4;
      goto LAB_2c534f28;
    }
    iVar12 = 0x10;
    iVar3 = 0;
    iVar11 = 0;
  }
  puVar13 = (undefined4 *)(iVar3 + (param_2 - iVar10));
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *puVar13 = *param_3;
  puVar13[1] = uVar6;
  puVar13[2] = uVar7;
  puVar13[3] = uVar8;
  if (param_2 == iVar10) {
    if (param_2 != iVar9) goto LAB_2c534ed0;
  }
  else {
    iVar12 = 0;
    do {
      iVar14 = iVar12;
      puVar13 = (undefined4 *)(iVar10 + iVar14);
      puVar15 = (undefined4 *)(iVar3 + iVar14);
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *puVar15 = *puVar13;
      puVar15[1] = uVar6;
      puVar15[2] = uVar7;
      puVar15[3] = uVar8;
      iVar12 = iVar14 + 0x10;
    } while (iVar14 + 0x10 != param_2 - iVar10);
    iVar12 = iVar3 + iVar14 + 0x20;
    if (param_2 == iVar9) goto LAB_2c534efe;
LAB_2c534ed0:
    iVar14 = 0;
    do {
      puVar13 = (undefined4 *)(param_2 + iVar14);
      puVar15 = (undefined4 *)(iVar12 + iVar14);
      iVar14 = iVar14 + 0x10;
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *puVar15 = *puVar13;
      puVar15[1] = uVar6;
      puVar15[2] = uVar7;
      puVar15[3] = uVar8;
    } while (iVar9 - param_2 != iVar14);
    iVar12 = iVar12 + (iVar9 - param_2);
  }
  if (iVar10 == 0) {
    param_1[2] = iVar11;
    *param_1 = iVar3;
    param_1[1] = iVar12;
    return;
  }
LAB_2c534efe:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar10);
}

