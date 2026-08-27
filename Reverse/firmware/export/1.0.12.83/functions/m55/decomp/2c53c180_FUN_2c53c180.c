/* FUN_2c53c180 @ 0x2c53c180 */

void FUN_2c53c180(int *param_1)

{
  FUN_2c53c110();
  *(undefined1 *)(param_1 + 0xf) = 1;
                    /* WARNING: Could not recover jumptable at 0x2c53c19a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,4);
  return;
}

