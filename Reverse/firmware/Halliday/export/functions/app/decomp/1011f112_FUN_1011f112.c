/* FUN_1011f112 @ 0x1011f112 */

undefined4 FUN_1011f112(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  
  piVar6 = *(int **)(param_1 + 0x10);
  iVar3 = param_2 + 1;
  puVar4 = (uint *)*piVar6;
  if (param_2 < (uint)piVar6[1]) {
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar5 = 1 << (param_2 & 0xff);
    uVar2 = 1 << (param_2 + 0x10 & 0xff);
    uVar8 = uVar5 | uVar2;
    *puVar4 = uVar8;
    puVar4[1] = puVar4[1] & ~uVar8;
    uVar8 = (uint)*(byte *)((int)piVar6 + param_2 * 0xc + 0x12);
    if ((int)(uVar8 << 0x1f) < 0) {
      puVar4[1] = uVar5 | puVar4[1];
      if ((int)(uVar8 << 0x1e) < 0) {
        puVar4[1] = uVar2 | puVar4[1];
      }
    }
    if ((int)(puVar4[iVar3 * 0x40] << 0xf) < 0) {
      if ((puVar4[iVar3 * 0x40] & 0x1f00) == 0) {
        puVar4[iVar3 * 0x40 + 5] = puVar4[iVar3 * 0x40 + 2];
      }
      else {
        puVar4[iVar3 * 0x40 + 3] = puVar4[iVar3 * 0x40 + 4];
      }
    }
    puVar4[iVar3 * 0x40 + 1] = puVar4[iVar3 * 0x40 + 1] | 1;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar7);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffea;
  }
  return uVar7;
}

