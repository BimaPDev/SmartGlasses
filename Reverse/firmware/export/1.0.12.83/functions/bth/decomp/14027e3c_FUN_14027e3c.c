/* FUN_14027e3c @ 0x14027e3c */

void FUN_14027e3c(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14027ec8;
  pbVar3 = DAT_14027ec4;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    bVar1 = *DAT_14027ec4;
    *DAT_14027ec8 = 0x14027e4c;
    puVar4[1] = unaff_lr;
    uVar5 = bVar1 + 1;
    *pbVar3 = (char)uVar5 + (char)(uint)((ulonglong)DAT_14027ecc * (ulonglong)uVar5 >> 0x23) * -10;
    *(undefined4 *)(DAT_14027ed0 + (uint)bVar1 * 4) = unaff_lr;
  }
  puVar4 = DAT_14027ed4;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  DAT_14027ed4[0x300] = DAT_14027ed8;
  *puVar4 = *(undefined4 *)(DAT_14027edc + param_1 * 4);
  puVar4[0x300] = 1;
  if (iVar6 == 0) {
    *DAT_14027ec8 = 0xffffffff;
  }
  pbVar3 = DAT_14027ee0;
  bVar1 = *DAT_14027ee0;
  *(undefined4 *)(DAT_14027ee4 + (uint)bVar1 * 4) = unaff_lr;
  uVar5 = bVar1 + 1;
  *pbVar3 = (char)uVar5 + (char)(uint)((ulonglong)DAT_14027ecc * (ulonglong)uVar5 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  return;
}

