/* FUN_2c46f108 @ 0x2c46f108 */

void FUN_2c46f108(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c46f116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 100))();
    return;
  }
  return;
}

