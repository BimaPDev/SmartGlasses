/* FUN_140001cc @ 0x140001cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001cc(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_14000254;
  pbVar3 = DAT_14000250;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    bVar1 = *DAT_14000250;
    *DAT_14000254 = 0x140001dc;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14000258 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_1400025c + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_14000260 + 0xa4) = 0x800;
  _DAT_40000064 = 0x40000;
  if (iVar5 == 0) {
    *DAT_14000254 = 0xffffffff;
  }
  pbVar3 = DAT_14000264;
  bVar1 = *DAT_14000264;
  *(undefined4 *)(DAT_14000268 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_14000258 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

