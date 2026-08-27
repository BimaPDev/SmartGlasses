/* FUN_2c666158 @ 0x2c666158 */

bool FUN_2c666158(int param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = param_1;
  iStack_c = param_2;
  (**(code **)(param_4 + 0x14))(&iStack_10,param_1,param_2);
  if (iStack_c == param_3[1]) {
    bVar1 = iStack_10 == *param_3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

