/* FUN_2c5693e0 @ 0x2c5693e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c5693e0(undefined4 param_1)

{
  int iVar1;
  undefined1 uStack_15;
  int iStack_14;
  
  iStack_14 = *_LAB_2c569434;
  uStack_15 = 0;
  iVar1 = FUN_2c640164(param_1,&uStack_15,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c569440,0x85,_LAB_2c56943c,_LAB_2c569438,param_1);
  }
  if (*_LAB_2c569434 == iStack_14) {
    return uStack_15;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

