/* FUN_101134c4 @ 0x101134c4 */

void FUN_101134c4(code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (code *)0x0) {
    FUN_10119dc2(DAT_1011351c,DAT_10113518,DAT_10113514,0x37,0,param_2,param_3,param_4,param_4);
    FUN_10119dc2(DAT_10113520);
    FUN_1011a1f0(DAT_10113514,0x37,param_3,param_4);
  }
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
  for (iVar3 = *(int *)(DAT_10113524 + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x74)) {
    (*param_1)(iVar3,param_2);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}

