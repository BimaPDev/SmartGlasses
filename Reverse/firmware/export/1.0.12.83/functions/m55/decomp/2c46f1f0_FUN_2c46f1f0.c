/* FUN_2c46f1f0 @ 0x2c46f1f0 */

void FUN_2c46f1f0(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c46f1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x6c))();
    return;
  }
  return;
}

