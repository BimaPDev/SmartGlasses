/* FUN_14033cb0 @ 0x14033cb0 */

void FUN_14033cb0(uint param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_lr;
  
  piVar3 = DAT_14033e6c;
  iVar10 = *DAT_14033e6c;
  if ((int)(param_1 << 0x1b) < 0) {
    uVar12 = (param_1 & 0xf) + 1;
  }
  else {
    uVar12 = (param_1 & 0xf) + 0xc;
  }
  if (iVar10 == 0) {
    FUN_1402e55c();
    iVar10 = *piVar3;
  }
  *piVar3 = iVar10 + 1;
  uVar7 = DAT_14033e78;
  puVar5 = DAT_14033e74;
  pbVar4 = DAT_14033e70;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    bVar1 = *DAT_14033e70;
    *DAT_14033e74 = 0x14033ce0;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_14033e7c + (uint)bVar1 * 4) = unaff_lr;
  }
  pbVar4 = DAT_14033ea4;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (*DAT_14033ea4 < 4) {
    uVar8 = 0;
    uVar7 = *(uint *)(DAT_14033e80 + 0xc50);
    do {
      uVar9 = uVar8 & 0xff;
      uVar8 = uVar8 + 8;
      if ((uVar7 >> uVar9 & 0x1f) == uVar12) {
        FUN_1402a6e8(4,0x56b,DAT_14033e88,DAT_14033e8c,DAT_14033ea0,param_1);
        goto LAB_14033d5e;
      }
    } while (uVar8 != 0x20);
    uVar8 = 0;
    do {
      uVar11 = uVar8 << 3;
      uVar9 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      if ((uVar7 >> (uVar11 & 0xff) & 0x1f) == 0) {
        *DAT_14033ea4 = *DAT_14033ea4 + 1;
        iVar6 = DAT_14033e80;
        uVar8 = 1 << (uVar9 + 4 & 0xff);
        *(uint *)(DAT_14033e80 + 0xc50) = *(uint *)(DAT_14033e80 + 0xc50) & 0x7fffffff | 0x80000000;
        *(uint *)(iVar6 + 0xc50) =
             uVar12 << (uVar11 & 0xff) | *(uint *)(iVar6 + 0xc50) & ~(0x1f << (uVar11 & 0xff));
        *(uint *)(iVar6 + 0xd70) = uVar8 | *(uint *)(iVar6 + 0xd70) & ~uVar8;
        FUN_1402a6e8(4,0x57e,DAT_14033e88,DAT_14033e8c,DAT_14033e98,uVar7,
                     *(undefined4 *)(iVar6 + 0xc50),*(undefined4 *)(iVar6 + 0xd70),*pbVar4);
        goto LAB_14033d5e;
      }
    } while (uVar8 != 4);
    FUN_1402a6e8(4,0x577,DAT_14033e88,DAT_14033e8c,DAT_14033e84);
  }
  else {
    FUN_1402a6e8(4,0x562,DAT_14033e88,DAT_14033e8c,DAT_14033e9c);
  }
LAB_14033d5e:
  if (iVar10 == 0) {
    *DAT_14033e74 = 0xffffffff;
  }
  bVar1 = *DAT_14033e90;
  uVar12 = bVar1 + 1;
  *DAT_14033e90 =
       (char)uVar12 + (char)(uint)((ulonglong)DAT_14033e78 * (ulonglong)uVar12 >> 0x23) * -10;
  *(undefined4 *)(DAT_14033e94 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  iVar10 = *piVar3;
  *piVar3 = iVar10 + -1;
  if (iVar10 + -1 == 0) {
    FUN_1402e5f8();
    return;
  }
  return;
}

