/* FUN_2c571a10 @ 0x2c571a10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c571a10(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[5];
  *param_1 = _LAB_2c571a44;
  piVar1 = (int *)param_1[4];
  if ((int *)param_1[4] != piVar3) {
    do {
      piVar2 = piVar1 + 1;
      piVar1 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = (int *)param_1[4];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  return param_1;
}

