/* FUN_2c65813a @ 0x2c65813a */

undefined4 *
FUN_2c65813a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,int param_8,undefined4 param_9,
            undefined4 *param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  undefined1 auStack_38 [20];
  
  uStack_48 = param_3;
  uStack_44 = param_4;
  uVar2 = FUN_2c65faf0(param_8 + 0x6c);
  puStack_40 = auStack_38;
  iStack_3c = 0;
  auStack_38[0] = 0;
  if (param_7 == '\0') {
    FUN_2c657cc8(&uStack_50,param_2,uStack_48,uStack_44,param_5,param_6,param_8,param_9,&puStack_40)
    ;
  }
  else {
    FUN_2c6578e4();
  }
  iVar1 = iStack_3c;
  uStack_48 = uStack_50;
  uStack_44 = uStack_4c;
  if (iStack_3c != 0) {
    func_0x2c664bb0(param_10,iStack_3c);
    FUN_2c6565d4(uVar2,puStack_40,puStack_40 + iVar1,*param_10);
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  FUN_2c65e94c(&puStack_40);
  return param_1;
}

