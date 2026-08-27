/* FUN_2c603e80 @ 0x2c603e80 */

undefined4 FUN_2c603e80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  
  if (((param_1 != 0) &&
      (piVar2 = (int *)FUN_2c6033b4(param_1,param_2,0x61,param_4,param_4), piVar2 != (int *)0x0)) &&
     (*piVar2 != 0)) {
    cVar1 = FUN_2c6033b4(param_1,param_2,0x62,*piVar2,param_4);
    if (cVar1 != '\0') {
      param_3 = (*(code *)*piVar2)(piVar2,param_3);
    }
  }
  return param_3;
}

