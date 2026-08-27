/* FUN_2c54d94c @ 0x2c54d94c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c54d94c(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[3];
  *param_1 = _LAB_2c54d97c;
  piVar1 = (int *)param_1[2];
  if ((int *)param_1[2] != piVar3) {
    do {
      piVar2 = piVar1 + 0x39;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = (int *)param_1[2];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  return param_1;
}

