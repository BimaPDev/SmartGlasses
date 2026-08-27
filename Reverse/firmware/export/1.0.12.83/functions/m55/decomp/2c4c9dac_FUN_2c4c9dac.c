/* FUN_2c4c9dac @ 0x2c4c9dac */

void FUN_2c4c9dac(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  puVar6 = DAT_2c4c9eb4;
  piVar3 = DAT_2c4c9ea0;
  puVar2 = DAT_2c4c9e9c;
  FUN_2c6741e8(0x43,DAT_2c4c9ea8,DAT_2c4c9ea4,*DAT_2c4c9eb4,*DAT_2c4c9e9c);
  puVar4 = DAT_2c4c9eac;
  uVar7 = extraout_r1;
  if (*piVar3 << 0x1f < 0) {
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      *DAT_2c4c9eac = 0x2c4c9de2;
      puVar4[1] = unaff_lr;
    }
    iVar5 = DAT_2c4c9eb0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(DAT_2c4c9eb0 + 0x25c) = *(uint *)(DAT_2c4c9eb0 + 0x25c) & 0xfffeffff;
    *(undefined4 *)(iVar5 + 0x2e0) = *puVar6;
    uVar7 = *(undefined4 *)(iVar5 + 0x2e8);
    *(undefined4 *)(iVar5 + 0x2e8) = 0x14;
    FUN_2c673b08(2,extraout_r1,0x14,uVar7);
    *(uint *)(iVar5 + 0x25c) = *(uint *)(iVar5 + 0x25c) | 0x10000;
    if (iVar9 == 0) {
      *DAT_2c4c9eac = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    uVar7 = extraout_r1_00;
    if (bVar1) {
      setBasePriority(iVar9);
    }
  }
  puVar4 = DAT_2c4c9eac;
  if (*piVar3 << 0x1e < 0) {
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      *DAT_2c4c9eac = 0x2c4c9e3e;
      puVar4[1] = unaff_lr;
    }
    iVar5 = DAT_2c4c9eb0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(DAT_2c4c9eb0 + 0x25c) = *(uint *)(DAT_2c4c9eb0 + 0x25c) & 0xfffdffff;
    *(undefined4 *)(iVar5 + 0x2e4) = *puVar2;
    uVar8 = *(undefined4 *)(iVar5 + 0x2ec);
    *(undefined4 *)(iVar5 + 0x2ec) = 0x14;
    FUN_2c673b08(2,uVar7,0x14,uVar8);
    *(uint *)(iVar5 + 0x25c) = *(uint *)(iVar5 + 0x25c) | 0x20000;
    if (iVar9 == 0) {
      *DAT_2c4c9eac = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar9);
    }
  }
  return;
}

