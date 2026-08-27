/* FUN_140c8d7c @ 0x140c8d7c */

undefined4 *
FUN_140c8d7c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,int *param_9
            ,undefined4 param_10)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  
  local_1c = 0;
  local_50 = 0;
  local_58 = param_3;
  local_54 = param_4;
  FUN_140c3cf4(&local_60,0,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,
               param_8,&local_50,0,auStack_34);
  local_58 = local_60;
  local_54 = uStack_5c;
  if (local_50 == 0) {
    FUN_140c8cc8(auStack_4c,auStack_34);
    FUN_140d7936(param_10,auStack_4c);
    FUN_140d77c4(auStack_4c);
  }
  else {
    *param_9 = local_50;
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  FUN_140c2d82(auStack_34);
  return param_1;
}

