/* FUN_2c4c5f9c @ 0x2c4c5f9c */

void FUN_2c4c5f9c(float param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((DAT_2c4c6000 <= param_1) && (param_1 <= DAT_2c4c6004)) {
    param_1 = param_1 * DAT_2c4c6008;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    uVar1 = VectorFloatToUnsigned(param_1,3);
    param_2[3] = 0x8000000;
    param_2[1] = 0x8000000 / uVar1;
    param_2[4] = 0x8000000 / uVar1 + 0xf8000000;
    return;
  }
  uVar2 = VectorFloatToUnsigned(param_1 * DAT_2c4c6008,3);
  FUN_2c6741e8(0x42,DAT_2c4c6010,DAT_2c4c600c,uVar2);
  return;
}

