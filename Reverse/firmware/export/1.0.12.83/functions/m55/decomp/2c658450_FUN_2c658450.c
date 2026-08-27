/* FUN_2c658450 @ 0x2c658450 */

int * FUN_2c658450(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  
  *param_1 = -1;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_5 == 1;
    if (!(bool)uVar2) {
      uVar2 = 2;
    }
  }
  iVar1 = func_0x2c668ab4(*(undefined4 *)(param_2 + 0x20),param_3,uVar2,param_5,param_4);
  if (iVar1 == 0) {
    iVar1 = func_0x2c668c30(*(undefined4 *)(param_2 + 0x20));
    *param_1 = iVar1;
    param_1[1] = iVar1 >> 0x1f;
  }
  return param_1;
}

