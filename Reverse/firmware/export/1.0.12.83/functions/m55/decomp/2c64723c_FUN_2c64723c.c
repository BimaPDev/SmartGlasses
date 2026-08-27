/* FUN_2c64723c @ 0x2c64723c */

char * FUN_2c64723c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  
  FUN_2c643b5c();
  uVar3 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 == 0) {
    iVar4 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  if ((param_1 == (char *)0x0) || (*param_1 != -10)) {
    FUN_2c643b3c(param_1,0xfffffffc);
    return (char *)0xfffffffc;
  }
  puVar5 = (ushort *)(param_1 + 0xc);
  do {
    ExclusiveAccess(puVar5);
    uVar1 = *puVar5;
    if (*(ushort *)(param_1 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c647278;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar1 + 1;
LAB_2c647278:
  if (uVar1 < *(ushort *)(param_1 + 0xe)) {
    FUN_2c646d24(param_1);
    FUN_2c643b60(param_1,*(undefined2 *)(param_1 + 0xc));
    return (char *)0x0;
  }
  FUN_2c643b3c(param_1,0xffffffef,*(ushort *)(param_1 + 0xe),uVar1,param_4);
  return (char *)0xfffffffd;
}

