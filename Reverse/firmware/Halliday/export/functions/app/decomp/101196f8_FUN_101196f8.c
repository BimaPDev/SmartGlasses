/* FUN_101196f8 @ 0x101196f8 */

int FUN_101196f8(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  uVar4 = (int)param_3 >> 5;
  iVar1 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 0x10) + uVar4;
  iVar8 = iVar9 + 1;
  for (iVar5 = *(int *)(param_2 + 8); iVar5 < iVar8; iVar5 = iVar5 << 1) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_10119374(param_1,iVar1);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    for (iVar5 = 0; iVar5 < (int)uVar4; iVar5 = iVar5 + 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    }
    puVar6 = (uint *)(param_2 + 0x14);
    uVar10 = param_3 & 0x1f;
    puVar2 = (uint *)(iVar1 + 0x14 + (uVar4 & ~((int)param_3 >> 0x1f)) * 4);
    puVar12 = puVar6 + *(int *)(param_2 + 0x10);
    if (uVar10 == 0) {
      puVar2 = puVar2 + -1;
      do {
        puVar11 = puVar6 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar6;
        puVar6 = puVar11;
      } while (puVar11 < puVar12);
    }
    else {
      uVar4 = 0;
      puVar11 = puVar2;
      do {
        *puVar11 = uVar4 | *puVar6 << uVar10;
        puVar7 = puVar6 + 1;
        uVar4 = *puVar6 >> (0x20 - uVar10 & 0xff);
        puVar6 = puVar7;
        puVar11 = puVar11 + 1;
      } while (puVar7 < puVar12);
      iVar5 = ((int)puVar12 + (-0x15 - param_2) & 0xfffffffcU) + 4;
      if (puVar12 < (uint *)(param_2 + 0x15)) {
        iVar5 = 4;
      }
      *(uint *)((int)puVar2 + iVar5) = uVar4;
      if (uVar4 != 0) {
        iVar8 = iVar9 + 2;
      }
    }
    *(int *)(iVar1 + 0x10) = iVar8 + -1;
    FUN_101193f4(param_1,param_2);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_101197cc,0x1d9,0,DAT_101197c8);
}

