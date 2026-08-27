/* FUN_140c0394 @ 0x140c0394 */

int * FUN_140c0394(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_2;
  piVar2 = (int *)*DAT_140c03bc;
  piVar1 = (int *)*param_1;
  if (piVar3 != piVar2) {
    *piVar3 = *piVar3 + 1;
  }
  if (piVar2 != piVar1) {
    FUN_140c035a();
  }
  *param_1 = *param_2;
  return param_1;
}

