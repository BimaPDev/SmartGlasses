/* FUN_2c5d76fc @ 0x2c5d76fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d76fc(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d7744,0x35,_LAB_2c5d7740,_LAB_2c5d7748);
  }
  *(char *)(param_1 + 0x20) = (char)param_2;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c5d7712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5d7744,0x3c,_LAB_2c5d7740,_LAB_2c5d773c);
}

