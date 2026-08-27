/* thunk_FUN_1409f124 @ 0x1403cc24 */

int thunk_FUN_1409f124(void)

{
  int iVar1;
  
  iVar1 = *DAT_1409f140;
  if (iVar1 == 0) {
    return *DAT_1409f148;
  }
  if (*DAT_1409f144 == '\x01') {
    iVar1 = iVar1 + 0x10;
  }
  else {
    iVar1 = iVar1 + 0x13c;
  }
  return iVar1;
}

