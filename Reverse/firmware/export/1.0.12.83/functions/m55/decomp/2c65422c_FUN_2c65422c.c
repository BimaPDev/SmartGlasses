/* FUN_2c65422c @ 0x2c65422c */

undefined4 *
FUN_2c65422c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10)

{
  undefined1 *puVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  puStack_30 = auStack_28;
  uStack_2c = 0;
  auStack_28[0] = 0;
  uStack_40 = param_3;
  uStack_3c = param_4;
  if (param_7 == '\0') {
    FUN_2c653e4c(&uStack_48,param_2,param_3,param_4,param_5,param_6,param_8,param_9,&puStack_30);
  }
  else {
    FUN_2c653a6c(&uStack_48,param_2,param_3,param_4,param_5,param_6);
  }
  puVar1 = puStack_30;
  uStack_40 = uStack_48;
  uStack_3c = uStack_44;
  uStack_34 = FUN_2c64ce10();
  FUN_2c6656d8(puVar1,param_10,param_9,&uStack_34);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  FUN_2c65e94c(&puStack_30);
  return param_1;
}

