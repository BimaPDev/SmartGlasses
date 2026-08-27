/* FUN_2c46f264 @ 0x2c46f264 */

void FUN_2c46f264(void)

{
  int iVar1;
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  local_c = *DAT_2c46f2ac;
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    local_14 = *DAT_2c46f2b0;
    local_10 = (undefined2)DAT_2c46f2b0[1];
    local_e = (undefined1)((uint)DAT_2c46f2b0[1] >> 0x10);
    (**(code **)(iVar1 + 0x88))(&local_14);
  }
  if (*DAT_2c46f2ac == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

