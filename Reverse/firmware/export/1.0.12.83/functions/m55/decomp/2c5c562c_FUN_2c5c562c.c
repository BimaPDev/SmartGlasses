/* FUN_2c5c562c @ 0x2c5c562c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c562c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *_FUN_2c5c5660;
  uVar1 = FUN_2c5c685c();
  FUN_2c5c6a68(param_1,uVar1);
  if (*_FUN_2c5c5660 == iVar2) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

