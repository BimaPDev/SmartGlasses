/* FUN_14029cb0 @ 0x14029cb0 */

uint FUN_14029cb0(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_lr;
  
  uVar10 = DAT_14029e14;
  puVar5 = DAT_14029e10;
  pbVar4 = DAT_14029e0c;
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  if (iVar11 != 0x40) {
    bVar1 = *DAT_14029e0c;
    *DAT_14029e10 = 0x14029cc6;
    puVar5[1] = unaff_lr;
    uVar9 = bVar1 + 1;
    *pbVar4 = (char)uVar9 + (char)(uint)((ulonglong)uVar10 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_14029e18 + (uint)bVar1 * 4) = unaff_lr;
  }
  puVar6 = DAT_14029e1c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_14029e1c + 7) != '\0') {
    bVar2 = false;
    goto LAB_14029d22;
  }
  uVar9 = (uint)*DAT_14029e1c;
  *(undefined1 *)((int)DAT_14029e1c + 7) = 1;
  uVar10 = (uint)puVar6[1];
  if (uVar9 < uVar10) {
    uVar8 = puVar6[2];
    uVar10 = (uVar10 - uVar9) - 1;
    if (uVar8 == 0) goto LAB_14029d72;
LAB_14029d0c:
    if (param_2 + 0xd <= uVar10) {
      FUN_14029bd8();
      uVar9 = (uint)*puVar6;
      puVar6[2] = 0;
      goto LAB_14029d76;
    }
    if (uVar8 != 0xffff) goto LAB_14029ddc;
    bVar2 = true;
  }
  else {
    uVar8 = puVar6[2];
    uVar10 = 0x1fff - (uVar9 - uVar10);
    if (uVar8 != 0) goto LAB_14029d0c;
LAB_14029d72:
    if (uVar10 < param_2) {
LAB_14029ddc:
      bVar2 = true;
      puVar6[2] = uVar8 + 1;
    }
    else {
LAB_14029d76:
      iVar7 = DAT_14029e28;
      uVar10 = 0x2000 - uVar9 & 0xffff;
      if (uVar10 < param_2) {
        FUN_140e5278(DAT_14029e28 + uVar9,param_1,uVar10);
        FUN_140e5278(iVar7,param_1 + uVar10,param_2 - uVar10);
      }
      else {
        FUN_140e5278(DAT_14029e28 + uVar9,param_1,param_2);
      }
      uVar10 = (uint)*puVar6 + (param_2 & 0xffff);
      uVar8 = (ushort)uVar10;
      if ((uVar10 & 0xffff) < 0x2000) {
        *puVar6 = uVar8;
      }
      else {
        *puVar6 = uVar8 + 0xe000;
        *(undefined1 *)(puVar6 + 4) = 1;
      }
      if (*(char *)((int)puVar6 + 9) == '\0') {
        bVar2 = false;
        if (*DAT_14029e2c - 1 < 2) {
          FUN_140297f4();
        }
      }
      else {
        bVar2 = false;
      }
    }
  }
  *(undefined1 *)((int)puVar6 + 7) = 0;
LAB_14029d22:
  if (iVar11 == 0) {
    *DAT_14029e10 = 0xffffffff;
  }
  pbVar4 = DAT_14029e20;
  uVar10 = DAT_14029e14;
  bVar1 = *DAT_14029e20;
  *(undefined4 *)(DAT_14029e24 + (uint)bVar1 * 4) = unaff_lr;
  uVar9 = bVar1 + 1;
  *pbVar4 = (char)uVar9 + (char)(uint)((ulonglong)uVar10 * (ulonglong)uVar9 >> 0x23) * -10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar11);
  }
  if (bVar2) {
    param_2 = 0;
  }
  return param_2;
}

