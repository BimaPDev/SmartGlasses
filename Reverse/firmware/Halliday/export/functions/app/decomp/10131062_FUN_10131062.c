/* FUN_10131062 @ 0x10131062 */

undefined4 FUN_10131062(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10131068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return 0xffffffea;
}

