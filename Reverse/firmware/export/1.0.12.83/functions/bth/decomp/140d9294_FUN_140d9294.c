/* FUN_140d9294 @ 0x140d9294 */

float FUN_140d9294(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  
  fVar3 = (float)FUN_140d94ec();
  if (NAN(param_2)) {
    return fVar3;
  }
  if (param_1 == 0.0) {
    if (param_2 == 0.0) {
      return 1.0;
    }
    iVar1 = FUN_140da7a8(param_2);
    if (iVar1 == 0) {
      return fVar3;
    }
    if (-1 < (int)((uint)(param_2 < 0.0) << 0x1f)) {
      return fVar3;
    }
  }
  else {
    iVar1 = FUN_140da7a8();
    if (((iVar1 == 0) && (iVar1 = FUN_140da7a8(param_1), iVar1 != 0)) &&
       (iVar1 = FUN_140da7a8(param_2), iVar1 != 0)) {
      if (NAN(fVar3)) {
        puVar2 = (undefined4 *)FUN_140da9c8();
        *puVar2 = 0x21;
        return fVar3;
      }
    }
    else {
      if (fVar3 != 0.0) {
        return fVar3;
      }
      iVar1 = FUN_140da7a8(param_1);
      if (iVar1 == 0) {
        return fVar3;
      }
      iVar1 = FUN_140da7a8(param_2);
      if (iVar1 == 0) {
        return fVar3;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_140da9c8();
  *puVar2 = 0x22;
  return fVar3;
}

