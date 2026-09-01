/* FUN_101140ac @ 0x101140ac */

void FUN_101140ac(int param_1)

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
  while (iVar3 = FUN_1013cd00(param_1), iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xcc) = 0xfffffff5;
    FUN_1013cc6c();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1013cf62(param_1 + 0x10,2);
  FUN_10114a14(DAT_101140f0,uVar4);
  return;
}

