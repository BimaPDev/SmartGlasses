/* FUN_2c13d614 @ 0x2c13d614 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c13d614(void)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined4 in_r3;
  uint uVar7;
  
  iVar4 = func_0x2c13dc88(_DAT_2c13d648);
  if ((iVar4 == 0) && (cVar2 = *_DAT_2c13d64c, *_DAT_2c13d64c = cVar2 + -1, cVar2 != '\0')) {
    pcVar5 = (char *)*_DAT_2c13d654;
    func_0x2c13ee80();
    uVar7 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1ff;
    }
    if (uVar7 == 0) {
      iVar4 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar4 = isIRQinterruptsEnabled();
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          iVar4 = getBasePriority();
        }
        if (iVar4 == 0) {
          software_interrupt(0);
          return pcVar5;
        }
      }
    }
    func_0x2c13ee70(pcVar5,0xfffffffa);
    return (char *)0xfffffffa;
  }
  pcVar5 = (char *)*_DAT_2c13d650;
  if (pcVar5 == (char *)0x0) {
    return (char *)0x0;
  }
  func_0x2c13eee0();
  uVar7 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar7 = getCurrentExceptionNumber();
    uVar7 = uVar7 & 0x1ff;
  }
  if (uVar7 == 0) {
    iVar4 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return pcVar5;
      }
    }
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != -10)) {
    FUN_2c13eec0(pcVar5,0xfffffffc);
    return (char *)0xfffffffc;
  }
  puVar6 = (ushort *)(pcVar5 + 0xc);
  do {
    ExclusiveAccess(puVar6);
    uVar1 = *puVar6;
    if (*(ushort *)(pcVar5 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c141ab8;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar1 + 1;
LAB_2c141ab8:
  if (uVar1 < *(ushort *)(pcVar5 + 0xe)) {
    FUN_2c1415e0(pcVar5);
    func_0x2c13eee4(pcVar5,*(undefined2 *)(pcVar5 + 0xc));
    return (char *)0x0;
  }
  FUN_2c13eec0(pcVar5,0xffffffef,*(ushort *)(pcVar5 + 0xe),uVar1,in_r3);
  return (char *)0xfffffffd;
}

