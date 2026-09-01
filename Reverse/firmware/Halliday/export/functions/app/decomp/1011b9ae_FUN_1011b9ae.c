/* FUN_1011b9ae @ 0x1011b9ae */

undefined4
FUN_1011b9ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
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
  if (param_1[9] == 0) {
    if ((param_1 + 1 != (undefined4 *)0x0) && (iVar4 = param_1[3], 0 < iVar4)) {
      if (0x3ff < iVar4) {
        iVar4 = 0x400;
      }
      FUN_1011b86c(param_1 + 1,param_1 + 8,iVar4,0,param_4);
      if (param_1[9] != 0) {
        FUN_1006cf60(*param_1,param_1[8]);
        goto LAB_1011b9fc;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_1011b9fc:
    uVar3 = 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}

