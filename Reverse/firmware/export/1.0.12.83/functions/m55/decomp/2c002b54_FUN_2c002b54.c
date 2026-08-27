/* FUN_2c002b54 @ 0x2c002b54 */

void FUN_2c002b54(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c002bc8;
  if (param_1 < 5) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      *DAT_2c002bc8 = 0x2c002b66;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if ((param_1 == 4) ||
       (uVar4 = (uint)*DAT_2c002bcc & ~(1 << (param_1 & 0xff)), *DAT_2c002bcc = (byte)uVar4,
       uVar4 == 0)) {
      uVar4 = DAT_2c002bdc;
      iVar3 = DAT_2c002bd0;
      uVar7 = *(uint *)(DAT_2c002bd0 + 0xe4);
      uVar5 = DAT_2c002bd8 | uVar7;
      *(uint *)(DAT_2c002bd0 + 0xe4) = DAT_2c002bd4 | uVar7;
      *(uint *)(iVar3 + 0xe4) = uVar5;
      uVar5 = DAT_2c002be0;
      *(uint *)(iVar3 + 0xe4) = uVar4 | uVar7;
      *(uint *)(iVar3 + 0xe4) = uVar5 | uVar7;
      *(uint *)(iVar3 + 0xe4) = uVar7 | DAT_2c002be4;
    }
    if (iVar6 == 0) {
      *DAT_2c002bc8 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    return;
  }
  return;
}

