/* FUN_2c4b6b00 @ 0x2c4b6b00 */

void FUN_2c4b6b00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c4bfd84();
  if (param_3 != 0) {
    FUN_2c4b6750(2,uVar1,1);
    FUN_2c4b6058(2,1);
    FUN_2c4b5eac(param_1,param_2);
    FUN_2c4b5f50(2,param_2,1,param_4);
    return;
  }
  FUN_2c4b5f50(2,param_2,0);
  FUN_2c4b6058(2,0);
  FUN_2c4b6750(2,uVar1,0,param_4);
  return;
}

