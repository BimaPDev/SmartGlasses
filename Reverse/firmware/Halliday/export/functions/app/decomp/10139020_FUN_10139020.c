/* FUN_10139020 @ 0x10139020 */

void FUN_10139020(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      FUN_100eb820();
    }
    else if (iVar1 == 2) {
      FUN_100eb888();
    }
    else if (iVar1 != 1) {
      return;
    }
  }
  FUN_10138fbc(param_1);
  return;
}

