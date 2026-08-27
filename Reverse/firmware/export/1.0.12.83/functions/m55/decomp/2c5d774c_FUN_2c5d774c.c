/* FUN_2c5d774c @ 0x2c5d774c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d774c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5d7794,0x43,_LAB_2c5d7790,_LAB_2c5d7798);
  }
  *(char *)(param_1 + 0x21) = (char)param_2;
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c5d7762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x1c))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5d7794,0x4a,_LAB_2c5d7790,_LAB_2c5d778c);
}

