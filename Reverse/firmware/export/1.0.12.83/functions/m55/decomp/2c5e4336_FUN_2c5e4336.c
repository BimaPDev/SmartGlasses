/* FUN_2c5e4336 @ 0x2c5e4336 */

void FUN_2c5e4336(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c5e4128(param_4);
                    /* WARNING: Could not recover jumptable at 0x2c5e434a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x1c))(param_1);
  return;
}

