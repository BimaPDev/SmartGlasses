/* FUN_2c613278 @ 0x2c613278 */

void FUN_2c613278(int param_1)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c61327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x44))();
    return;
  }
  return;
}

