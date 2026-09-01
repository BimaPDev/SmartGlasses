/* FUN_10000b54 @ 0x10000b54 */

void FUN_10000b54(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  puVar2 = DAT_10000b84 + 6;
  puVar3 = DAT_10000b84;
  do {
    iVar5 = iVar5 + 1;
    *(undefined4 *)*puVar2 = *puVar3;
    puVar1 = DAT_10000b90;
    puVar2 = puVar2 + 1;
    puVar4 = DAT_10000b88;
    puVar3 = puVar3 + 1;
    puVar6 = DAT_10000b8c;
  } while (iVar5 != 6);
  do {
    puVar2 = puVar6 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar2;
  } while (puVar2 != puVar1);
  return;
}

