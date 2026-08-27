/* FUN_2c64e740 @ 0x2c64e740 */

uint FUN_2c64e740(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)*param_1;
  uVar1 = (int)param_1[1] - (int)pbVar2;
  if ((byte *)param_1[1] == pbVar2) {
    return 0xfffffffe;
  }
  uVar3 = (uint)*pbVar2;
  if (-1 < (char)*pbVar2) {
    *param_1 = pbVar2 + 1;
    return uVar3;
  }
  if (0xc1 < uVar3) {
    if (uVar3 < 0xe0) {
      if (uVar1 == 1) {
        return 0xfffffffe;
      }
      if ((pbVar2[1] & 0xc0) != 0x80) {
        return 0xffffffff;
      }
      uVar1 = ((uint)pbVar2[1] + uVar3 * 0x40) - 0x3080;
      if (param_2 < uVar1) {
        return uVar1;
      }
      pbVar2 = pbVar2 + 2;
LAB_2c64e782:
      *param_1 = pbVar2;
      return uVar1;
    }
    if (uVar3 < 0xf0) {
      if (uVar1 < 3) {
        return 0xfffffffe;
      }
      uVar1 = (uint)pbVar2[1];
      if (((uVar1 & 0xc0) == 0x80) &&
         (((uVar3 != 0xe0 || (0x9f < uVar1)) && ((pbVar2[2] & 0xc0) == 0x80)))) {
        uVar1 = (uVar1 * 0x40 + uVar3 * 0x1000 + (uint)pbVar2[2]) - 0xe2080;
        if (param_2 < uVar1) {
          return uVar1;
        }
        pbVar2 = pbVar2 + 3;
        goto LAB_2c64e782;
      }
    }
    else if (uVar3 < 0xf5) {
      if (uVar1 < 4) {
        return 0xfffffffe;
      }
      uVar1 = (uint)pbVar2[1];
      if ((uVar1 & 0xc0) == 0x80) {
        if (uVar3 == 0xf0) {
          if (uVar1 < 0x90) {
            return 0xffffffff;
          }
        }
        else if ((uVar3 == 0xf4) && (0x8f < uVar1)) {
          return 0xffffffff;
        }
        if (((pbVar2[2] & 0xc0) == 0x80) && ((pbVar2[3] & 0xc0) == 0x80)) {
          uVar1 = uVar1 * 0x1000 + uVar3 * 0x40000 + (uint)pbVar2[2] * 0x40 + (uint)pbVar2[3] +
                  0xfc37df80;
          if (param_2 < uVar1) {
            return uVar1;
          }
          pbVar2 = pbVar2 + 4;
          goto LAB_2c64e782;
        }
      }
    }
  }
  return 0xffffffff;
}

