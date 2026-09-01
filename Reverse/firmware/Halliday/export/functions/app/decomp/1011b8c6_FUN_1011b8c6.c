/* FUN_1011b8c6 @ 0x1011b8c6 */

uint FUN_1011b8c6(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0xc);
    if ((param_3 <= uVar5) && (param_3 <= uVar5 - *(int *)(param_1 + 8))) {
      if (uVar5 <= *(uint *)(param_1 + 4)) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      iVar4 = *(int *)(param_1 + 4);
      uVar7 = uVar5 - iVar4;
      iVar2 = *(int *)(param_1 + 0x10) + iVar4;
      if (uVar7 < param_3) {
        iVar6 = (iVar4 - uVar5) + param_3;
        FUN_1011ea40(iVar2,param_2,uVar7,iVar4 - uVar5,param_1,param_2,param_3);
        FUN_1011ea40(*(undefined4 *)(param_1 + 0x10),param_2 + uVar7,iVar6);
        *(int *)(param_1 + 4) = iVar6;
      }
      else {
        FUN_1011ea40(iVar2);
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
      }
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar3);
      }
      InstructionSynchronizationBarrier(0xf);
      return param_3;
    }
  }
  return 0;
}

