/* FUN_2c48e444 @ 0x2c48e444 */

undefined4 FUN_2c48e444(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == param_2 || param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0;
  }
  if (param_1[2] == 0) {
    param_1[2] = param_2;
    *param_2 = 0;
    param_2[1] = param_2;
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1[2] + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    param_2[1] = puVar1;
    *(undefined4 **)(param_1[2] + 4) = param_2;
    return 1;
  }
  return 1;
}

