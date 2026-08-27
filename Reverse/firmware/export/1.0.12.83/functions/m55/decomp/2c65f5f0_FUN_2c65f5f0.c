/* FUN_2c65f5f0 @ 0x2c65f5f0 */

void FUN_2c65f5f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      *(undefined4 *)(param_1 + iVar1 * 4) = param_3;
    }
    return;
  }
  return;
}

