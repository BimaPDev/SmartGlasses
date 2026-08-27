/* FUN_1402e5f8 @ 0x1402e5f8 */

void FUN_1402e5f8(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  puVar4 = DAT_1402e678;
  pbVar3 = DAT_1402e674;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    bVar1 = *DAT_1402e674;
    *DAT_1402e678 = 0x1402e608;
    puVar4[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_1402e67c * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402e680 + (uint)bVar1 * 4) = unaff_lr;
  }
  iVar5 = DAT_1402e684;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_1402e684 + 8) = 0x80000;
  *(uint *)(iVar5 + 0x158) = *(uint *)(iVar5 + 0x158) & 0xffffffef;
  if (iVar6 == 0) {
    *DAT_1402e678 = 0xffffffff;
  }
  pbVar3 = DAT_1402e688;
  bVar1 = *DAT_1402e688;
  *(undefined4 *)(DAT_1402e68c + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  *pbVar3 = (char)uVar7 + (char)(uint)((ulonglong)DAT_1402e67c * (ulonglong)uVar7 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  return;
}

