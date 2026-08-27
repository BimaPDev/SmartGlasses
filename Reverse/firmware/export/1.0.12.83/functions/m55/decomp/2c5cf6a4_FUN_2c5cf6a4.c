/* FUN_2c5cf6a4 @ 0x2c5cf6a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cf6a4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint extraout_r2;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  
  piVar2 = _LAB_2c5cf764;
  iVar13 = *param_1;
  iVar14 = param_1[1];
  uVar5 = 0x1fffffff;
  uVar1 = iVar14 - iVar13 >> 2;
  if (uVar1 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c5cf76c);
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar11 = uVar1 + uVar4;
  iVar12 = _DAT_2c5cf768;
  if (!CARRY4(uVar1,uVar4)) {
    if (uVar11 == 0) {
      puVar7 = (undefined4 *)&Reset;
      iVar12 = 0;
      puVar3 = (undefined4 *)0x0;
      goto LAB_2c5cf6d8;
    }
    if (0x1ffffffe < uVar11) {
      uVar11 = uVar5;
    }
    iVar12 = uVar11 << 2;
  }
  iVar10 = *_LAB_2c5cf764;
  if (iVar10 == 0) {
    FUN_2c4723c4();
    iVar10 = 1;
    *piVar2 = 1;
    uVar5 = extraout_r2;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,iVar12,uVar5,iVar10,param_4);
  iVar12 = iVar12 + (int)puVar3;
  puVar7 = puVar3 + 1;
LAB_2c5cf6d8:
  *(undefined4 *)((int)puVar3 + (param_2 - iVar13)) = *param_3;
  if (param_2 != iVar13) {
    puVar6 = (undefined4 *)(iVar13 + -4);
    puVar8 = puVar3;
    do {
      puVar7 = puVar8;
      puVar6 = puVar6 + 1;
      *puVar7 = *puVar6;
      puVar8 = puVar7 + 1;
    } while (puVar7 + 1 != (undefined4 *)((int)puVar3 + (param_2 - iVar13)));
    puVar7 = puVar7 + 2;
  }
  if (param_2 != iVar14) {
    puVar6 = (undefined4 *)(param_2 + -4);
    puVar15 = (undefined4 *)((iVar14 - param_2) + (int)puVar7);
    puVar8 = puVar7;
    do {
      puVar6 = puVar6 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar6;
      puVar8 = puVar9;
      puVar7 = puVar15;
    } while (puVar9 != puVar15);
  }
  if (iVar13 == 0) {
    param_1[2] = iVar12;
    *param_1 = (int)puVar3;
    param_1[1] = (int)puVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar13);
}

