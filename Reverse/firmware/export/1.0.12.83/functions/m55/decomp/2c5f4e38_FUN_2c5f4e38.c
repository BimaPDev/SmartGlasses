/* FUN_2c5f4e38 @ 0x2c5f4e38 */

int FUN_2c5f4e38(int param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int in_r12;
  
  do {
    param_2 = param_2 + 1;
    uVar1 = (uint)*param_2;
  } while (*(char *)(param_3 + uVar1) < '\0');
  if ((uVar1 < 9) || ((10 < uVar1 && (uVar1 != 0xd)))) {
    param_1 = 0;
  }
  else {
    param_1 = in_r12 - param_1;
  }
  return param_1;
}

