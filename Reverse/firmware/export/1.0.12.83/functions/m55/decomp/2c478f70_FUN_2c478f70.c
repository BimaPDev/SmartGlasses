/* FUN_2c478f70 @ 0x2c478f70 */

void FUN_2c478f70(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c478f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xf4))();
    return;
  }
  return;
}

