/* FUN_2c54fd00 @ 0x2c54fd00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c54fd00(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x2d];
  *param_1 = _LAB_2c54fdac;
  piVar1 = (int *)param_1[0x2c];
  if ((int *)param_1[0x2c] != piVar3) {
    do {
      piVar2 = piVar1 + 0x16;
      (**(code **)(*piVar1 + 4))(piVar1);
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    piVar3 = (int *)param_1[0x2c];
  }
  if (piVar3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar3);
  }
  if ((undefined4 *)param_1[0x25] != param_1 + 0x27) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x1f] != param_1 + 0x21) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x19] != param_1 + 0x1b) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0x13] != param_1 + 0x15) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[0xd] != param_1 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[7] != param_1 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_1[1] != param_1 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

