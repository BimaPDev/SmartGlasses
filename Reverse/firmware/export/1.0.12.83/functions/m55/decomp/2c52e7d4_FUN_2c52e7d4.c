/* FUN_2c52e7d4 @ 0x2c52e7d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c52e7d4(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[2];
  *param_1 = _LAB_2c52e804;
  piVar1 = (int *)param_1[1];
  if ((int *)param_1[1] != piVar3) {
    do {
      piVar2 = piVar1 + 10;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = (int *)param_1[1];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  return param_1;
}

