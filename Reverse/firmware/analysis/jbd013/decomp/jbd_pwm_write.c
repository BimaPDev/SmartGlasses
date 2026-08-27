/* FUN_2c4a8704 @ 0x2c4a8704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a8704(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_2c4a94d0();
  iVar1 = FUN_2c4a85ac(param_1,param_2,param_3);
  if (-1 < iVar1) {
    FUN_2c4a94e0();
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x90,_LAB_2c4a8760,_LAB_2c4a875c,_LAB_2c4a8758,*(undefined1 *)(param_1 + 0xc),
        _LAB_2c4a8754,param_2,param_3,iVar1);
}

