/* FUN_2c4f8848 @ 0x2c4f8848 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f8848(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x111,_LAB_2c4f8894,_LAB_2c4f8890,_LAB_2c4f8888,_LAB_2c4f888c,0,*_LAB_2c4f8884);
  }
  *_LAB_2c4f8884 = (char)param_1;
  uVar2 = func_0x2c643a74();
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 == 0) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return uVar2;
      }
    }
  }
  FUN_2c643a14(0,0xfffffffa);
  return 0xfffffffa;
}

