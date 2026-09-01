/* FUN_1011bee0 @ 0x1011bee0 */

undefined4 FUN_1011bee0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r2;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_1011bea2(iVar5);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar2 = *(char *)(iVar5 + 1) - param_2;
    iVar6 = iVar5 + param_2 * 0x24;
    *(bool *)(iVar6 + 0x14) = iVar2 == 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar3 = 0;
    if (*(char *)(iVar6 + 0x14) != '\0') {
      uVar4 = extraout_r2 | (int)extraout_r2 >> 0x1f;
      uVar3 = FUN_1011401c(param_2 * 0x24 + 0x18 + iVar5,iVar2,uVar4,(int)uVar4 >> 0x1f,param_4);
      *(undefined1 *)(iVar6 + 0x14) = 0;
    }
  }
  return uVar3;
}

