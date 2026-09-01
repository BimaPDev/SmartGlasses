/* FUN_1006e384 @ 0x1006e384 */

undefined4 FUN_1006e384(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_1006e3e4;
  iVar3 = *(int *)(param_1 + 4);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar3 + 8) == '\x03') {
    uVar4 = 0;
    do {
      if ((1 << (uVar4 & 0xff) & param_2) != 0) {
        *(uint *)(iVar2 + uVar4 * 4) = *(uint *)(iVar2 + uVar4 * 4) | 0x10000;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 5);
  }
  else {
    *(uint *)(*(int *)(iVar3 + 4) + 0x210 + (uint)*(byte *)(iVar3 + 8) * 4) = param_2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar3 + 8) == '\x03') {
    FUN_1011598c(200);
  }
  return 0;
}

