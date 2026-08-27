/* FUN_140d7852 @ 0x140d7852 */

void FUN_140d7852(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    *param_1 = param_3;
  }
  else if (param_2 != 0) {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      param_1[iVar1] = param_3;
    }
    return;
  }
  return;
}

