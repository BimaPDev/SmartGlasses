/* FUN_2c621464 @ 0x2c621464 */

undefined4 FUN_2c621464(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    if (param_2 < 0x11) {
      if ((DAT_2c6214b8 >> (param_2 & 0xff) & 1) == 0) {
        uVar1 = 0x25;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
    break;
  default:
    return 0x1f;
  case 2:
  case 4:
  case 6:
    if ((param_2 == 8) || (param_2 == 0x10)) {
      return 0;
    }
    break;
  case 3:
    if (param_2 < 9) {
      if ((0x116U >> (param_2 & 0xff) & 1) == 0) {
        uVar1 = 0x25;
      }
      else {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  return 0x25;
}

