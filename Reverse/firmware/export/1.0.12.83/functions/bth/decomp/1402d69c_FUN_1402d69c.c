/* FUN_1402d69c @ 0x1402d69c */

undefined4 FUN_1402d69c(void)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  uVar6 = FUN_140e5258();
  iVar4 = DAT_1402d5c0;
  *(uint *)(DAT_1402d5c0 + 0x48) = *(uint *)(DAT_1402d5c0 + 0x48) | 3;
  *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xffff00ff | 0x4400;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x40000;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) & 0xfff7ffff;
  *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xfff3ffff;
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 & 0x7fffffff;
    *DAT_1402d5d4 = 0;
    FUN_140e5958();
  }
  if (uVar6 == 0) {
    *DAT_1402d5c4 = 0xffffffff;
  }
  pbVar5 = DAT_1402d5c8;
  bVar1 = *DAT_1402d5c8;
  *(undefined4 *)(DAT_1402d5cc + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402d5d0 * (ulonglong)uVar7;
  *pbVar5 = (char)uVar7 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  return (int)lVar3;
}

