/* FUN_2c5b56b0 @ 0x2c5b56b0 */

void FUN_2c5b56b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  FUN_2c48e5b4(param_1,DAT_2c5b56e4,param_2);
  FUN_2c48e5b4(param_1,DAT_2c5b56e8,param_3);
  uVar1 = FUN_2c5c561c();
  uVar2 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,param_1,DAT_2c5b56ec);
  return;
}

