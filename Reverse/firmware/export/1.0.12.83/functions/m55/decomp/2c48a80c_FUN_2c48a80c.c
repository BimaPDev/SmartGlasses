/* FUN_2c48a80c @ 0x2c48a80c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a80c(void)

{
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  puStack_14 = &uStack_19;
  uStack_18 = 0x18;
  uStack_10 = 1;
  iStack_c = *_LAB_2c48a858;
  uStack_19 = 0;
  FUN_2c49737c(0x18,puStack_14,1,0);
  if (*_LAB_2c48a858 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

