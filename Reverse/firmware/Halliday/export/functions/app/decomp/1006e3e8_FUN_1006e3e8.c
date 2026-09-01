/* FUN_1006e3e8 @ 0x1006e3e8 */

undefined4 FUN_1006e3e8(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  bVar1 = *(byte *)(iVar7 + 8);
  if ((int)(param_3 << 0x16) < 0) {
    if ((int)(param_3 << 0x14) < 0) {
      FUN_1006e384(param_1,1 << (param_2 & 0xff));
    }
    if ((int)(param_3 << 0x15) < 0) {
      FUN_1006e320(param_1,1 << (param_2 & 0xff));
    }
    uVar6 = 0x40;
  }
  else {
    uVar6 = 0;
    if ((param_3 & 0x100) != 0) {
      uVar6 = 0x80;
    }
  }
  if ((int)(param_3 << 0x1b) < 0) {
    uVar6 = uVar6 | 0x800;
  }
  if ((int)(param_3 << 0x1a) < 0) {
    uVar6 = uVar6 | 0x200;
  }
  if ((int)(param_3 << 0xc) < 0) {
    uVar6 = uVar6 | 0x20;
  }
  uVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar4 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar7 + 8) == '\x03') {
    puVar5 = (uint *)((DAT_1006e48c + param_2) * 4);
  }
  else {
    puVar5 = (uint *)(*(int *)(iVar7 + 4) + (param_2 + (uint)bVar1 * 0x20) * 4);
  }
  *puVar5 = uVar6 | *puVar5 & 0xfffff000;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar7 + 8) == '\x03') {
    FUN_1011598c(200);
  }
  return 0;
}

