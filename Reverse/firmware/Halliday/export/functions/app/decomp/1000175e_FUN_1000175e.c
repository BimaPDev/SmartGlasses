/* FUN_1000175e @ 0x1000175e */

int FUN_1000175e(uint param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    break;
  case 2:
    param_1 = param_1 + 4;
    break;
  default:
    return 0;
  case 4:
    param_1 = param_1 + 8;
    break;
  case 8:
    param_1 = param_1 + 0xc;
  }
  return 1 << (param_1 & 0xff);
}

