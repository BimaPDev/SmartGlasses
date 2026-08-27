/* FUN_2c4a5c78 @ 0x2c4a5c78 */

void FUN_2c4a5c78(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c4a5cd4;
  local_18 = 0x501;
  local_14 = DAT_2c4a5cd0;
  uStack_10 = 0;
  iVar1 = FUN_2c4bc9b4(0,&local_18);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e0,DAT_2c4a5ce4,DAT_2c4a5ce0,DAT_2c4a5cdc,DAT_2c4a5cd8,iVar1);
  }
  if (*DAT_2c4a5cd4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

