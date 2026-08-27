/* FUN_14074c04 @ 0x14074c04 */

void FUN_14074c04(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_2;
  if (piVar2 != param_2) {
    if (param_1 == piVar2) {
LAB_14074c4a:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14074c6c,DAT_14074c68,param_1,param_2);
    }
    iVar3 = 0x3e9;
    piVar1 = (int *)*piVar2;
    piVar2 = *(int **)*piVar2;
    while (piVar1 != param_2) {
      if (param_1 == piVar1) goto LAB_14074c4a;
      iVar3 = iVar3 + -1;
      piVar1 = piVar2;
      piVar2 = (int *)*piVar2;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
  }
  if ((int *)*(int *)param_2[1] == param_2) {
    *param_1 = (int)param_2;
    *(int **)param_2[1] = param_1;
    param_2[1] = (int)param_1;
    param_2[2] = param_2[2] + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14074c70,DAT_14074c68);
}

