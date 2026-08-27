/* FUN_2c4846e0 @ 0x2c4846e0 */

void FUN_2c4846e0(void)

{
  if ((code *)*DAT_2c4846ec != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4846e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_2c4846ec)();
    return;
  }
  FUN_2c669588();
  return;
}

