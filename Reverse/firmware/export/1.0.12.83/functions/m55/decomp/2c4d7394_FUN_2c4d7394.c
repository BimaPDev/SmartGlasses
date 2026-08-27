/* FUN_2c4d7394 @ 0x2c4d7394 */

undefined4 FUN_2c4d7394(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2b) {
    switch(param_1) {
    case 2:
    case 5:
    case 0x1d:
      if (-1 < param_5 << 0x1f) {
        uVar1 = DAT_2c4d746c;
        if (param_3 != 1) {
          uVar1 = DAT_2c4d7468;
        }
        return uVar1;
      }
      return DAT_2c4d7490;
    case 0x11:
    case 0x17:
      if (param_3 != 1) {
        uVar1 = DAT_2c4d7474;
        if (param_2 != 0) {
          uVar1 = DAT_2c4d7470;
        }
        return uVar1;
      }
      uVar1 = DAT_2c4d74a8;
      if (param_2 != 0) {
        uVar1 = DAT_2c4d74a4;
      }
      return uVar1;
    case 0x14:
      if (param_3 != 1) {
        uVar1 = DAT_2c4d747c;
        if (0 < param_2) {
          uVar1 = DAT_2c4d7478;
        }
        return uVar1;
      }
      uVar1 = DAT_2c4d74a0;
      if (0 < param_2) {
        uVar1 = DAT_2c4d749c;
      }
      return uVar1;
    case 0x27:
      if (param_3 != 1) {
        uVar1 = DAT_2c4d7484;
        if (0 < param_2) {
          uVar1 = DAT_2c4d7480;
        }
        return uVar1;
      }
      return DAT_2c4d7498;
    case 0x2a:
      if (-1 < param_5 << 0x1a) {
        uVar1 = DAT_2c4d748c;
        if (param_3 != 1) {
          uVar1 = DAT_2c4d7488;
        }
        return uVar1;
      }
      return DAT_2c4d7494;
    }
  }
  else if ((param_1 - 0x8fU & 0xffff) < 4) {
    uVar1 = DAT_2c4d7464;
    if (param_3 != 1) {
      uVar1 = DAT_2c4d7460;
    }
    return uVar1;
  }
  return 0;
}

