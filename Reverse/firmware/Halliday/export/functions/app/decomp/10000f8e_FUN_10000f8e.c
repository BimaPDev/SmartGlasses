/* FUN_10000f8e @ 0x10000f8e */

void FUN_10000f8e(void)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  puVar4 = DAT_100010d8;
  puVar3 = DAT_100010d4;
  *DAT_100010d4 = 0x40000000;
  puVar9 = DAT_10001110;
  *puVar4 = DAT_100010dc;
  *puVar4 = *puVar4 | 0xfc00;
  *puVar9 = 0;
  puVar5 = DAT_100010e0;
  uVar11 = *puVar3;
  uVar12 = *puVar4;
  *DAT_100010e0 = *DAT_100010e0 | 4;
  iVar10 = FUN_100007b0();
  if (iVar10 == 0) {
    *DAT_100010e4 = DAT_1000110c;
  }
  else {
    *DAT_100010e4 = 0;
  }
  puVar6 = DAT_100010ec;
  *DAT_100010e8 = *DAT_100010e8 & 0xfffffcf0 | 0x301;
  uVar13 = *puVar6;
  FUN_10000f4c(0x3b6);
  uVar16 = *DAT_100010f0;
  *DAT_100010f0 = uVar16 & 0xffffff00 | 0x88;
  FUN_100007c0(3);
  *puVar5 = 7;
  iVar10 = FUN_10000f80();
  puVar7 = DAT_100010f8;
  if (iVar10 != 0) {
    *DAT_100010f8 = DAT_100010f4;
    puVar7[1] = 0xb5;
  }
  puVar7 = DAT_10001100;
  puVar8 = DAT_100010fc;
  uVar14 = *DAT_100010fc;
  uVar15 = *DAT_10001100;
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar10 = FUN_10000f80();
  if (iVar10 == 0) {
    DataSynchronizationBarrier(0xf);
    WaitForInterrupt();
  }
  else {
    FUN_10001848();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  enableIRQinterrupts();
  FUN_10000be4();
  *puVar5 = 5;
  *puVar8 = uVar14;
  *puVar7 = uVar15;
  *puVar6 = uVar13;
  *DAT_100010f0 = uVar16;
  FUN_100007c0(0x1e);
  iVar10 = FUN_100007b0();
  if (iVar10 == 0) {
    uVar13 = 0x203;
  }
  else {
    uVar13 = 3;
  }
  *DAT_100010e4 = uVar13;
  *puVar9 = 1;
  *puVar3 = uVar11 | 0x110;
  *puVar4 = uVar12 | 0x40000;
  if ((int)(*puVar8 << 0x1b) < 0) {
    *puVar8 = *puVar8 | 1;
  }
  *(undefined4 *)(DAT_10001108 + 0x3f8) = *DAT_10001104;
  return;
}

