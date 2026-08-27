/* FUN_14029fb8 @ 0x14029fb8 */

uint FUN_14029fb8(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  uVar8 = DAT_1402a10c;
  puVar5 = DAT_1402a108;
  pbVar4 = DAT_1402a104;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    bVar1 = *DAT_1402a104;
    *DAT_1402a108 = 0x14029fce;
    puVar5[1] = unaff_lr;
    uVar9 = bVar1 + 1;
    *pbVar4 = (char)uVar9 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402a110 + (uint)bVar1 * 4) = unaff_lr;
  }
  puVar6 = DAT_1402a114;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (*(char *)((int)DAT_1402a114 + 7) != '\0') {
    bVar2 = false;
    goto LAB_1402a026;
  }
  uVar8 = (uint)*DAT_1402a114;
  *(undefined1 *)((int)DAT_1402a114 + 7) = 1;
  uVar9 = (uint)puVar6[1];
  if (uVar8 < uVar9) {
    uVar7 = puVar6[2];
    uVar9 = (uVar9 - uVar8) - 1;
    if (uVar7 == 0) goto LAB_1402a070;
LAB_1402a010:
    if (param_2 + 0xd <= uVar9) {
      FUN_14029bd8();
      uVar8 = (uint)*puVar6;
      puVar6[2] = 0;
      goto LAB_1402a074;
    }
    if (uVar7 != 0xffff) goto LAB_1402a0d8;
    bVar2 = true;
  }
  else {
    uVar7 = puVar6[2];
    uVar9 = 0x1fff - (uVar8 - uVar9);
    if (uVar7 != 0) goto LAB_1402a010;
LAB_1402a070:
    if (uVar9 < param_2) {
LAB_1402a0d8:
      puVar6[2] = uVar7 + 1;
      bVar2 = true;
    }
    else {
LAB_1402a074:
      uVar9 = 0x2000 - uVar8 & 0xffff;
      if (uVar9 < param_2) {
        FUN_140e5278(DAT_1402a120 + uVar8,param_1,uVar9);
LAB_1402a0c8:
        FUN_140e5278(DAT_1402a120,param_1 + uVar9,param_2 - uVar9);
      }
      else {
        uVar9 = param_2 & 0xffff;
        FUN_140e5278(DAT_1402a120 + uVar8,param_1,uVar9);
        if (uVar9 < param_2) goto LAB_1402a0c8;
      }
      uVar8 = (uint)*puVar6 + (param_2 & 0xffff);
      uVar7 = (ushort)uVar8;
      if ((uVar8 & 0xffff) < 0x2000) {
        *puVar6 = uVar7;
      }
      else {
        *puVar6 = uVar7 + 0xe000;
        *(undefined1 *)(puVar6 + 4) = 1;
      }
      if (*(char *)((int)puVar6 + 9) == '\0') {
        bVar2 = false;
        if (*DAT_1402a124 - 1 < 2) {
          FUN_140297f4();
        }
      }
      else {
        bVar2 = false;
      }
    }
  }
  *(undefined1 *)((int)puVar6 + 7) = 0;
LAB_1402a026:
  if (iVar10 == 0) {
    *DAT_1402a108 = 0xffffffff;
  }
  pbVar4 = DAT_1402a118;
  uVar8 = DAT_1402a10c;
  bVar1 = *DAT_1402a118;
  *(undefined4 *)(DAT_1402a11c + (uint)bVar1 * 4) = unaff_lr;
  uVar9 = bVar1 + 1;
  *pbVar4 = (char)uVar9 + (char)(uint)((ulonglong)uVar8 * (ulonglong)uVar9 >> 0x23) * -10;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar10);
  }
  if (bVar2) {
    param_2 = 0;
  }
  return param_2;
}

