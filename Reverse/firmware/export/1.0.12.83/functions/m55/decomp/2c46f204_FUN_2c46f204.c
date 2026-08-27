/* FUN_2c46f204 @ 0x2c46f204 */

void FUN_2c46f204(void)

{
  int iVar1;
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  local_c = *DAT_2c46f248;
  iVar1 = FUN_2c478b68();
  if (iVar1 != 0) {
    local_14 = *DAT_2c46f24c;
    local_10 = (undefined2)DAT_2c46f24c[1];
    local_e = (undefined1)((uint)DAT_2c46f24c[1] >> 0x10);
    (**(code **)(iVar1 + 0x74))(&local_14);
  }
  if (*DAT_2c46f248 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

