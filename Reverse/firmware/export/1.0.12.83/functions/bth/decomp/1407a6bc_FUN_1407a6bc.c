/* FUN_1407a6bc @ 0x1407a6bc */

bool FUN_1407a6bc(char *param_1)

{
  bool bVar1;
  
  if (*(char *)(DAT_1407a714 + 0x16) == '\0') {
    if (*param_1 != ':') {
      return false;
    }
    if (param_1[1] != '\x05') {
      return false;
    }
    if (param_1[2] != '\0') {
      return false;
    }
    if (param_1[3] != '\0') {
      return false;
    }
    if (param_1[4] != '2') {
      return false;
    }
LAB_1407a706:
    bVar1 = param_1[5] == 'L';
  }
  else {
    if (((*param_1 == ':') && (param_1[1] == '\x05')) && (param_1[2] == '\0')) {
      if (param_1[3] != '\0') {
        return false;
      }
      if (param_1[4] == '3') goto LAB_1407a706;
    }
    bVar1 = false;
  }
  return bVar1;
}

