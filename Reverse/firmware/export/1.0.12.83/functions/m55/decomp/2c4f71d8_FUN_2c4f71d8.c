/* FUN_2c4f71d8 @ 0x2c4f71d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f71d8(void)

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
      func_0x2c4b6c80();
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f722c,_LAB_2c4f7228,0);
    }
  }
  func_0x2c4b6c80();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x51,_LAB_2c4f7224,_LAB_2c4f7220,_LAB_2c4f721c,*_LAB_2c4f7218,_LAB_2c4f7218[1]);
}

