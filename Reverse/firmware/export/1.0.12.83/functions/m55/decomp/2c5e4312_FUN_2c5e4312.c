/* FUN_2c5e4312 @ 0x2c5e4312 */

void FUN_2c5e4312(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c5e4128(*(undefined1 *)(param_4 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x2c5e4326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x30))(param_1);
  return;
}

