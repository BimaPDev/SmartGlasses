/* FUN_1011f206 @ 0x1011f206 */

undefined8
FUN_1011f206(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = **(int **)(param_1 + 0x10) + (param_2 + 1) * 0x100;
  if (param_2 < (uint)(*(int **)(param_1 + 0x10))[1]) {
    param_2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      param_2 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    *(undefined4 *)(iVar3 + 8) = param_3;
    *(undefined4 *)(iVar3 + 0x10) = param_4;
    *(undefined4 *)(iVar3 + 0x18) = param_5;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(param_2);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return CONCAT44(param_2,uVar4);
}

