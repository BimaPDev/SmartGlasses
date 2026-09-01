/* FUN_1006e0bc @ 0x1006e0bc */

undefined4 FUN_1006e0bc(int param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar3 = DAT_1006e110;
  iVar4 = *(int *)(param_1 + 4);
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar4 + 8) == '\x03') {
    uVar5 = 0;
    *param_2 = 0;
    do {
      iVar4 = uVar5 * 4;
      uVar1 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      *param_2 = ((*(uint *)(iVar3 + iVar4) & 0x1ffff) >> 0x10) << uVar1 | *param_2;
    } while (uVar5 != 5);
  }
  else {
    *param_2 = *(uint *)(*(int *)(iVar4 + 4) + 0x230 + (uint)*(byte *)(iVar4 + 8) * 4);
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return 0;
}

