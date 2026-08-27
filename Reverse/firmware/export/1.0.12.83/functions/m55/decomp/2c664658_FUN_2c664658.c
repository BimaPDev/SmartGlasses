/* FUN_2c664658 @ 0x2c664658 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c664658(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,undefined4 param_9
            ,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = _LAB_2c6646d8;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (param_7 == '\0') {
    FUN_2c664260(&uStack_30,param_2,param_3,param_4,param_5,param_6,param_8,param_9,&uStack_20);
  }
  else {
    FUN_2c663e68(&uStack_30,param_2,param_3,param_4);
  }
  uVar1 = uStack_20;
  uStack_28 = uStack_30;
  uStack_24 = uStack_2c;
  uStack_1c = FUN_2c64ce10();
  FUN_2c6656d8(uVar1,param_10,param_9,&uStack_1c);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  FUN_2c650e60(&uStack_20);
  return param_1;
}

