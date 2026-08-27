/* FUN_2c4ad4fc @ 0x2c4ad4fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ad4fc(void)

{
  int iVar1;
  uint uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c4ad55c;
  func_0x2c002750();
  func_0x2c0021cc();
  func_0x2c0021e4();
  FUN_2c6444fc(2);
  func_0x2c0021f4();
  iVar1 = FUN_2c49ab00(0x30000000,&uStack_10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4ad568,_LAB_2c4ad564,iVar1);
  }
  func_0x2c6745e8(_DAT_2c4ad560,uStack_10 | 1);
  if (*_LAB_2c4ad55c == iStack_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

