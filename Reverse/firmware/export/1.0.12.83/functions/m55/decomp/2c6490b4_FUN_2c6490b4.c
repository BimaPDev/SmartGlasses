/* FUN_2c6490b4 @ 0x2c6490b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6490b4(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  undefined8 uVar1;
  
  FUN_2c648600(_DAT_2c6490cc);
  uVar1 = FUN_2c6444fc(10);
                    /* WARNING: Could not recover jumptable at 0x2c6746b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_LAB_2c6746b4)((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),extraout_r2,in_r3);
  return;
}

