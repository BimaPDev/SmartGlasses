/* FUN_101272fc @ 0x101272fc */

void FUN_101272fc(int param_1)

{
  if (*(code **)(param_1 + 0x34) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10127300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x34))();
    return;
  }
  return;
}

