/* FUN_1006e490 @ 0x1006e490 */

undefined4 FUN_1006e490(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_1006e4f8;
  iVar2 = *(int *)(param_1 + 4);
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
  if (*(char *)(iVar2 + 8) == '\x03') {
    uVar4 = 0;
    do {
      if ((1 << (uVar4 & 0xff) & param_2) != 0) {
        *(uint *)(iVar3 + uVar4 * 4) = *(uint *)(iVar3 + uVar4 * 4) ^ 0x10000;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 5);
  }
  else {
    iVar3 = *(int *)(iVar2 + 4) + 0x200;
    *(uint *)(iVar3 + (uint)*(byte *)(iVar2 + 8) * 4) =
         param_2 ^ *(uint *)(iVar3 + (uint)*(byte *)(iVar2 + 8) * 4);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar2 + 8) == '\x03') {
    FUN_1011598c(200);
  }
  return 0;
}

