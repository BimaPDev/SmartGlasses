/* FUN_2c5e7238 @ 0x2c5e7238 */

void FUN_2c5e7238(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_2c5e697c();
                    /* WARNING: Could not recover jumptable at 0x2c5e7252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x40))(param_2,param_3);
  return;
}

