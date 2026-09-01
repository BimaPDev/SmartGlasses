/* FUN_1010b7e8 @ 0x1010b7e8 */

void FUN_1010b7e8(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *param_3 = 1;
  *param_2 = 1;
  *param_4 = 4;
  if (param_1 < 0x431) {
    if (param_1 < 0x400) {
      if (param_1 < 0x1a) {
        switch(param_1) {
        case 0:
        case 1:
        case 2:
        case 7:
        case 8:
        case 9:
        case 0xf:
        case 0x13:
          goto switchD_1010b906_caseD_0;
        case 3:
        case 4:
        case 5:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          goto switchD_1010b906_caseD_3;
        default:
          return;
        case 0xc:
        case 0xd:
        case 0xe:
          goto switchD_1010b906_caseD_c;
        }
      }
      if (param_1 < 0x86) {
        if (0x82 < param_1) goto switchD_1010b906_caseD_3;
        if (0x49 < param_1) {
          param_1 = param_1 - 0x80;
          goto LAB_1010b984;
        }
        if (param_1 < 0x47) {
          if (0x42 < param_1) {
            if (1 < param_1 - 0x44) {
              return;
            }
            goto switchD_1010b906_caseD_3;
          }
          if (param_1 < 0x40) {
            return;
          }
        }
      }
      else {
        if (param_1 < 0xc3) {
          if (0xbf < param_1) goto switchD_1010b906_caseD_0;
          param_1 = param_1 - 0x87;
        }
        else {
          if (param_1 < 0xc6) {
            if (param_1 == 0xc3) {
              return;
            }
            goto switchD_1010b906_caseD_3;
          }
          param_1 = param_1 - 199;
        }
LAB_1010b984:
        if (2 < param_1) {
          return;
        }
      }
switchD_1010b906_caseD_0:
      uVar1 = 4;
    }
    else {
      switch(param_1) {
      case 0x400:
      case 0x401:
      case 0x402:
      case 0x403:
      case 0x40e:
      case 0x417:
      case 0x41f:
      case 0x420:
      case 0x424:
      case 0x425:
        goto switchD_1010b906_caseD_0;
      case 0x404:
      case 0x405:
      case 0x406:
      case 0x407:
      case 0x408:
      case 0x40c:
      case 0x40d:
      case 0x40f:
      case 0x415:
      case 0x418:
      case 0x41d:
      case 0x41e:
      case 0x421:
      case 0x422:
      case 0x423:
      case 0x42d:
      case 0x42e:
      case 0x42f:
      case 0x430:
switchD_1010b906_caseD_3:
        uVar1 = 2;
        break;
      case 0x409:
switchD_1010b906_caseD_c:
        *param_3 = 2;
        return;
      default:
        return;
      case 0x410:
      case 0x416:
      case 0x419:
      case 0x41a:
      case 0x41b:
      case 0x41c:
        uVar1 = 1;
        break;
      case 0x427:
      case 0x428:
      case 0x429:
      case 0x42a:
      case 0x42b:
      case 0x42c:
        uVar1 = 3;
      }
    }
    *param_2 = uVar1;
    return;
  }
  if (3 < (param_1 - 0x800 & 0xffff)) {
    return;
  }
  switch(param_1) {
  case 0x800:
    *param_3 = 8;
    *param_4 = 8;
    return;
  case 0x801:
    uVar1 = 4;
    break;
  case 0x802:
    uVar1 = 2;
    break;
  case 0x803:
    uVar1 = 1;
    goto LAB_1010b9dc;
  default:
    goto switchD_1010b906_caseD_6;
  }
  *param_3 = uVar1;
  uVar1 = 8;
LAB_1010b9dc:
  *param_4 = uVar1;
switchD_1010b906_caseD_6:
  return;
}

