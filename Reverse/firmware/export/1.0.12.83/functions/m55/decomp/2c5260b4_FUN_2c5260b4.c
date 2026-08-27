/* FUN_2c5260b4 @ 0x2c5260b4 */

undefined4 FUN_2c5260b4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
                    /* WARNING: Could not recover jumptable at 0x2c5260ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + 0x54) + 0x1c))();
    return uVar1;
  }
  return DAT_2c5260c0;
}

