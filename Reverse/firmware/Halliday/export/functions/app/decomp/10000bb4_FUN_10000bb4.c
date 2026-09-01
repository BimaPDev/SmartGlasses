/* FUN_10000bb4 @ 0x10000bb4 */

void FUN_10000bb4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_10000bd8;
  puVar3 = (undefined4 *)(DAT_10000bdc + -0x900);
  *(undefined4 *)(DAT_10000bdc + 8) = *(undefined4 *)(DAT_10000bd8 + 0xbc);
  puVar2 = DAT_10000be0;
  puVar5 = (undefined4 *)(iVar1 + 0xc0);
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar5;
    puVar3 = puVar4;
    puVar5 = puVar5 + 1;
  } while (puVar4 != puVar2);
  return;
}

