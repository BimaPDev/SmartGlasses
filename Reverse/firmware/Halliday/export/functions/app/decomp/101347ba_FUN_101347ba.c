/* FUN_101347ba @ 0x101347ba */

void FUN_101347ba(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    FUN_101343c0(param_2 + 8,param_3,param_4 + 5);
    (*(code *)*param_4)(param_1,param_4,0);
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_101347a2(param_2);
    return;
  }
  return;
}

