/* FUN_1012225c @ 0x1012225c */

void FUN_1012225c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_10083c54(&local_c,1,param_3,0,param_1);
  if (iVar1 != 0) {
    local_c = 100;
  }
  *param_1 = local_c;
  return;
}

