/* FUN_2c4f7230 @ 0x2c4f7230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f7230(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  if (iVar2 == 0) {
    iVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar2 = getBasePriority();
    }
    if (iVar2 == 0) {
      func_0x2c4be688();
      func_0x2c4b6c80();
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f72b8,_LAB_2c4f72b4,param_1,param_2,0);
    }
  }
  func_0x2c4be688();
  func_0x2c4b6c80();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x42,_LAB_2c4f72a8,_LAB_2c4f72a4,_LAB_2c4f72a0,*_LAB_2c4f729c,_LAB_2c4f729c[1]);
}

