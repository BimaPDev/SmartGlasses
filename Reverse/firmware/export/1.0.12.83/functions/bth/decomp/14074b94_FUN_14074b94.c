/* FUN_14074b94 @ 0x14074b94 */

void FUN_14074b94(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)*param_2;
  if (piVar2 == param_2) {
    piVar2[1] = (int)param_1;
  }
  else {
    if (param_1 == piVar2) {
LAB_14074bda:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14074bfc,DAT_14074bf8,param_1,param_2);
    }
    iVar4 = 0x3e9;
    piVar1 = (int *)*piVar2;
    piVar3 = *(int **)*piVar2;
    while (piVar1 != param_2) {
      if (piVar1 == param_1) goto LAB_14074bda;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)*piVar3;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
    if (*(int **)piVar1[1] != piVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14074c00,DAT_14074bf8);
    }
  }
  *param_1 = (int)piVar2;
  *param_2 = (int)param_1;
  param_2[2] = param_2[2] + 1;
  return;
}

