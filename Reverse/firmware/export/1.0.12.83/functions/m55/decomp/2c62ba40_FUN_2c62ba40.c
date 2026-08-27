/* FUN_2c62ba40 @ 0x2c62ba40 */

undefined1 FUN_2c62ba40(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0x23) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      *param_1 = '\x01';
      return 1;
    }
    if (cVar1 == '\x01') {
      *param_1 = '\0';
      return 0;
    }
    if (cVar1 == '\x02') {
      *param_1 = '\0';
      return 1;
    }
  }
  else if (*param_1 == '\x01') {
    if (param_2 != 0x20) {
      return 1;
    }
    *param_1 = '\x02';
    return 1;
  }
  return 0;
}

