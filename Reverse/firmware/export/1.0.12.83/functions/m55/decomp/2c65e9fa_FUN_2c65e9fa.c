/* FUN_2c65e9fa @ 0x2c65e9fa */

void FUN_2c65e9fa(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  if (0xf < param_2) {
    iVar1 = FUN_2c65e908(param_1,&local_14,0,param_4,param_1);
    *param_1 = iVar1;
    param_1[2] = local_14;
  }
  if (local_14 != 0) {
    FUN_2c65e9d8(*param_1,local_14,param_3);
  }
  param_1[1] = local_14;
  *(undefined1 *)(*param_1 + local_14) = 0;
  return;
}

