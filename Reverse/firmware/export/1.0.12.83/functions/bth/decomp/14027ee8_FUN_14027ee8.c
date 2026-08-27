/* FUN_14027ee8 @ 0x14027ee8 */

void FUN_14027ee8(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14027f7c;
  pbVar3 = DAT_14027f78;
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    bVar1 = *DAT_14027f78;
    *DAT_14027f7c = 0x14027ef8;
    puVar4[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14027f80 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_14027f84 + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar5 = DAT_14027f88;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_14027f88 + 0xc00) = DAT_14027f8c;
  if (param_1 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 3;
  }
  *(undefined4 *)(iVar5 + 0xc) = 1;
  *(undefined4 *)(iVar5 + 8) = uVar6;
  *(undefined4 *)(iVar5 + 0xc00) = 1;
  if (iVar8 == 0) {
    *DAT_14027f7c = 0xffffffff;
  }
  pbVar3 = DAT_14027f90;
  bVar1 = *DAT_14027f90;
  *(undefined4 *)(DAT_14027f94 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14027f80 * (ulonglong)uVar7 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  return;
}

