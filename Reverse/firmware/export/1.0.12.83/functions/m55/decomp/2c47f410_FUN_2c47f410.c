/* FUN_2c47f410 @ 0x2c47f410 */

void FUN_2c47f410(int *param_1,int *param_2,int *param_3,int param_4)

{
  *param_1 = *param_2 + *param_3;
                    /* WARNING: Could not recover jumptable at 0x2c47f42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((8 - param_4) * 8 + 0x2c47f42d))(0,param_2 + 1,param_3 + 1);
  return;
}

