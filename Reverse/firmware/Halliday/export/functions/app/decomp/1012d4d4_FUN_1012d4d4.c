/* FUN_1012d4d4 @ 0x1012d4d4 */

undefined4 FUN_1012d4d4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  local_c = 0;
  uVar1 = FUN_1012d352(param_1,&local_c,(param_1[2] + *param_1) - param_1[1],param_1[1],param_1);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  return local_c;
}

