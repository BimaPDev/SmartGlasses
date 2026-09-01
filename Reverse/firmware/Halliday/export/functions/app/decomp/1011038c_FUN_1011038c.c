/* FUN_1011038c @ 0x1011038c */

float FUN_1011038c(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 * param_1;
  fVar2 = fVar1 * param_1 * fVar1;
  fVar3 = fVar1 * fVar2;
  return (((param_1 - param_1 * fVar1 * DAT_101103c4) + fVar2 * DAT_101103c8) - fVar3 * DAT_101103cc
         ) + fVar1 * fVar3 * DAT_101103d0;
}

