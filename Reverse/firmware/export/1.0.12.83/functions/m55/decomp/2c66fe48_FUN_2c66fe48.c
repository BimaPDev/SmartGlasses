/* FUN_2c66fe48 @ 0x2c66fe48 */

void FUN_2c66fe48(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = (int)param_2 >> 5;
  puVar5 = (uint *)(param_1 + 0x14);
  puVar4 = puVar5;
  if (iVar2 < iVar3) {
    param_2 = param_2 & 0x1f;
    puVar6 = puVar5 + iVar3;
    puVar4 = puVar5 + iVar2;
    if (param_2 == 0) {
      puVar7 = (uint *)(param_1 + 0x10);
      for (puVar1 = puVar4; puVar1 < puVar6; puVar1 = puVar1 + 1) {
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar1;
      }
      iVar2 = (iVar3 - iVar2) * 4;
      if (puVar6 < (uint *)((int)puVar4 - 3U)) {
        iVar2 = 0;
      }
      puVar4 = (uint *)(iVar2 + (int)puVar5);
    }
    else {
      uVar8 = puVar5[iVar2];
      puVar1 = puVar5;
      puVar7 = puVar4;
      while( true ) {
        uVar8 = uVar8 >> param_2;
        puVar7 = puVar7 + 1;
        if (puVar6 <= puVar7) break;
        *puVar1 = *puVar7 << (0x20 - param_2 & 0xff) | uVar8;
        uVar8 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      iVar2 = (iVar3 - iVar2) * 4 + -4;
      if (puVar6 < (uint *)((int)puVar4 + 1U)) {
        iVar2 = 0;
      }
      *(uint *)((int)puVar5 + iVar2) = uVar8;
      puVar4 = (uint *)((int)puVar5 + iVar2);
      if (uVar8 != 0) {
        puVar4 = (uint *)((int)puVar5 + iVar2) + 1;
      }
    }
  }
  iVar2 = (int)puVar4 - (int)puVar5;
  bVar9 = puVar4 == puVar5;
  if (bVar9) {
    puVar4 = (uint *)0x0;
  }
  *(int *)(param_1 + 0x10) = iVar2 >> 2;
  if (bVar9) {
    *(uint **)(param_1 + 0x14) = puVar4;
  }
  return;
}

