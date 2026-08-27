/* FUN_2c65e140 @ 0x2c65e140 */

undefined4 *
FUN_2c65e140(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  local_20 = DAT_2c65e1c0;
  local_28 = param_3;
  uStack_24 = param_4;
  if (param_7 == '\0') {
    FUN_2c65dd48(&local_30,param_2,param_3,param_4,param_5,param_6,param_8,param_9,&local_20);
  }
  else {
    FUN_2c65d950(&local_30,param_2,param_3,param_4);
  }
  uVar1 = local_20;
  local_28 = local_30;
  uStack_24 = uStack_2c;
  local_1c = FUN_2c64ce10();
  FUN_2c6656d8(uVar1,param_10,param_9,&local_1c);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  FUN_2c650e60(&local_20);
  return param_1;
}

