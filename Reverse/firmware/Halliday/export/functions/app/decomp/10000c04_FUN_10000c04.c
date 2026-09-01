/* FUN_10000c04 @ 0x10000c04 */

void FUN_10000c04(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = DAT_10000c5c;
  iVar6 = DAT_10000c54;
  iVar4 = DAT_10000c54;
  iVar5 = DAT_10000c58;
  do {
    iVar7 = 0;
    do {
      if (iVar7 != 1) {
        *(undefined4 *)(iVar5 + iVar7 * 4) = *(undefined4 *)(iVar4 + iVar7 * 4);
      }
      puVar3 = DAT_10000c64;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 7);
    iVar5 = iVar5 + 0x100;
    iVar4 = iVar4 + 0x1c;
    puVar8 = DAT_10000c60;
  } while (iVar5 != iVar2);
  do {
    puVar1 = (undefined4 *)(iVar6 + 4);
    iVar6 = iVar6 + 0x1c;
    *puVar8 = *puVar1;
    iVar2 = DAT_10000c68;
    puVar8 = puVar8 + 0x40;
  } while (puVar8 != puVar3);
  *DAT_10000c6c = *(undefined4 *)(DAT_10000c68 + 0x228);
  *DAT_10000c70 = *(undefined4 *)(iVar2 + 0x224);
  return;
}

