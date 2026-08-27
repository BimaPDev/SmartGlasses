/* FUN_1402a314 @ 0x1402a314 */

void FUN_1402a314(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_1402a334;
  *DAT_1402a330 = 1;
  puVar2 = puVar1;
  do {
    puVar3 = puVar2 + 1;
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    puVar2 = puVar3;
  } while (puVar3 != puVar1 + 4);
  return;
}

