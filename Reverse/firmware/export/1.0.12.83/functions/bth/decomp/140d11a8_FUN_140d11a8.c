/* FUN_140d11a8 @ 0x140d11a8 */

undefined4 *
FUN_140d11a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = DAT_140d1228;
  local_28 = param_3;
  uStack_24 = param_4;
  if (param_7 == '\0') {
    FUN_140d0db0(&local_30,param_2,param_3,param_4,param_5,param_6,param_8,param_9,&local_20);
  }
  else {
    FUN_140d09b8(&local_30,param_2,param_3,param_4);
  }
  uVar1 = local_20;
  local_28 = local_30;
  uStack_24 = uStack_2c;
  local_1c = FUN_140c02cc();
  FUN_140d862c(uVar1,param_10,param_9,&local_1c);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  FUN_140c3fe4(&local_20);
  return param_1;
}

