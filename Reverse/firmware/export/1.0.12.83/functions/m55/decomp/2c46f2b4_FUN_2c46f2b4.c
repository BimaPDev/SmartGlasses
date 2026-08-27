/* FUN_2c46f2b4 @ 0x2c46f2b4 */

void FUN_2c46f2b4(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c46f2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xb0))();
    return;
  }
  return;
}

