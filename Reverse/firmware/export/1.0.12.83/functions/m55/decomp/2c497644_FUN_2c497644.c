/* FUN_2c497644 @ 0x2c497644 */

void FUN_2c497644(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  FUN_2c4c01d0(0x21);
  FUN_2c4c01d0(0x4f);
  FUN_2c497518(param_1);
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_2 + -1);
    do {
      puVar1 = puVar1 + 1;
      FUN_2c497518(*puVar1);
    } while (puVar1 != (undefined1 *)(param_3 + param_2 + -1));
  }
  FUN_2c4c0158(0x21);
  FUN_2c4c0158(0x4f);
  return;
}

