/* FUN_2c576ad0 @ 0x2c576ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c576ad0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uStack_30;
  int iStack_2c;
  
  piVar1 = _LAB_2c576cfc;
  iStack_2c = *DAT_2c576cf4;
  if (param_2 == param_1) goto LAB_2c576b5a;
  iVar9 = *param_1;
  puVar4 = (undefined4 *)*param_2;
  puVar11 = (undefined4 *)param_2[1];
  uVar10 = (int)puVar11 - (int)puVar4;
  if ((uint)(param_1[2] - iVar9) < uVar10) {
    if (uVar10 == 0) {
      iVar6 = 0;
    }
    else {
      if (*_LAB_2c576cfc == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      iVar6 = FUN_2c47245c(0,uVar10);
    }
    if (puVar11 != puVar4) {
      puVar8 = (uint *)(iVar6 + 8);
      do {
        puVar8[-2] = (uint)puVar8;
        puVar12 = (undefined1 *)*puVar4;
        uVar3 = puVar4[1];
        if ((puVar12 + uVar3 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0))
        goto LAB_2c576cee;
        uStack_30 = uVar3;
        if (uVar3 < 0x10) {
          puVar2 = (undefined1 *)puVar8[-2];
          if (uVar3 == 1) {
            *puVar2 = *puVar12;
            puVar2 = (undefined1 *)puVar8[-2];
          }
          else if (uVar3 != 0) goto LAB_2c576c96;
        }
        else {
          puVar2 = (undefined1 *)FUN_2c576880(&uStack_30,0);
          puVar8[-2] = (uint)puVar2;
          *puVar8 = uStack_30;
LAB_2c576c96:
          FUN_2c674668(puVar2,puVar12,uVar3);
          puVar2 = (undefined1 *)puVar8[-2];
        }
        puVar4 = puVar4 + 6;
        puVar8[-1] = uStack_30;
        puVar8 = puVar8 + 6;
        puVar2[uStack_30] = 0;
      } while (puVar11 != puVar4);
    }
    iVar9 = *param_1;
    iVar7 = param_1[1];
    if (iVar9 != iVar7) {
      iVar5 = iVar9 + 8;
      do {
        if (*(int *)(iVar5 + -8) != iVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        iVar9 = iVar9 + 0x18;
        iVar5 = iVar5 + 0x18;
      } while (iVar7 != iVar9);
      iVar7 = *param_1;
    }
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar7);
    }
    iVar9 = iVar6 + uVar10;
    *param_1 = iVar6;
    param_1[2] = iVar9;
  }
  else {
    iVar6 = param_1[1];
    uVar3 = iVar6 - iVar9;
    if (uVar3 < uVar10) {
      iVar7 = _LAB_2c576cf8 * ((int)uVar3 >> 3);
      if (0 < (int)uVar3) {
        do {
          FUN_2c52f5f4(iVar9,puVar4);
          iVar7 = iVar7 + -1;
          puVar4 = puVar4 + 6;
          iVar9 = iVar9 + 0x18;
        } while (iVar7 != 0);
        iVar9 = *param_1;
        iVar6 = param_1[1];
        puVar4 = (undefined4 *)*param_2;
        puVar11 = (undefined4 *)param_2[1];
        uVar3 = iVar6 - iVar9;
      }
      puVar4 = (undefined4 *)((int)puVar4 + uVar3);
      if (puVar4 != puVar11) {
        puVar8 = (uint *)(iVar6 + 8);
        do {
          puVar8[-2] = (uint)puVar8;
          puVar12 = (undefined1 *)*puVar4;
          uVar3 = puVar4[1];
          if ((puVar12 + uVar3 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0)) {
LAB_2c576cee:
                    /* WARNING: Subroutine does not return */
            FUN_2c658674(DAT_2c576d00);
          }
          uStack_30 = uVar3;
          if (uVar3 < 0x10) {
            puVar2 = (undefined1 *)puVar8[-2];
            if (uVar3 == 1) {
              *puVar2 = *puVar12;
              puVar2 = (undefined1 *)puVar8[-2];
            }
            else if (uVar3 != 0) goto LAB_2c576c6e;
          }
          else {
            puVar2 = (undefined1 *)FUN_2c576880(&uStack_30,0);
            puVar8[-2] = (uint)puVar2;
            *puVar8 = uStack_30;
LAB_2c576c6e:
            FUN_2c674668(puVar2,puVar12,uVar3);
            puVar2 = (undefined1 *)puVar8[-2];
          }
          puVar4 = puVar4 + 6;
          puVar8[-1] = uStack_30;
          puVar8 = puVar8 + 6;
          puVar2[uStack_30] = 0;
        } while (puVar4 != puVar11);
        goto LAB_2c576b54;
      }
    }
    else {
      if (0 < (int)uVar10) {
        iVar7 = _LAB_2c576cf8 * ((int)uVar10 >> 3);
        iVar6 = iVar9;
        do {
          FUN_2c52f5f4(iVar6,puVar4);
          iVar7 = iVar7 + -1;
          puVar4 = puVar4 + 6;
          iVar6 = iVar6 + 0x18;
        } while (iVar7 != 0);
        iVar6 = param_1[1];
        uVar3 = uVar10;
        if ((int)uVar10 < 1) {
          uVar3 = 0x18;
        }
        iVar9 = iVar9 + uVar3;
      }
      if (iVar9 != iVar6) {
        iVar7 = iVar9 + 8;
        do {
          if (*(int *)(iVar7 + -8) != iVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          iVar9 = iVar9 + 0x18;
          iVar7 = iVar7 + 0x18;
        } while (iVar9 != iVar6);
      }
LAB_2c576b54:
      iVar9 = *param_1;
    }
    iVar9 = iVar9 + uVar10;
  }
  param_1[1] = iVar9;
LAB_2c576b5a:
  if (*DAT_2c576cf4 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

