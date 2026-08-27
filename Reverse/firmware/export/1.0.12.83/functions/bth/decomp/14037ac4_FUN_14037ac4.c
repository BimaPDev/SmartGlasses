/* FUN_14037ac4 @ 0x14037ac4 */

void FUN_14037ac4(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  puVar15 = DAT_14037c4c;
  piVar4 = DAT_14037c48;
  iVar3 = DAT_14037c30;
  piVar2 = DAT_14037c2c;
  piVar1 = DAT_14037c28;
  if (((*DAT_14037c28 != 0) && (*DAT_14037c2c != 0)) && (*DAT_14037c48 != 0)) {
    *(undefined4 *)(DAT_14037c30 + 0x3c) = DAT_14037c34;
    iVar9 = *piVar2;
    iVar13 = *piVar4;
    puVar10 = (undefined4 *)(*piVar1 + -4);
    puVar14 = (undefined4 *)(iVar9 + -4);
    puVar8 = (undefined4 *)(iVar13 + -4);
    puVar11 = (undefined4 *)(iVar3 + 0x30600);
    do {
      puVar10 = puVar10 + 1;
      *puVar11 = *puVar10;
      puVar14 = puVar14 + 1;
      puVar12 = puVar11 + 1;
      puVar11[-0x180] = *puVar14;
      puVar8 = puVar8 + 1;
      puVar11[0x80] = *puVar8;
      iVar6 = DAT_14037c54;
      iVar3 = DAT_14037c50;
      puVar11 = puVar12;
    } while (puVar12 != puVar15);
    puVar15 = (undefined4 *)(iVar13 + 0x1fc);
    puVar10 = (undefined4 *)(iVar9 + 0x1fc);
    do {
      puVar14 = puVar10 + 1;
      *(undefined4 *)((int)puVar10 + (iVar3 - iVar9)) = *puVar14;
      puVar15 = puVar15 + 1;
      *(undefined4 *)((int)puVar10 + (iVar6 - iVar9)) = *puVar15;
      iVar7 = DAT_14037c54;
      iVar5 = DAT_14037c50;
      puVar10 = puVar14;
    } while (puVar14 != (undefined4 *)(iVar9 + 0x3fc));
    puVar15 = (undefined4 *)(iVar13 + 0x3fc);
    do {
      puVar10 = puVar14 + 1;
      *(undefined4 *)((int)puVar14 + (iVar5 - iVar9)) = *puVar10;
      puVar15 = puVar15 + 1;
      *(undefined4 *)((int)puVar14 + (iVar7 - iVar9)) = *puVar15;
      iVar3 = DAT_14037c30;
      puVar14 = puVar10;
    } while ((undefined4 *)(iVar9 + 0x5fc) != puVar10);
    *(uint *)(DAT_14037c30 + 0x3c) = *(uint *)(DAT_14037c30 + 0x3c) & 0xffefffff;
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xf80fffff | 0x1000000;
    *(uint *)(iVar3 + 0x3c) = ~(~(*(uint *)(iVar3 + 0x3c) >> 0xe) << 0xe);
    *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfeffffff | 0x1000000;
    FUN_140391e0(*piVar1);
    FUN_140391e0(*piVar2);
    FUN_140391e0(*piVar4);
    return;
  }
  FUN_1402a6e8(4,0x4c4,DAT_14037c44,DAT_14037c40,DAT_14037c3c,DAT_14037c38);
  return;
}

