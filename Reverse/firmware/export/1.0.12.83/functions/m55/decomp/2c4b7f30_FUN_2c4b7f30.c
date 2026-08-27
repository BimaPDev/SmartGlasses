/* FUN_2c4b7f30 @ 0x2c4b7f30 */

void FUN_2c4b7f30(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  bVar1 = *DAT_2c4b7fa0;
  uVar7 = 1 << (param_2 & 0xff);
  uVar6 = uVar7 & 0xff | (uint)bVar1;
  *DAT_2c4b7fa0 = (byte)uVar6;
  if (bVar1 != uVar6) {
    FUN_2c674538(DAT_2c4b7fa4);
    puVar3 = DAT_2c4b7fa8;
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c4b7fa8 = 0x2c4b7f5a;
      puVar3[1] = unaff_lr;
    }
    iVar4 = DAT_2c4b7fac;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    uVar7 = (uVar7 & 3) << 0x10;
    *(uint *)(DAT_2c4b7fac + 0x74) = *(uint *)(DAT_2c4b7fac + 0x74) & 0xfff87fff | 0x20000;
    *(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) | uVar7;
    uVar6 = *(uint *)(iVar4 + 100);
    *(uint *)(iVar4 + 100) = uVar7 | uVar6;
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      *DAT_2c4b7fa8 = 0xffffffff;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
    FUN_2c673b08(2,iVar5,uVar6,param_4);
    return;
  }
  return;
}

