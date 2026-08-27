/* FUN_2c507aca @ 0x2c507aca */

int * FUN_2c507aca(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = param_4;
  param_1[4] = param_4 + 0x50;
  piVar1 = param_1 + 10;
  do {
    piVar2 = piVar1 + 1;
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    *piVar1 = 0;
    piVar1 = piVar2;
  } while (piVar2 != param_1 + 0xf);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_2c50ed7c(param_1 + 0x14);
  FUN_2c50ed7c(param_1 + 0x3b);
  FUN_2c50ed7c(param_1 + 0x62);
  FUN_2c50ed7c(param_1 + 0x89);
  if (param_1[0x13] != 0) {
    FUN_2c62be40();
    if (param_1[0x13] != 0) {
      FUN_2c62be1c();
    }
  }
  FUN_2c50ec40(param_1 + 0x89);
  FUN_2c50ec40(param_1 + 0x62);
  FUN_2c50ec40(param_1 + 0x3b);
  FUN_2c50ec40(param_1 + 0x14);
  if (param_1[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5068ac(param_1);
  return param_1;
}

