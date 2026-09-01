/* FUN_1009ec64 @ 0x1009ec64 */

undefined4 FUN_1009ec64(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar5 = (undefined4 *)FUN_1009eb2c();
  puVar3 = DAT_1009eccc;
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)*DAT_1009eccc;
    do {
      puVar9 = puVar6;
      puVar8 = puVar4;
      if (puVar9 == (undefined4 *)0x0) goto LAB_1009ec9c;
      puVar6 = (undefined4 *)*puVar9;
      puVar4 = puVar9;
    } while (puVar5 != puVar9);
    if (puVar8 == (undefined4 *)0x0) {
      puVar4 = DAT_1009eccc + 1;
      *DAT_1009eccc = puVar6;
      if (puVar5 == (undefined4 *)*puVar4) {
        puVar3[1] = puVar6;
      }
    }
    else {
      *puVar8 = puVar6;
      if (puVar5 == (undefined4 *)puVar3[1]) {
        puVar3[1] = puVar8;
      }
    }
    *puVar9 = 0;
LAB_1009ec9c:
    if (-1 < (int)puVar5[3]) {
      FUN_1005c270();
    }
    FUN_1012d1f4(puVar5);
    uVar7 = 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar10);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar7;
}

