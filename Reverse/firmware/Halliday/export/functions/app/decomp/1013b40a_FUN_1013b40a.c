/* FUN_1013b40a @ 0x1013b40a */

int FUN_1013b40a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x10);
  if (local_c == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_10062a28(9,&local_c,param_3,local_c,param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return iVar1;
}

