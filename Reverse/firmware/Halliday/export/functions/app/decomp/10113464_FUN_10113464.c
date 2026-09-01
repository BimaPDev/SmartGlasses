/* FUN_10113464 @ 0x10113464 */

int FUN_10113464(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 == (undefined4 *)0x0) {
    if (param_3 != 0 || param_4 != 0) {
      iVar3 = FUN_10114f68(param_1 + 8,uVar4,param_1,0,param_3,param_4);
      if (iVar3 != 0) {
        return iVar3;
      }
      *param_2 = *(int *)(*(int *)(DAT_101134c0 + 8) + 0x14);
      return 0;
    }
    iVar3 = -0xc;
    *param_2 = 0;
  }
  else {
    *param_2 = (int)puVar5;
    *(undefined4 *)(param_1 + 0x18) = *puVar5;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar3 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar3;
}

