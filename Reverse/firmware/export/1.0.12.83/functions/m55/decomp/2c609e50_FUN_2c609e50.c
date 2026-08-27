/* FUN_2c609e50 @ 0x2c609e50 */

void FUN_2c609e50(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c601b5c();
  if (*(code **)(*piVar1 + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c609e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x2c))();
    return;
  }
  return;
}

