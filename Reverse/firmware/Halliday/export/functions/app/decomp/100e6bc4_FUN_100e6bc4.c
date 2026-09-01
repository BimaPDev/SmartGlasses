/* FUN_100e6bc4 @ 0x100e6bc4 */

char * FUN_100e6bc4(char *param_1)

{
  int iVar1;
  
  if ((*DAT_100e6c10 == '\0') || (param_1 != DAT_100e6c10 + 0x28)) {
    if ((DAT_100e6c10[0x70] == '\0') || (param_1 != DAT_100e6c14)) {
      if ((DAT_100e6c10[0xe0] == '\0') || (param_1 != DAT_100e6c18)) {
        if ((DAT_100e6c10[0x150] == '\0') || (param_1 != DAT_100e6c1c)) {
          return (char *)0x0;
        }
        iVar1 = 0x150;
      }
      else {
        iVar1 = 0xe0;
      }
    }
    else {
      iVar1 = 0x70;
    }
  }
  else {
    iVar1 = 0;
  }
  return DAT_100e6c10 + iVar1;
}

