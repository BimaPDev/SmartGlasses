/* FUN_2c606c14 @ 0x2c606c14 */

undefined4 FUN_2c606c14(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  param_1 = (int *)*param_1;
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    while (param_1 != param_2) {
      param_1 = (int *)*param_1;
      if (param_1 == (int *)0x0) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

