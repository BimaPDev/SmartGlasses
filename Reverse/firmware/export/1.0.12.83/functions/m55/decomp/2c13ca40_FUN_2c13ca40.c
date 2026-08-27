/* FUN_2c13ca40 @ 0x2c13ca40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13ca40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined1 *puVar12;
  
  iStack_2c = *_DAT_2c13ccf0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (param_2 == 0) {
    puVar12 = (undefined1 *)(param_1 + 0xc);
    do {
      puVar11 = puVar12 + 1;
      *puVar12 = 10;
      puVar12[8] = 0;
      puVar12 = puVar11;
    } while ((undefined1 *)(param_1 + 0x14) != puVar11);
    uVar1 = FUN_2c13c41c(0x104,0);
    uStack_38 = 0xf;
    uVar2 = FUN_2c13c41c(0x100);
    uVar1 = uVar1 | uVar2;
    FUN_2c13bc94(0x100,&uStack_38);
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
  }
  else {
    sVar13 = 0x230;
    uVar1 = 0;
    uStack_30 = 0;
    do {
      FUN_2c13bc94(sVar13,&uStack_30);
      uStack_30 = uStack_30 | 0x107;
      uVar2 = FUN_2c13c41c(sVar13);
      sVar13 = sVar13 + 0x40;
      uVar1 = uVar1 | uVar2;
    } while (sVar13 != 0x430);
    FUN_2c13bc94(0x230,&uStack_30);
    uStack_30 = uStack_30 & 7;
    if (uStack_30 - 1 < 7) {
      uVar2 = (uint)*(ushort *)(_DAT_2c13cd04 + (uStack_30 - 1) * 2);
      uVar3 = func_0x2c143c44(0xffff / uVar2);
    }
    else {
      uVar3 = (undefined4)uRam2c13cce8;
      uVar2 = 0x200;
    }
    uVar14 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar14,extraout_s1);
    uStack_30 = uStack_30 & 0xffff;
    uVar4 = FUN_2c13c41c(0x22c);
    uVar14 = func_0x2c143c44(9000 / uVar2);
    uVar15 = func_0x2c1420fc(uVar14);
    uStack_30 = func_0x2c144298(uVar15,extraout_s1_00);
    uStack_30 = uStack_30 & 0xffff;
    uVar5 = FUN_2c13c41c(0x26c);
    uVar3 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar3,extraout_s1_01);
    uStack_30 = uStack_30 & 0xffff;
    uVar6 = FUN_2c13c41c(0x2ac);
    uVar3 = func_0x2c1420fc(uVar14);
    uStack_30 = func_0x2c144298(uVar3,extraout_s1_02);
    uStack_30 = uStack_30 & 0xffff;
    uVar7 = FUN_2c13c41c(0x2ec);
    uVar3 = func_0x2c143c44(0x1194 / uVar2);
    uVar14 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar14,extraout_s1_03);
    uStack_30 = uStack_30 & 0xffff;
    uVar2 = FUN_2c13c41c(0x32c);
    uVar14 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar14,extraout_s1_04);
    uStack_30 = uStack_30 & 0xffff;
    uVar8 = FUN_2c13c41c(0x36c);
    uVar14 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar14,extraout_s1_05);
    uStack_30 = uStack_30 & 0xffff;
    uVar9 = FUN_2c13c41c(0x3ac);
    uVar3 = func_0x2c1420fc(uVar3);
    uStack_30 = func_0x2c144298(uVar3,extraout_s1_06);
    uStack_30 = uStack_30 & 0xffff;
    uVar10 = FUN_2c13c41c(0x3ec);
    uVar10 = uVar10 | uVar4 | uVar5 | uVar1 | uVar6 | uVar7 | uVar2 | uVar8 | uVar9;
    if (uVar10 != 0) {
      FUN_2c135988(4,0x2c0,_DAT_2c13cd00,_DAT_2c13ccfc,_DAT_2c13cd0c,_DAT_2c13cd08,uVar10);
    }
    uStack_38 = 0xf0f;
    uVar1 = FUN_2c13c41c(0x104);
    uStack_38 = 0xf;
    uVar2 = FUN_2c13c41c(0x100);
    uVar1 = uVar1 | uVar2;
    FUN_2c13bc94(0x100,&uStack_38);
    *(undefined2 *)(param_1 + 0x6c) = 0;
  }
  FUN_2c135988(4,0x30d,_DAT_2c13cd00,_DAT_2c13ccfc,_DAT_2c13ccf8,_DAT_2c13ccf4,param_2,uVar1);
  *(bool *)(param_1 + 8) = param_2 != 0;
  FUN_2c13c3c4(&uStack_34);
  if (*_DAT_2c13ccf0 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

