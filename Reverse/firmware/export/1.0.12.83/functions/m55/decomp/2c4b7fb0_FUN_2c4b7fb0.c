/* FUN_2c4b7fb0 @ 0x2c4b7fb0 */

void FUN_2c4b7fb0(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  
  pbVar3 = DAT_2c4b802c;
  bVar1 = *DAT_2c4b802c;
  uVar6 = 1 << (param_1 & 0xff);
  uVar8 = (uint)bVar1 & ~uVar6;
  *DAT_2c4b802c = (byte)uVar8;
  puVar4 = DAT_2c4b8030;
  if (bVar1 == uVar8) {
    return;
  }
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *DAT_2c4b8030 = 0x2c4b7fd2;
    puVar4[1] = unaff_lr;
  }
  iVar5 = DAT_2c4b8034;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar6 = (uVar6 & 3) << 0x10;
  *(uint *)(DAT_2c4b8034 + 100) = *(uint *)(DAT_2c4b8034 + 100) & ~uVar6;
  *(uint *)(iVar5 + 0x60) = *(uint *)(iVar5 + 0x60) & ~uVar6;
  if (*pbVar3 == 0) {
    *(uint *)(iVar5 + 0x74) = *(uint *)(iVar5 + 0x74) & 0xfff87fff | 0x60000;
  }
  if (iVar7 == 0) {
    *DAT_2c4b8030 = 0xffffffff;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    bVar1 = *pbVar3;
  }
  else {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar7);
    }
    bVar1 = *pbVar3;
  }
  if (bVar1 != 0) {
    return;
  }
  FUN_2c674538();
  return;
}

