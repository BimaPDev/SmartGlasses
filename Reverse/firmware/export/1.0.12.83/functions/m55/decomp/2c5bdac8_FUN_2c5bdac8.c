/* FUN_2c5bdac8 @ 0x2c5bdac8 */

int * FUN_2c5bdac8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_2c5bda5c(param_1 + 5);
  if ((int *)param_1[5] != param_1 + 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 == (int *)0x0) {
    iVar2 = param_1[3];
    if (iVar2 != 0) {
      FUN_2c5bc9ac(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,iVar2);
    }
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      return param_1;
    }
    piVar1 = *(int **)(iVar2 + 0x24);
    if ((int *)(iVar2 + 0x24) != piVar1) {
      if ((int *)piVar1[9] != piVar1 + 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((int *)piVar1[3] != piVar1 + 5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar1);
    }
    if (*(int *)(iVar2 + 4) != iVar2 + 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar2);
  }
  if ((int *)piVar1[0x14] != piVar1 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)piVar1[0xe] != piVar1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)piVar1[6] != piVar1 + 8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)*piVar1 != piVar1 + 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar1);
}

