/* FUN_140b4f64 @ 0x140b4f64 */

void FUN_140b4f64(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  puVar1 = DAT_140b4fb4;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140b4fbc,DAT_140b4fb8,param_3,param_4,param_4);
  }
  piVar2 = (int *)*param_1;
  while (piVar2 != (int *)0x0) {
    while( true ) {
      piVar3 = (int *)*piVar2;
      if ((code *)param_1[3] != (code *)0x0) {
        (*(code *)param_1[3])(piVar2[1]);
      }
      if ((code *)param_1[5] != (code *)0x0) break;
      FUN_140e5068(*puVar1,piVar2);
      param_1[2] = param_1[2] + -1;
      piVar2 = piVar3;
      if (piVar3 == (int *)0x0) goto LAB_140b4fa2;
    }
    (*(code *)param_1[5])(piVar2);
    param_1[2] = param_1[2] + -1;
    piVar2 = piVar3;
  }
LAB_140b4fa2:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

