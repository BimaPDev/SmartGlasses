/* FUN_2c5dcd3c @ 0x2c5dcd3c */

void FUN_2c5dcd3c(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  piVar2 = DAT_2c5dce2c;
  iVar11 = *param_1;
  iVar13 = param_1[1];
  uVar1 = iVar13 - iVar11 >> 3;
  if (uVar1 == 0xfffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c5dce34);
  }
  uVar4 = uVar1;
  if (uVar1 == 0) {
    uVar4 = 1;
  }
  uVar5 = uVar1 + uVar4;
  iVar12 = DAT_2c5dce30;
  if (CARRY4(uVar1,uVar4)) {
LAB_2c5dcdf4:
    if (*DAT_2c5dce2c == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    iVar3 = FUN_2c47245c(0,iVar12);
    iVar12 = iVar3 + iVar12;
    iVar10 = iVar3 + 8;
  }
  else {
    if (uVar5 != 0) {
      if (0xffffffe < uVar5) {
        uVar5 = 0xfffffff;
      }
      iVar12 = uVar5 << 3;
      goto LAB_2c5dcdf4;
    }
    iVar10 = 8;
    iVar3 = 0;
    iVar12 = 0;
  }
  puVar8 = (undefined4 *)(iVar3 + (param_2 - iVar11));
  uVar6 = param_3[1];
  *puVar8 = *param_3;
  puVar8[1] = uVar6;
  if (param_2 == iVar11) {
    if (param_2 != iVar13) goto LAB_2c5dcda4;
  }
  else {
    iVar10 = 0;
    do {
      iVar9 = iVar10;
      uVar6 = ((undefined4 *)(iVar11 + iVar9))[1];
      *(undefined4 *)(iVar3 + iVar9) = *(undefined4 *)(iVar11 + iVar9);
      ((undefined4 *)(iVar3 + iVar9))[1] = uVar6;
      iVar10 = iVar9 + 8;
    } while (iVar9 + 8 != param_2 - iVar11);
    iVar10 = iVar3 + iVar9 + 0x10;
    if (param_2 == iVar13) goto LAB_2c5dcdcc;
LAB_2c5dcda4:
    iVar9 = 0;
    do {
      puVar8 = (undefined4 *)(param_2 + iVar9);
      puVar7 = (undefined4 *)(iVar10 + iVar9);
      iVar9 = iVar9 + 8;
      uVar6 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar6;
    } while (iVar13 - param_2 != iVar9);
    iVar10 = iVar10 + (iVar13 - param_2);
  }
  if (iVar11 == 0) {
    param_1[2] = iVar12;
    *param_1 = iVar3;
    param_1[1] = iVar10;
    return;
  }
LAB_2c5dcdcc:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,iVar11);
}

