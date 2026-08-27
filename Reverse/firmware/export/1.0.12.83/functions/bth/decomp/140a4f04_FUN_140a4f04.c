/* FUN_140a4f04 @ 0x140a4f04 */

void FUN_140a4f04(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_140a4f74;
  pbVar3 = DAT_140a4f70;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    bVar1 = *DAT_140a4f70;
    *DAT_140a4f74 = 0x140a4f14;
    puVar4[1] = unaff_lr;
    uVar5 = bVar1 + 1;
    *pbVar3 = (char)uVar5 + (char)(uint)((ulonglong)DAT_140a4f78 * (ulonglong)uVar5 >> 0x23) * -10;
    *(undefined4 *)(DAT_140a4f7c + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_140e54a8();
  if (iVar6 == 0) {
    *DAT_140a4f74 = 0xffffffff;
  }
  bVar1 = *DAT_140a4f80;
  uVar5 = bVar1 + 1;
  *DAT_140a4f80 =
       (char)uVar5 + (char)(uint)((ulonglong)DAT_140a4f78 * (ulonglong)uVar5 >> 0x23) * -10;
  *(undefined4 *)(DAT_140a4f84 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  return;
}

