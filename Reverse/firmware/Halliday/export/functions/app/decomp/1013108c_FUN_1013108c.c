/* FUN_1013108c @ 0x1013108c */

undefined4 FUN_1013108c(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*(code **)(*param_1 + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1013109c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x1c))();
      return uVar1;
    }
    uVar1 = 0xffffffa8;
  }
  return uVar1;
}

