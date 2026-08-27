/* FUN_14028cc8 @ 0x14028cc8 */

undefined4 FUN_14028cc8(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  uVar6 = DAT_14028d84;
  puVar5 = DAT_14028d80;
  pbVar4 = DAT_14028d7c;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    bVar1 = *DAT_14028d7c;
    *DAT_14028d80 = 0x14028cdc;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_14028d88 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    *DAT_14028d8c = 0;
  }
  else {
    *DAT_14028da4 = param_1 << 4;
    uVar7 = FUN_140e5848();
    *DAT_14028d98 = uVar7;
    *DAT_14028da8 = 0;
    *DAT_14028dac = 0;
    *DAT_14028db0 = 0;
    *DAT_14028db4 = 0;
    *DAT_14028d8c = 1;
  }
  if (iVar10 == 0) {
    *DAT_14028d80 = 0xffffffff;
  }
  pbVar4 = DAT_14028d90;
  uVar6 = DAT_14028d84;
  bVar1 = *DAT_14028d90;
  *(undefined4 *)(DAT_14028d94 + (uint)bVar1 * 4) = unaff_lr;
  uVar8 = bVar1 + 1;
  lVar3 = (ulonglong)uVar6 * (ulonglong)uVar8;
  uVar7 = (undefined4)lVar3;
  *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  puVar5 = DAT_14028da0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar9 = *DAT_14028d98;
    *DAT_14028d9c = param_2 << 4;
    *puVar5 = uVar9;
    return uVar7;
  }
  *DAT_14028d9c = 0;
  return uVar7;
}

