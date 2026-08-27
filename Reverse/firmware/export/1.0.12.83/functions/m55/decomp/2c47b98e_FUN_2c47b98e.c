/* FUN_2c47b98e @ 0x2c47b98e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c47b98e(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char in_ZR;
  bool in_CY;
  
  piVar2 = _LAB_2c47ba28;
  if (in_ZR == '\0') {
    if (in_CY) {
      if (param_1 == 0x69) {
        iVar3 = *_LAB_2c47ba28;
        *_LAB_2c47ba2c = 0;
        FUN_2c644958(iVar3);
        *piVar2 = 0;
        if ((code *)*_LAB_2c479a8c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c479a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (*(code *)*_LAB_2c479a8c)(0);
          return iVar3;
        }
        return 0;
      }
FUN_2c6741e8:
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (*DAT_2c6741f4)(0x712,_LAB_2c47ba34,_LAB_2c47ba30,param_1);
      return iVar3;
    }
    if (param_1 == 1) {
      iVar3 = *_LAB_2c47ba28;
      *_LAB_2c47ba2c = 2;
    }
    else {
      if (param_1 != 7) goto FUN_2c6741e8;
      iVar3 = *_LAB_2c47ba28;
      *_LAB_2c47ba2c = 3;
    }
    if (iVar3 == 0) {
      iVar3 = FUN_2c64418c(_LAB_2c47ba38,0,0);
      *piVar2 = iVar3;
    }
  }
  else {
    iVar3 = *_LAB_2c47ba28;
    *_LAB_2c47ba2c = 4;
    FUN_2c644958(iVar3);
    iVar3 = FUN_2c64418c(_LAB_2c47ba38,0);
    *piVar2 = iVar3;
  }
  FUN_2c643ae8();
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return iVar3;
      }
    }
  }
  FUN_2c643ad8(iVar3,0xfffffffa);
  return -6;
}

