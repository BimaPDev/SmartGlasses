/* FUN_14074c74 @ 0x14074c74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14074c74(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_3;
  if (piVar1 != param_3) {
    if (param_1 == piVar1) {
LAB_14074cc0:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14074ce4,_LAB_14074ce0,param_1,param_3);
    }
    iVar3 = 0x3e9;
    piVar2 = (int *)*piVar1;
    piVar1 = *(int **)*piVar1;
    while (piVar2 != param_3) {
      if (param_1 == piVar2) goto LAB_14074cc0;
      iVar3 = iVar3 + -1;
      piVar2 = piVar1;
      piVar1 = (int *)*piVar1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140749f8();
      }
    }
  }
  if (*(int **)param_3[1] == param_3) {
    *param_1 = *param_2;
    *param_2 = (int)param_1;
    if ((int *)*param_1 == param_3) {
      param_3[1] = (int)param_1;
    }
    param_3[2] = param_3[2] + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14074ce8,_LAB_14074ce0);
}

