/* FUN_140c5346 @ 0x140c5346 */

void FUN_140c5346(int *param_1)

{
  if ((uint)param_1[2] < (uint)param_1[3]) {
    param_1[2] = param_1[2] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x140c5358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

