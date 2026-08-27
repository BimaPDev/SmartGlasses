/* FUN_2c4eec98 @ 0x2c4eec98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eec98(void)

{
  undefined4 uVar1;
  undefined4 auStack_34 [3];
  undefined4 uStack_28;
  undefined1 uStack_12;
  int iStack_c;
  
  iStack_c = *_LAB_2c4eecf8;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c6129e4(auStack_34);
  uStack_28 = 0xffffffff;
  uStack_12 = 2;
  auStack_34[0] = _LAB_2c4eecfc;
  uVar1 = FUN_2c4eda80();
  FUN_2c639a08(uVar1,0x104,200,200,auStack_34,_LAB_2c4eed00);
  if (*_LAB_2c4eecf8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

