/* FUN_140000a4 @ 0x140000a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140000a4(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_1400011c;
  pbVar3 = DAT_14000118;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    bVar1 = *DAT_14000118;
    *DAT_1400011c = 0x140000b4;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14000120 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_14000124 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  _DAT_4000005c = _DAT_4000005c | 0x200;
  if (iVar5 == 0) {
    *DAT_1400011c = 0xffffffff;
  }
  pbVar3 = DAT_14000128;
  bVar1 = *DAT_14000128;
  *(undefined4 *)(DAT_1400012c + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14000120 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

