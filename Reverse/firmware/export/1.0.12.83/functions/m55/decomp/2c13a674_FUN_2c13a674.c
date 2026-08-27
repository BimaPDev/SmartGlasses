/* FUN_2c13a674 @ 0x2c13a674 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13a674(void)

{
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  
  iStack_c = *_DAT_2c13a6d0;
  if (*_DAT_2c13a6cc != '\0') {
    uStack_1c = *_DAT_2c13a6d4;
    uStack_18 = _DAT_2c13a6d4[1];
    uStack_14 = _DAT_2c13a6d4[2];
    uStack_10 = (undefined1)_DAT_2c13a6d4[3];
    FUN_2c139360(0x48,&uStack_1c,0xd);
  }
  if (*_DAT_2c13a6d0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

