/* FUN_2c66d1d0 @ 0x2c66d1d0 */

float FUN_2c66d1d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  
  puVar1 = DAT_2c66d248;
  dVar3 = (double)FUN_2c66c640(*DAT_2c66d248,param_1,param_2,DAT_2c66d24c);
  if (NAN(dVar3) || NAN(dVar3)) {
    if (-1 < (longlong)dVar3) {
      fVar2 = (float)FUN_2c668468(DAT_2c66d250);
      return fVar2;
    }
    fVar2 = (float)FUN_2c668468(DAT_2c66d250);
    fVar2 = -fVar2;
  }
  else {
    fVar2 = (float)dVar3;
    if ((DAT_2c66d254 < ABS(fVar2)) && (ABS(dVar3) <= DAT_2c66d240)) {
      *(undefined4 *)*puVar1 = 0x22;
    }
  }
  return fVar2;
}

