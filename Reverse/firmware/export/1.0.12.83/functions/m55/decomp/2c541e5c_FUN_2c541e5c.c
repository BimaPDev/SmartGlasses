/* FUN_2c541e5c @ 0x2c541e5c */

void FUN_2c541e5c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == param_1) {
    return;
  }
  piVar2[2] = DAT_2c541ed0;
  if ((int *)piVar2[0xc] != piVar2 + 0xe) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)piVar2[6] != piVar2 + 8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar1 = (int *)piVar2[3];
  if (piVar1 != piVar2 + 3) {
    if ((int *)piVar1[2] != piVar1 + 4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar2);
}

