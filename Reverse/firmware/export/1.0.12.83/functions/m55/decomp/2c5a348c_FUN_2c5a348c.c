/* FUN_2c5a348c @ 0x2c5a348c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5a348c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  if (piVar1 == (int *)0x0) {
    if (*_LAB_2c5a3540 == 0) {
      if (*param_1 != 0) {
        FUN_2c62be1c();
        *param_1 = 0;
      }
      if (param_1[1] != 0) {
        FUN_2c62be1c();
        param_1[1] = 0;
      }
      if (param_1[2] != 0) {
        FUN_2c62be1c();
        param_1[2] = 0;
      }
      if (param_1[3] != 0) {
        FUN_2c62be1c();
        param_1[3] = 0;
      }
      if (param_1[4] != 0) {
        func_0x2c6440b8();
        param_1[4] = 0;
      }
      if (param_1[5] != 0) {
        func_0x2c6440b8();
      }
      return param_1;
    }
  }
  else {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (piVar1[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c5a3540 == 0) {
      func_0x2c5a2da0(piVar1);
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

