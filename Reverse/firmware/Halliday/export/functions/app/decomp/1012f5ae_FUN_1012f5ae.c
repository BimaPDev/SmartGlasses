/* FUN_1012f5ae @ 0x1012f5ae */

int FUN_1012f5ae(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    local_2c = -0xe;
  }
  else {
    local_2c = 0;
    local_30 = param_5;
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      local_28 = *(undefined4 *)(param_4 + iVar1 * 4);
      local_24 = *(undefined4 *)(param_3 + iVar1 * 4);
      local_2c = 0;
      local_34 = iVar1;
      FUN_10064860(param_1,2,&local_34);
      if (local_2c < 1) {
        return local_2c;
      }
    }
  }
  return local_2c;
}

