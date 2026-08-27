/* FUN_2c63fe4c @ 0x2c63fe4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63fe4c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_20 [8];
  uint uStack_18;
  uint uStack_14;
  int iStack_c;
  
  iStack_c = *_LAB_2c63fea0;
  iVar1 = FUN_2c6411ac();
  if ((iVar1 != 0) && (iVar1 = FUN_2c63ed48(param_1,auStack_20,1), iVar1 != 0)) {
    if (uStack_14 != uStack_18) {
      uStack_14 = uStack_14 + 1;
    }
    FUN_2c63f0a8(auStack_20,uStack_14 & 0xff,1);
  }
  if (*_LAB_2c63fea0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

