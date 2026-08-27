/* FUN_2c64cdce @ 0x2c64cdce */

void FUN_2c64cdce(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x2c64cddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}

