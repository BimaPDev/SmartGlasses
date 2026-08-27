/* FUN_2c007f9c @ 0x2c007f9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c007f9c(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c007b5c;
  uVar5 = (uint)*DAT_2c007fc0;
  if ((param_2 < 0x10 && 0xf < param_1) && (uVar5 < 3)) {
    if (uVar5 == 0) {
      uVar8 = 1;
      uVar9 = 0x4000;
      uVar10 = uVar8;
    }
    else if (uVar5 == 2) {
      uVar8 = 2;
      uVar9 = 0x800;
      uVar10 = 0x400;
    }
    else {
      uVar8 = 4;
      uVar9 = 0x8000;
      uVar10 = 0x10;
    }
    iVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar7 = getBasePriority();
    }
    if (iVar7 != 0x40) {
      *DAT_2c007b5c = 0x2c007af6;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    uVar6 = *(ushort *)(DAT_2c007b60 + uVar5 * 2) & 0xfffe;
    *(ushort *)(DAT_2c007b60 + uVar5 * 2) = uVar6;
    pbVar4 = DAT_2c007b68;
    iVar3 = DAT_2c007b64;
    if (uVar6 == 0) {
      *(undefined4 *)(DAT_2c007b64 + 0xa4) = uVar8;
      if (*pbVar4 == uVar5) {
        _DAT_50000064 = 0x40000;
      }
      else {
        *(undefined4 *)(iVar3 + 8) = uVar10;
        *(undefined4 *)(iVar3 + 8) = uVar9;
      }
    }
    if (iVar7 == 0) {
      *DAT_2c007b5c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar7);
    }
    return 0;
  }
  return uVar5;
}

