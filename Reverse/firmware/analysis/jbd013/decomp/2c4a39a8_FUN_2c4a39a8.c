/* FUN_2c4a39a8 @ 0x2c4a39a8 */

char FUN_2c4a39a8(void)

{
  byte *pbVar1;
  code *pcVar2;
  
  pbVar1 = DAT_2c4a3a98;
  pcVar2 = *(code **)(*DAT_2c4a3a78 + 0x18);
  if (pcVar2 == (code *)0x0) {
    return -1;
  }
  if (*DAT_2c4a3a7c == '\0') {
    if (*DAT_2c4a3a80 != '\0') goto LAB_2c4a39f8;
    if (*DAT_2c4a3a84 != '\0') goto LAB_2c4a3a2e;
    if (((*DAT_2c4a3a88 == '\0') && (*DAT_2c4a3a8c == '\0')) && (*DAT_2c4a3a90 == '\0')) {
      (*pcVar2)(0);
      return '\0';
    }
  }
  else {
    if (*DAT_2c4a3a80 != '\0') {
LAB_2c4a39f8:
      if (*DAT_2c4a3a94 == '\x01') {
        (*pcVar2)(0x10);
        return '\x10';
      }
      if (*DAT_2c4a3a94 != '\x02') {
        return -1;
      }
      (*pcVar2)(0x20);
      return ' ';
    }
    if (*DAT_2c4a3a84 != '\0') {
LAB_2c4a3a2e:
      if (*DAT_2c4a3a98 < 0xf) {
        (*pcVar2)(*DAT_2c4a3a98 + 0x11);
        return *pbVar1 + 0x11;
      }
      goto LAB_2c4a3a48;
    }
    if (((*DAT_2c4a3a88 == '\0') && (*DAT_2c4a3a8c == '\0')) && (*DAT_2c4a3a90 == '\0')) {
      (*pcVar2)(1);
      return '\x01';
    }
  }
  if (*DAT_2c4a3a88 == '\0') {
    if (*DAT_2c4a3a90 != '\0') {
      (*pcVar2)(0x51);
      return 'Q';
    }
    if (*DAT_2c4a3a8c == '\0') {
      return -1;
    }
    (*pcVar2)(0x52);
    return 'R';
  }
LAB_2c4a3a48:
  (*pcVar2)(0xff);
  return -1;
}

