/* FUN_10107374 @ 0x10107374 */

undefined4 FUN_10107374(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  int local_18;
  int local_14;
  
  if (param_1 != 0 || param_2 != 0) {
    local_18 = param_1;
    local_14 = param_2;
    FUN_100f8860(&local_18);
    if (local_18 < 0) {
      local_18 = local_18 + 3;
    }
    if (local_14 < 0) {
      local_14 = local_14 + 3;
    }
    *param_3 = (short)(local_18 >> 2);
    *param_4 = (short)(local_14 >> 2);
  }
  return 0;
}

