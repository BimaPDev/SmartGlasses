/* FUN_140297f4 @ 0x140297f4 */

undefined4 FUN_140297f4(void)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_r3;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  ushort uVar18;
  undefined4 unaff_lr;
  
  puVar5 = DAT_1402994c;
  pbVar4 = DAT_14029948;
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    bVar1 = *DAT_14029948;
    *DAT_1402994c = 0x14029806;
    puVar5[1] = unaff_lr;
    uVar11 = bVar1 + 1;
    *pbVar4 = (char)uVar11 + (char)(uint)((ulonglong)DAT_14029950 * (ulonglong)uVar11 >> 0x23) * -10
    ;
    *(undefined4 *)(DAT_14029954 + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar6 = DAT_1402995c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  puVar14 = (ushort *)(DAT_1402995c + 0x2000);
  if (*(char *)(DAT_1402995c + 0x2006) != '\0') goto LAB_140298ae;
  uVar12 = (uint)*puVar14;
  uVar11 = (uint)*(ushort *)(DAT_1402995c + 0x2002);
  if (uVar12 == uVar11) goto LAB_140298ae;
  *(undefined1 *)(DAT_1402995c + 0x2006) = 1;
  iVar7 = DAT_14029960;
  iVar15 = DAT_14029958;
  if (uVar12 < uVar11) {
    uVar17 = 0x2000 - uVar11;
    if (uVar17 < 0x1000) {
      uVar18 = 0xfff;
      if (uVar12 < 0x1000) {
        uVar18 = *puVar14;
      }
      *(uint *)(DAT_14029960 + 0xc) = uVar11 + iVar6;
      iVar15 = DAT_14029958;
      if (uVar12 == 0) goto LAB_140298f2;
      uVar16 = (undefined2)uVar17;
      iVar10 = DAT_14029958 + -0x10;
      *(undefined2 *)(iVar7 + 2) = uVar16;
      FUN_14028228(iVar10,iVar7,iVar15,0,in_r3);
      iVar15 = DAT_1402995c;
    }
    else {
LAB_1402990c:
      uVar17 = uVar17 - 0xfff;
      uVar16 = 0xfff;
      *(uint *)(DAT_14029960 + 0xc) = uVar11 + iVar6;
      if (0xffe < uVar17) {
        uVar17 = 0xfff;
      }
      uVar18 = (ushort)uVar17;
      *(undefined2 *)(iVar7 + 2) = 0xfff;
      FUN_14028228(iVar15 + -0x10,iVar7,iVar15,0,in_r3);
      iVar15 = DAT_1402995c;
      if (uVar11 + 0xfff < 0x2000) {
        iVar15 = uVar11 + 0xfff + iVar6;
        uVar16 = 0xfff;
      }
    }
    iVar8 = DAT_14029960;
    iVar10 = DAT_14029958;
    *(int *)(iVar7 + 0xc) = iVar15;
    *(ushort *)(iVar7 + 2) = uVar18;
    FUN_14028228(iVar10,iVar8,0,1,in_r3);
  }
  else {
    uVar17 = uVar12 - uVar11;
    if (0xfff < uVar17) goto LAB_1402990c;
    *(uint *)(DAT_14029960 + 0xc) = uVar11 + iVar6;
LAB_140298f2:
    uVar9 = DAT_14029964;
    iVar15 = DAT_14029960;
    uVar16 = (undefined2)uVar17;
    *(undefined2 *)(iVar7 + 2) = uVar16;
    uVar18 = 0;
    FUN_14028228(uVar9,iVar15,0,1,in_r3);
  }
  uVar9 = DAT_14029964;
  iVar15 = DAT_14029960;
  *(undefined2 *)(iVar6 + 0x200a) = uVar16;
  *(ushort *)(iVar6 + 0x200c) = uVar18;
  FUN_14028648(uVar9,iVar15);
LAB_140298ae:
  if (iVar13 == 0) {
    *DAT_1402994c = 0xffffffff;
  }
  pbVar4 = DAT_14029968;
  bVar1 = *DAT_14029968;
  *(undefined4 *)(DAT_1402996c + (uint)bVar1 * 4) = unaff_lr;
  uVar11 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_14029950 * (ulonglong)uVar11;
  *pbVar4 = (char)uVar11 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  return (int)lVar3;
}

