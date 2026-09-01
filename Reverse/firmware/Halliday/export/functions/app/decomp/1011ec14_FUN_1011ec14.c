/* FUN_1011ec14 @ 0x1011ec14 */

undefined4 FUN_1011ec14(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  iVar1 = FUN_1011eb60(param_1,param_2,&local_14,param_4,param_1);
  if (iVar1 != 0) {
    local_14 = (*param_3)(param_4,iVar1,local_14);
  }
  FUN_1011ebda(param_1,local_14);
  return local_14;
}

