/* FUN_2c4989e4 @ 0x2c4989e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4989e4(void)

{
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c498aec;
  uStack_18 = _LAB_2c498ae8[1];
  uStack_1b = (undefined3)((uint)*_LAB_2c498ae8 >> 8);
  uStack_1c = 0x21;
  FUN_2c673bc8(&uStack_1c,2,0);
  FUN_2c4c0248(0x21,1);
  FUN_2c4c01d0(0x21);
  FUN_2c497510(1);
  uStack_1c = 0x4f;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x4f,1);
  FUN_2c4c01d0(0x4f);
  FUN_2c497510(1);
  uStack_1c = 0x6a;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x6a,1,0);
  FUN_2c4c0158(0x6a);
  FUN_2c497510(1);
  uStack_1c = 0x73;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x73,1,0);
  FUN_2c4c0158(0x73);
  FUN_2c497510(1);
  uStack_1c = 0x65;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x65,1,0);
  FUN_2c4c0158(0x65);
  FUN_2c497510(5);
  _uStack_1c = CONCAT31(uStack_1b,0x86);
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x86,1,0);
  FUN_2c4c0158(0x86);
  if (*_LAB_2c498aec == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

