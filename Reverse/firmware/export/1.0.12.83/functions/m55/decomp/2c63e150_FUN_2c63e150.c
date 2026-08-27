/* FUN_2c63e150 @ 0x2c63e150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63e150(undefined4 param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*_LAB_2c63e168; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    (*(code *)*puVar1)(param_1);
  }
  return;
}

