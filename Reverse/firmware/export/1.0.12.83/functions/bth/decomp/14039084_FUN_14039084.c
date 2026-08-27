/* FUN_14039084 @ 0x14039084 */

void FUN_14039084(void)

{
  if ((code *)*DAT_14039090 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1403908a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_14039090)();
    return;
  }
  return;
}

