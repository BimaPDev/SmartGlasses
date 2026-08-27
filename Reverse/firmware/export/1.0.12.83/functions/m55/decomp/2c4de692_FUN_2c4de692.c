/* FUN_2c4de692 @ 0x2c4de692 */

void FUN_2c4de692(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
    (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
    *param_2 = 0;
  }
  return;
}

