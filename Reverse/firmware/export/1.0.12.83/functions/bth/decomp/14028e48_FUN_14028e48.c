/* FUN_14028e48 @ 0x14028e48 */

undefined4 FUN_14028e48(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14028ed0;
  pbVar3 = DAT_14028ecc;
  if (param_1 < 0x20) {
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      bVar1 = *DAT_14028ecc;
      *DAT_14028ed0 = 0x14028e5c;
      puVar4[1] = unaff_lr;
      uVar6 = bVar1 + 1;
      *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14028ed4 * (ulonglong)uVar6 >> 0x23) * -10
      ;
      *(undefined4 *)(DAT_14028ed8 + (uint)bVar1 * 4) = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    *DAT_14028edc = 1 << (param_1 & 0xff) | *DAT_14028edc;
    if (iVar5 == 0) {
      *DAT_14028ed0 = 0xffffffff;
    }
    pbVar3 = DAT_14028ee0;
    bVar1 = *DAT_14028ee0;
    *(undefined4 *)(DAT_14028ee4 + (uint)bVar1 * 4) = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14028ed4 * (ulonglong)uVar6 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
    return 0;
  }
  return 1;
}

