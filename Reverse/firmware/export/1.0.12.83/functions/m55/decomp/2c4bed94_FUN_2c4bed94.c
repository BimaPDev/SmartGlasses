/* FUN_2c4bed94 @ 0x2c4bed94 */

void FUN_2c4bed94(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c [16];
  int local_c;
  
  local_c = *DAT_2c4bedd4;
  iVar1 = FUN_2c4be910(auStack_1c,param_1,0,1);
  if (iVar1 == 0) {
    FUN_2c4bea78(auStack_1c,param_1);
  }
  if (*DAT_2c4bedd4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

