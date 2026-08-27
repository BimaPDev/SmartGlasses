/* FUN_2c00aa48 @ 0x2c00aa48 */

void FUN_2c00aa48(void)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_r3;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  undefined2 uVar15;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c00ab4c;
  iVar12 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    *DAT_2c00ab4c = 0x2c00aa58;
    puVar3[1] = unaff_lr;
  }
  iVar4 = DAT_2c00ab50;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar1 = *(ushort *)(DAT_2c00ab50 + 0x1000);
  uVar9 = (uint)uVar1;
  uVar13 = (uint)*(ushort *)(DAT_2c00ab50 + 0x1002);
  if ((*(char *)(DAT_2c00ab50 + 0x1006) == '\x01') || (uVar9 == uVar13)) goto LAB_2c00aa76;
  *(undefined1 *)(DAT_2c00ab50 + 0x1006) = 1;
  iVar5 = DAT_2c00ab58;
  iVar11 = DAT_2c00ab54;
  if (uVar13 < uVar9) {
    uVar10 = uVar9 - uVar13;
    if (0xfff < uVar10) goto LAB_2c00ab18;
    *(uint *)(DAT_2c00ab58 + 0xc) = iVar4 + uVar13;
LAB_2c00ab00:
    uVar6 = DAT_2c00ab5c;
    iVar11 = DAT_2c00ab58;
    uVar14 = 0;
    uVar15 = (undefined2)uVar10;
    *(undefined2 *)(iVar5 + 2) = uVar15;
    FUN_2c013c9c(uVar6,iVar11,0,1,in_r3);
  }
  else {
    uVar10 = 0x1000 - uVar13;
    if (uVar10 < 0x1000) {
      *(uint *)(DAT_2c00ab58 + 0xc) = iVar4 + uVar13;
      iVar11 = DAT_2c00ab54;
      uVar14 = 0xfff;
      if (uVar9 < 0x1000) {
        uVar14 = uVar1;
      }
      if (uVar9 == 0) goto LAB_2c00ab00;
      iVar8 = DAT_2c00ab54 + -0x10;
      *(short *)(iVar5 + 2) = (short)uVar10;
      FUN_2c013c9c(iVar8,iVar5,iVar11,0,in_r3);
      uVar7 = (short)uVar10;
LAB_2c00aac6:
      uVar15 = uVar7;
      iVar11 = DAT_2c00ab50;
    }
    else {
LAB_2c00ab18:
      uVar10 = uVar10 - 0xfff;
      uVar15 = 0xfff;
      *(uint *)(DAT_2c00ab58 + 0xc) = iVar4 + uVar13;
      if (0xffe < uVar10) {
        uVar10 = 0xfff;
      }
      uVar14 = (ushort)uVar10;
      *(undefined2 *)(iVar5 + 2) = 0xfff;
      FUN_2c013c9c(iVar11 + -0x10,iVar5,iVar11,0,in_r3);
      iVar11 = DAT_2c00ab60;
      uVar7 = 0xfff;
      if (uVar13 != 0) goto LAB_2c00aac6;
    }
    *(int *)(iVar5 + 0xc) = iVar11;
    iVar8 = DAT_2c00ab58;
    iVar11 = DAT_2c00ab54;
    *(ushort *)(iVar5 + 2) = uVar14;
    FUN_2c013c9c(iVar11,iVar8,0,1,in_r3);
  }
  iVar11 = DAT_2c00ab58;
  *(undefined2 *)(iVar4 + 0x100a) = uVar15;
  *(ushort *)(iVar4 + 0x100c) = uVar14;
  FUN_2c013c3c(DAT_2c00ab5c,iVar11);
LAB_2c00aa76:
  if (iVar12 == 0) {
    *DAT_2c00ab4c = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar12);
  }
  return;
}

