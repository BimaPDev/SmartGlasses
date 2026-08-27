/* FUN_2c4a7d40 @ 0x2c4a7d40 */

char FUN_2c4a7d40(void)

{
  byte *pbVar1;
  code *pcVar2;
  
  pbVar1 = DAT_2c4a7e30;
  pcVar2 = *(code **)(*DAT_2c4a7e10 + 0x18);
  if (pcVar2 == (code *)0x0) {
    return -1;
  }
  if (*DAT_2c4a7e14 == '\0') {
    if (*DAT_2c4a7e18 != '\0') goto LAB_2c4a7d90;
    if (*DAT_2c4a7e1c != '\0') goto LAB_2c4a7dc6;
    if (((*DAT_2c4a7e20 == '\0') && (*DAT_2c4a7e24 == '\0')) && (*DAT_2c4a7e28 == '\0')) {
      (*pcVar2)(0);
      return '\0';
    }
  }
  else {
    if (*DAT_2c4a7e18 != '\0') {
LAB_2c4a7d90:
      if (*DAT_2c4a7e2c == '\x01') {
        (*pcVar2)(0x10);
        return '\x10';
      }
      if (*DAT_2c4a7e2c != '\x02') {
        return -1;
      }
      (*pcVar2)(0x20);
      return ' ';
    }
    if (*DAT_2c4a7e1c != '\0') {
LAB_2c4a7dc6:
      if (*DAT_2c4a7e30 < 0xf) {
        (*pcVar2)(*DAT_2c4a7e30 + 0x11);
        return *pbVar1 + 0x11;
      }
      goto LAB_2c4a7de0;
    }
    if (((*DAT_2c4a7e20 == '\0') && (*DAT_2c4a7e24 == '\0')) && (*DAT_2c4a7e28 == '\0')) {
      (*pcVar2)(1);
      return '\x01';
    }
  }
  if (*DAT_2c4a7e20 == '\0') {
    if (*DAT_2c4a7e28 != '\0') {
      (*pcVar2)(0x51);
      return 'Q';
    }
    if (*DAT_2c4a7e24 == '\0') {
      return -1;
    }
    (*pcVar2)(0x52);
    return 'R';
  }
LAB_2c4a7de0:
  (*pcVar2)(0xff);
  return -1;
}

