/* FUN_10061f54 @ 0x10061f54 */

void FUN_10061f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10061fc4,DAT_10061fc0,DAT_10061fbc,0x107,0,param_2,param_3,param_4,param_4);
    FUN_10119dc2(DAT_10061fc8);
    FUN_1011a1f0(DAT_10061fbc,0x107,param_3,param_4);
  }
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar1 = (int *)(DAT_10061fcc + 4);
  piVar5 = (int *)*piVar1;
  if (piVar5 == piVar1) {
    piVar5 = (int *)0x0;
  }
  if (((int *)param_1 == piVar5) && (iVar4 = FUN_1011c1aa(piVar1,param_1), iVar4 != 0)) {
    FUN_10061ba4(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  }
  FUN_1006195c(param_1);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}

