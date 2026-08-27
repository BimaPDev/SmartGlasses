/* FUN_2c50bfdc @ 0x2c50bfdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50bfdc(int *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  piVar1 = _LAB_2c50c0a4;
  iVar12 = *param_1;
  iVar13 = param_1[1];
  uVar9 = iVar13 - iVar12;
  if (uVar9 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c50c0a8);
  }
  uVar3 = uVar9;
  if (uVar9 == 0) {
    uVar3 = 1;
  }
  iVar10 = uVar9 + uVar3;
  if ((CARRY4(uVar9,uVar3)) || (iVar10 < 0)) {
    iVar10 = 0x7fffffff;
    iVar14 = param_2 - iVar12;
  }
  else {
    iVar14 = param_2 - iVar12;
    if (iVar10 == 0) {
      puVar5 = (undefined1 *)0x1;
      puVar11 = (undefined1 *)0x0;
      puVar2 = (undefined1 *)0x0;
      goto LAB_2c50c032;
    }
  }
  if (*_LAB_2c50c0a4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined1 *)FUN_2c47245c(0);
  puVar5 = puVar2 + 1;
  puVar11 = puVar2 + iVar10;
LAB_2c50c032:
  puVar2[iVar14] = *param_3;
  if (param_2 != iVar12) {
    puVar4 = (undefined1 *)(iVar12 + -1);
    puVar6 = puVar2;
    do {
      puVar5 = puVar6;
      puVar4 = puVar4 + 1;
      *puVar5 = *puVar4;
      puVar6 = puVar5 + 1;
    } while (puVar5 + 1 != puVar2 + iVar14);
    puVar5 = puVar5 + 2;
  }
  if (param_2 != iVar13) {
    puVar4 = (undefined1 *)(param_2 + -1);
    puVar8 = puVar5 + (iVar13 - param_2);
    puVar6 = puVar5;
    do {
      puVar4 = puVar4 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar4;
      puVar6 = puVar7;
      puVar5 = puVar8;
    } while (puVar7 != puVar8);
  }
  if (iVar12 == 0) {
    param_1[2] = (int)puVar11;
    *param_1 = (int)puVar2;
    param_1[1] = (int)puVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar12);
}

