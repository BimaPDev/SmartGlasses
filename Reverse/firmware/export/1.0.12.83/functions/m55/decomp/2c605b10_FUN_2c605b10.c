/* FUN_2c605b10 @ 0x2c605b10 */

void FUN_2c605b10(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  int local_c;
  
  local_c = *DAT_2c605b7c;
  FUN_2c6052c8(param_1,auStack_1c,auStack_14,0);
  iVar1 = FUN_2c62a64c(auStack_1c);
  if ((iVar1 != 0) || (iVar1 = FUN_2c62a64c(auStack_14), iVar1 != 0)) {
    iVar1 = FUN_2c62a64c(auStack_1c);
    if (iVar1 == 0) {
      iVar1 = FUN_2c62a64c(auStack_14);
    }
    else {
      FUN_2c6078f0(param_1,auStack_1c);
      iVar1 = FUN_2c62a64c(auStack_14);
    }
    if (iVar1 != 0) {
      FUN_2c6078f0(param_1,auStack_14);
    }
  }
  if (*DAT_2c605b7c != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

