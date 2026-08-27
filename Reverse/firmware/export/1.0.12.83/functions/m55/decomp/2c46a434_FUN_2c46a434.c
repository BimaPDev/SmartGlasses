/* FUN_2c46a434 @ 0x2c46a434 */

undefined4 FUN_2c46a434(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_2c46a3d4();
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      return 0;
    }
    return 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(iVar1 + 4);
    return 1;
  }
  return 1;
}

