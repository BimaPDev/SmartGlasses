/* FUN_2c4bd830 @ 0x2c4bd830 */

void FUN_2c4bd830(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_2c4bd86c;
  if ((*DAT_2c4bd860 == '\0') && (*DAT_2c4bd864 == '\0')) {
    if (*DAT_2c4bd868 == '\0') {
      return;
    }
    *DAT_2c4bd868 = '\0';
    uVar1 = 0;
  }
  else {
    if (*DAT_2c4bd868 != '\0') {
      return;
    }
    *DAT_2c4bd868 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x2c6739c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c6739c4)(1,uVar1);
  return;
}

