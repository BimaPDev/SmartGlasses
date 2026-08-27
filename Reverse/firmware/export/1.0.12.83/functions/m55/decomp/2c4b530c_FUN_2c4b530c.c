/* FUN_2c4b530c @ 0x2c4b530c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b530c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4b53a0;
  func_0x2c0028fc();
  func_0x2c673aa8();
  func_0x2c673f08();
  FUN_2c6444fc(2);
  func_0x2c002184();
  iVar1 = FUN_2c49ae94(_LAB_2c4b53a4,_LAB_2c4b53a8 - _LAB_2c4b53a4,0,0,&uStack_18);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4b53b4,_LAB_2c4b53b0,iVar1,iVar1);
  }
  iVar1 = func_0x2c4bd720(0,param_1,param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4b53bc,iVar1);
  }
  iVar1 = func_0x2c4bd740();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4b53b8,iVar1);
  }
  func_0x2c4b53ec();
  func_0x2c673a18(_LAB_2c4b53ac,uStack_18 | 1);
  if (*_LAB_2c4b53a0 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

