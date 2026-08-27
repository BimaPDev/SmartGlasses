/* FUN_2c4d48a0 @ 0x2c4d48a0 */

void FUN_2c4d48a0(undefined1 *param_1,char *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = (char)param_4;
  switch(param_3) {
  case 4:
  case 5:
  case 6:
    if (param_4 < 5) {
      if (param_4 < 3) {
        return;
      }
LAB_2c4d48e8:
      *param_1 = 3;
      *param_2 = cVar1 + -3;
      return;
    }
    if (param_4 != 5) {
      return;
    }
    break;
  case 7:
    if (param_4 < 7) {
      if (4 < param_4) {
        *param_1 = 3;
        *param_2 = cVar1 + -5;
        return;
      }
      if (1 < param_4 - 3) {
        return;
      }
      *param_1 = 1;
      *param_2 = cVar1;
      return;
    }
    if (param_4 != 7) {
      return;
    }
    break;
  default:
    *param_1 = 0;
    return;
  case 0xb:
    if (param_4 < 6) {
LAB_2c4d48f4:
      *param_1 = 3;
      *param_2 = cVar1 + -3;
      return;
    }
    break;
  case 0xc:
    if (param_4 < 7) goto LAB_2c4d48f4;
    break;
  case 0xe:
    if (param_4 != 5) {
      if (5 < param_4) {
        if (1 < param_4 - 6) {
          return;
        }
        *param_1 = 0x11;
        *param_2 = (char)(param_4 - 6);
        return;
      }
      if (1 < param_4 - 3) {
        return;
      }
      goto LAB_2c4d48e8;
    }
  }
  *param_1 = 4;
  *param_2 = '\0';
  return;
}

