/* FUN_1010bce0 @ 0x1010bce0 */

undefined4 FUN_1010bce0(uint param_1)

{
  if (param_1 < 0x433) {
    if (param_1 < 0x400) {
      if (param_1 < 0x4a) {
        switch(param_1) {
        case 0:
        case 7:
        case 0xf:
        case 0x13:
          goto switchD_1010be1c_caseD_0;
        case 1:
        case 2:
        case 8:
        case 9:
          goto switchD_1010be1c_caseD_1;
        case 3:
        case 0x10:
        case 0x14:
        case 0x15:
          goto switchD_1010be1c_caseD_3;
        case 4:
        case 0x11:
        case 0x16:
        case 0x17:
          goto switchD_1010be1c_caseD_4;
        case 5:
        case 0x12:
        case 0x18:
        case 0x19:
          goto switchD_1010be1c_caseD_5;
        case 0xb:
          goto switchD_1010be1c_caseD_b;
        case 0xc:
          goto switchD_1010be1c_caseD_c;
        case 0xd:
        case 0xe:
          goto switchD_1010be1c_caseD_d;
        case 0x40:
        case 0x47:
          goto switchD_1010be1c_caseD_40;
        case 0x41:
        case 0x42:
        case 0x48:
        case 0x49:
          goto switchD_1010be1c_caseD_41;
        case 0x44:
          goto switchD_1010be1c_caseD_44;
        case 0x45:
          goto switchD_1010be1c_caseD_45;
        }
      }
      else if (param_1 < 0x8a) {
        if (0x7f < param_1) {
          switch(param_1) {
          case 0x80:
          case 0x87:
            goto switchD_1010bde8_caseD_80;
          case 0x81:
          case 0x82:
          case 0x88:
          case 0x89:
            goto switchD_1010bde8_caseD_81;
          case 0x83:
            goto switchD_1010bde8_caseD_83;
          case 0x84:
            goto switchD_1010bde8_caseD_84;
          case 0x85:
            goto switchD_1010bde8_caseD_85;
          }
        }
      }
      else if ((param_1 - 0xc0 & 0xffff) < 10) {
        switch(param_1 - 0xc0) {
        case 0:
        case 7:
          goto switchD_1010bf5e_caseD_0;
        case 1:
        case 2:
        case 8:
        case 9:
          goto switchD_1010bf5e_caseD_1;
        case 4:
          goto switchD_1010bf5e_caseD_4;
        case 5:
          goto switchD_1010bf5e_caseD_5;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x400:
switchD_1010bf5e_caseD_1:
        return 0x27;
      case 0x401:
switchD_1010be1c_caseD_41:
        return 7;
      case 0x402:
switchD_1010bf5e_caseD_0:
        return 0x26;
      case 0x403:
switchD_1010be1c_caseD_40:
        return 6;
      case 0x404:
switchD_1010bde8_caseD_83:
        return 0x25;
      case 0x405:
switchD_1010be1c_caseD_3:
        return 5;
      case 0x406:
switchD_1010bf5e_caseD_5:
        return 0x23;
      case 0x407:
switchD_1010be1c_caseD_45:
        return 3;
      case 0x408:
switchD_1010be1c_caseD_44:
        return 4;
      case 0x409:
switchD_1010be1c_caseD_d:
        return 1;
      case 0x40a:
switchD_1010be1c_caseD_b:
        return 2;
      case 0x40c:
      case 0x40d:
      case 0x415:
        return 8;
      case 0x40e:
      case 0x417:
        return 0xe;
      case 0x40f:
      case 0x418:
        return 0xf;
      case 0x410:
      case 0x416:
        return 0xb;
      case 0x411:
        return 9;
      case 0x412:
        return 0xd;
      case 0x413:
        return 0xc;
      case 0x414:
        return 10;
      case 0x419:
        return 0xa20;
      case 0x41a:
        return 0xa00;
      case 0x41b:
        return 0xa10;
      case 0x41c:
        return 0xa30;
      case 0x41d:
switchD_1010be1c_caseD_5:
        return 0x13;
      case 0x41e:
switchD_1010bde8_caseD_85:
        return 0x33;
      case 0x41f:
switchD_1010be1c_caseD_1:
        return 0x17;
      case 0x420:
switchD_1010bde8_caseD_81:
        return 0x37;
      case 0x421:
switchD_1010be1c_caseD_4:
        return 0x14;
      case 0x422:
switchD_1010bf5e_caseD_4:
        return 0x24;
      case 0x423:
switchD_1010bde8_caseD_84:
        return 0x34;
      case 0x424:
switchD_1010be1c_caseD_0:
        return 0x16;
      case 0x425:
switchD_1010bde8_caseD_80:
        return 0x36;
      case 0x426:
        return 0xe00;
      case 0x427:
        return DAT_1010c08c;
      case 0x428:
        return 0x20000000;
      case 0x429:
        return DAT_1010c088;
      case 0x42a:
        return 0x40000000;
      case 0x42b:
        return DAT_1010c080;
      case 0x42c:
        return DAT_1010c084;
      case 0x42d:
        return DAT_1010c098;
      case 0x42e:
        return 0x60000000;
      case 0x42f:
        return DAT_1010c090;
      case 0x430:
        return DAT_1010c094;
      case 0x431:
      case 0x432:
        return DAT_1010c07c;
      }
    }
  }
  else if ((param_1 - 0x800 & 0xffff) < 4) {
    switch(param_1) {
    case 0x800:
switchD_1010be1c_caseD_c:
      return 0x200;
    case 0x801:
      return 0x400;
    case 0x802:
      return 0x600;
    case 0x803:
      return 0x800;
    }
  }
  return 0;
}

