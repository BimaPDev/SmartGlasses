/* FUN_2c558870 @ 0x2c558870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c558870(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uStack_40;
  int iStack_3c;
  int iStack_34;
  uint uStack_30;
  int *piStack_2c;
  
  uVar10 = param_1[1];
  uVar13 = *param_2;
  iVar2 = uVar13 - uVar10 * (uVar13 / uVar10);
  piVar15 = *(int **)(*param_1 + iVar2 * 4);
  if (piVar15 != (int *)0x0) {
    uVar8 = ((int *)*piVar15)[1];
    piVar1 = (int *)*piVar15;
    while (uVar13 != uVar8) {
      piVar4 = (int *)*piVar1;
      if ((piVar4 == (int *)0x0) ||
         (uVar8 = piVar4[1], piVar15 = piVar1, piVar1 = piVar4,
         iVar2 != uVar8 - uVar10 * (uVar8 / uVar10))) goto LAB_2c5588b0;
    }
    if (*piVar15 != 0) {
      return (undefined4 *)(*piVar15 + 8);
    }
  }
LAB_2c5588b0:
  uVar22 = FUN_2c658686(uRam2c5588b8);
  piVar1 = _LAB_2c558b4c;
  puVar14 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
  piVar4 = (int *)((int)uVar22 >> 0x17);
  iStack_34 = uVar10 - 0x15;
  puVar16 = (undefined4 *)*piVar4;
  puVar17 = (undefined4 *)piVar4[1];
  iStack_3c = *DAT_2c558b30;
  uVar10 = _LAB_2c558b34 * ((int)puVar17 - (int)puVar16 >> 3);
  uStack_30 = uVar13;
  piStack_2c = piVar15;
  if (uVar10 - _LAB_2c558b38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c558b48);
  }
  uVar13 = uVar10;
  if (uVar10 == 0) {
    uVar13 = 1;
  }
  uVar8 = uVar10 + uVar13;
  if (CARRY4(uVar10,uVar13)) {
    iVar9 = (int)puVar14 - (int)puVar16;
    iVar2 = _DAT_2c558b44;
    uVar8 = _LAB_2c558b38;
LAB_2c558acc:
    if (*_LAB_2c558b4c == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    iVar2 = FUN_2c47245c(0,iVar2);
  }
  else {
    iVar9 = (int)puVar14 - (int)puVar16;
    if (uVar8 != 0) {
      if (_LAB_2c558b38 <= uVar8) {
        uVar8 = _LAB_2c558b38;
      }
      iVar2 = uVar8 * 0x18;
      goto LAB_2c558acc;
    }
    iVar2 = 0;
  }
  puVar18 = (undefined1 *)*extraout_r2;
  puVar11 = (undefined4 *)(iVar2 + iVar9);
  *(undefined4 **)(iVar2 + iVar9) = puVar11 + 2;
  if (puVar18 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c558b3c);
  }
  uVar10 = FUN_2c66c4ec(puVar18);
  uStack_40 = uVar10;
  if (uVar10 < 0x10) {
    puVar3 = (undefined4 *)*puVar11;
    if (uVar10 != 1) {
      if (uVar10 == 0) {
        puVar11[1] = 0;
        *(undefined1 *)puVar3 = 0;
        goto joined_r0x2c558948;
      }
      goto LAB_2c558af6;
    }
    *(undefined1 *)puVar3 = *puVar18;
    puVar3 = (undefined4 *)*puVar11;
  }
  else {
    puVar3 = (undefined4 *)FUN_2c557f50(&uStack_40,0);
    *puVar11 = puVar3;
    puVar11[2] = uStack_40;
LAB_2c558af6:
    FUN_2c674668(puVar3,puVar18,uVar10);
    puVar3 = (undefined4 *)*puVar11;
  }
  puVar11[1] = uStack_40;
  *(undefined1 *)((int)puVar3 + uStack_40) = 0;
joined_r0x2c558948:
  iVar9 = iVar2;
  if (puVar14 != puVar16) {
    puVar3 = puVar16 + 2;
    puVar6 = (undefined4 *)(iVar2 + 8);
    puVar11 = puVar16;
    do {
      puVar12 = puVar11 + 6;
      puVar6[-2] = puVar6;
      if ((undefined4 *)*puVar11 == puVar3) {
        uVar21 = puVar3[1];
        uVar20 = puVar3[2];
        uVar5 = puVar3[3];
        *puVar6 = *puVar3;
        puVar6[1] = uVar21;
        puVar6[2] = uVar20;
        puVar6[3] = uVar5;
      }
      else {
        puVar6[-2] = (undefined4 *)*puVar11;
        *puVar6 = puVar11[2];
      }
      puVar6[-1] = puVar11[1];
      *(undefined1 *)(puVar11 + 2) = 0;
      *puVar11 = puVar3;
      puVar11[1] = 0;
      puVar3 = puVar3 + 6;
      puVar6 = puVar6 + 6;
      puVar11 = puVar12;
    } while (puVar14 != puVar12);
    iVar9 = iVar2 + ((DAT_2c558b40 * ((uint)((int)puVar14 + (-0x18 - (int)puVar16)) >> 3) &
                     0x1fffffff) + 1) * 0x18;
  }
  iVar19 = iVar9 + 0x18;
  if (puVar14 != puVar17) {
    puVar12 = puVar14 + 2;
    puVar6 = (undefined4 *)(iVar9 + 0x20);
    puVar11 = puVar14;
    do {
      puVar7 = puVar11 + 6;
      puVar6[-2] = puVar6;
      if ((undefined4 *)*puVar11 == puVar12) {
        uVar21 = puVar12[1];
        uVar20 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar6 = *puVar12;
        puVar6[1] = uVar21;
        puVar6[2] = uVar20;
        puVar6[3] = uVar5;
      }
      else {
        puVar6[-2] = (undefined4 *)*puVar11;
        *puVar6 = puVar11[2];
      }
      puVar3 = (undefined4 *)puVar11[1];
      puVar6[-1] = puVar3;
      *(undefined1 *)(puVar11 + 2) = 0;
      *puVar11 = puVar12;
      puVar11[1] = 0;
      puVar12 = puVar12 + 6;
      puVar6 = puVar6 + 6;
      puVar11 = puVar7;
    } while (puVar17 != puVar7);
    iVar19 = iVar19 + ((DAT_2c558b40 * ((uint)((int)puVar17 + (-0x18 - (int)puVar14)) >> 3) &
                       0x1fffffff) + 1) * 0x18;
  }
  piVar15 = DAT_2c558b30;
  if (puVar16 != puVar17) {
    puVar11 = puVar16 + 2;
    puVar14 = puVar16;
    do {
      if (puVar11 != (undefined4 *)puVar11[-2]) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar14 = puVar14 + 6;
      puVar11 = puVar11 + 6;
    } while (puVar14 != puVar17);
  }
  if (puVar16 == (undefined4 *)0x0) {
    *piVar4 = iVar2;
    piVar4[1] = iVar19;
    piVar4[2] = iVar2 + uVar8 * 0x18;
    if (*piVar15 != iStack_3c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,puVar16);
}

