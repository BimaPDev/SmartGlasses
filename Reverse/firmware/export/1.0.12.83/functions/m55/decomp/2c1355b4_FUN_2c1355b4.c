/* FUN_2c1355b4 @ 0x2c1355b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1355b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  if ((param_1 == 0) || ((param_1 == 1 && (*_DAT_2c1355ec == 0)))) {
    *_DAT_2c1355e4 = 1;
  }
  puVar3 = _DAT_2c1355e8 + 3;
  puVar1 = _DAT_2c1355e8;
  do {
    puVar2 = puVar1 + 1;
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1);
    }
    puVar1 = puVar2;
  } while (puVar2 != puVar3);
  return;
}

