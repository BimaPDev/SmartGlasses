/* FUN_2c4c9c3e @ 0x2c4c9c3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c9c3e(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char in_ZR;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if ((in_ZR == '\0') && (param_1 != 0xfa)) {
    if (param_3 == 1) goto LAB_2c4c9c7c;
LAB_2c4c9c52:
    if (param_3 == 2) {
      if (*_LAB_2c4c9d8c == 0) goto LAB_2c4c9d2e;
      goto LAB_2c4c9cf2;
    }
    if (param_3 == 4) {
      iVar3 = *_LAB_2c4c9d64;
joined_r0x2c4c9d2c:
      if (iVar3 != 0) {
        return 0;
      }
      goto LAB_2c4c9d2e;
    }
    if (param_3 == 8) {
      iVar3 = *_LAB_2c4c9da0;
      goto joined_r0x2c4c9d2c;
    }
    if (-1 < param_3 << 0x1f) goto LAB_2c4c9cf2;
  }
  else {
    FUN_2c6741e8(0x43,_LAB_2c4c9d68,param_3,param_1,param_2);
    if (param_3 != 1) goto LAB_2c4c9c52;
LAB_2c4c9c7c:
    if (*_LAB_2c4c9d6c == 0) {
LAB_2c4c9d2e:
      FUN_2c6741e8(0x42,_LAB_2c4c9da8,_LAB_2c4c9da4,param_3);
      return 3;
    }
  }
  piVar1 = _LAB_2c4c9d74;
  fVar4 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  param_1 = VectorFloatToUnsigned(fVar4 * *_LAB_2c4c9d70,3);
  param_2 = VectorFloatToUnsigned(fVar5 * *_LAB_2c4c9d70,3);
  if (*_LAB_2c4c9d74 << 0x1f < 0) {
    *_LAB_2c4c9d78 = param_1;
    if (*_LAB_2c4c9d7c == 0) {
      func_0x2c4c65b4();
    }
    else {
      func_0x2c4c64bc();
    }
  }
  piVar2 = _LAB_2c4c9d88;
  if ((*_LAB_2c4c9d80 == 1) || (*piVar1 << 0x1e < 0)) {
    *_LAB_2c4c9d84 = param_2;
    if (*piVar2 == 0) {
      func_0x2c4c623c();
    }
    else {
      func_0x2c4c6144();
    }
  }
LAB_2c4c9cf2:
  piVar2 = _LAB_2c4c9d94;
  piVar1 = _LAB_2c4c9d74;
  if (param_3 << 0x1e < 0) {
    if (*_LAB_2c4c9d74 << 0x1f < 0) {
      *_LAB_2c4c9d90 = param_1;
      if (*piVar2 == 0) {
        FUN_2c4c63cc();
      }
      else {
        FUN_2c4c6334();
      }
    }
    piVar2 = _LAB_2c4c9d9c;
    if (*piVar1 << 0x1e < 0) {
      *_LAB_2c4c9d98 = param_2;
      if (*piVar2 == 0) {
        FUN_2c4c60ac();
      }
      else {
        FUN_2c4c6014();
      }
    }
  }
  return 0;
}

