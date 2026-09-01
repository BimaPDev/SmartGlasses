/* FUN_10134df4 @ 0x10134df4 */

undefined4 * FUN_10134df4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    *param_1 = uVar1;
    if (puVar2 == (undefined4 *)param_1[1]) {
      param_1[1] = uVar1;
    }
  }
  return puVar2;
}

