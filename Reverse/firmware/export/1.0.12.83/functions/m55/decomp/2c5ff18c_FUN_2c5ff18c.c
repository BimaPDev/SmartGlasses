/* FUN_2c5ff18c @ 0x2c5ff18c */

void FUN_2c5ff18c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while( true ) {
    if ((code *)piVar1[2] != (code *)0x0) {
      (*(code *)piVar1[2])(piVar1,param_1);
      piVar1 = (int *)*param_1;
    }
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) break;
    *param_1 = (int)piVar1;
  }
  return;
}

