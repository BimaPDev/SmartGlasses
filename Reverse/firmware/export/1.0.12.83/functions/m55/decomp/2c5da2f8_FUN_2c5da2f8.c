/* FUN_2c5da2f8 @ 0x2c5da2f8 */

void FUN_2c5da2f8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar3 = param_3 + -1;
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = param_3;
  }
  iVar7 = param_2;
  if (param_2 < iVar4 >> 1) {
    do {
      iVar9 = iVar7 + 1;
      iVar6 = iVar9 * 2 + -1;
      uVar8 = *(undefined4 *)(param_1 + iVar6 * 4);
      uVar1 = FUN_2c5d8bd8(*(undefined4 *)(param_1 + iVar9 * 8));
      uVar2 = FUN_2c5d8bd8(uVar8);
      iVar5 = iVar9 * 2;
      iVar9 = iVar9 * 8;
      if (uVar1 < uVar2) {
        iVar5 = iVar6;
        iVar9 = iVar6 * 4;
      }
      puVar10 = (undefined4 *)(param_1 + iVar9);
      *(undefined4 *)(param_1 + iVar7 * 4) = *puVar10;
      iVar7 = iVar5;
    } while (iVar5 < iVar4 >> 1);
    if (-1 < param_3 << 0x1f) goto LAB_2c5da3c6;
  }
  else {
    if (param_3 << 0x1f < 0) {
      puVar10 = (undefined4 *)(param_1 + param_2 * 4);
      goto LAB_2c5da3b2;
    }
    puVar10 = (undefined4 *)(param_1 + param_2 * 4);
    iVar5 = param_2;
LAB_2c5da3c6:
    iVar4 = param_3 + -2;
    if (param_3 + -2 < 0) {
      iVar4 = iVar3;
    }
    if (iVar5 == iVar4 >> 1) {
      iVar5 = iVar5 * 2 + 1;
      *puVar10 = *(undefined4 *)(param_1 + iVar5 * 4);
      puVar10 = (undefined4 *)(param_1 + iVar5 * 4);
    }
  }
  iVar4 = iVar5 + -1;
  if (iVar5 + -1 < 0) {
    iVar4 = iVar5;
  }
  while (param_2 < iVar5) {
    iVar3 = iVar4 >> 1;
    puVar10 = (undefined4 *)(param_1 + iVar3 * 4);
    uVar1 = FUN_2c5d8bd8(*(undefined4 *)(param_1 + iVar3 * 4));
    uVar2 = FUN_2c5d8bd8(param_4);
    if (uVar2 <= uVar1) {
      puVar10 = (undefined4 *)(param_1 + iVar5 * 4);
      break;
    }
    *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar5 = iVar3;
    iVar4 = iVar3 + -1;
    if (iVar3 + -1 < 0) {
      iVar4 = iVar3;
    }
  }
LAB_2c5da3b2:
  *puVar10 = param_4;
  return;
}

