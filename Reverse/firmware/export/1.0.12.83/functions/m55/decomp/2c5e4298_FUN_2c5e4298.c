/* FUN_2c5e4298 @ 0x2c5e4298 */

void FUN_2c5e4298(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5e4128();
                    /* WARNING: Could not recover jumptable at 0x2c5e42aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x28))(param_1);
  return;
}

