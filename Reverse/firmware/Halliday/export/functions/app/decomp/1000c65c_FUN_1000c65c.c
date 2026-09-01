/* FUN_1000c65c @ 0x1000c65c */

undefined4 FUN_1000c65c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *DAT_1000c688;
  FUN_100a35c0(DAT_1000c68c,param_2,param_3,0,param_1,iVar3,param_3);
  if (*DAT_1000c688 != iVar3) {
    FUN_1013cdc0();
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
  *(undefined1 *)(*DAT_100a3658 + 0x160) = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return 1;
}

