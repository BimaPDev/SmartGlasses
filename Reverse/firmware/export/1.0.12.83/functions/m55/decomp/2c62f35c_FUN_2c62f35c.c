/* FUN_2c62f35c @ 0x2c62f35c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c62f35c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  *param_3 = *param_3 + param_1;
  func_0x2c629dd8();
  func_0x2c62f71c();
  pcVar3 = (char *)*_LAB_2c62f37c;
  FUN_2c643b5c();
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
        return pcVar3;
      }
    }
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != -10)) {
    FUN_2c643b3c(pcVar3,0xfffffffc);
    return (char *)0xfffffffc;
  }
  puVar6 = (ushort *)(pcVar3 + 0xc);
  do {
    ExclusiveAccess(puVar6);
    uVar1 = *puVar6;
    if (*(ushort *)(pcVar3 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c647278;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar2);
  *puVar6 = uVar1 + 1;
LAB_2c647278:
  if (uVar1 < *(ushort *)(pcVar3 + 0xe)) {
    FUN_2c646d24(pcVar3);
    FUN_2c643b60(pcVar3,*(undefined2 *)(pcVar3 + 0xc));
    return (char *)0x0;
  }
  FUN_2c643b3c(pcVar3,0xffffffef,*(ushort *)(pcVar3 + 0xe),uVar1,param_4);
  return (char *)0xfffffffd;
}

