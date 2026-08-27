/* FUN_2c52fda8 @ 0x2c52fda8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52fda8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[3];
  *param_1 = _DAT_2c52fe10;
  param_1[2] = 0;
  param_1[3] = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
    }
    piVar2 = (int *)param_1[3];
    if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

