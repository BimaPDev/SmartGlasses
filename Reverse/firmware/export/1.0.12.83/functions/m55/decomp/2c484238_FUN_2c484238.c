/* FUN_2c484238 @ 0x2c484238 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c484238(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_2c6741e8(0x711,_LAB_2c484260,_LAB_2c48425c);
  }
  iVar1 = FUN_2c46db38();
                    /* WARNING: Could not recover jumptable at 0x2c48424c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x24))(param_1);
  return;
}

