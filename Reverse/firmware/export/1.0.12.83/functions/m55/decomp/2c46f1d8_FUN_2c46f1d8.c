/* FUN_2c46f1d8 @ 0x2c46f1d8 */

void FUN_2c46f1d8(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    FUN_2c46f160();
                    /* WARNING: Could not recover jumptable at 0x2c46f1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x68))();
    return;
  }
  return;
}

