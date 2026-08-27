/* FUN_2c0139f4 @ 0x2c0139f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c0139f4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_2c0138e0();
  puVar2 = DAT_2c0139d8;
  do {
  } while ((uint)(*(int *)(_DAT_2c013a10 + 0x50) - *(int *)(_DAT_2c013a10 + 0x50)) < 0x1e0);
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_2c0139d8 = 0x2c01394a;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar5 = *(int *)(DAT_2c0139dc + 0x50);
  do {
  } while (iVar5 == *(int *)(DAT_2c0139dc + 0x50));
  InstructionSynchronizationBarrier(0xf);
  iVar7 = *(int *)(DAT_2c0139e0 + 4);
  if (iVar3 == 0) {
    *DAT_2c0139d8 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  uVar6 = (iVar5 + 1) - *DAT_2c0139e4;
  if (uVar6 < 0x1e0) {
    return 1;
  }
  if (0x78000 < uVar6) {
    return 2;
  }
  uVar4 = FUN_2c013694();
  fVar8 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorUnsignedToFloat(-(iVar7 + *DAT_2c0139e8),(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (fVar8 / fVar9) * fVar10;
  if (fVar10 <= DAT_2c0139ec) {
    *DAT_2c0139f0 = fVar10;
  }
  else {
    *DAT_2c0139f0 = DAT_2c0139ec;
  }
  return 0;
}

