/* FUN_14074d5c @ 0x14074d5c */

undefined4 * FUN_14074d5c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (param_1 == puVar1) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *param_1 = *puVar1;
    if (puVar1 == (undefined4 *)param_1[1]) {
      param_1[1] = param_1;
    }
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
  }
  return puVar1;
}

