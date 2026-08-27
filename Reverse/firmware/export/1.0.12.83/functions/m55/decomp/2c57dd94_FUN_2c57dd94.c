/* FUN_2c57dd94 @ 0x2c57dd94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57dd94(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uStack_3c;
  uint uStack_30;
  int iStack_2c;
  
  piVar2 = _LAB_2c57e00c;
  iStack_2c = *_LAB_2c57dff4;
  iVar12 = *param_1;
  iVar13 = param_1[1];
  uVar9 = _LAB_2c57dff8 * (iVar13 - iVar12 >> 2);
  if (uVar9 - _LAB_2c57dffc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c57e014);
  }
  uVar7 = uVar9;
  if (uVar9 == 0) {
    uVar7 = 1;
  }
  uStack_3c = uVar9 + uVar7;
  if (CARRY4(uVar9,uVar7)) {
    uStack_3c = _LAB_2c57dffc;
    iVar14 = param_2 - iVar12;
    iVar10 = _DAT_2c57e008;
LAB_2c57df98:
    if (*_LAB_2c57e00c == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    puVar5 = (undefined4 *)FUN_2c47245c(0,iVar10);
  }
  else {
    iVar14 = param_2 - iVar12;
    if (uStack_3c != 0) {
      if (_LAB_2c57dffc <= uStack_3c) {
        uStack_3c = _LAB_2c57dffc;
      }
      iVar10 = uStack_3c * 0x1c;
      goto LAB_2c57df98;
    }
    puVar5 = (undefined4 *)0x0;
  }
  uVar1 = _LAB_2c57e000;
  puVar3 = (undefined1 *)((int)puVar5 + iVar14 + 0xc);
  *(undefined4 *)((int)puVar5 + iVar14) = _LAB_2c57e000;
  *(undefined1 **)((int)puVar5 + iVar14 + 4) = puVar3;
  puVar15 = *(undefined1 **)(param_3 + 4);
  uVar9 = *(uint *)(param_3 + 8);
  if ((puVar15 + uVar9 != (undefined1 *)0x0) && (puVar15 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c57e010);
  }
  uStack_30 = uVar9;
  if (uVar9 < 0x10) {
    if (uVar9 != 1) {
      if (uVar9 == 0) {
        *(undefined4 *)((int)puVar5 + iVar14 + 8) = 0;
        *puVar3 = 0;
        goto joined_r0x2c57de20;
      }
      goto LAB_2c57dfb6;
    }
    *(undefined1 *)((int)puVar5 + iVar14 + 0xc) = *puVar15;
  }
  else {
    puVar3 = (undefined1 *)FUN_2c57d85c(&uStack_30,0);
    *(undefined1 **)((int)puVar5 + iVar14 + 4) = puVar3;
    *(uint *)((int)puVar5 + iVar14 + 0xc) = uStack_30;
LAB_2c57dfb6:
    FUN_2c674668(puVar3,puVar15,uVar9);
    puVar3 = *(undefined1 **)((int)puVar5 + iVar14 + 4);
  }
  *(uint *)((int)puVar5 + iVar14 + 8) = uStack_30;
  puVar3[uStack_30] = 0;
joined_r0x2c57de20:
  puVar8 = puVar5;
  if (param_2 != iVar12) {
    puVar6 = (undefined4 *)(iVar12 + 0xc);
    iVar10 = iVar12;
    do {
      *puVar8 = uVar1;
      puVar8[1] = puVar8 + 3;
      if (*(undefined4 **)(iVar10 + 4) == puVar6) {
        uVar17 = puVar6[1];
        uVar16 = puVar6[2];
        uVar11 = puVar6[3];
        puVar8[3] = *puVar6;
        puVar8[4] = uVar17;
        puVar8[5] = uVar16;
        puVar8[6] = uVar11;
      }
      else {
        puVar8[1] = *(undefined4 **)(iVar10 + 4);
        puVar8[3] = *(undefined4 *)(iVar10 + 0xc);
      }
      iVar14 = iVar10 + 0x1c;
      puVar8[2] = *(undefined4 *)(iVar10 + 8);
      *(undefined1 *)(iVar10 + 0xc) = 0;
      *(undefined4 **)(iVar10 + 4) = puVar6;
      *(undefined4 *)(iVar10 + 8) = 0;
      puVar6 = puVar6 + 7;
      puVar8 = puVar8 + 7;
      iVar10 = iVar14;
    } while (iVar14 != param_2);
    puVar8 = puVar5 + ((_LAB_2c57e004 * ((uint)((param_2 + -0x1c) - iVar12) >> 2) & 0x3fffffff) + 1)
                      * 7;
  }
  puVar8 = puVar8 + 7;
  if (param_2 != iVar13) {
    puVar4 = (undefined4 *)(param_2 + 0xc);
    puVar6 = puVar8;
    iVar10 = param_2;
    do {
      *puVar6 = uVar1;
      puVar6[1] = puVar6 + 3;
      if (*(undefined4 **)(iVar10 + 4) == puVar4) {
        uVar17 = puVar4[1];
        uVar16 = puVar4[2];
        uVar11 = puVar4[3];
        puVar6[3] = *puVar4;
        puVar6[4] = uVar17;
        puVar6[5] = uVar16;
        puVar6[6] = uVar11;
      }
      else {
        puVar6[1] = *(undefined4 **)(iVar10 + 4);
        puVar6[3] = *(undefined4 *)(iVar10 + 0xc);
      }
      iVar14 = iVar10 + 0x1c;
      puVar6[2] = *(undefined4 *)(iVar10 + 8);
      *(undefined1 *)(iVar10 + 0xc) = 0;
      *(undefined4 **)(iVar10 + 4) = puVar4;
      *(undefined4 *)(iVar10 + 8) = 0;
      puVar4 = puVar4 + 7;
      puVar6 = puVar6 + 7;
      iVar10 = iVar14;
    } while (iVar13 != iVar14);
    puVar8 = puVar8 + ((_LAB_2c57e004 * ((iVar13 - param_2) - 0x1cU >> 2) & 0x3fffffff) + 1) * 7;
  }
  if (iVar12 != iVar13) {
    iVar14 = iVar12 + 0xc;
    iVar10 = iVar12;
    do {
      *(undefined4 *)(iVar14 + -0xc) = uVar1;
      if (*(int *)(iVar10 + 4) != iVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar10 = iVar10 + 0x1c;
      iVar14 = iVar14 + 0x1c;
    } while (iVar10 != iVar13);
  }
  if (iVar12 == 0) {
    *param_1 = (int)puVar5;
    param_1[1] = (int)puVar8;
    param_1[2] = (int)(puVar5 + uStack_3c * 7);
    if (*_LAB_2c57dff4 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar12);
}

