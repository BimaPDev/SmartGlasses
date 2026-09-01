/* FUN_10057688 @ 0x10057688 */

int FUN_10057688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*DAT_100576d8 == 0) {
    iVar4 = -1;
  }
  else {
    iVar3 = FUN_100573f4(param_1,param_1,param_3,*DAT_100576d8,param_4);
    if (iVar3 == 0) {
      FUN_10119dc2(DAT_100576dc);
    }
    else if (*(short *)(iVar3 + 2) == 0) {
      iVar4 = FUN_1011aab0();
      iVar4 = iVar4 + (1 - *(int *)(iVar3 + 0x14));
      goto LAB_100576c6;
    }
    iVar4 = 0;
  }
LAB_100576c6:
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar4;
}

