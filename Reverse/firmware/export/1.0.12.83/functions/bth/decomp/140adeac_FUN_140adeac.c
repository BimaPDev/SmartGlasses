/* FUN_140adeac @ 0x140adeac */

undefined4 FUN_140adeac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  piVar3 = DAT_140adeec;
  if (*DAT_140adeec == 0) {
    iVar10 = FUN_140b4ca8(DAT_140adefc,0,0,param_4,param_4);
    *piVar3 = iVar10;
    iVar10 = *DAT_140adef0;
    piVar3 = DAT_140adef0;
  }
  else {
    iVar10 = *DAT_140adef0;
    piVar3 = DAT_140adef0;
  }
  DAT_140adef0 = piVar3;
  if (iVar10 == 0) {
    iVar10 = FUN_140e5668(DAT_140adf00);
    *piVar3 = iVar10;
  }
  FUN_140b4be0(0,DAT_140adef4);
  uVar8 = DAT_140adef8;
  puVar4 = DAT_14027540;
  uVar9 = 0;
  *DAT_14027544 = DAT_140adef8;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4 = DAT_1402754c;
  pbVar5 = DAT_14027548;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    uVar8 = (uint)*DAT_14027548;
    *DAT_1402754c = 0x1402743e;
    puVar4[1] = unaff_lr;
    uVar9 = uVar8 + 1;
    *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)DAT_14027550 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_14027554 + uVar8 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_14030694(8,uVar8,uVar9,0x40,unaff_r4,unaff_r5);
  puVar4 = DAT_1402756c;
  uVar7 = DAT_14027558;
  if (param_1 == 0) {
    *DAT_1402756c = 0;
    puVar4[1] = 0;
    FUN_14030024(0,uVar7);
    iVar11 = FUN_14025a10(DAT_14027570,0);
    piVar3 = DAT_14027560;
    *DAT_14027560 = iVar11;
    FUN_1402ff64(1);
    iVar11 = *piVar3;
  }
  else {
    iVar11 = 10;
    do {
      FUN_140e5398(0x140);
      iVar6 = FUN_1402d7e0();
      puVar4 = DAT_1402756c;
      uVar7 = DAT_14027558;
      if (iVar6 == 0) {
        uVar7 = 0xffffffff;
        goto LAB_140274d2;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *DAT_1402756c = 0;
    puVar4[1] = 0;
    FUN_14030024(0,uVar7);
    iVar11 = FUN_14025a10(DAT_1402755c,0);
    piVar3 = DAT_14027560;
    *DAT_14027560 = iVar11;
    uVar7 = FUN_140e5848();
    FUN_1402ff64(0);
    iVar11 = FUN_1402ffd8();
    *(char *)((int)puVar4 + 2) = (char)iVar11;
    if (iVar11 == 0) {
      *(undefined1 *)((int)puVar4 + 1) = 1;
    }
    else {
      *(undefined1 *)puVar4 = 1;
    }
    puVar4[1] = uVar7;
    FUN_14026cd0();
    iVar11 = *piVar3;
  }
  uVar7 = 0;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14027574);
  }
LAB_140274d2:
  if (iVar10 == 0) {
    *DAT_1402754c = 0xffffffff;
  }
  bVar1 = *DAT_14027564;
  uVar8 = bVar1 + 1;
  *DAT_14027564 =
       (char)uVar8 + (char)(uint)((ulonglong)DAT_14027550 * (ulonglong)uVar8 >> 0x23) * -10;
  *(undefined4 *)(DAT_14027568 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  return uVar7;
}

