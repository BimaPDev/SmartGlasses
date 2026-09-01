/* FUN_10134e80 @ 0x10134e80 */

undefined4 FUN_10134e80(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x1f) {
    switch(param_1) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x17:
    case 0x19:
      return 2;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x12:
    case 0x16:
    case 0x18:
      return 1;
    case 0x1b:
      return 3;
    case 0x1d:
      return 5;
    case 0x1e:
      return 4;
    }
  }
  else if ((param_1 & 0x7f) == 0x52) {
    return 0;
  }
  if ((param_1 & 0x40) == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

