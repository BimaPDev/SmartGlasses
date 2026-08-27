/* FUN_2c54d9b8 @ 0x2c54d9b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54d9b8(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[3];
  *param_1 = _LAB_2c54d9f0;
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
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

