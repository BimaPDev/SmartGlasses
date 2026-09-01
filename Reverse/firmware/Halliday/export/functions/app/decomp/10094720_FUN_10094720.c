/* FUN_10094720 @ 0x10094720 */

undefined4 FUN_10094720(uint param_1)

{
  if (param_1 < 0x38) {
    if (param_1 < 0x20) {
      if ((param_1 == 3) || (param_1 == 6)) {
        return 0x1fffffff;
      }
    }
    else {
      switch(param_1) {
      case 0x20:
        return 0;
      case 0x22:
      case 0x30:
      case 0x36:
switchD_10094740_caseD_22:
        return 0xffff;
      case 0x25:
      case 0x29:
      case 0x31:
      case 0x37:
switchD_10094740_caseD_25:
        return 0xff;
      case 0x33:
        return 0xf;
      }
    }
  }
  else if ((param_1 - 0x44 & 0xffff) < 0x2a) {
    switch(param_1 - 0x44) {
    case 0:
    case 3:
    case 9:
    case 0xe:
    case 0x11:
      goto switchD_10094740_caseD_22;
    case 1:
    case 2:
    case 10:
    case 0xf:
    case 0x12:
    case 0x1c:
    case 0x1d:
      goto switchD_10094740_caseD_25;
    case 0x13:
      return DAT_1009488c;
    case 0x29:
      return 0x100;
    }
  }
  return 0;
}

