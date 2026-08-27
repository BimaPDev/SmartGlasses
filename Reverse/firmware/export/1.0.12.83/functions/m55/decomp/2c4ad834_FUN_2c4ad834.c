/* FUN_2c4ad834 @ 0x2c4ad834 */

bool FUN_2c4ad834(undefined4 param_1,uint param_2)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
    return (param_2 & 0x3f) != 0;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x6c:
  case 0x6d:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    return (param_2 & 0x1f) != 0;
  case 9:
  case 100:
  case 0x65:
  case 0x66:
    return (param_2 & 7) != 0;
  case 10:
  case 0xb:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x75:
    return (param_2 & 0xf) != 0;
  default:
    return false;
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    return DAT_2c4ad900 < (param_2 * DAT_2c4ad8fc >> 4 | param_2 * DAT_2c4ad8fc * 0x10000000);
  }
}

