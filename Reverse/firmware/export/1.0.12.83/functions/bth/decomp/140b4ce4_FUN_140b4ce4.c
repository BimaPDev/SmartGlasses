/* FUN_140b4ce4 @ 0x140b4ce4 */

void FUN_140b4ce4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  puVar1 = DAT_140b4d48;
  if (param_1 != (int *)0x0) {
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
        if (piVar3 == (int *)0x0) goto LAB_140b4d24;
      }
      (*(code *)param_1[5])(piVar2);
      param_1[2] = param_1[2] + -1;
      piVar2 = piVar3;
    }
LAB_140b4d24:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if ((code *)param_1[5] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x140b4d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[5])(param_1);
    return;
  }
  FUN_140e5068(*DAT_140b4d4c,param_1);
  return;
}

