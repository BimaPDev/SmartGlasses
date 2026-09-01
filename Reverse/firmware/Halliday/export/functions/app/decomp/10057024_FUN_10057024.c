/* FUN_10057024 @ 0x10057024 */

void FUN_10057024(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar8 = 0;
  puVar3 = DAT_10057170;
  puVar4 = DAT_1005716c;
  do {
    puVar5 = (undefined4 *)*puVar3;
    iVar8 = iVar8 + 1;
    *puVar4 = *puVar5;
    *puVar5 = 0x1000;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar8 != 0x1b);
  iVar8 = 0;
  puVar3 = DAT_10057174;
  puVar4 = DAT_10057178;
  do {
    iVar8 = iVar8 + 1;
    *puVar4 = *(undefined4 *)*puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar8 != 8);
  FUN_1005700c(2);
  *DAT_1005717c = *DAT_1005717c | 2;
  FUN_1005700c(0);
  *DAT_10057180 = 0;
  puVar1 = DAT_10057184;
  *DAT_10057184 = *DAT_10057184 & 0xf9dfffff;
  if (param_1 == 0) {
    *DAT_10057188 = *DAT_10057188 & 0xfeffffff;
    *puVar1 = *puVar1 & 0xe7ffffff | 0x8000000;
  }
  iVar8 = DAT_10057190;
  *DAT_1005718c = *DAT_1005718c & 0xfffffcf0;
  iVar9 = *DAT_10057194;
  if (iVar9 != 0) {
    *(undefined2 *)(iVar8 + 0x38e) = *(undefined2 *)(iVar8 + 0x38c);
    if (iVar9 == 2) {
      uVar7 = 1;
    }
    else if (iVar9 == 3) {
      uVar7 = 0x4000;
    }
    else {
      if (iVar9 != 1) goto LAB_100570cc;
      uVar7 = 0x4001;
    }
    *(undefined2 *)(iVar8 + 0x38c) = uVar7;
  }
LAB_100570cc:
  puVar2 = DAT_1005719c;
  puVar1 = DAT_10057198;
  DAT_10057198[0x20] = *DAT_10057198;
  puVar1[0x21] = *puVar2;
  if (*(short *)(iVar8 + 0x38c) != 0) {
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0;
    iVar9 = 0;
    puVar6 = DAT_100571a0;
    do {
      if (((int)(uint)*(ushort *)(iVar8 + 0x38c) >> (*puVar6 & 0xff)) << 0x1f < 0) {
        uVar10 = (uint)puVar6[1];
        if (uVar10 < 0x20) {
          uVar13 = uVar13 | 1 << (uVar10 & 0xff);
        }
        else {
          uVar12 = uVar12 | 1 << (uVar10 - 0x20 & 0xff);
        }
        uVar11 = uVar11 | 1 << (puVar6[2] & 0xff);
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 6;
    } while (iVar9 != 0xf);
    if (uVar13 != 0) {
      *DAT_10057198 = uVar13;
    }
    if (uVar12 != 0) {
      *puVar2 = uVar12;
    }
    iVar9 = FUN_1013d9d0();
    if (iVar9 != 0) {
      *DAT_100571a4 = *DAT_100571a4 & 0xff007fff | uVar11;
      *(uint *)(iVar8 + 0x2fc) = uVar11;
    }
    *(uint *)(iVar8 + 0x2f4) = uVar13;
    *(uint *)(iVar8 + 0x2f8) = uVar12;
  }
  *(uint *)(DAT_100571a8 + 0x10) = *(uint *)(DAT_100571a8 + 0x10) | 4;
  return;
}

