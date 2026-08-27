/* FUN_2c66e044 @ 0x2c66e044 */

int FUN_2c66e044(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  iVar1 = func_0x2c6706ac(param_1,param_2,0xff,0,param_4);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  return param_1;
}

