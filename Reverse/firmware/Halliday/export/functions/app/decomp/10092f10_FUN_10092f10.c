/* FUN_10092f10 @ 0x10092f10 */

undefined4 FUN_10092f10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)*DAT_10092f28, uVar1 = 0, param_1 != (undefined4 *)0x0)) {
    param_1 = (undefined4 *)*param_1;
    if ((int)((uint)*(byte *)(param_1 + 7) << 0x1b) < 0) {
      return param_1[1];
    }
    uVar1 = *param_1;
  }
  return uVar1;
}

