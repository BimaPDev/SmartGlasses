/* FUN_14000060 @ 0x14000060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000060(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  FUN_140001bc();
  FUN_140000a4();
  *(undefined4 *)(DAT_14000078 + 8) = 0x82;
  puVar4 = DAT_140001a8;
  pbVar3 = DAT_140001a4;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    bVar1 = *DAT_140001a4;
    *DAT_140001a8 = 0x14000140;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140001ac * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140001b0 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  _DAT_4000005c = _DAT_4000005c | 0x400;
  if (iVar5 == 0) {
    *DAT_140001a8 = 0xffffffff;
  }
  pbVar3 = DAT_140001b4;
  bVar1 = *DAT_140001b4;
  *(undefined4 *)(DAT_140001b8 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140001ac * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

