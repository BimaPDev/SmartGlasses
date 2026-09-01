/* FUN_1013107e @ 0x1013107e */

undefined4 FUN_1013107e(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (*(code **)(*param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10131086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x18))();
    return uVar1;
  }
  return 0;
}

