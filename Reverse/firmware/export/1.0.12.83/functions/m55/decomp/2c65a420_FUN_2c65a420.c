/* FUN_2c65a420 @ 0x2c65a420 */

undefined4
FUN_2c65a420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7,char param_8,char param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uStack_a4;
  char cStack_a3;
  char cStack_a2;
  undefined1 uStack_a1;
  undefined1 auStack_a0 [132];
  
  uVar1 = FUN_2c659524(param_5 + 0x6c);
  uVar2 = FUN_2c659a4c(param_5 + 0x6c);
  uStack_a4 = FUN_2c6523b2(uVar1,0x25);
  if (param_9 == '\0') {
    cStack_a3 = param_8;
    cStack_a2 = param_9;
  }
  else {
    uStack_a1 = 0;
    cStack_a3 = param_9;
    cStack_a2 = param_8;
  }
  func_0x2c665c0a(uVar2,auStack_a0,0x80,&uStack_a4,param_7);
  uVar1 = FUN_2c66c4ec(auStack_a0);
  FUN_2c65277c(param_1,param_3,param_4,auStack_a0,uVar1);
  return param_1;
}

