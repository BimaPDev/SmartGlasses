/* thunk_FUN_2c647824 @ 0x2c64421c */

char * thunk_FUN_2c647824(char *param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  FUN_2c643b90();
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
        return param_1;
      }
    }
  }
  if ((param_1 == (char *)0x0) || (*param_1 != -9)) {
    pcVar2 = (char *)0xfffffffc;
    FUN_2c643b70(param_1);
  }
  else {
    pcVar2 = (char *)FUN_2c64749c(param_1 + 0xc,param_2);
    if (pcVar2 == (char *)0x0) {
      FUN_2c646d24(param_1);
      FUN_2c643b94(param_1,param_2);
      return (char *)0x0;
    }
    FUN_2c643b98(param_1,param_2);
  }
  return pcVar2;
}

