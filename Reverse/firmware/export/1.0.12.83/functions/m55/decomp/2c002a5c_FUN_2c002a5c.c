/* FUN_2c002a5c @ 0x2c002a5c */

void FUN_2c002a5c(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c002ad0;
  if (param_1 < 6) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      *DAT_2c002ad0 = 0x2c002a6e;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if ((param_1 == 5) ||
       (uVar4 = (uint)*DAT_2c002ad4 & ~(1 << (param_1 & 0xff)), *DAT_2c002ad4 = (byte)uVar4,
       uVar4 == 0)) {
      uVar4 = DAT_2c002ae4;
      iVar3 = DAT_2c002ad8;
      uVar7 = *(uint *)(DAT_2c002ad8 + 0xbc);
      uVar5 = DAT_2c002ae0 | uVar7;
      *(uint *)(DAT_2c002ad8 + 0xbc) = DAT_2c002adc | uVar7;
      *(uint *)(iVar3 + 0xbc) = uVar5;
      uVar5 = DAT_2c002ae8;
      *(uint *)(iVar3 + 0xbc) = uVar4 | uVar7;
      *(uint *)(iVar3 + 0xbc) = uVar5 | uVar7;
      *(uint *)(iVar3 + 0xbc) = uVar7 | DAT_2c002aec;
    }
    if (iVar6 == 0) {
      *DAT_2c002ad0 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    return;
  }
  return;
}

