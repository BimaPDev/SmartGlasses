/* FUN_2c5718b0 @ 0x2c5718b0 */

undefined4 FUN_2c5718b0(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar2,uVar1,DAT_2c5718cc);
  return uVar1;
}

