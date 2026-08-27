/* FUN_2c498ce6 @ 0x2c498ce6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c498ce6(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if ((!in_ZR && in_NG == in_OV) || (0x3f < param_3)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x253,_LAB_2c498d68,_LAB_2c498d64,_LAB_2c498d60,param_2,param_3);
  }
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        return param_1 == 0;
      }
    }
  }
  iVar3 = FUN_2c498c6c(param_1,param_2,param_3);
  return iVar3 == 0;
}

