/* FUN_2c4a4414 @ 0x2c4a4414 */

void FUN_2c4a4414(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c4a4470;
  local_20 = 0x501;
  local_1c = DAT_2c4a4474;
  local_18 = 0;
  iVar1 = FUN_2c4bc9b4(0,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19b,DAT_2c4a4484,DAT_2c4a4480,DAT_2c4a447c,DAT_2c4a4478,0,iVar1);
  }
  if (*DAT_2c4a4470 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

