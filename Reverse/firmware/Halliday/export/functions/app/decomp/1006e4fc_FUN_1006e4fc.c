/* FUN_1006e4fc @ 0x1006e4fc */

undefined4 FUN_1006e4fc(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  if (*(byte *)(iVar6 + 8) == 3) {
    puVar3 = (uint *)((DAT_1006e594 + param_2) * 4);
    uVar4 = DAT_1006e598;
    if (param_3 == 0x2000) goto LAB_1006e58e;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar6 + 4) + (param_2 + (uint)*(byte *)(iVar6 + 8) * 0x20) * 4);
    if (param_3 == 0x2000) {
LAB_1006e58e:
      uVar4 = 0;
      goto LAB_1006e52e;
    }
    uVar4 = 0x2100000;
  }
  if (param_3 == 0x4000) {
    if (param_4 == 0x20000) {
      uVar4 = uVar4 | 0x800000;
    }
    else {
      uVar4 = uVar4 | 0x600000;
    }
  }
  else if (param_4 == 0x20000) {
    uVar4 = uVar4 | 0x200000;
  }
  else if (param_4 != 0x40000) {
    uVar4 = uVar4 | 0x400000;
  }
LAB_1006e52e:
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
  uVar4 = uVar4 | *puVar3 & 0xfd0fffe0;
  *puVar3 = uVar4;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar6 + 8) == '\x03') {
    FUN_1011598c(200,uVar4,uVar5);
  }
  return 0;
}

