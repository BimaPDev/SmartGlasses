/* FUN_2c66ed00 @ 0x2c66ed00 */

int * FUN_2c66ed00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == param_3) {
      return (int *)0x0;
    }
    if (*param_1 == param_2) break;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  }
  return param_1;
}

