/* FUN_2c56ee20 @ 0x2c56ee20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56ee20(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iStack_38;
  
  piVar2 = _LAB_2c56f064;
  iVar14 = *param_1;
  iVar12 = param_1[1];
  uVar5 = _LAB_2c56f054 * (iVar12 - iVar14 >> 2);
  if (uVar5 - _LAB_2c56f058 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c56f06c);
  }
  iVar8 = param_2 - iVar14;
  uVar9 = uVar5;
  if (uVar5 == 0) {
    uVar9 = 1;
  }
  uVar6 = uVar5 + uVar9;
  iStack_38 = _DAT_2c56f068;
  if (!CARRY4(uVar5,uVar9)) {
    if (uVar6 == 0) {
      puVar13 = (undefined4 *)&SVCall;
      puVar4 = (undefined4 *)0x0;
      iStack_38 = 0;
      goto LAB_2c56ee62;
    }
    if (_LAB_2c56f058 <= uVar6) {
      uVar6 = _LAB_2c56f058;
    }
    iStack_38 = uVar6 * 0x2c;
  }
  if (*_LAB_2c56f064 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,iStack_38);
  iStack_38 = (int)puVar4 + iStack_38;
  puVar13 = puVar4 + 0xb;
LAB_2c56ee62:
  uVar1 = _LAB_2c56f05c;
  uVar10 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)puVar4 + iVar8) = _LAB_2c56f05c;
  *(undefined4 *)((int)puVar4 + iVar8 + 4) = uVar10;
  *(int *)((int)puVar4 + iVar8 + 8) = (int)puVar4 + iVar8 + 0x10;
  FUN_2c56e390((int)puVar4 + iVar8 + 8,*(int *)(param_3 + 8),
               *(int *)(param_3 + 0xc) + *(int *)(param_3 + 8));
  *(undefined4 *)((int)puVar4 + iVar8 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((int)puVar4 + iVar8 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)((int)puVar4 + iVar8 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  if (param_2 != iVar14) {
    puVar7 = (undefined4 *)(iVar14 + 0x10);
    puVar13 = puVar4;
    iVar8 = iVar14;
    do {
      *puVar13 = uVar1;
      puVar13[1] = *(undefined4 *)(iVar8 + 4);
      puVar13[2] = puVar13 + 4;
      if (*(undefined4 **)(iVar8 + 8) == puVar7) {
        uVar15 = puVar7[1];
        uVar16 = puVar7[2];
        uVar10 = puVar7[3];
        puVar13[4] = *puVar7;
        puVar13[5] = uVar15;
        puVar13[6] = uVar16;
        puVar13[7] = uVar10;
      }
      else {
        puVar13[2] = *(undefined4 **)(iVar8 + 8);
        puVar13[4] = *(undefined4 *)(iVar8 + 0x10);
      }
      iVar11 = iVar8 + 0x2c;
      puVar13[3] = *(undefined4 *)(iVar8 + 0xc);
      *(undefined1 *)(iVar8 + 0x10) = 0;
      *(undefined4 **)(iVar8 + 8) = puVar7;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      puVar13[8] = *(undefined4 *)(iVar8 + 0x20);
      puVar7 = puVar7 + 0xb;
      puVar13[9] = *(undefined4 *)(iVar8 + 0x24);
      puVar13[10] = *(undefined4 *)(iVar8 + 0x28);
      puVar13 = puVar13 + 0xb;
      iVar8 = iVar11;
    } while (iVar11 != param_2);
    puVar13 = puVar4 + ((_LAB_2c56f060 * ((uint)((param_2 + -0x2c) - iVar14) >> 2) & 0x3fffffff) + 2
                       ) * 0xb;
  }
  if (param_2 != iVar12) {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    puVar7 = puVar13;
    iVar8 = param_2;
    do {
      *puVar7 = uVar1;
      puVar7[1] = *(undefined4 *)(iVar8 + 4);
      puVar7[2] = puVar7 + 4;
      if (*(undefined4 **)(iVar8 + 8) == puVar3) {
        uVar15 = puVar3[1];
        uVar10 = puVar3[2];
        uVar16 = puVar3[3];
        puVar7[4] = *puVar3;
        puVar7[5] = uVar15;
        puVar7[6] = uVar10;
        puVar7[7] = uVar16;
      }
      else {
        puVar7[2] = *(undefined4 **)(iVar8 + 8);
        puVar7[4] = *(undefined4 *)(iVar8 + 0x10);
      }
      puVar7[3] = *(undefined4 *)(iVar8 + 0xc);
      *(undefined1 *)(iVar8 + 0x10) = 0;
      *(undefined4 **)(iVar8 + 8) = puVar3;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      puVar7[8] = *(undefined4 *)(iVar8 + 0x20);
      iVar11 = iVar8 + 0x2c;
      puVar3 = puVar3 + 0xb;
      puVar7[9] = *(undefined4 *)(iVar8 + 0x24);
      puVar7[10] = *(undefined4 *)(iVar8 + 0x28);
      puVar7 = puVar7 + 0xb;
      iVar8 = iVar11;
    } while (iVar11 != iVar12);
    puVar13 = puVar13 + (_LAB_2c56f060 * ((iVar12 - param_2) - 0x2cU >> 2) & 0x3fffffff) * 0xb + 0xb
    ;
  }
  if (iVar14 != iVar12) {
    iVar11 = iVar14 + 0x10;
    iVar8 = iVar14;
    do {
      *(undefined4 *)(iVar11 + -0x10) = uVar1;
      if (*(int *)(iVar8 + 8) != iVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar8 = iVar8 + 0x2c;
      iVar11 = iVar11 + 0x2c;
    } while (iVar8 != iVar12);
  }
  if (iVar14 == 0) {
    *param_1 = (int)puVar4;
    param_1[1] = (int)puVar13;
    param_1[2] = iStack_38;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar14);
}

