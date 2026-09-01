/* FUN_101310ae @ 0x101310ae */

undefined4 FUN_101310ae(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*(code **)(*param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101310be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x20))();
      return uVar1;
    }
    uVar1 = 0xffffffa8;
  }
  return uVar1;
}

