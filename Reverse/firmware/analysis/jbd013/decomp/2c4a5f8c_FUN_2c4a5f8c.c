/* FUN_2c4a5f8c @ 0x2c4a5f8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a5f8c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *FUN_2c4a5fda;
  uStack_10 = 0;
  iVar1 = FUN_2c4a5988(0,&uStack_10,param_3,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2c9,uRam2c4a5fec,uRam2c4a5fe8,uRam2c4a5fe0,uRam2c4a5fe4,0x2c9);
  }
  if (*FUN_2c4a5fda == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

