/* FUN_2c499498 @ 0x2c499498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c499498(char *param_1,undefined2 param_2,uint param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 unaff_r4;
  int iVar10;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  int iVar11;
  
  piVar3 = _LAB_2c499514;
  iVar8 = _LAB_2c499510;
  iVar10 = *(int *)(_LAB_2c499510 + 0x4b018);
  if ((((iVar10 == 0) || (*_LAB_2c499514 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    return param_1;
  }
  iVar11 = param_4;
  FUN_2c644044(*(undefined4 *)(_LAB_2c499510 + 0x4b038),0xffffffff,param_3,*_LAB_2c499514,param_4);
  sVar5 = (short)(param_3 >> 1);
  iVar6 = _LAB_2c49950c;
  if (iVar10 == iVar8) {
    iVar6 = iVar8;
  }
  if ((int)(param_3 << 0x1f) < 0) {
    sVar5 = sVar5 + 1;
  }
  *(short *)(iVar6 + 0x25804) = sVar5;
  *(short *)(iVar6 + 0x25800) = (short)((uint)param_1 >> 1);
  *(undefined2 *)(iVar6 + 0x25802) = param_2;
  *(short *)(iVar6 + 0x25806) = (short)param_4;
  *(undefined1 *)(iVar6 + 0x25808) = 1;
  FUN_2c644080(*(undefined4 *)(iVar8 + 0x4b038));
  pcVar4 = (char *)*piVar3;
  FUN_2c643b5c();
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = getCurrentExceptionNumber();
    uVar7 = uVar7 & 0x1ff;
  }
  if (uVar7 == 0) {
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = isIRQinterruptsEnabled();
    }
    if (iVar8 == 0) {
      iVar8 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar8 = getBasePriority();
      }
      if (iVar8 == 0) {
        software_interrupt(0);
        return pcVar4;
      }
    }
  }
  if ((pcVar4 == (char *)0x0) || (*pcVar4 != -10)) {
    FUN_2c643b3c(pcVar4,0xfffffffc);
    return (char *)0xfffffffc;
  }
  puVar9 = (ushort *)(pcVar4 + 0xc);
  do {
    ExclusiveAccess(puVar9);
    uVar1 = *puVar9;
    if (*(ushort *)(pcVar4 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c647278;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = uVar1 + 1;
LAB_2c647278:
  if (uVar1 < *(ushort *)(pcVar4 + 0xe)) {
    FUN_2c646d24(pcVar4);
    FUN_2c643b60(pcVar4,*(undefined2 *)(pcVar4 + 0xc));
    return (char *)0x0;
  }
  FUN_2c643b3c(pcVar4,0xffffffef,*(ushort *)(pcVar4 + 0xe),uVar1,iVar11,unaff_r4,unaff_r5,unaff_lr);
  return (char *)0xfffffffd;
}

