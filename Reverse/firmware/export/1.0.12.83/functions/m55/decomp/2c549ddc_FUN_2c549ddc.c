/* FUN_2c549ddc @ 0x2c549ddc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c549ddc(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = _LAB_2c549e5c;
  if ((undefined4 *)param_1[0x14] != param_1 + 0x16) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0xe] != param_1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar3 = (int *)param_1[6];
  piVar2 = (int *)param_1[5];
  if ((int *)param_1[5] != piVar3) {
    do {
      piVar1 = piVar2 + 0x1f;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar1;
    } while (piVar3 != piVar1);
    piVar3 = (int *)param_1[5];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  piVar3 = (int *)param_1[3];
  piVar2 = (int *)param_1[2];
  if ((int *)param_1[2] != piVar3) {
    do {
      piVar1 = piVar2 + 0xf;
      (**(code **)(*piVar2 + 4))(piVar2);
      piVar2 = piVar1;
    } while (piVar3 != piVar1);
    piVar3 = (int *)param_1[2];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  return param_1;
}

