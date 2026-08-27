/* FUN_2c4832d0 @ 0x2c4832d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4832d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = _LAB_2c4832ec + 8;
  puVar1 = _LAB_2c4832ec;
  do {
    puVar1 = puVar1 + 1;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1);
    }
  } while (puVar1 != puVar2);
  return;
}

