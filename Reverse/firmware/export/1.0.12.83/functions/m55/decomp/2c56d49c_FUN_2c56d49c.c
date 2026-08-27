/* FUN_2c56d49c @ 0x2c56d49c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56d49c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  FUN_2c638730(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x48));
  iVar6 = _LAB_2c56d570;
  if (0 < *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78)) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      FUN_2c56d258(param_1,*(undefined4 *)(param_1 + 0x24),iVar5);
      *(short *)(*(int *)(param_1 + 0x3c) + iVar5 * 2) =
           (short)*(undefined4 *)(*(int *)(param_1 + 0x78) + iVar8 + 0x28);
      iVar4 = *(int *)(param_1 + 0x78) + iVar8;
      iVar8 = iVar8 + 0x2c;
      *(short *)(*(int *)(param_1 + 0x40) + iVar5 * 2) = (short)*(undefined4 *)(iVar4 + 0x24);
      iVar5 = iVar5 + 1;
      iVar4 = iVar6 * (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2);
    } while (iVar4 - iVar5 != 0 && iVar5 <= iVar4);
  }
  func_0x2c56cc64(param_1);
  func_0x2c617e1c(*(undefined4 *)(param_1 + 0x28));
  FUN_2c6070bc(*(undefined4 *)(param_1 + 4),0x21c);
  FUN_2c6070bc(*(undefined4 *)(param_1 + 8),0x21c);
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c56d57c,0x3a,_LAB_2c56d578,_LAB_2c56d574);
  }
  FUN_2c6041d4(iVar6);
  iVar5 = FUN_2c6041fc();
  FUN_2c604550(iVar6,iVar5 + -1);
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c56d57c,0x3a,_LAB_2c56d578,_LAB_2c56d574);
  }
  FUN_2c6041d4(iVar6);
  iVar5 = FUN_2c6041fc();
  iVar5 = iVar5 + -1;
  if (iVar6 != 0) {
    if (iVar5 < 0) {
      iVar8 = *(int *)(iVar6 + 4);
      piVar7 = *(int **)(iVar8 + 8);
      if (piVar7 == (int *)0x0) {
        return;
      }
      iVar4 = FUN_2c604204();
      iVar2 = piVar7[1];
      iVar5 = iVar5 + iVar2;
      if (iVar5 < 0) {
        return;
      }
    }
    else {
      iVar4 = FUN_2c604204();
      iVar8 = *(int *)(iVar6 + 4);
      piVar7 = *(int **)(iVar8 + 8);
      if (piVar7 == (int *)0x0) {
        return;
      }
      iVar2 = piVar7[1];
    }
    if ((iVar5 < iVar2) && (iVar5 != iVar4)) {
      if (iVar5 < iVar4) {
        iVar2 = (iVar4 + 0x3fffffff) * 4;
        do {
          puVar1 = (undefined4 *)(*piVar7 + iVar2);
          iVar2 = iVar2 + -4;
          *(undefined4 *)(*piVar7 + iVar4 * 4) = *puVar1;
          iVar4 = iVar4 + -1;
          piVar7 = *(int **)(iVar8 + 8);
        } while (iVar4 != iVar5);
      }
      else if (iVar4 < iVar5) {
        iVar3 = (iVar4 + 1) * 4;
        iVar2 = iVar4 + 1;
        do {
          bVar9 = iVar2 != iVar5;
          puVar1 = (undefined4 *)(*piVar7 + iVar3);
          iVar3 = iVar3 + 4;
          *(undefined4 *)(*piVar7 + iVar4 * 4) = *puVar1;
          piVar7 = *(int **)(iVar8 + 8);
          iVar4 = iVar2;
          iVar2 = iVar2 + 1;
        } while (bVar9);
      }
      *(int *)(*piVar7 + iVar5 * 4) = iVar6;
      FUN_2c602340(iVar8,0x22,0);
      FUN_2c607df0(iVar8);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c6045fc,0xc1,DAT_2c6045f8,DAT_2c6045f4);
}

