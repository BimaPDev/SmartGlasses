/* FUN_2c665aa8 @ 0x2c665aa8 */

int FUN_2c665aa8(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_3;
  if (param_4 == 0) {
LAB_2c671b16:
    do {
      piVar2 = piVar1 + 1;
      iVar3 = *piVar1;
      piVar1 = piVar2;
    } while (iVar3 != 0);
  }
  else {
    do {
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        *param_2 = 0;
        goto LAB_2c671b16;
      }
      piVar2 = piVar1 + 1;
      iVar3 = *piVar1;
      *param_2 = iVar3;
      param_2 = param_2 + 1;
      piVar1 = piVar2;
    } while (iVar3 != 0);
  }
  return ((int)piVar2 - (int)param_3 >> 2) + -1;
}

