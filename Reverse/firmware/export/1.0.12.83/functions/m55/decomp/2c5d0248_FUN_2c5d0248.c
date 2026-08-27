/* FUN_2c5d0248 @ 0x2c5d0248 */

void FUN_2c5d0248(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = param_3 + -1;
  iVar2 = iVar6;
  if (iVar6 < 0) {
    iVar2 = param_3;
  }
  iVar5 = param_2;
  if (param_2 < iVar2 >> 1) {
    do {
      iVar8 = iVar5 + 1;
      puVar1 = *(uint **)(param_1 + iVar8 * 8);
      iVar4 = iVar8 * 2 + -1;
      puVar3 = *(uint **)(param_1 + iVar4 * 4);
      iVar7 = iVar8 * 2;
      iVar8 = iVar8 * 8;
      if (*puVar1 < *puVar3) {
        puVar1 = puVar3;
        iVar7 = iVar4;
        iVar8 = iVar4 * 4;
      }
      puVar9 = (undefined4 *)(param_1 + iVar8);
      *(uint **)(param_1 + iVar5 * 4) = puVar1;
      iVar5 = iVar7;
    } while (iVar7 < iVar2 >> 1);
    if (-1 < param_3 << 0x1f) goto LAB_2c5d02f6;
  }
  else {
    puVar9 = (undefined4 *)(param_1 + param_2 * 4);
    iVar7 = param_2;
    if (param_3 << 0x1f < 0) goto LAB_2c5d02e2;
LAB_2c5d02f6:
    iVar2 = param_3 + -2;
    if (param_3 + -2 < 0) {
      iVar2 = iVar6;
    }
    if (iVar7 == iVar2 >> 1) {
      iVar7 = iVar7 * 2 + 1;
      *puVar9 = *(undefined4 *)(param_1 + iVar7 * 4);
      puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    }
  }
  iVar2 = iVar7 + -1;
  if (iVar7 + -1 < 0) {
    iVar2 = iVar7;
  }
  while (param_2 < iVar7) {
    iVar6 = iVar2 >> 1;
    puVar1 = *(uint **)(param_1 + iVar6 * 4);
    puVar9 = (undefined4 *)(param_1 + iVar6 * 4);
    if (*param_4 <= *puVar1) {
      puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
      break;
    }
    *(uint **)(param_1 + iVar7 * 4) = puVar1;
    iVar2 = iVar6 + -1;
    iVar7 = iVar6;
    if (iVar6 + -1 < 0) {
      iVar2 = iVar6;
    }
  }
LAB_2c5d02e2:
  *puVar9 = param_4;
  return;
}

