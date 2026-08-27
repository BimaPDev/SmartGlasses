/* FUN_2c4832f0 @ 0x2c4832f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4832f0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  puVar3 = _LAB_2c48330c + 4;
  puVar1 = _LAB_2c48330c;
  do {
    puVar2 = puVar1 + 1;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1);
    }
    puVar1 = puVar2;
  } while (puVar2 != puVar3);
  return;
}

