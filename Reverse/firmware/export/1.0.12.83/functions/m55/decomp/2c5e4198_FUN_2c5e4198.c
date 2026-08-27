/* FUN_2c5e4198 @ 0x2c5e4198 */

void FUN_2c5e4198(void)

{
  int iVar1;
  
  iVar1 = FUN_2c5e4128();
                    /* WARNING: Could not recover jumptable at 0x2c5e41a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x58))();
  return;
}

