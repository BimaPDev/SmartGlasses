/* FUN_2c054520 @ 0x2c054520 */

void FUN_2c054520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint unaff_r7;
  
  uVar1 = unaff_r7 >> 0x15;
                    /* WARNING: Could not recover jumptable at 0x2c054524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 - 4))
            (param_1,*(undefined4 *)(uVar1 - 0x1c),*(undefined4 *)(uVar1 - 0x18),
             *(undefined4 *)(uVar1 - 0x14),param_2,param_3,param_4);
  return;
}

