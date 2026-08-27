/* FUN_14043fa8 @ 0x14043fa8 */

undefined4 FUN_14043fa8(int param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  undefined4 unaff_lr;
  
  uVar7 = DAT_14044178;
  puVar4 = DAT_14044174;
  pbVar3 = DAT_14044170;
  uVar12 = (ushort)param_5;
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    bVar1 = *DAT_14044170;
    *DAT_14044174 = 0x14043fcc;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_1404417c + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar5 = DAT_14044198;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  iVar9 = DAT_14044198 + param_1 * 0x38;
  iVar11 = param_1 * 0x38;
  FUN_1402a6e8(4,0xf9,DAT_14044184,DAT_14044188,DAT_14044180,param_1,*(undefined1 *)(iVar9 + 0x45e),
               *(undefined2 *)(iVar9 + 0x450),param_2,param_3,*(undefined2 *)(iVar9 + 0x452),uVar12,
               *(undefined2 *)(iVar9 + 0x454),param_4);
  if (*(char *)(iVar9 + 0x45e) == '\0') {
    if (((param_2 <= *(ushort *)(iVar9 + 0x450)) && (*(ushort *)(iVar9 + 0x450) <= param_3)) &&
       (((uint)*(ushort *)(iVar9 + 0x454) ==
         (uint)((ulonglong)DAT_14044178 * (ulonglong)param_4 >> 0x23) &&
        (*(ushort *)(iVar9 + 0x452) == uVar12)))) {
LAB_140440fc:
      if (iVar13 == 0) {
        *DAT_14044174 = 0xffffffff;
      }
      pbVar3 = DAT_1404418c;
      bVar1 = *DAT_1404418c;
      *(undefined4 *)(DAT_14044190 + (uint)bVar1 * 4) = unaff_lr;
      uVar7 = bVar1 + 1;
      *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14044178 * (ulonglong)uVar7 >> 0x23) * -10
      ;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar13);
      }
      return 0;
    }
    uVar10 = 1;
    iVar9 = iVar11 + 0x456;
  }
  else {
    if ((((*(ushort *)(iVar9 + 0x456) == param_2) && (*(ushort *)(iVar9 + 0x458) == param_3)) &&
        ((uint)*(ushort *)(iVar9 + 0x45c) ==
         (uint)((ulonglong)DAT_14044178 * (ulonglong)param_4 >> 0x23))) &&
       (*(ushort *)(iVar9 + 0x45a) == uVar12)) goto LAB_140440fc;
    uVar10 = 0;
    iVar9 = iVar11 + 0x460;
  }
  puVar8 = (undefined2 *)(iVar9 + iVar5);
  puVar8[2] = (ushort)param_5;
  *puVar8 = (short)param_2;
  puVar8[1] = (short)param_3;
  puVar8[3] = (short)param_4;
  puVar8[4] = 1;
  if (iVar13 == 0) {
    *DAT_14044174 = 0xffffffff;
  }
  pbVar3 = DAT_1404418c;
  uVar7 = DAT_14044178;
  bVar1 = *DAT_1404418c;
  *(undefined4 *)(DAT_14044190 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  iVar9 = iVar5 + param_1 * 0x38;
  iVar13 = *(int *)(iVar9 + 0x46c);
  if (iVar13 == 0) {
    iVar13 = FUN_140e52f8(DAT_14044194,0,iVar11 + 0x43c + iVar5);
    *(int *)(iVar9 + 0x46c) = iVar13;
  }
  FUN_140e5378(iVar13,5000);
  return uVar10;
}

