/* FUN_14027be8 @ 0x14027be8 */

void FUN_14027be8(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14027c64;
  pbVar3 = DAT_14027c60;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    bVar1 = *DAT_14027c60;
    *DAT_14027c64 = 0x14027bf8;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14027c68 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_14027c6c + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(uint *)(DAT_14027c70 + 0x38) = (param_1 | *(uint *)(DAT_14027c70 + 0x38)) & 0xfffffff0;
  if (iVar5 == 0) {
    *DAT_14027c64 = 0xffffffff;
  }
  pbVar3 = DAT_14027c74;
  bVar1 = *DAT_14027c74;
  *(undefined4 *)(DAT_14027c78 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14027c68 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

