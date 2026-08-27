/* FUN_2c478f58 @ 0x2c478f58 */

void FUN_2c478f58(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c478f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xe8))(1);
    return;
  }
  return;
}

