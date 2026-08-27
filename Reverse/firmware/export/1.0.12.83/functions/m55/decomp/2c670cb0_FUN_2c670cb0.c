/* FUN_2c670cb0 @ 0x2c670cb0 */

void FUN_2c670cb0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int extraout_r3;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  
  iVar2 = FUN_2c670c78(param_2,param_3,param_3,param_4,param_4);
  bVar16 = -1 < iVar2;
  if (iVar2 == 0) {
    iVar2 = FUN_2c6706e0(param_1,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x10) = 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      return;
    }
    uVar4 = 0x232;
  }
  else {
    iVar6 = param_3;
    iVar1 = extraout_r3;
    if (bVar16) {
      iVar2 = 0;
      iVar6 = param_2;
      iVar1 = param_3;
    }
    if (!bVar16) {
      iVar2 = 1;
      iVar1 = param_2;
    }
    iVar3 = FUN_2c6706e0(param_1,*(undefined4 *)(iVar6 + 4));
    if (iVar3 != 0) {
      iVar13 = *(int *)(iVar6 + 0x10);
      iVar11 = *(int *)(iVar1 + 0x10);
      *(int *)(iVar3 + 0xc) = iVar2;
      puVar7 = (uint *)(iVar6 + 0x10);
      puVar10 = (uint *)(iVar1 + 0x14) + iVar11;
      puVar15 = (uint *)(iVar6 + 0x14 + iVar13 * 4);
      iVar2 = 0;
      puVar12 = (uint *)(iVar1 + 0x14);
      puVar9 = (uint *)(iVar3 + 0x14);
      do {
        puVar7 = puVar7 + 1;
        puVar14 = puVar12 + 1;
        uVar5 = (iVar2 + (*puVar7 & 0xffff)) - (*puVar12 & 0xffff);
        iVar11 = ((*puVar7 >> 0x10) - (*puVar12 >> 0x10)) + ((int)uVar5 >> 0x10);
        iVar2 = iVar11 >> 0x10;
        *puVar9 = uVar5 & 0xffff | iVar11 * 0x10000;
        puVar12 = puVar14;
        puVar9 = puVar9 + 1;
      } while (puVar14 < puVar10);
      iVar11 = ((int)puVar10 + (-0x15 - iVar1) & 0xfffffffcU) + 4;
      if (puVar10 < (uint *)(iVar1 + 0x15)) {
        iVar11 = 4;
      }
      puVar9 = (uint *)(iVar11 + iVar3 + 0x14);
      puVar10 = (uint *)(iVar6 + 0x14 + iVar11);
      puVar12 = puVar9;
      for (puVar7 = puVar10; puVar7 < puVar15; puVar7 = puVar7 + 1) {
        uVar5 = (*puVar7 & 0xffff) + iVar2;
        iVar6 = ((int)uVar5 >> 0x10) + (*puVar7 >> 0x10);
        iVar2 = iVar6 >> 0x10;
        *puVar12 = uVar5 & 0xffff | iVar6 * 0x10000;
        puVar12 = puVar12 + 1;
      }
      uVar5 = (int)puVar15 + (3 - (int)puVar10) & 0xfffffffc;
      if (puVar15 < (uint *)((int)puVar10 - 3U)) {
        uVar5 = 0;
      }
      piVar8 = (int *)(uVar5 + (int)puVar9);
      while (piVar8 = piVar8 + -1, *piVar8 == 0) {
        iVar13 = iVar13 + -1;
      }
      *(int *)(iVar3 + 0x10) = iVar13;
      return;
    }
    uVar4 = 0x240;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c668484(DAT_2c670dcc,uVar4,0,DAT_2c670dc8);
}

