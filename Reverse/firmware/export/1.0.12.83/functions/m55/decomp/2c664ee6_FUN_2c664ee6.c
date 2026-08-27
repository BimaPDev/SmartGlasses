/* FUN_2c664ee6 @ 0x2c664ee6 */

void FUN_2c664ee6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c6650f4();
  if (iVar1 != 0) {
    *param_4 = param_3;
    param_4[3] = 8;
    *(undefined1 *)(param_4 + 1) = 6;
  }
  return;
}

