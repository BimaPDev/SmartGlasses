/* FUN_1010b62c @ 0x1010b62c */

void FUN_1010b62c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  if (param_2 == 0) {
    param_2 = -1;
  }
  local_14 = 0xffffffff;
  local_1c = param_1;
  local_18 = param_2;
  iVar1 = FUN_10062a28(5,&local_1c,param_3,2,param_1);
  if (iVar1 == 0) {
    *DAT_1010b65c = 0;
  }
  return;
}

