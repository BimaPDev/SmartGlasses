/* FUN_1002acc4 @ 0x1002acc4 */

int FUN_1002acc4(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 uStack_91;
  undefined4 local_90;
  undefined1 auStack_8c [96];
  int local_2c;
  
  local_2c = *piRam1002acec;
  iVar12 = param_1;
  if (param_1 != 0) goto LAB_1002acf0;
LAB_1002acda:
  param_1 = param_2;
  iVar11 = 0;
  do {
    if (*piRam1002acec == local_2c) {
      return iVar11;
    }
    FUN_1013cdc0();
    param_2 = param_1;
LAB_1002acf0:
    piVar1 = DAT_1002b068;
    if (*DAT_1002b068 == 0) {
      iVar11 = thunk_FUN_1009f30c(0x2b4,DAT_1002b06c);
      *piVar1 = iVar11;
      if (iVar11 == 0) goto LAB_1002acda;
      FUN_1011ea48(iVar11,0,0x2b4);
      if (param_2 == 0xff) {
        *(undefined1 *)(iVar11 + 0x41) = 0xff;
      }
      else {
        (**(code **)(DAT_1002b070 + 8))(iVar11 + 0x40,param_2);
        FUN_100a5b78(DAT_1002b07c | (DAT_1002b074 - DAT_1002b078) * 0x20 & 0xff00U,DAT_1002b084,
                     DAT_1002b080,*(undefined1 *)(*piVar1 + 0x41),param_2);
      }
      param_1 = (**(code **)(DAT_1002b088 + 0x10))();
    }
    FUN_1002efe4(param_1);
    iVar11 = FUN_1002f43c(iVar12);
    iVar3 = FUN_10088ffc();
    FUN_1012569c(iVar3,DAT_1002b08c);
    FUN_10126ea2(iVar3,0xff,0);
    uVar4 = FUN_10096f4c(iVar3);
    if (param_2 == 0xff) {
      uVar5 = 0x3e;
    }
    else {
      uVar5 = 0x3f;
    }
    uVar5 = FUN_1004cf14(uVar5);
    FUN_10097998(uVar4,uVar5);
    FUN_101256e8(uVar4,2,0,10);
    iVar6 = FUN_10099634(iVar3);
    FUN_1012569c(iVar6,DAT_1002b094,DAT_1002b090);
    FUN_10126e82(iVar6,0x3186,2);
    FUN_10126ea2(iVar6,0xff,2);
    FUN_10126eb6(iVar6,0xffffffff,2);
    FUN_10126ed6(iVar6,0xff,2);
    FUN_1002f03c(iVar6);
    FUN_1002a1e0(iVar6,10);
    iVar7 = FUN_1011ea10(*piVar1 + 0x54);
    if (iVar7 == 0) {
      iVar7 = FUN_1004cf14(0x40);
    }
    else {
      iVar7 = *piVar1 + 0x54;
    }
    FUN_10099ca4(iVar6,iVar7);
    FUN_10089c2c(iVar6,uVar4,0xe,0,8);
    *(undefined4 *)(iVar6 + 0x10) = DAT_1002b098;
    iVar7 = FUN_1002ed68(iVar3);
    FUN_1012569c(iVar7,DAT_1002b094,DAT_1002b09c);
    FUN_1002f03c(iVar7);
    FUN_10089c2c(iVar7,iVar6,0xe,0,8);
    iVar8 = FUN_10096f4c(iVar7);
    iVar9 = *piVar1;
    if ((*(short *)(iVar9 + 0x4e) == 0) || (*(char *)(iVar9 + 0x4c) == '\0')) {
      uVar4 = FUN_1004cf14(0x3d);
      FUN_10097998(iVar8,uVar4);
      FUN_1004337c(&local_a4);
      uVar2 = local_a0;
      iVar9 = *piVar1;
      local_a0 = CONCAT22(local_a0._2_2_ + 0x76c,(undefined2)local_a0);
      uVar4 = local_a0;
      local_a0._0_1_ = (char)uVar2;
      local_a0 = CONCAT31(SUB43(uVar4,1),(char)local_a0 + '\x01');
      cVar10 = local_a4._1_1_ + '\x01';
      local_a4._0_2_ = CONCAT11(cVar10,(undefined1)local_a4);
      *(undefined4 *)(iVar9 + 0x48) = local_a4;
      *(uint *)(iVar9 + 0x4c) = local_a0;
      *(undefined2 *)(iVar9 + 0x50) = local_9c;
    }
    else {
      FUN_1002bbd0(iVar8,iVar9 + 0x48);
    }
    FUN_101256e8(iVar8,8,0xfffffff6,0);
    uVar4 = DAT_1002b0a4;
    *(undefined4 *)(iVar7 + 0x10) = DAT_1002b0a0;
    FUN_10086fc4(iVar7,uVar4,0);
    FUN_10086fc4(iVar6,DAT_1002b0a4,0);
    uVar4 = FUN_10096f4c(iVar3);
    uVar5 = FUN_1004cf14(0x40);
    FUN_10097998(uVar4,uVar5);
    FUN_101256e8(uVar4,5,0,0xffffffec);
    piVar13 = (int *)*piVar1;
    piVar13[2] = iVar6;
    piVar13[3] = iVar7;
    *piVar13 = iVar12;
    piVar13[1] = iVar11;
    piVar13[4] = iVar8;
    piVar13[0x57] = iVar3;
    if (iVar11 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_10088ffc(iVar11);
      iVar12 = 0;
      FUN_1012569c(iVar3,DAT_1002b08c);
      FUN_10126e82(iVar3,0,0);
      FUN_10126ea2(iVar3,0xff,0);
      iVar7 = *piVar1;
      uVar4 = FUN_10096f4c(iVar3);
      uVar5 = FUN_1004cf14(0x3b);
      FUN_10097998(uVar4,uVar5);
      FUN_10126f32(uVar4,0xffffffff,0);
      FUN_101256e8(uVar4,2,0,10);
      iVar6 = FUN_10098540(iVar3);
      FUN_1012569c(iVar6,0x3c,200);
      FUN_101256e8(iVar6,9,0,0);
      FUN_1004337c(&local_a4);
      local_a0 = CONCAT22(local_a0._2_2_ + 0x76c,(undefined2)local_a0);
      local_90 = 0;
      FUN_1011ea48(auStack_8c,0,0x60);
      uVar4 = DAT_1002b0b0;
      while( true ) {
        local_98 = 0;
        local_94 = 0;
        local_92 = 0;
        FUN_10118a1c(&local_98,7,uVar4,(local_a0 >> 0x10) + iVar12);
        iVar8 = FUN_1011ea10(&local_90);
        iVar9 = FUN_1011ea10(&local_98);
        if ((99 < (uint)(iVar9 + iVar8)) || (FUN_1013d3c0(&local_90,&local_98,100), iVar12 != 0))
        break;
        iVar12 = 1;
      }
      iVar12 = FUN_1011ea10(&local_90);
      if (iVar12 != 0) {
        iVar12 = FUN_1011ea10(&local_90);
        (&uStack_91)[iVar12] = 0;
      }
      FUN_10098558(iVar6,&local_90,0);
      FUN_101256e8(iVar6,7,0x3c,0);
      FUN_1012c0da(iVar6,3);
      FUN_1002a22c(iVar6);
      FUN_1002a1e0(iVar6,4);
      iVar12 = FUN_10098540(iVar3);
      FUN_1012569c(iVar12,0x28,DAT_1002b0a8);
      FUN_10098558(iVar12,DAT_1002b0ac,1);
      FUN_101256e8(iVar12,9,0);
      FUN_1012c0da(iVar12,3);
      FUN_1002a22c(iVar12);
      iVar8 = FUN_10098540(iVar3);
      FUN_1012569c(iVar8,0x28,DAT_1002b0a8);
      FUN_101256e8(iVar8,8,0xffffffc4,0);
      FUN_1012c0da(iVar8,3);
      FUN_1002a22c(iVar8);
      uVar4 = FUN_10096f4c(iVar3);
      uVar5 = FUN_1004cf14(0x3c);
      FUN_10097998(uVar4,uVar5);
      FUN_101256e8(uVar4,5,0,0xffffffe2);
      uVar4 = DAT_1002b1d4;
      *(undefined4 *)(iVar6 + 0x10) = DAT_1002b1d0;
      *(undefined4 *)(iVar12 + 0x10) = DAT_1002b1d8;
      *(undefined4 *)(iVar8 + 0x10) = DAT_1002b1dc;
      FUN_10086fc4(iVar6,uVar4,0);
      FUN_10086fc4(iVar12,DAT_1002b1d4,0);
      FUN_10086fc4(iVar8,DAT_1002b1d4,0);
      iVar9 = *piVar1;
      *(int *)(iVar9 + 0x14) = iVar8;
      *(int *)(iVar9 + 0x18) = iVar12;
      *(int *)(iVar9 + 0x1c) = iVar6;
      FUN_1002a628(iVar8,*(undefined1 *)(iVar7 + 0x4c));
      FUN_1012c082(iVar6,*(short *)(iVar7 + 0x4e) - local_a0._2_2_,0);
      FUN_1012c082(iVar12,*(byte *)(iVar7 + 0x4c) - 1,0);
      FUN_1012c082(iVar8,*(byte *)(iVar7 + 0x4b) - 1,0);
    }
    piVar13[0x59] = iVar3;
    param_1 = *piVar1;
    uVar4 = FUN_1002a2d4(iVar11);
    *(undefined4 *)(param_1 + 0x160) = uVar4;
    iVar3 = *piVar1;
    uVar4 = FUN_1002aa04(iVar11);
    *(undefined4 *)(iVar3 + 0x168) = uVar4;
    FUN_10029f68(1);
    (**(code **)(DAT_1002b1e0 + 0x10))();
  } while( true );
}

