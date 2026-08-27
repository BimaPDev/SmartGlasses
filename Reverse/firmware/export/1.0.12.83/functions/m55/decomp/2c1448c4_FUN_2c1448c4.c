/* FUN_2c1448c4 @ 0x2c1448c4 */

undefined4 FUN_2c1448c4(undefined4 param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)VectorFloatToUnsignedFixed(param_1,0x20,0xe);
  uVar2 = VectorFloatToUnsigned(fVar1 * DAT_2c1448e4 + 0.5,3);
  return uVar2;
}

