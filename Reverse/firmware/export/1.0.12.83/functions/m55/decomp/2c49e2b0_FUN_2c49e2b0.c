/* FUN_2c49e2b0 @ 0x2c49e2b0 */

void FUN_2c49e2b0(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c49e30c;
  local_20 = 0x501;
  local_1c = DAT_2c49e310;
  local_18 = 0;
  iVar1 = FUN_2c4bc9b4(0,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19c,DAT_2c49e320,DAT_2c49e31c,DAT_2c49e318,LAB_2c49e314,0,iVar1);
  }
  if (*DAT_2c49e30c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

