/* FUN_2c5f6ba8 @ 0x2c5f6ba8 */

undefined4 FUN_2c5f6ba8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] != 0) {
    uVar1 = param_1[1];
    param_1[1] = DAT_2c5f6bc8;
    param_1[2] = 0;
    param_1[3] = 0;
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x2c5f6bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)*param_1)(1);
  return uVar1;
}

