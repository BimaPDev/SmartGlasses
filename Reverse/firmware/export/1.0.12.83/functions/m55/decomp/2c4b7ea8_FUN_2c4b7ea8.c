/* FUN_2c4b7ea8 @ 0x2c4b7ea8 */

void FUN_2c4b7ea8(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_lr;
  
  pbVar3 = DAT_2c4b7f20;
  uVar8 = 1 << (param_1 & 0xff);
  bVar1 = *DAT_2c4b7f20;
  *(undefined4 *)(DAT_2c4b7f24 + param_1 * 4) = 0;
  uVar7 = (uint)bVar1 & ~uVar8;
  *pbVar3 = (byte)uVar7;
  puVar4 = DAT_2c4b7f28;
  if (bVar1 != uVar7) {
    iVar6 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      *DAT_2c4b7f28 = 0x2c4b7ed0;
      puVar4[1] = unaff_lr;
    }
    iVar5 = DAT_2c4b7f2c;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    uVar7 = (uVar8 & 7) << 0x12;
    *(uint *)(DAT_2c4b7f2c + 100) = *(uint *)(DAT_2c4b7f2c + 100) & ~uVar7;
    *(uint *)(iVar5 + 0x60) = *(uint *)(iVar5 + 0x60) & ~uVar7;
    if (*pbVar3 == 0) {
      *(uint *)(iVar5 + 0x74) = *(uint *)(iVar5 + 0x74) & 0xff87ffff | 0x600000;
    }
    if (iVar6 == 0) {
      *DAT_2c4b7f28 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar6);
    }
    if (*pbVar3 == 0) {
      FUN_2c6747a8();
      return;
    }
  }
  return;
}

