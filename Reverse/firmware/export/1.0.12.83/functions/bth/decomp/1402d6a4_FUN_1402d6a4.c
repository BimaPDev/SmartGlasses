/* FUN_1402d6a4 @ 0x1402d6a4 */

undefined4 FUN_1402d6a4(void)

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
  iVar4 = DAT_1402d714;
  *(uint *)(DAT_1402d714 + 0xc) = *(uint *)(DAT_1402d714 + 0xc) & 0xffffff | 0x77000000;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x400000;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) & 0xff7fffff;
  *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) & 0xff3fffff;
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 & 0x7fffffff;
    *DAT_1402d728 = 0;
    FUN_140e5958();
  }
  if (uVar6 == 0) {
    *DAT_1402d718 = 0xffffffff;
  }
  pbVar5 = DAT_1402d71c;
  bVar1 = *DAT_1402d71c;
  *(undefined4 *)(DAT_1402d720 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402d724 * (ulonglong)uVar7;
  *pbVar5 = (char)uVar7 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  return (int)lVar3;
}

