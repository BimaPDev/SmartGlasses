/* FUN_1013b082 @ 0x1013b082 */

undefined4 FUN_1013b082(uint param_1)

{
  if (0xe < param_1) {
    if ((param_1 + 0xdfff & 0xffff) < 9) {
      switch(param_1) {
      case 0x2001:
        goto switchD_1013b0a8_caseD_b;
      case 0x2002:
        goto switchD_1013b0a8_caseD_2;
      case 0x2003:
        goto switchD_1013b0a8_caseD_3;
      case 0x2004:
        goto switchD_1013b0a8_caseD_4;
      case 0x2005:
        goto switchD_1013b0a8_caseD_5;
      case 0x2006:
        goto switchD_1013b0a8_caseD_6;
      case 0x2007:
        goto switchD_1013b0a8_caseD_7;
      case 0x2008:
        goto switchD_1013b0a8_caseD_8;
      case 0x2009:
        goto switchD_1013b0a8_caseD_9;
      }
    }
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  switch(param_1) {
  case 2:
switchD_1013b0a8_caseD_2:
    return 0x200;
  case 3:
switchD_1013b0a8_caseD_3:
    return 0x300;
  case 4:
switchD_1013b0a8_caseD_4:
    return 0x400;
  case 5:
  case 0xe:
switchD_1013b0a8_caseD_5:
    return 0x500;
  case 6:
switchD_1013b0a8_caseD_6:
    return 0x600;
  case 7:
switchD_1013b0a8_caseD_7:
    return 0x700;
  case 8:
switchD_1013b0a8_caseD_8:
    return 0x800;
  case 9:
  case 0xc:
switchD_1013b0a8_caseD_9:
    return 0x900;
  case 10:
  case 0xd:
    return 0xa00;
  }
switchD_1013b0a8_caseD_b:
  return 0x100;
}

