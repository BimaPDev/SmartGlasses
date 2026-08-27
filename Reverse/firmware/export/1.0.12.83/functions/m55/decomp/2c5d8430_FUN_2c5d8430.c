/* FUN_2c5d8430 @ 0x2c5d8430 */

undefined4 * FUN_2c5d8430(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = DAT_2c5d848c;
  if (param_1[0x11] != 0) {
    FUN_2c62be1c();
  }
  piVar1 = (int *)param_1[0xd];
  piVar3 = (int *)param_1[0xe];
  if (piVar3 != piVar1) {
    do {
      piVar2 = piVar1 + 1;
      if (*piVar1 != 0) {
        FUN_2c620f94();
        *piVar1 = 0;
      }
      piVar1 = piVar2;
    } while (piVar3 != piVar2);
    if (param_1[0xe] != param_1[0xd]) {
      param_1[0xe] = param_1[0xd];
    }
  }
  FUN_2c6043d8(param_1[1]);
  if (param_1[0xd] == 0) {
    if ((undefined4 *)param_1[7] == param_1 + 9) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

