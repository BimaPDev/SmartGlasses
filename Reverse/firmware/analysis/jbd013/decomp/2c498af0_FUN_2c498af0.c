/* FUN_2c498af0 @ 0x2c498af0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c498af0(void)

{
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c498c38;
  uStack_20 = *(undefined4 *)(_LAB_2c498c3c + 0x1c);
  uStack_18 = *(undefined4 *)(_LAB_2c498c3c + 0x18);
  uStack_1b = (undefined3)((uint)*(undefined4 *)(_LAB_2c498c3c + 0x14) >> 8);
  uStack_1c = 0x21;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x21,1,0);
  FUN_2c4c01d0(0x21);
  FUN_2c497510(1);
  uStack_1c = 0x4f;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x4f,1,0);
  FUN_2c4c01d0(0x4f);
  FUN_2c497510(1);
  uStack_20._0_1_ = 0x31;
  FUN_2c673bc8(&uStack_20,1);
  FUN_2c4c0248(0x31,0);
  FUN_2c497510(1);
  uStack_20 = CONCAT31(uStack_20._1_3_,0x20);
  FUN_2c673bc8(&uStack_20,1);
  FUN_2c4c0248(0x20,0);
  FUN_2c497510(1);
  uStack_1c = 0x65;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x65,1,0);
  FUN_2c4c01d0(0x65);
  FUN_2c497510(1);
  uStack_1c = 0x73;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x73,1,0);
  FUN_2c4c01d0(0x73);
  FUN_2c497510(1);
  uStack_1c = 0x6a;
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x6a,1,0);
  FUN_2c4c01d0(0x6a);
  FUN_2c497510(1);
  _uStack_1c = CONCAT31(uStack_1b,0x86);
  FUN_2c673bc8(&uStack_1c,2);
  FUN_2c4c0248(0x86,1,0);
  FUN_2c4c01d0(0x86);
  if (*_LAB_2c498c38 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

