/* FUN_2c650b64 @ 0x2c650b64 */

undefined4 *
FUN_2c650b64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9,int *param_10,int param_11,undefined4 param_12)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_2c [2];
  
  if (param_11 == 0) {
    local_2c[0] = DAT_2c650bf8;
    FUN_2c65f762(&local_38,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,local_2c
                );
    if (*param_10 == 0) {
      FUN_2c650a7c(param_12,local_2c);
    }
    *param_1 = local_38;
    param_1[1] = uStack_34;
    FUN_2c6515c0(local_2c);
  }
  else {
    FUN_2c65f724(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  }
  return param_1;
}

