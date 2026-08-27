/* FUN_14026cd0 @ 0x14026cd0 */

int FUN_14026cd0(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  
  puVar5 = DAT_14026d68;
  pbVar4 = DAT_14026d64;
  iVar7 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_14026d64;
    *DAT_14026d68 = 0x14026ce0;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)DAT_14026d6c * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_14026d70 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  cVar2 = *DAT_14026d74;
  if (cVar2 == '\0') {
    *DAT_14026d74 = '\x01';
  }
  if (iVar7 == 0) {
    *DAT_14026d68 = 0xffffffff;
  }
  bVar1 = *DAT_14026d78;
  uVar8 = bVar1 + 1;
  *DAT_14026d78 =
       (char)uVar8 + (char)(uint)((ulonglong)DAT_14026d6c * (ulonglong)uVar8 >> 0x23) * -10;
  *(undefined4 *)(DAT_14026d7c + (uint)bVar1 * 4) = unaff_lr;
  puVar6 = DAT_14026d80;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(iVar7);
  }
  if (cVar2 == '\0') {
    FUN_14025b98(*DAT_14026d80);
    uVar8 = *puVar6;
    if ((DAT_14025ae8 <= uVar8) && (uVar8 <= DAT_14025ae8 + 0x118)) {
      iVar7 = FUN_14025890(uVar8,0,0,0,0x280);
      return iVar7;
    }
    return 2;
  }
  return iVar7;
}

