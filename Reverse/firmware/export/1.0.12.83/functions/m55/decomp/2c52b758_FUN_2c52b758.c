/* FUN_2c52b758 @ 0x2c52b758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b758(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(*param_1 + 0x50) == _FUN_2c52b7a4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,uRam2c52b7b0,0x1b8,uRam2c52b7ac,uRam2c52b7a8,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x2c52b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}

