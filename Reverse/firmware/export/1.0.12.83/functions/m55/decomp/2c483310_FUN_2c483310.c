/* FUN_2c483310 @ 0x2c483310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c483310(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  puVar3 = _LAB_2c48332c + 4;
  puVar1 = _LAB_2c48332c;
  do {
    puVar2 = puVar1 + 1;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1);
    }
    puVar1 = puVar2;
  } while (puVar2 != puVar3);
  return;
}

