/* FUN_2c54cda0 @ 0x2c54cda0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54cda0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = _LAB_2c54cdf0;
  piVar4 = (int *)param_1[10];
  *param_1 = _LAB_2c54cdec;
  param_1[7] = uVar1;
  piVar2 = (int *)param_1[9];
  if ((int *)param_1[9] != piVar4) {
    do {
      piVar3 = piVar2 + 0x26;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar3;
    } while (piVar4 != piVar3);
    piVar4 = (int *)param_1[9];
  }
  if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  if ((undefined4 *)param_1[1] != param_1 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

