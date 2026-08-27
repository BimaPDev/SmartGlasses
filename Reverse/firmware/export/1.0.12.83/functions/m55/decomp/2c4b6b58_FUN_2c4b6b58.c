/* FUN_2c4b6b58 @ 0x2c4b6b58 */

void FUN_2c4b6b58(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c4bfd84();
  if (param_3 != 0) {
    FUN_2c4b6750(0x200,uVar1,1);
    FUN_2c4b6058(0x200,1);
    FUN_2c4b5eac(param_1,param_2);
    FUN_2c4b5f50(0x200,param_2,1,param_4);
    return;
  }
  FUN_2c4b5f50(0x200,param_2,0);
  FUN_2c4b6058(0x200,0);
  FUN_2c4b6750(0x200,uVar1,0,param_4);
  return;
}

