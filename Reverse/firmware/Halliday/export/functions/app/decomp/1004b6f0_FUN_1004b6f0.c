/* FUN_1004b6f0 @ 0x1004b6f0 */

void FUN_1004b6f0(void)

{
  int iVar1;
  
  iVar1 = *DAT_1004b720;
  *DAT_1004b724 = 0;
  if (*DAT_1004b720 != iVar1) {
    FUN_1013cdc0();
  }
                    /* WARNING: Could not recover jumptable at 0x1004b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1004b728 + 0x14))();
  return;
}

