/* FUN_2c46f384 @ 0x2c46f384 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46f384(void)

{
  int iVar1;
  
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c46f396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xb4))(_LAB_2c46f39c);
    return;
  }
  return;
}

