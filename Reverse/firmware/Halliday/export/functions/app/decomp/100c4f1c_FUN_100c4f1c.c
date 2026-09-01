/* FUN_100c4f1c @ 0x100c4f1c */

int FUN_100c4f1c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 < 0x10) {
    if (0xd < param_1) {
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
      iVar3 = *(int *)(DAT_100c4f18 + 0x138);
      *(undefined4 *)(DAT_100c4f18 + 0x138) = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 0x14) = 1;
        *(undefined2 *)(iVar3 + 0xc) = 0;
        FUN_100c1bc4(iVar3 + 8,0,param_3);
        return iVar3;
      }
      iVar3 = FUN_100c4dc0(1,0,param_3,param_4);
      return iVar3;
    }
  }
  else if (param_1 == 0x13) {
    iVar3 = FUN_1013270a(DAT_100c4f60);
    if (iVar3 != 0) {
      FUN_100c1bc4(iVar3 + 8,0);
      *(undefined1 *)(iVar3 + 0x14) = 1;
    }
    return iVar3;
  }
  iVar3 = FUN_100c4dc0(1,param_4,param_3,param_4);
  return iVar3;
}

