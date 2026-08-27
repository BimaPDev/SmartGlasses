/* FUN_1408a624 @ 0x1408a624 */

uint FUN_1408a624(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xff00;
  if (uVar2 == 0x9000) {
    return 0x19;
  }
  if (0x9000 < uVar2) {
    if (uVar2 == 0xb200) {
      return param_1 & 0xff | 0xcc00;
    }
    if (uVar2 < 0xb201) {
      if (uVar2 == 0xab00) {
        return 0xaa00;
      }
      if (uVar2 < 0xab01) {
        if (uVar2 == 0xa000) {
          return 0xffff;
        }
        if (uVar2 == 0xaa00) {
          uVar2 = 0x1f;
        }
        else {
          uVar2 = 0;
        }
        return uVar2;
      }
      uVar1 = 0x1011;
      if (uVar2 != 0xb100) {
        uVar1 = 0;
      }
      return uVar1;
    }
    if (uVar2 == 0xea00) {
      return 0x27;
    }
    if (uVar2 != 0xeb00) {
      uVar1 = 0x1015;
      if (uVar2 != 0xb300) {
        uVar1 = 0;
      }
      return uVar1;
    }
    return 0xbb00;
  }
  if (uVar2 == 0x5000) {
    return 0x11;
  }
  if (0x5000 < uVar2) {
    if (uVar2 == 0x7000) {
      return 0x17;
    }
    if (uVar2 < 0x7001) {
      if (uVar2 == 0x5100) {
        return 0x13;
      }
      if (uVar2 == 0x6000) {
        uVar2 = 0x15;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    if (uVar2 == 0x8000) {
      uVar2 = 0x1b;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  if (uVar2 == 0x3000) {
    return 3;
  }
  if (uVar2 < 0x3001) {
    if (uVar2 == 0x1000) {
      return 0xdd10;
    }
    if (uVar2 != 0x2000) {
      return 0;
    }
    return param_1 & 0xff | 0xee00;
  }
  if (uVar2 == 0x4000) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

