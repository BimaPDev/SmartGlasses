/* FUN_14027fb4 @ 0x14027fb4 */

void FUN_14027fb4(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14028040;
  pbVar3 = DAT_1402803c;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    bVar1 = *DAT_1402803c;
    *DAT_14028040 = 0x14027fc4;
    puVar4[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14028044 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_14028048 + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar5 = DAT_1402804c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_1402804c + 0xc00) = DAT_14028050;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc00) = 1;
  if (iVar6 == 0) {
    *DAT_14028040 = 0xffffffff;
  }
  pbVar3 = DAT_14028054;
  bVar1 = *DAT_14028054;
  *(undefined4 *)(DAT_14028058 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_14028044 * (ulonglong)uVar7 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  *DAT_1402805c = 0;
  return;
}

