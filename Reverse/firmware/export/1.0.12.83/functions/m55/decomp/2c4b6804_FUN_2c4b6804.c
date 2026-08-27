/* FUN_2c4b6804 @ 0x2c4b6804 */

void FUN_2c4b6804(void)

{
  bool bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined4 unaff_lr;
  
  uVar13 = 4;
  uVar12 = 3;
  uVar10 = 2;
  uVar14 = 0;
  do {
    uVar8 = uVar14 & 0xffff;
    uVar6 = uVar13 | 0x1000;
    uVar17 = uVar12 | 0x1000;
    if (uVar14 == 5) {
      FUN_2c673d68(0x105e,0x20);
      uVar7 = 0x1066;
      uVar16 = 0x1065;
      uVar15 = 0x1063;
      uVar11 = 0x1062;
      uVar17 = 0x1060;
      uVar4 = 0x105f;
      uVar5 = 0x6060;
      uVar6 = 0x1061;
    }
    else {
      FUN_2c673d68(uVar10 - 1 | 0x1000,0x20);
      uVar4 = uVar10 | 0x1000;
      if (uVar8 == 4) {
        uVar6 = uVar13 | 0x1000;
        uVar4 = uVar10 | 0x1000;
        uVar17 = uVar12 | 0x1000;
        uVar11 = uVar10 + 3 | 0x1000;
        uVar5 = 0xc0c0;
        uVar15 = uVar10 + 4 | 0x1000;
        uVar16 = uVar10 + 6 | 0x1000;
        uVar7 = uVar10 + 7 | 0x1000;
      }
      else {
        uVar11 = uVar10 + 3 | 0x1000;
        uVar5 = 0x6060;
        uVar15 = uVar10 + 4 | 0x1000;
        uVar16 = uVar10 + 6 | 0x1000;
        uVar7 = uVar10 + 7 | 0x1000;
      }
    }
    FUN_2c673d68(uVar4,uVar5);
    FUN_2c673d68(uVar17,0x8018);
    uVar14 = uVar14 + 1;
    FUN_2c673d68(uVar6,0x8188);
    uVar10 = uVar10 + 0x10;
    FUN_2c673d68(uVar11,0xa118);
    uVar12 = uVar12 + 0x10;
    FUN_2c673d68(uVar15,0x4084);
    uVar13 = uVar13 + 0x10;
    FUN_2c673d68(uVar16,0x1073);
    FUN_2c673d68(uVar7,0x2144);
    FUN_2c673d68(uVar8 + 0xd1 & 0xffff | 0x1000,0x8e);
  } while (uVar14 != 6);
  FUN_2c4b6fc4(8);
  FUN_2c4b7018(8);
  FUN_2c4b706c(8);
  FUN_2c673d68(0x1050,1);
  FUN_2c4b723c(7);
  FUN_2c4b7178(7);
  FUN_2c4b71dc(7);
  FUN_2c4b70c0(4);
  FUN_2c673d68(0x106c,0x8000);
  FUN_2c673d68(0x106d,0x94a0);
  FUN_2c673d68(0x106e,0x7700);
  FUN_2c673d68(0x106f,0x870b);
  FUN_2c673d68(0x1070,0xc3);
  FUN_2c673d68(0x1073,0x1078);
  FUN_2c673d68(0x1053,10);
  FUN_2c673d68(0x1074,0x6000);
  FUN_2c673d68(0x1075,0xdc04);
  FUN_2c673d68(0x10d7,0xc2db);
  FUN_2c673d68(0x10d8,0x8803);
  FUN_2c673d68(0x10db,0x2492);
  FUN_2c673d68(0x10dd,0x7000);
  FUN_2c673d68(0x107a,0x3001);
  puVar2 = DAT_2c4b6a78;
  iVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *DAT_2c4b6a78 = 0x2c4b6a2c;
    puVar2[1] = unaff_lr;
  }
  puVar3 = DAT_2c4b6a7c;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar10 = *DAT_2c4b6a7c;
  *DAT_2c4b6a7c = uVar10 | 1;
  if (iVar9 == 0) {
    *DAT_2c4b6a78 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar9);
  }
  if (uVar10 == 0) {
    uVar10 = *puVar3;
    if (uVar10 != 0) {
      FUN_2c4b6d30(1);
    }
    else {
      FUN_2c4b6dc8();
    }
    FUN_2c4b6e64(uVar10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x2c6744a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c6744a4)(DAT_2c4b6a80,0x10);
  return;
}

