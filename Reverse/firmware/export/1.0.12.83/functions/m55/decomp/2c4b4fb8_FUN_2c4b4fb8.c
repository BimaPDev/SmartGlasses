/* FUN_2c4b4fb8 @ 0x2c4b4fb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b4fb8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  puVar3 = _LAB_2c4b4fd0 + 4;
  puVar1 = _LAB_2c4b4fd0;
  do {
    puVar2 = puVar1 + 1;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar2;
  } while (puVar2 != puVar3);
  return;
}

