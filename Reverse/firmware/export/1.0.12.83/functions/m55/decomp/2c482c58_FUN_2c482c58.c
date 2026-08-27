/* FUN_2c482c58 @ 0x2c482c58 */

void FUN_2c482c58(void)

{
  int iVar1;
  
  iVar1 = FUN_2c46db38();
                    /* WARNING: Could not recover jumptable at 0x2c482c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x14))();
  return;
}

