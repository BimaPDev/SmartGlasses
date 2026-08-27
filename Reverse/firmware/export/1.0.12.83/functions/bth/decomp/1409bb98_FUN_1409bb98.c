/* FUN_1409bb98 @ 0x1409bb98 */

undefined4 FUN_1409bb98(void)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint extraout_r2;
  uint uVar11;
  uint extraout_r2_00;
  int iVar12;
  undefined2 uVar13;
  undefined4 unaff_lr;
  undefined8 uVar14;
  
  uVar14 = FUN_1409a604();
  uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
  if ((int)uVar14 == 0xff) {
    uVar13 = 0xffff;
    uVar11 = extraout_r2;
  }
  else {
    uVar14 = FUN_1403b00c();
    uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar13 = *(undefined2 *)((int)uVar14 + 10);
    uVar11 = extraout_r2_00;
  }
  puVar6 = DAT_1409bc98;
  pbVar5 = DAT_1409bc94;
  iVar12 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    uVar10 = (uint)*DAT_1409bc94;
    *DAT_1409bc98 = 0x1409bbb6;
    puVar6[1] = unaff_lr;
    uVar11 = uVar10 + 1;
    *pbVar5 = (char)uVar11 + (char)(uint)((ulonglong)DAT_1409bc9c * (ulonglong)uVar11 >> 0x23) * -10
    ;
    *(undefined4 *)(DAT_1409bca0 + uVar10 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  iVar7 = FUN_14032b20(uVar13,uVar10,uVar11,0x40);
  uVar3 = (ulonglong)DAT_1409bca4;
  FUN_14032d28(0);
  FUN_14032d30(0);
  thunk_FUN_140349a0(0);
  thunk_FUN_14034fcc(2);
  iVar7 = (uint)(uVar3 * (iVar7 + 0x180) >> 0x27) * 0xc0;
  FUN_14032b74(iVar7,uVar13,2,0,0);
  FUN_14032d28(1);
  FUN_14032d30(1);
  *DAT_1409bca8 = 1;
  uVar8 = thunk_FUN_14034954();
  uVar9 = FUN_14032b20(uVar13);
  FUN_1402a6e8(4,0xe1d,DAT_1409bcb4,DAT_1409bcb0,DAT_1409bcac,uVar8,iVar7,uVar9);
  if (iVar12 == 0) {
    *DAT_1409bc98 = 0xffffffff;
  }
  pbVar5 = DAT_1409bcb8;
  bVar1 = *DAT_1409bcb8;
  *(undefined4 *)(DAT_1409bcbc + (uint)bVar1 * 4) = unaff_lr;
  uVar10 = bVar1 + 1;
  lVar4 = (ulonglong)DAT_1409bc9c * (ulonglong)uVar10;
  *pbVar5 = (char)uVar10 + (char)(uint)((ulonglong)lVar4 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar12);
  }
  return (int)lVar4;
}

