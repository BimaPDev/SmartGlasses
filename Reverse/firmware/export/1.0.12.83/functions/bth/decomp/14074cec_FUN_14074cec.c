/* FUN_14074cec @ 0x14074cec */

undefined4 * FUN_14074cec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  if (param_1 == puVar1) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *param_2 = *puVar1;
    if ((undefined4 *)param_1[1] == puVar1) {
      param_1[1] = param_2;
    }
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
  }
  return puVar1;
}

