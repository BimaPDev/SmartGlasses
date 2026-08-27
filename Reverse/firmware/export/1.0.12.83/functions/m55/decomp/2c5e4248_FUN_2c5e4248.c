/* FUN_2c5e4248 @ 0x2c5e4248 */

void FUN_2c5e4248(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c5e4128();
                    /* WARNING: Could not recover jumptable at 0x2c5e425e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x40))(param_1,param_2);
  return;
}

