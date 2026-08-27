/* FUN_14028ee8 @ 0x14028ee8 */

undefined4 FUN_14028ee8(uint param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14028f70;
  pbVar3 = DAT_14028f6c;
  if (param_1 < 0x20) {
    iVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      bVar1 = *DAT_14028f6c;
      *DAT_14028f70 = 0x14028efc;
      puVar4[1] = unaff_lr;
      uVar6 = bVar1 + 1;
      *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14028f74 * (ulonglong)uVar6 >> 0x23) * -10
      ;
      *(undefined4 *)(DAT_14028f78 + (uint)bVar1 * 4) = unaff_lr;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    *DAT_14028f7c = 1 << (param_1 & 0xff) | *DAT_14028f7c;
    if (iVar5 == 0) {
      *DAT_14028f70 = 0xffffffff;
    }
    pbVar3 = DAT_14028f80;
    bVar1 = *DAT_14028f80;
    *(undefined4 *)(DAT_14028f84 + (uint)bVar1 * 4) = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14028f74 * (ulonglong)uVar6 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
    return 0;
  }
  return 1;
}

