/* FUN_101140f4 @ 0x101140f4 */

undefined4 FUN_101140f4(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
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
  uVar4 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0xc) < uVar4) {
    uVar5 = *(undefined4 *)(uVar4 - 4);
    *(uint *)(param_1 + 0x10) = uVar4 - 4;
    *param_2 = uVar5;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  else {
    if ((param_3 | param_4) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar3);
      }
      InstructionSynchronizationBarrier(0xf);
      return 0xfffffff0;
    }
    iVar2 = FUN_10114f68(param_1 + 8,uVar3,param_1,param_3 | param_4,param_3,param_4);
    if (iVar2 == -0xb) {
      return 0xfffffff5;
    }
    *param_2 = *(undefined4 *)(*(int *)(DAT_1011415c + 8) + 0x14);
  }
  return 0;
}

