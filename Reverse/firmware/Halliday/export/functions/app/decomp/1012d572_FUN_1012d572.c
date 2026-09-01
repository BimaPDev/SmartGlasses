/* FUN_1012d572 @ 0x1012d572 */

void FUN_1012d572(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1012d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0xc) + 0xc))();
    return;
  }
  return;
}

