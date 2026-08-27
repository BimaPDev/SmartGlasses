/* FUN_140bcfc8 @ 0x140bcfc8 */

byte FUN_140bcfc8(char *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (param_1 == (char *)0x0) {
    return false;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    if (param_1[1] == -1) {
      if (param_1[3] == '\n') {
        return true;
      }
      FUN_1402a9fc(DAT_140bd05c,1,param_2,param_1,param_4);
      return true;
    }
  }
  else if ((param_2 < 3) || (cVar1 != '\x01')) {
    if (cVar1 == '\x02') {
      if ((((0xb < param_2) && (param_1[7] == '@')) && (param_1[8] == '\0')) &&
         ((param_1[10] == '\x06' && (param_1[0xb] == -0x80)))) {
        return true;
      }
      if ((param_1[1] < '\0') && (0x100 < param_2)) {
        return *DAT_140bd060 ^ 1;
      }
      return *DAT_140bd058 ^ 1;
    }
  }
  else if (param_1[1] == '5') {
    return param_1[2] == '\f';
  }
  return false;
}

