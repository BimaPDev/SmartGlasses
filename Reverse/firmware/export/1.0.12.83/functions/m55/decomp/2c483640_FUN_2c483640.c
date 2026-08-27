/* FUN_2c483640 @ 0x2c483640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483640(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar4 = _LAB_2c4836a0;
  iVar2 = _LAB_2c48369c;
  FUN_2c66c568(_LAB_2c48369c,*(undefined4 *)(param_1 + 0xc),0x2c);
  *(undefined1 *)(iVar2 + 0x2c) = 0;
  puVar8 = *(undefined4 **)(param_1 + 0xc);
  puVar10 = puVar8;
  do {
    puVar11 = puVar4;
    puVar9 = puVar10;
    puVar10 = puVar9 + 4;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar11 = *puVar9;
    puVar11[1] = uVar5;
    puVar11[2] = uVar6;
    puVar11[3] = uVar7;
    puVar4 = puVar11 + 4;
  } while (puVar10 != puVar8 + 8);
  uVar6 = puVar9[6];
  uVar5 = puVar9[5];
  puVar11[4] = *puVar10;
  puVar11[5] = uVar5;
  puVar11[6] = uVar6;
  iVar3 = _LAB_2c4836a8;
  uVar5 = *_LAB_2c4836a4;
  uVar1 = *(undefined1 *)(_LAB_2c4836a4 + 1);
  *(undefined4 *)(iVar2 + 0x2d) = uVar5;
  *(undefined4 *)(iVar2 + 0x55) = uVar5;
  *(undefined1 *)(iVar3 + 4) = uVar1;
  *(undefined1 *)(iVar3 + 0x2c) = uVar1;
  return;
}

