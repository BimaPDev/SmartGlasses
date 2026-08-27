/* FUN_2c604550 @ 0x2c604550 */

void FUN_2c604550(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c6045fc,0xc1,DAT_2c6045f8,DAT_2c6045f4);
  }
  if (param_2 < 0) {
    iVar6 = *(int *)(param_1 + 4);
    piVar5 = *(int **)(iVar6 + 8);
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar2 = FUN_2c604204();
    iVar3 = piVar5[1];
    param_2 = param_2 + iVar3;
    if (param_2 < 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_2c604204();
    iVar6 = *(int *)(param_1 + 4);
    piVar5 = *(int **)(iVar6 + 8);
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar3 = piVar5[1];
  }
  if ((param_2 < iVar3) && (param_2 != iVar2)) {
    if (param_2 < iVar2) {
      iVar3 = (iVar2 + 0x3fffffff) * 4;
      do {
        puVar1 = (undefined4 *)(*piVar5 + iVar3);
        iVar3 = iVar3 + -4;
        *(undefined4 *)(*piVar5 + iVar2 * 4) = *puVar1;
        iVar2 = iVar2 + -1;
        piVar5 = *(int **)(iVar6 + 8);
      } while (iVar2 != param_2);
    }
    else if (iVar2 < param_2) {
      iVar4 = (iVar2 + 1) * 4;
      iVar3 = iVar2 + 1;
      do {
        bVar7 = iVar3 != param_2;
        puVar1 = (undefined4 *)(*piVar5 + iVar4);
        iVar4 = iVar4 + 4;
        *(undefined4 *)(*piVar5 + iVar2 * 4) = *puVar1;
        piVar5 = *(int **)(iVar6 + 8);
        iVar2 = iVar3;
        iVar3 = iVar3 + 1;
      } while (bVar7);
    }
    *(int *)(*piVar5 + param_2 * 4) = param_1;
    FUN_2c602340(iVar6,0x22,0);
    FUN_2c607df0(iVar6);
    return;
  }
  return;
}

