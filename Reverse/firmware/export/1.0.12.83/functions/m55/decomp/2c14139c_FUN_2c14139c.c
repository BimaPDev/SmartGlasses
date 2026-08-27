/* FUN_2c14139c @ 0x2c14139c */

char * FUN_2c14139c(char *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  FUN_2c13ee3c();
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
  if (((param_1 != (char *)0x0) && (*param_1 == -0xf)) && (-1 < (int)param_2)) {
    if (param_1[1] == '\x04') {
      FUN_2c13ee38(param_1,0xfffffffd);
      pcVar2 = (char *)0xfffffffd;
    }
    else {
      puVar5 = (uint *)(param_1 + 0x28);
      do {
        ExclusiveAccess(puVar5);
        pcVar2 = (char *)(*puVar5 | param_2);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = (uint)pcVar2;
      FUN_2c1415e0(param_1);
      FUN_2c13ee40(param_1,pcVar2);
    }
    return pcVar2;
  }
  FUN_2c13ee38(param_1,0xfffffffc);
  return (char *)0xfffffffc;
}

