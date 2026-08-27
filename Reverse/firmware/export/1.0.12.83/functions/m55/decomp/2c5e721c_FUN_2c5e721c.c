/* FUN_2c5e721c @ 0x2c5e721c */

void FUN_2c5e721c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_2c5e697c();
                    /* WARNING: Could not recover jumptable at 0x2c5e7236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x3c))(param_2,param_3);
  return;
}

