/* FUN_2c6585e2 @ 0x2c6585e2 */

void FUN_2c6585e2(int param_1,int param_2)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    param_2 = *(int *)(param_1 + 0x24);
    if (param_2 == -1) goto LAB_2c6585f6;
  }
  func_0x2c66dda4(param_2,*(undefined4 *)(param_1 + 0x20));
LAB_2c6585f6:
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}

