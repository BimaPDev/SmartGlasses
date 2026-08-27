/* FUN_2c4b7d70 @ 0x2c4b7d70 */

void FUN_2c4b7d70(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  bVar1 = *DAT_2c4b7e80;
  uVar9 = 1 << (param_2 & 0xff);
  uVar8 = uVar9 & 0xff | (uint)bVar1;
  *DAT_2c4b7e80 = (byte)uVar8;
  puVar3 = DAT_2c4b7e84;
  if (bVar1 == uVar8) {
    return;
  }
  DAT_2c4b7e84[param_2] = param_1;
  uVar8 = *puVar3;
  if (*puVar3 < puVar3[1]) {
    uVar8 = puVar3[1];
  }
  if (uVar8 < puVar3[2]) {
    uVar8 = puVar3[2];
  }
  if (uVar8 < param_1) {
    uVar8 = param_1;
  }
  if (DAT_2c4b7e88 < uVar8) {
    if (DAT_2c4b7e8c < uVar8) {
      iVar7 = FUN_2c674568();
      puVar4 = DAT_2c4b7e90;
      if (iVar7 == 0) {
        uVar6 = DAT_2c4b7e98 / uVar8;
        if (uVar6 < 2) {
          uVar10 = 0x80000;
          uVar6 = DAT_2c4b7e98;
        }
        else {
          iVar7 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            iVar7 = getBasePriority();
          }
          if (iVar7 != 0x40) {
            *DAT_2c4b7e90 = 0x2c4b7e2e;
            puVar4[1] = unaff_lr;
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(0x40);
          }
          *(uint *)(DAT_2c4b7e94 + 0x74) =
               (uVar6 - 2) * 0x40 & 0xff | *(uint *)(DAT_2c4b7e94 + 0x74) & 0xffffff3f;
          if (iVar7 == 0) {
            *DAT_2c4b7e90 = 0xffffffff;
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(iVar7);
          }
          uVar10 = 0;
          uVar6 = DAT_2c4b7e98 / uVar6;
        }
      }
      else {
        uVar10 = 0x100000;
        uVar6 = DAT_2c4b7e9c;
      }
      if (uVar6 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4b7ea4,DAT_2c4b7ea0,uVar8,uVar6);
      }
    }
    else {
      uVar10 = 0x200000;
      uVar6 = DAT_2c4b7e8c;
    }
  }
  else {
    uVar10 = 0x600000;
    uVar6 = DAT_2c4b7e88;
  }
  FUN_2c6747a8(uVar6);
  puVar4 = DAT_2c4b7e90;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *DAT_2c4b7e90 = 0x2c4b7dc8;
    puVar4[1] = unaff_lr;
  }
  iVar5 = DAT_2c4b7e94;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar9 = (uVar9 & 7) << 0x12;
  *(uint *)(DAT_2c4b7e94 + 0x74) = *(uint *)(DAT_2c4b7e94 + 0x74) & 0xff87ffff | uVar10;
  *(uint *)(iVar5 + 0x60) = *(uint *)(iVar5 + 0x60) | uVar9;
  uVar8 = *(uint *)(iVar5 + 100);
  *(uint *)(iVar5 + 100) = uVar9 | uVar8;
  if (iVar7 == 0) {
    uVar8 = 0xffffffff;
    *DAT_2c4b7e90 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  FUN_2c673b08(2,iVar7,uVar8,param_4);
  return;
}

