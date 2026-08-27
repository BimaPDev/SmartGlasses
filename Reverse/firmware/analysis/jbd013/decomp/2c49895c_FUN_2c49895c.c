/* FUN_2c49895c @ 0x2c49895c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49895c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4989cc;
  FUN_2c4969dc(0x12,0x13,param_3,0);
  uStack_18 = _LAB_2c4989d0;
  uStack_10 = 8;
  uStack_14 = 0x8000003;
  func_0x2c673f98();
  iVar1 = FUN_2c674138(&uStack_18);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xfc,_LAB_2c4989e0,_LAB_2c4989dc,_LAB_2c4989d8,_LAB_2c4989d4,iVar1);
  }
  func_0x2c673f58(0x6b);
  if (*_LAB_2c4989cc == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

