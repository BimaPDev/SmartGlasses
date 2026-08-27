/* FUN_2c55fad8 @ 0x2c55fad8 */

void FUN_2c55fad8(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 0x56) = 0;
  param_1[0x14] = 0;
                    /* WARNING: Could not recover jumptable at 0x2c55fae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}

