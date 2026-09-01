/* FUN_1000bdec @ 0x1000bdec */

void FUN_1000bdec(int param_1)

{
  if (*DAT_1000be18 != *DAT_1000be18) {
    param_1 = FUN_1013cdc0();
  }
                    /* WARNING: Could not recover jumptable at 0x1000be16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(0,0xffffffff,1);
  return;
}

