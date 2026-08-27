/* FUN_2c65070a @ 0x2c65070a */

undefined4 *
FUN_2c65070a(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,int *param_9
            ,undefined4 param_10)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [24];
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  iStack_3c = 0;
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x2c655a06(&uStack_50,0,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,
                  param_8,&iStack_3c,0,auStack_34);
  uStack_48 = uStack_50;
  uStack_44 = uStack_4c;
  if (iStack_3c == 0) {
    FUN_2c65061c(auStack_38,auStack_34);
    FUN_2c650d04(param_10,auStack_38);
    FUN_2c650e60(auStack_38);
  }
  else {
    *param_9 = iStack_3c;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  FUN_2c64fbf6(auStack_34);
  return param_1;
}

