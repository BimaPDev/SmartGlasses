/* FUN_2c135592 @ 0x2c135592 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c135592(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = _DAT_2c1355b0;
  *_DAT_2c1355ac = param_3;
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

