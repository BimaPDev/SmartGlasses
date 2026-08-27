/* FUN_2c52b6ac @ 0x2c52b6ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b6ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + -0x24) + 0x50);
  if (UNRECOVERED_JUMPTABLE == _FUN_2c52b700) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c52b708,0x1b8,uRam2c52b70c,uRam2c52b704,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x2c52b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x24);
  return;
}

