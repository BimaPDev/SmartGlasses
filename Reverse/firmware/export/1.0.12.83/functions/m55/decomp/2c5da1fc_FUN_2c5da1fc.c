/* FUN_2c5da1fc @ 0x2c5da1fc */

void FUN_2c5da1fc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  while( true ) {
    uVar3 = param_1[-1];
    uVar1 = FUN_2c5d8bd8(uVar4);
    uVar2 = FUN_2c5d8bd8(uVar3);
    if (uVar2 <= uVar1) break;
    *param_1 = param_1[-1];
    param_1 = param_1 + -1;
  }
  *param_1 = uVar4;
  return;
}

