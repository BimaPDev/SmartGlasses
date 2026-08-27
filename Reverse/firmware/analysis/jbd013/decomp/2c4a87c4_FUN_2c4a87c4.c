/* FUN_2c4a87c4 @ 0x2c4a87c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a87c4(int param_1,undefined4 param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  ushort uStack_26;
  int iStack_24;
  
  iStack_24 = *_LAB_2c4a8888;
  FUN_2c4a94d0();
  uStack_26 = 0;
  iVar1 = FUN_2c4a8638(param_1,param_2,&uStack_26);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x7a,_LAB_2c4a8898,_LAB_2c4a8894,_LAB_2c4a8890,*(undefined1 *)(param_1 + 0xc),
          _LAB_2c4a888c,iVar1);
  }
  uStack_26 = param_3 & uStack_26 | param_4 & ~param_3;
  iVar1 = FUN_2c4a85ac(param_1,param_2);
  if (-1 < iVar1) {
    FUN_2c4a94e0();
    if (*_LAB_2c4a8888 == iStack_24) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x81,_LAB_2c4a8898,_LAB_2c4a8894,_LAB_2c4a88a4,*(undefined1 *)(param_1 + 0xc),
        _LAB_2c4a888c,iVar1);
}

