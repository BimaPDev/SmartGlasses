/* FUN_2c5f5428 @ 0x2c5f5428 */

void FUN_2c5f5428(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_2c5f6a50(param_1 + 0xc);
  FUN_2c5f6a50(param_1 + 0x11);
  func_0x2c5fbc64(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x2c5f544a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(param_1);
  return;
}

