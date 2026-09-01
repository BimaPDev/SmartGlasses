/* FUN_1006d300 @ 0x1006d300 */

undefined4 FUN_1006d300(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(byte *)(param_2 + 0x18) - 1 < 2) {
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = (uint)*(byte *)(iVar5 + 0x88) << 0x1e;
    if (iVar4 == 0) {
      FUN_1011f06a(*(undefined4 *)(param_1 + 0x10));
      uVar3 = FUN_1006d204(param_1,iVar5 + 100,*(undefined1 *)(iVar5 + 0x7c),
                           *(undefined2 *)(iVar5 + 0x7e));
      *(byte *)(iVar5 + 0x88) = *(byte *)(iVar5 + 0x88) | 4;
    }
    else {
      iVar4 = FUN_1005457c(iVar5 + 0x44,param_2,0x24,iVar4,param_1,param_2);
      if (iVar4 == 0) {
        FUN_100a5b78(DAT_1006d3c4 | (DAT_1006d3b4 - DAT_1006d3b0) * 0x20 & 0xff00U,DAT_1006d3c0,
                     DAT_1006d3c8,*(byte *)(iVar5 + 0x88) & 1,(*(byte *)(iVar5 + 0x88) & 3) >> 1);
        uVar3 = 0xfffffff5;
      }
      else {
        uVar3 = 0;
      }
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  else {
    FUN_100a5b78(DAT_1006d3b8 | (DAT_1006d3b4 - DAT_1006d3b0) * 0x20 & 0xff00U,DAT_1006d3c0,
                 DAT_1006d3bc);
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

