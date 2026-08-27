/* FUN_2c63fdf0 @ 0x2c63fdf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63fdf0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  uint uStack_14;
  int iStack_c;
  
  iStack_c = *_LAB_2c63fe48;
  iVar1 = FUN_2c6411ac();
  if ((iVar1 != 0) && (iVar1 = FUN_2c63ed48(param_1,auStack_20,1), iVar1 != 0)) {
    if (uStack_14 != uStack_1c) {
      uStack_14 = uStack_14 - 1;
    }
    FUN_2c63f0a8(auStack_20,uStack_14 & 0xff,1);
  }
  if (*_LAB_2c63fe48 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

