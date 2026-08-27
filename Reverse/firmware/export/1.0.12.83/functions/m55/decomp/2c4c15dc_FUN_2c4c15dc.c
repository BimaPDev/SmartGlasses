/* FUN_2c4c15dc @ 0x2c4c15dc */

void FUN_2c4c15dc(void)

{
  if ((code *)*DAT_2c4c15e8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4c15e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_2c4c15e8)();
    return;
  }
  return;
}

