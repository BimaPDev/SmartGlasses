/* FUN_1404a534 @ 0x1404a534 */

undefined4 * FUN_1404a534(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar3 = DAT_1404a588;
  puVar2 = DAT_1404a584;
  uVar5 = DAT_1404a588[1];
  uVar6 = DAT_1404a588[2];
  uVar7 = DAT_1404a588[3];
  puVar8 = DAT_1404a588 + 4;
  *DAT_1404a584 = *DAT_1404a588;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = puVar3[5];
  uVar6 = puVar3[6];
  uVar7 = puVar3[7];
  puVar2[4] = *puVar8;
  puVar2[5] = uVar5;
  puVar2[6] = uVar6;
  puVar2[7] = uVar7;
  iVar4 = DAT_1404a58c;
  uVar5 = puVar3[9];
  puVar2[8] = puVar3[8];
  *(char *)(puVar2 + 9) = (char)uVar5;
  uVar1 = *(undefined1 *)(iVar4 + 0x44);
  uVar5 = FUN_14093064(*(undefined4 *)(iVar4 + 0x38));
  FUN_140dc3ac(puVar2 + 9,DAT_1404a590,uVar1,uVar5,*(undefined1 *)(iVar4 + 0x45),
               *(undefined1 *)(iVar4 + 0x7c),*(undefined1 *)(iVar4 + 0x7f));
  return puVar2;
}

