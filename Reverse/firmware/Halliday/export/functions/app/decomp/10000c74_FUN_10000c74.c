/* FUN_10000c74 @ 0x10000c74 */

void FUN_10000c74(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = 0;
  iVar3 = DAT_10000ce0;
  puVar5 = DAT_10000cdc;
  do {
    iVar6 = 0;
    puVar7 = puVar5;
    do {
      *(undefined4 *)(iVar3 + iVar6) = *puVar7;
      puVar2 = DAT_10000ce8;
      iVar1 = DAT_10000ce4;
      iVar6 = iVar6 + 4;
      puVar7 = puVar7 + 1;
    } while (iVar6 != 0x1c);
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 7;
    iVar3 = iVar3 + 0x100;
  } while (iVar4 != 5);
  *DAT_10000ce8 = *(undefined4 *)(DAT_10000ce4 + 0x2b8);
  puVar2[1] = *(undefined4 *)(iVar1 + 700);
  puVar2[2] = *(undefined4 *)(iVar1 + 0x2c0);
  puVar2[3] = *(undefined4 *)(iVar1 + 0x2c4);
  puVar2[4] = *(undefined4 *)(iVar1 + 0x2c8);
  puVar2[5] = *(undefined4 *)(iVar1 + 0x2cc);
  puVar2[-8] = *(undefined4 *)(iVar1 + 0x2d0);
  puVar2[-0xc] = *(undefined4 *)(iVar1 + 0x2d4);
  *DAT_10000cec = *(undefined4 *)(iVar1 + 0x2d8);
  return;
}

