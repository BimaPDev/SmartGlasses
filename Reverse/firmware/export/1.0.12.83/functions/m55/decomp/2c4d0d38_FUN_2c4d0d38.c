/* FUN_2c4d0d38 @ 0x2c4d0d38 */

void FUN_2c4d0d38(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  *(undefined1 *)(*param_1 + param_3 + param_2 * 0x10) = uVar1;
  return;
}

