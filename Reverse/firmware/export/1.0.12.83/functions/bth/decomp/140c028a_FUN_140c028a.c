/* FUN_140c028a @ 0x140c028a */

void FUN_140c028a(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x140c0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}

