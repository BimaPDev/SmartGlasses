/* FUN_101102fc @ 0x101102fc */

float FUN_101102fc(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 * param_1;
  fVar2 = fVar1 * param_1 * fVar1;
  fVar3 = fVar1 * fVar2;
  return param_1 + param_1 * fVar1 * DAT_10110334 + fVar2 * DAT_10110338 + fVar3 * DAT_1011033c +
         fVar1 * fVar3 * DAT_10110340;
}

