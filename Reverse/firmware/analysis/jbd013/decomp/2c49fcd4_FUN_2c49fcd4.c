/* FUN_2c49fcd4 @ 0x2c49fcd4 */

char FUN_2c49fcd4(void)

{
  char cVar1;
  byte *pbVar2;
  code *pcVar3;
  
  pbVar2 = DAT_2c49fddc;
  pcVar3 = *(code **)(*DAT_2c49fdbc + 0x18);
  if (pcVar3 == (code *)0x0) {
    return -1;
  }
  if (*DAT_2c49fdc0 == '\0') {
    if (*DAT_2c49fdc4 != '\0') goto LAB_2c49fd24;
    if (*DAT_2c49fdc8 != '\0') goto LAB_2c49fd66;
    if ((*DAT_2c49fdcc == '\0') && (*DAT_2c49fdd0 == '\0')) {
      if (*DAT_2c49fdd4 == '\0') {
        (*pcVar3)(0);
        return '\0';
      }
    }
  }
  else {
    if (*DAT_2c49fdc4 != '\0') {
LAB_2c49fd24:
      cVar1 = *DAT_2c49fdd8;
      if (cVar1 == '\x01') {
        (*pcVar3)(0x10);
        return '\x10';
      }
      if (cVar1 == '\x02') {
        (*pcVar3)(0x20);
        return ' ';
      }
      if (cVar1 == '\x03') {
        (*pcVar3)(0x30);
        return '0';
      }
      if (cVar1 == '\x04') {
        (*pcVar3)(0x40);
        return '@';
      }
      goto LAB_2c49fd38;
    }
    if (*DAT_2c49fdc8 != '\0') {
LAB_2c49fd66:
      if (*DAT_2c49fddc < 0xf) {
        (*pcVar3)(*DAT_2c49fddc + 0x11);
        return *pbVar2 + 0x11;
      }
      goto LAB_2c49fd38;
    }
    if (((*DAT_2c49fdcc == '\0') && (*DAT_2c49fdd0 == '\0')) && (*DAT_2c49fdd4 == '\0')) {
      (*pcVar3)(1);
      return '\x01';
    }
  }
  if (*DAT_2c49fdcc == '\0') {
    if (*DAT_2c49fdd4 != '\0') {
      (*pcVar3)(0x51);
      return 'Q';
    }
    if (*DAT_2c49fdd0 != '\0') {
      (*pcVar3)(0x52);
      return 'R';
    }
    return -1;
  }
LAB_2c49fd38:
  (*pcVar3)(0xff);
  return -1;
}

