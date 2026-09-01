/* FUN_100c9c68 @ 0x100c9c68 */

int FUN_100c9c68(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 2) != '\x02') {
    iVar1 = DAT_100c9c88 + 0x104;
    if (*(short *)(DAT_100c9c88 + 0xdc) != 0) {
      iVar1 = DAT_100c9c88 + 0xe0;
    }
    return iVar1;
  }
  return DAT_100c9c8c;
}

