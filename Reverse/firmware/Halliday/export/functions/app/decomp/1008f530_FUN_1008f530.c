/* FUN_1008f530 @ 0x1008f530 */

void FUN_1008f530(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint unaff_r7;
  int iVar10;
  
  iVar10 = DAT_1008f5cc + (param_3 & 7) * 8;
  for (uVar9 = 0; (int)uVar9 < param_4; uVar9 = uVar9 + 1) {
    iVar4 = uVar9 - 4;
    iVar8 = *(int *)(param_1 + 0x10);
    iVar5 = iVar8;
    if (iVar4 <= iVar8) {
      iVar5 = iVar4;
    }
    iVar2 = (int)(char)(*(char *)(iVar10 + (uVar9 & 7)) + -0x20);
    if (iVar5 < 0) {
      iVar8 = 0;
    }
    else if (iVar4 < iVar8) {
      iVar8 = uVar9 * 4 + -0x10;
    }
    else {
      iVar8 = iVar8 << 2;
    }
    iVar5 = *(int *)(param_1 + 0x14) + iVar8;
    uVar6 = (uint)*(byte *)(iVar5 + 2) + iVar2;
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    else {
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      uVar6 = uVar6 & 0xff;
    }
    uVar7 = (uint)*(byte *)(iVar5 + 1) + iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    else {
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      uVar7 = uVar7 & 0xff;
    }
    uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + iVar8) + iVar2;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else {
      if (0xfe < (int)uVar3) {
        uVar3 = 0xff;
      }
      uVar3 = uVar3 & 0xff;
    }
    unaff_r7 = unaff_r7 & 0xff000000 | uVar6 << 0x10 | uVar7 << 8 | uVar3;
    uVar1 = FUN_1008f514(unaff_r7);
    *(undefined2 *)(*(int *)(param_1 + 8) + uVar9 * 2) = uVar1;
  }
  return;
}

