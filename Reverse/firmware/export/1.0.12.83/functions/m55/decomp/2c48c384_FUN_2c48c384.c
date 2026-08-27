/* FUN_2c48c384 @ 0x2c48c384 */

void FUN_2c48c384(char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  int local_14;
  
  local_14 = *DAT_2c48c414;
  local_2c = *DAT_2c48c418;
  uStack_28 = DAT_2c48c418[1];
  local_24 = (undefined2)DAT_2c48c418[2];
  if (((param_1 == '\x01') && (iVar1 = FUN_2c66960c(param_2,&local_2c,10), iVar1 == 0)) &&
     (*DAT_2c48c41c == '\0')) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1f7,DAT_2c48c424,DAT_2c48c428,DAT_2c48c420);
  }
  if (*DAT_2c48c414 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

