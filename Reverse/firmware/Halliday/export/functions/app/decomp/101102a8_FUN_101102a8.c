/* FUN_101102a8 @ 0x101102a8 */

float FUN_101102a8(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 * param_1 * param_1;
  fVar2 = param_1 * fVar1;
  return ((((param_1 * 0.5 + 1.0) - param_1 * param_1 * DAT_101102ec) + fVar1 * DAT_101102f0) -
         fVar2 * DAT_101102f4) + param_1 * fVar2 * DAT_101102f8;
}

