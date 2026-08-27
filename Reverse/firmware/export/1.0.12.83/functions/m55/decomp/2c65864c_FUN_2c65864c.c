/* FUN_2c65864c @ 0x2c65864c */

void FUN_2c65864c(int param_1,int param_2)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    param_2 = *(int *)(param_1 + 0x24);
    if (param_2 == -1) goto LAB_2c658660;
  }
  func_0x2c66dd1c(param_2,*(undefined4 *)(param_1 + 0x20));
LAB_2c658660:
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}

