/* FUN_10110344 @ 0x10110344 */

float FUN_10110344(float param_1)

{
  float fVar1;
  
  param_1 = param_1 * param_1;
  fVar1 = param_1 * param_1 * param_1;
  return (((1.0 - param_1 * DAT_1011037c) + param_1 * param_1 * DAT_10110380) - fVar1 * DAT_10110384
         ) + param_1 * fVar1 * DAT_10110388;
}

