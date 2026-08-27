/* FUN_2c4ee104 @ 0x2c4ee104 */

void FUN_2c4ee104(void)

{
  undefined4 uVar1;
  undefined1 auStack_64 [3];
  undefined1 local_61;
  undefined4 local_60;
  int local_c;
  
  local_c = *DAT_2c4ee160;
  uVar1 = FUN_2c4eda80();
  FUN_2c639778(uVar1,0xff000000,0xff);
  FUN_2c61314c(auStack_64);
  local_61 = 0xff;
  local_60 = 0xffffffff;
  uVar1 = FUN_2c4eda80();
  FUN_2c639940(uVar1,0xda,0xa4,200,0x96,auStack_64);
  if (*DAT_2c4ee160 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

