/* thunk_FUN_10113fd0 @ 0x10130456 */

void thunk_FUN_10113fd0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
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
  iVar3 = FUN_1013cd00();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) != iVar3) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 8) = iVar3;
    FUN_1013cf62(param_1 + 0x10,2);
  }
  else {
    *(undefined4 *)(iVar3 + 0xcc) = 0;
    FUN_1013cc6c();
  }
  FUN_10114a14(DAT_10114018,uVar4);
  return;
}

