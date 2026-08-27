/* FUN_2c00796c @ 0x2c00796c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c00796c(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c007a68;
  if (param_1 == 0) {
    uVar10 = 1;
    uVar8 = 1;
    uVar6 = 0x4000;
  }
  else if (param_1 == 2) {
    uVar10 = 2;
    uVar8 = 0x400;
    uVar6 = 0x800;
  }
  else {
    uVar10 = 4;
    uVar8 = 0x10;
    uVar6 = 0x8000;
  }
  iVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *DAT_2c007a68 = 0x2c0079a2;
    puVar2[1] = unaff_lr;
  }
  iVar4 = DAT_2c007a74;
  pbVar3 = DAT_2c007a6c;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar7 = *(ushort *)(DAT_2c007a74 + param_1 * 2);
  if ((uVar7 == 0) || (param_2 == 0xb)) {
    if (*DAT_2c007a6c == param_1) {
      _DAT_50000060 = 0x40000;
    }
    else {
      *(undefined4 *)(DAT_2c007a70 + 4) = uVar6;
    }
    FUN_2c013884(0x14);
    if (param_2 == 0xb) goto LAB_2c0079e0;
    uVar7 = *(ushort *)(iVar4 + param_1 * 2);
  }
  *(ushort *)(iVar4 + param_1 * 2) = (ushort)(1 << (param_2 & 0xff)) | uVar7;
LAB_2c0079e0:
  if (iVar9 == 0) {
    *DAT_2c007a68 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar9);
  }
  iVar4 = FUN_2c013858();
  iVar9 = DAT_2c007a70;
  do {
    if (*pbVar3 == param_1) {
      if (_DAT_50000060 << 0xe < 0) goto LAB_2c007a22;
    }
    else if ((*(uint *)(iVar9 + 4) & uVar8) != 0) goto LAB_2c007a3e;
    iVar5 = FUN_2c013858();
  } while ((uint)(iVar5 - iVar4) < 5);
  if (*pbVar3 == param_1) {
LAB_2c007a22:
    _DAT_50000060 = 0x20000;
    *(undefined4 *)(DAT_2c007a70 + 0xa0) = uVar10;
    return 0;
  }
LAB_2c007a3e:
  *(uint *)(DAT_2c007a70 + 4) = uVar8;
  *(undefined4 *)(DAT_2c007a70 + 0xa0) = uVar10;
  return 0;
}

