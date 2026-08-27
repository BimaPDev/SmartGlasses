/* FUN_140b490c @ 0x140b490c */

undefined4 FUN_140b490c(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  undefined4 in_r3;
  int iVar7;
  undefined4 unaff_lr;
  
  FUN_140e5718(*DAT_140b4988);
  puVar4 = DAT_140b4990;
  pbVar3 = DAT_140b498c;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  uVar5 = extraout_r1;
  uVar6 = extraout_r2;
  if (iVar7 != 0x40) {
    uVar5 = (uint)*DAT_140b498c;
    *DAT_140b4990 = 0x140b4924;
    puVar4[1] = unaff_lr;
    uVar6 = uVar5 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140b4994 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140b4998 + uVar5 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_14027fb4(0,uVar5,uVar6,0x40,in_r3);
  FUN_140e59d8();
  if (iVar7 == 0) {
    *DAT_140b4990 = 0xffffffff;
  }
  pbVar3 = DAT_140b499c;
  bVar1 = *DAT_140b499c;
  *(undefined4 *)(DAT_140b49a0 + (uint)bVar1 * 4) = unaff_lr;
  uVar5 = bVar1 + 1;
  *pbVar3 = (char)uVar5 + (char)(uint)((ulonglong)DAT_140b4994 * (ulonglong)uVar5 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  return 0;
}

