/* FUN_2c141a00 @ 0x2c141a00 */

char * FUN_2c141a00(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  
  FUN_2c13eecc();
  uVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  if (((param_1 == (char *)0x0) || (*param_1 != -10)) || (param_2 != 0)) {
    FUN_2c13eec0(param_1,0xfffffffc);
    return (char *)0xfffffffc;
  }
  psVar3 = (short *)(param_1 + 0xc);
  do {
    ExclusiveAccess(psVar3);
    sVar1 = *psVar3;
    if (sVar1 == 0) {
      ClearExclusiveLocal();
      goto LAB_2c141a3a;
    }
    bVar2 = (bool)hasExclusiveAccess(psVar3);
  } while (!bVar2);
  *psVar3 = sVar1 + -1;
LAB_2c141a3a:
  if (sVar1 != 0) {
    FUN_2c13eed8(param_1,*(undefined2 *)(param_1 + 0xc),psVar3,sVar1,param_4);
    return (char *)0x0;
  }
  FUN_2c13eedc(param_1);
  return (char *)0xfffffffd;
}

