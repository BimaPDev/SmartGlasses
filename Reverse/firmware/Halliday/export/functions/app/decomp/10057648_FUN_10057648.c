/* FUN_10057648 @ 0x10057648 */

undefined2 FUN_10057648(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
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
  if (*DAT_10057680 != 0) {
    iVar4 = FUN_100573f4(param_1,param_1,param_3,DAT_10057680,param_4);
    if (iVar4 != 0) {
      uVar3 = *(undefined2 *)(iVar4 + 2);
      goto LAB_10057676;
    }
    FUN_10119dc2(DAT_10057684);
  }
  uVar3 = 0;
LAB_10057676:
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}

