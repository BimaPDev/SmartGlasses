/* FUN_2c64f592 @ 0x2c64f592 */

undefined4 *
FUN_2c64f592(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,int *param_9
            ,undefined4 *param_10)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack_24 = 0;
  uStack_30 = param_3;
  uStack_2c = param_4;
  func_0x2c655a06(&uStack_38,0,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,
                  param_8,&iStack_24,&uStack_20,0);
  if (iStack_24 == 0) {
    *param_10 = uStack_20;
    param_10[1] = uStack_1c;
  }
  else {
    *param_9 = iStack_24;
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return param_1;
}

