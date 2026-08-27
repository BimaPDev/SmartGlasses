/* FUN_2c4b6750 @ 0x2c4b6750 */

void FUN_2c4b6750(ushort param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_lr;
  
  puVar4 = DAT_2c4b67f8;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  iVar6 = param_3;
  if (iVar10 != 0x40) {
    iVar6 = 0x2c4b6768;
    *DAT_2c4b67f8 = 0x2c4b6768;
    puVar4[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar9 = 0;
  uVar5 = FUN_2c674688(param_2,param_2,iVar6,0x40);
  uVar7 = 0;
  bVar2 = false;
  puVar8 = DAT_2c4b67fc;
  do {
    uVar11 = 0x40000 << (uVar7 & 0xff);
    if ((uVar11 & uVar5) != 0) {
      uVar1 = *puVar8;
      if (param_3 == 0) {
        *puVar8 = ~param_1 & uVar1;
        if ((uVar1 != 0) && ((~param_1 & uVar1) == 0)) {
          uVar9 = uVar9 | uVar11;
          bVar2 = true;
        }
      }
      else if (uVar1 == 0) {
        uVar9 = uVar9 | uVar11;
        bVar2 = true;
        *puVar8 = param_1;
      }
      else {
        *puVar8 = uVar1 | param_1;
      }
    }
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar7 != 3);
  if (iVar10 == 0) {
    *DAT_2c4b67f8 = 0xffffffff;
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar10);
  }
  if ((bVar2) && (FUN_2c674488(uVar9,param_3), uVar9 != 0)) {
    FUN_2c6444fc(1);
    return;
  }
  return;
}

