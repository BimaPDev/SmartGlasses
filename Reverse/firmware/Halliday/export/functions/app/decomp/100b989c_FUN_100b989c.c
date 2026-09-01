/* FUN_100b989c @ 0x100b989c */

undefined4 FUN_100b989c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = DAT_100b98cc;
  puVar2 = DAT_100b98c8;
  if (param_1 != 0x5d) {
    return 0;
  }
  *(undefined4 *)(DAT_100b98c8 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  *puVar2 = 0;
  puVar2 = puVar2 + 0x18;
  do {
    puVar3 = puVar2 + 2;
    FUN_100b9d20(puVar2);
    puVar2 = puVar3;
  } while (puVar3 != puVar1);
  return 1;
}

