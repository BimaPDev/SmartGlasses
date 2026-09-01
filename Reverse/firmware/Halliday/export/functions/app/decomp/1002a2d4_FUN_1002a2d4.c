/* FUN_1002a2d4 @ 0x1002a2d4 */

undefined4 FUN_1002a2d4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int unaff_r4;
  int unaff_r6;
  int *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int iVar10;
  byte local_162;
  undefined1 local_161;
  int local_160;
  undefined1 local_15c;
  undefined1 uStack_159;
  undefined4 local_158;
  undefined1 auStack_154 [296];
  int local_2c;
  
  local_2c = *DAT_1002a5fc;
  uVar3 = 0;
  if (param_1 == 0) goto LAB_1002a576;
  uVar3 = FUN_10088ffc();
  unaff_r7 = DAT_1002a604;
  unaff_r4 = 0;
  FUN_1012569c(uVar3,DAT_1002a600);
  FUN_10126e82(uVar3,0,0);
  FUN_10126ea2(uVar3,0xff,0);
  uVar4 = FUN_10096f4c(uVar3);
  uVar5 = FUN_1004cf14(0x3d);
  FUN_10097998(uVar4,uVar5);
  FUN_10126f32(uVar4,0xffffffff,0);
  FUN_101256e8(uVar4,2,0,10);
  unaff_r8 = *unaff_r7;
  unaff_r9 = (**(code **)(PTR_DAT_1002a608 + 0xc))();
  unaff_r6 = FUN_10098540(uVar3);
  FUN_1012569c(unaff_r6,0x28,100);
  local_158 = 0;
  FUN_1011ea48(auStack_154,0,0x128);
  puVar2 = PTR_s__01d_1002a624;
  puVar1 = PTR_s__02d_1002a60c;
  iVar10 = unaff_r4;
  if (unaff_r9 != 1) goto LAB_1002a58a;
  iVar10 = 1;
  do {
    local_160 = 0;
    local_15c = 0;
    FUN_10118a1c(&local_160,5,puVar2,iVar10);
    iVar6 = FUN_1011ea10(&local_158);
    iVar7 = FUN_1011ea10(&local_160);
    if (299 < (uint)(iVar7 + iVar6)) break;
    iVar10 = iVar10 + 1;
    FUN_1013d3c0(&local_158,&local_160,300);
  } while (iVar10 != 0xd);
  iVar10 = FUN_1011ea10(&local_158);
  if (iVar10 != 0) {
    iVar10 = FUN_1011ea10(&local_158);
    (&uStack_159)[iVar10] = 0;
  }
  FUN_10043680(*(undefined1 *)(unaff_r8 + 0x4a),&local_162,&local_161);
  FUN_10098558(unaff_r6,&local_158,1);
  uVar9 = local_162 - 1;
  do {
    FUN_1012c082(unaff_r6,uVar9,0);
    FUN_101256e8(unaff_r6,9,0xffffffd8,0);
    FUN_1012c0da(unaff_r6,3);
    FUN_1002a22c(unaff_r6);
    iVar10 = FUN_10098540(uVar3);
    iVar6 = 0;
    FUN_1012569c(iVar10,0x28,100);
    FUN_1011ea48(&local_158,0,300);
    do {
      local_160 = 0;
      local_15c = 0;
      FUN_10118a1c(&local_160,5,PTR_s__02d_1002a60c,iVar6);
      iVar7 = FUN_1011ea10(&local_158);
      iVar8 = FUN_1011ea10(&local_160);
      if (299 < (uint)(iVar8 + iVar7)) break;
      iVar6 = iVar6 + 1;
      FUN_1013d3c0(&local_158,&local_160,300);
    } while (iVar6 != 0x3c);
    iVar6 = FUN_1011ea10(&local_158);
    if (iVar6 != 0) {
      iVar6 = FUN_1011ea10(&local_158);
      (&uStack_159)[iVar6] = 0;
    }
    FUN_10098558(iVar10,&local_158,1);
    FUN_1012c082(iVar10,*(undefined1 *)(unaff_r8 + 0x49),0);
    FUN_101256e8(iVar10,9,0x28,0);
    FUN_1012c0da(iVar10,3);
    FUN_1002a22c(iVar10);
    if (unaff_r9 == 1) {
      iVar6 = FUN_10098540(uVar3);
      FUN_1012569c(iVar6,0x28,100);
      FUN_10098558(iVar6,PTR_DAT_1002a610,0);
      FUN_10043680(*(undefined1 *)(unaff_r8 + 0x4a),&local_162,&local_161);
      FUN_1012c082(iVar6,local_161,0);
      FUN_101256e8(iVar6,9,100,0);
      FUN_1012c0da(iVar6,3);
      FUN_1002a22c(iVar6);
      *(undefined **)(iVar6 + 0x10) = PTR_DAT_1002a614;
      FUN_10086fc4(iVar6,PTR_FUN_1002a740_1_1002a618,0);
      *(int *)(*unaff_r7 + 0x28) = iVar6;
    }
    unaff_r4 = FUN_10096f4c(uVar3);
    uVar4 = FUN_1004cf14(0x24);
    FUN_10097998(unaff_r4,uVar4);
    FUN_101256e8(unaff_r4,5,0,0xffffffe2);
    puVar1 = PTR_FUN_1002a740_1_1002a618;
    *(undefined **)(unaff_r6 + 0x10) = PTR_DAT_1002a61c;
    *(undefined **)(iVar10 + 0x10) = PTR_s_minute_1002a620;
    FUN_10086fc4(unaff_r6,puVar1,0);
    FUN_10086fc4(iVar10,PTR_FUN_1002a740_1_1002a618,0);
    iVar6 = *unaff_r7;
    *(int *)(iVar6 + 0x20) = unaff_r6;
    *(int *)(iVar6 + 0x24) = iVar10;
LAB_1002a576:
    if (*DAT_1002a5fc == local_2c) {
      return uVar3;
    }
    FUN_1013cdc0();
    puVar1 = PTR_s__02d_1002a60c;
    iVar10 = unaff_r4;
LAB_1002a58a:
    do {
      local_15c = (undefined1)iVar10;
      local_160 = iVar10;
      FUN_10118a1c(&local_160,5,puVar1,unaff_r4);
      iVar6 = FUN_1011ea10(&local_158);
      iVar7 = FUN_1011ea10(&local_160);
      if (299 < (uint)(iVar7 + iVar6)) break;
      unaff_r4 = unaff_r4 + 1;
      FUN_1013d3c0(&local_158,&local_160,300);
    } while (unaff_r4 != 0x18);
    iVar10 = FUN_1011ea10(&local_158);
    if (iVar10 != 0) {
      iVar10 = FUN_1011ea10(&local_158);
      (&uStack_159)[iVar10] = 0;
    }
    FUN_10098558(unaff_r6,&local_158,1);
    uVar9 = (ushort)*(byte *)(unaff_r8 + 0x4a);
  } while( true );
}

