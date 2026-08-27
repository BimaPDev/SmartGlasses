/* FUN_14038908 @ 0x14038908 */

int FUN_14038908(void)

{
  int iVar1;
  
  if ((code *)*DAT_14038934 == (code *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)*DAT_14038934)();
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_1402a6e8(4,0x4c,DAT_14038940,DAT_1403893c,DAT_14038938);
  return iVar1;
}

