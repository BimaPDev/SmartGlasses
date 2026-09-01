/* FUN_1013b39e @ 0x1013b39e */

int FUN_1013b39e(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if ((param_1[5] == 0) && (param_1[6] == 0)) {
LAB_1013b3b0:
    iVar1 = 1;
  }
  else {
    if (param_1[2] == 0) {
      FUN_1010b7e8(*(undefined2 *)((int)param_1 + 0xe),&local_34,&local_30,&local_2c);
      param_1[2] = (uint)(*param_1 * local_34) / local_30;
    }
    local_28 = param_1[2] * param_1[1];
    local_24 = param_1[5];
    local_20 = param_1[6];
    if (param_2 == 0) {
      local_2c = 8;
    }
    else {
      if (param_2 != 1) goto LAB_1013b3b0;
      local_2c = 4;
    }
    local_1c = param_3;
    iVar1 = FUN_10062a28(8,&local_2c);
    if (iVar1 == 0) {
      param_1[4] = local_18;
      param_1[6] = local_14;
    }
  }
  return iVar1;
}

