/* FUN_2c65b39c @ 0x2c65b39c */

undefined4 *
FUN_2c65b39c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9,
            int param_10)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 ****ppppuVar18;
  uint local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 ***local_58 [13];
  
  puVar3 = param_9;
  iVar2 = param_7;
  local_7c = 0;
  iVar14 = param_7 + 0x6c;
  local_68 = param_3;
  local_64 = param_4;
  uVar7 = FUN_2c659a4c(iVar14);
  iVar14 = FUN_2c659524(iVar14);
  uVar8 = FUN_2c66c4ec(param_10);
  local_60 = 0;
  while( true ) {
    iVar9 = FUN_2c652d9a(&local_68,&param_5);
    uVar13 = local_60;
    if ((iVar9 == 0) || (uVar8 <= local_7c)) break;
    if (local_60 != 0) goto LAB_2c65b4bc;
    iVar9 = FUN_2c652412(iVar14,*(undefined1 *)(param_10 + local_7c),0);
    if (iVar9 != 0x25) {
      cVar1 = *(char *)(param_10 + local_7c);
      cVar6 = FUN_2c652d58(&local_68);
      if (cVar1 == cVar6) {
        FUN_2c659e18(&local_68);
      }
      else {
        local_60 = local_60 | 4;
      }
      goto LAB_2c65b512;
    }
    iVar9 = FUN_2c652412(iVar14,*(undefined1 *)(param_10 + local_7c + 1),0);
    local_5c = uVar13;
    if ((iVar9 == 0x45) || (uVar13 = local_7c + 1, iVar9 == 0x4f)) {
      iVar9 = FUN_2c652412(iVar14,*(undefined1 *)(param_10 + local_7c + 2),0);
      uVar13 = local_7c + 2;
    }
    local_7c = uVar13;
    switch(iVar9) {
    case 0x41:
      FUN_2c6592dc(uVar7,local_58);
      goto LAB_2c65b4d4;
    case 0x42:
      FUN_2c65931c(uVar7,local_58);
      goto LAB_2c65b52c;
    case 0x43:
    case 0x59:
    case 0x79:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,9999,4,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        if ((int)local_5c < 0) {
          uVar13 = local_5c + 100;
        }
        else {
          uVar13 = local_5c - 0x76c;
        }
        puVar3[5] = uVar13;
      }
      break;
    case 0x44:
      iVar9 = DAT_2c65b924;
      goto LAB_2c65b628;
    default:
      goto switchD_2c65b43e_caseD_45;
    case 0x48:
      uVar16 = 0x17;
      uVar12 = 0;
      goto LAB_2c65b674;
    case 0x49:
      uVar16 = 0xc;
      uVar12 = 1;
LAB_2c65b674:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar12,uVar16,2,
                   iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[2] = local_5c;
      }
      break;
    case 0x4d:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3b,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[1] = local_5c;
      }
      break;
    case 0x52:
      iVar11 = DAT_2c65b928 + -6;
      iVar9 = DAT_2c65b928;
      goto LAB_2c65b62c;
    case 0x53:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3d,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        *puVar3 = local_5c;
      }
      break;
    case 0x54:
      iVar9 = DAT_2c65b92c;
LAB_2c65b628:
      iVar11 = iVar9 + -9;
LAB_2c65b62c:
      FUN_2c6523d4(iVar14,iVar11,iVar9,local_58);
      ppppuVar18 = local_58;
      goto LAB_2c65b636;
    case 0x58:
      FUN_2c6592c4(uVar7,local_58);
      ppppuVar18 = (undefined4 ****)local_58[0];
      goto LAB_2c65b636;
    case 0x5a:
      bVar4 = FUN_2c652d58(&local_68);
      if (-1 < (int)((uint)*(byte *)(*(int *)(iVar14 + 0x18) + (uint)bVar4) << 0x1f))
      goto switchD_2c65b43e_caseD_45;
      FUN_2c65b0d0(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,DAT_2c65b930,0xe,
                   iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      iVar9 = FUN_2c652d9a(&local_68,&param_5);
      if ((iVar9 != 0) && ((undefined4 ****)local_58[0] == (undefined4 ****)0x0 && local_60 == 0)) {
        uVar13 = FUN_2c652d58(&local_68);
        uVar10 = FUN_2c6523b2(iVar14,0x2d);
        if (uVar10 != (uVar13 & 0xff)) {
          uVar13 = FUN_2c652d58(&local_68);
          uVar10 = FUN_2c6523b2(iVar14,0x2b);
          if (uVar10 != (uVar13 & 0xff)) break;
        }
        FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,0,0x17,2,iVar2,
                     &local_60);
        local_68 = local_70;
        local_64 = uStack_6c;
        FUN_2c65b016(&local_70,param_2,local_70,uStack_6c,param_5,param_6,local_58,0,0x3b,2,iVar2,
                     &local_60);
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 0x61:
      FUN_2c6592fc(uVar7,local_58);
LAB_2c65b4d4:
      FUN_2c65b0d0(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,7,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[6] = local_5c;
      }
      break;
    case 0x62:
    case 0x68:
      FUN_2c65935a(uVar7,local_58);
LAB_2c65b52c:
      FUN_2c65b0d0(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,0xc,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      uVar13 = local_5c;
      if (local_60 == 0) {
LAB_2c65b566:
        puVar3[4] = uVar13;
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 99:
      FUN_2c6592d0(uVar7,local_58);
      ppppuVar18 = (undefined4 ****)local_58[0];
      goto LAB_2c65b636;
    case 100:
      uVar16 = 0x1f;
      uVar17 = 2;
      uVar12 = 1;
      goto LAB_2c65b5ae;
    case 0x65:
      bVar4 = FUN_2c652d58(&local_68);
      if ((int)((uint)*(byte *)(*(int *)(iVar14 + 0x18) + (uint)bVar4) << 0x1c) < 0) {
        FUN_2c658fa0(local_68);
        local_64 = 0xffffffff;
        uVar12 = 1;
        uVar16 = 9;
        uVar17 = 1;
      }
      else {
        uVar16 = 0x1f;
        uVar17 = 2;
        uVar12 = 10;
      }
LAB_2c65b5ae:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar12,uVar16,
                   uVar17,iVar2,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar3[3] = local_5c;
      }
      break;
    case 0x6d:
      FUN_2c65b016(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,1,0xc,2,iVar2,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 != 0) break;
      uVar13 = local_5c - 1;
      goto LAB_2c65b566;
    case 0x6e:
      uVar5 = FUN_2c652d58(&local_68);
      iVar9 = FUN_2c652412(iVar14,uVar5,0);
      bVar15 = iVar9 == 10;
      goto LAB_2c65b762;
    case 0x74:
      uVar5 = FUN_2c652d58(&local_68);
      iVar9 = FUN_2c652412(iVar14,uVar5,0);
      bVar15 = iVar9 == 9;
LAB_2c65b762:
      if (bVar15) {
        FUN_2c659e18(&local_68);
      }
      else {
switchD_2c65b43e_caseD_45:
        local_60 = local_60 | 4;
      }
      break;
    case 0x78:
      FUN_2c6592b8(uVar7,local_58);
      ppppuVar18 = (undefined4 ****)local_58[0];
LAB_2c65b636:
      FUN_2c65b39c(&local_70,param_2,local_68,local_64,param_5,param_6,iVar2,&local_60,puVar3,
                   ppppuVar18);
      local_68 = local_70;
      local_64 = uStack_6c;
    }
LAB_2c65b512:
    local_7c = local_7c + 1;
  }
  if ((local_60 != 0) || (local_7c != uVar8)) {
LAB_2c65b4bc:
    *param_8 = *param_8 | 4;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  return param_1;
}

