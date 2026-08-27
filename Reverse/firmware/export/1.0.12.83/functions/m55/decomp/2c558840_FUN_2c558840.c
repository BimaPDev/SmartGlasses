/* FUN_2c558840 @ 0x2c558840 */

void FUN_2c558840(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    return;
  }
  if ((int *)piVar1[2] != piVar1 + 4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar1);
}

