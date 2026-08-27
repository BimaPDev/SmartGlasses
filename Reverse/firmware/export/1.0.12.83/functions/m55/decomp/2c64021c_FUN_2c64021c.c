/* FUN_2c64021c @ 0x2c64021c */

void FUN_2c64021c(void)

{
  int iVar1;
  undefined1 auStack_20 [20];
  int local_c;
  
  local_c = *DAT_2c640254;
  iVar1 = FUN_2c63ed48(3,auStack_20,1,0);
  if (iVar1 != 0) {
    FUN_2c64046c(auStack_20);
  }
  if (*DAT_2c640254 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

