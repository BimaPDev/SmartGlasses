/* FUN_2c541070 @ 0x2c541070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c541070(void)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  iStack_c = *_LAB_2c541110;
  FUN_2c540fe8(_LAB_2c541118,_LAB_2c541114,auStack_10,0);
  FUN_2c64c9c4(_LAB_2c541118,_LAB_2c54111c,_LAB_2c541120);
  FUN_2c540fe8(_LAB_2c541128,_LAB_2c541124,auStack_10);
  FUN_2c64c9c4(_LAB_2c541128,_LAB_2c54111c,_LAB_2c541120);
  FUN_2c540fe8(_LAB_2c541130,_LAB_2c54112c,auStack_10);
  FUN_2c64c9c4(_LAB_2c541130,_LAB_2c54111c,_LAB_2c541120);
  FUN_2c540fe8(_LAB_2c541138,_LAB_2c541134,auStack_10);
  FUN_2c64c9c4(_LAB_2c541138,_LAB_2c54111c,_LAB_2c541120);
  FUN_2c540fe8(_LAB_2c541140,_LAB_2c54113c,auStack_10);
  FUN_2c64c9c4(_LAB_2c541140,_LAB_2c54111c,_LAB_2c541120);
  FUN_2c540fe8(_LAB_2c541148,_LAB_2c541144,auStack_10);
  if (*_LAB_2c541110 == iStack_c) {
    if (DAT_2c6685dc == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_2c66ee38(2,_LAB_2c54111c,_LAB_2c541148,_LAB_2c541120);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

