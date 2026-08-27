/* FUN_2c54f774 @ 0x2c54f774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c54f774(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[9];
  *param_1 = _LAB_2c54f7b4;
  piVar1 = (int *)param_1[8];
  if ((int *)param_1[8] != piVar3) {
    do {
      piVar2 = piVar1 + 0x2f;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = (int *)param_1[8];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  if ((undefined4 *)param_1[2] != param_1 + 4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

