/* FUN_100619bc @ 0x100619bc */

undefined8 FUN_100619bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  puVar1 = DAT_10061a00;
  uVar4 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    uVar4 = getBasePriority();
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if ((bVar5) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar2 = FUN_1011c1d0(*DAT_10061a00,DAT_10061a00[3],param_3,0x20,param_4);
  uVar3 = puVar1[4] + uVar2;
  uVar2 = puVar1[5] + (uint)CARRY4(puVar1[4],uVar2);
  bVar5 = uVar2 <= (uint)puVar1[7];
  if (puVar1[7] == uVar2) {
    bVar5 = uVar3 <= (uint)puVar1[6];
  }
  if (!bVar5) {
    puVar1[6] = uVar3;
    puVar1[7] = uVar2;
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return *(undefined8 *)(puVar1 + 6);
}

