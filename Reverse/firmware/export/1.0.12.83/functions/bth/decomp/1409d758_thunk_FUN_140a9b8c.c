/* thunk_FUN_140a9b8c @ 0x1409d758 */

void thunk_FUN_140a9b8c(void)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_140a9bdc;
  if (*DAT_140a9bdc != '\x02') {
    if (*DAT_140a9be0 != -1) {
      *DAT_140a9bdc = '\x02';
      FUN_140a97e4();
      return;
    }
    uVar2 = FUN_1403cd20(7);
    if (uVar2 == 1) {
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        FUN_140a97e4();
        return;
      }
    }
    else if ((1 < uVar2) && (*pcVar1 != '\x01')) {
      *pcVar1 = '\x01';
      FUN_140a97e4();
      return;
    }
  }
  return;
}

