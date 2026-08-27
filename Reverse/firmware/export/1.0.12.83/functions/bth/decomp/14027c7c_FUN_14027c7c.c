/* FUN_14027c7c @ 0x14027c7c */

void FUN_14027c7c(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14027cfc;
  pbVar3 = DAT_14027cf8;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    bVar1 = *DAT_14027cf8;
    *DAT_14027cfc = 0x14027c8c;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14027d00 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_14027d04 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(uint *)(DAT_14027d08 + 0x38) = *(uint *)(DAT_14027d08 + 0x38) & ~param_1 & 0xfffffff0;
  if (iVar5 == 0) {
    *DAT_14027cfc = 0xffffffff;
  }
  pbVar3 = DAT_14027d0c;
  bVar1 = *DAT_14027d0c;
  *(undefined4 *)(DAT_14027d10 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14027d00 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

