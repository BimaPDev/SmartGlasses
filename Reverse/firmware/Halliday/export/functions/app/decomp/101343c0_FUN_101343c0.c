/* FUN_101343c0 @ 0x101343c0 */

void FUN_101343c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = uVar1;
    if (param_3 == (undefined4 *)param_1[1]) {
      param_1[1] = uVar1;
    }
  }
  else {
    *param_2 = uVar1;
    if (param_3 == (undefined4 *)param_1[1]) {
      param_1[1] = param_2;
    }
  }
  *param_3 = 0;
  return;
}

