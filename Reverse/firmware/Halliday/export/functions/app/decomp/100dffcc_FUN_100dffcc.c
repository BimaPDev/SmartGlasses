/* FUN_100dffcc @ 0x100dffcc */

int FUN_100dffcc(int param_1)

{
  int iVar1;
  
  if ((*(char *)(DAT_100dfffc + 0x62) == '\0') || (param_1 != DAT_100dfffc + 0x10)) {
    if ((*(char *)(DAT_100dfffc + 0x102) == '\0') || (param_1 != DAT_100e0000)) {
      return 0;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1 * 0xa0 + DAT_100dfffc;
}

