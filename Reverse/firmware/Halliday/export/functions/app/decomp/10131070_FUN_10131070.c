/* FUN_10131070 @ 0x10131070 */

undefined4 FUN_10131070(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*(code **)(*param_1 + 0x14) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10131078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}

