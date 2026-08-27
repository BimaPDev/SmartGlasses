/* FUN_2c4988d8 @ 0x2c4988d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4988d8(void)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c498954;
  uStack_20 = *_LAB_2c498958;
  uStack_1c = _LAB_2c498958[1];
  uStack_18 = _LAB_2c498958[2];
  uStack_14 = _LAB_2c498958[3];
  uStack_10 = _LAB_2c498958[4];
  FUN_2c673bc8(&uStack_20,5);
  FUN_2c4c0248(0x46,1,0);
  FUN_2c4c0158(0x46);
  FUN_2c4c0248(0x77,1,0);
  FUN_2c4c0158(0x77);
  FUN_2c4c0248(0x74,1,0);
  FUN_2c4c0158(0x74);
  FUN_2c4c0248(0x75,1,0);
  FUN_2c4c0158(0x75);
  if (*_LAB_2c498954 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

