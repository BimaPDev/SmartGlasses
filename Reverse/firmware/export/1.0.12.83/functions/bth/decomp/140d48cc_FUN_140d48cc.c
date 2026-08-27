/* FUN_140d48cc @ 0x140d48cc */

undefined4 *
FUN_140d48cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint *param_9,
            int param_10)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 ****ppppuVar13;
  uint local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 ***local_58 [13];
  
  puVar2 = param_9;
  iVar1 = param_7;
  iVar8 = param_7 + 0x6c;
  local_68 = param_3;
  local_64 = param_4;
  uVar3 = FUN_140d2b6c(iVar8);
  uVar4 = FUN_140d2a04(iVar8);
  uVar5 = FUN_140df568(param_10);
  local_60 = 0;
  for (local_7c = 0;
      (iVar8 = FUN_140c9da6(&local_68,&param_5), uVar7 = local_60, iVar8 != 0 && (local_7c < uVar5))
      ; local_7c = local_7c + 1) {
    if (local_60 != 0) goto LAB_140d49e8;
    iVar9 = param_10 + local_7c * 4;
    iVar8 = FUN_140c9d52(uVar4,*(undefined4 *)(param_10 + local_7c * 4),0);
    if (iVar8 != 0x25) {
      iVar9 = *(int *)(param_10 + local_7c * 4);
      iVar8 = FUN_140c9d64(&local_68);
      if (iVar9 == iVar8) {
        FUN_140d32a8(&local_68);
      }
      else {
        local_60 = local_60 | 4;
      }
      goto LAB_140d4a3e;
    }
    iVar8 = FUN_140c9d52(uVar4,*(undefined4 *)(iVar9 + 4),0);
    local_5c = uVar7;
    if ((iVar8 == 0x45) || (uVar7 = local_7c + 1, iVar8 == 0x4f)) {
      iVar8 = FUN_140c9d52(uVar4,*(undefined4 *)(iVar9 + 8),0);
      uVar7 = local_7c + 2;
    }
    local_7c = uVar7;
    switch(iVar8) {
    case 0x41:
      FUN_140d27bc(uVar3,local_58);
      goto LAB_140d4a00;
    case 0x42:
      FUN_140d27fc(uVar3,local_58);
      goto LAB_140d4a58;
    case 0x43:
    case 0x59:
    case 0x79:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,9999,4,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        if ((int)local_5c < 0) {
          uVar7 = local_5c + 100;
        }
        else {
          uVar7 = local_5c - 0x76c;
        }
        puVar2[5] = uVar7;
      }
      break;
    case 0x44:
      iVar8 = DAT_140d4e68;
      goto LAB_140d4b54;
    default:
      goto switchD_140d496a_caseD_45;
    case 0x48:
      uVar11 = 0x17;
      uVar6 = 0;
      goto LAB_140d4b6c;
    case 0x49:
      uVar11 = 0xc;
      uVar6 = 1;
LAB_140d4b6c:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar6,uVar11,2,
                   iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[2] = local_5c;
      }
      break;
    case 0x4d:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3b,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[1] = local_5c;
      }
      break;
    case 0x52:
      iVar9 = DAT_140d4e6c + -6;
      iVar8 = DAT_140d4e6c;
      goto LAB_140d4c70;
    case 0x53:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3d,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        *puVar2 = local_5c;
      }
      break;
    case 0x54:
      iVar8 = DAT_140d4e70;
LAB_140d4b54:
      iVar9 = iVar8 + -9;
LAB_140d4c70:
      FUN_140c975c(uVar4,iVar9,iVar8,local_58);
      ppppuVar13 = local_58;
      goto LAB_140d4c7a;
    case 0x58:
      FUN_140d27a4(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
      goto LAB_140d4c7a;
    case 0x5a:
      uVar6 = FUN_140c9d64(&local_68);
      iVar8 = FUN_140c976a(uVar4,1,uVar6);
      if (iVar8 == 0) goto switchD_140d496a_caseD_45;
      FUN_140d45f4(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,DAT_140d4e74,0xe,
                   iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      iVar8 = FUN_140c9da6(&local_68,&param_5);
      if ((iVar8 == 0) || ((undefined4 ****)local_58[0] != (undefined4 ****)0x0 || local_60 != 0))
      break;
      iVar8 = FUN_140c9d64(&local_68);
      iVar9 = FUN_140c9d5e(uVar4,0x2d);
      if (iVar9 != iVar8) {
        iVar8 = FUN_140c9d64(&local_68);
        iVar9 = FUN_140c9d5e(uVar4,0x2b);
        if (iVar9 != iVar8) break;
      }
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,0,0x17,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      FUN_140d453a(&local_70,param_2,local_70,uStack_6c,param_5,param_6,local_58,0,0x3b,2,iVar1,
                   &local_60);
      goto LAB_140d4ca0;
    case 0x61:
      FUN_140d27dc(uVar3,local_58);
LAB_140d4a00:
      FUN_140d45f4(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,7,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[6] = local_5c;
      }
      break;
    case 0x62:
    case 0x68:
      FUN_140d283a(uVar3,local_58);
LAB_140d4a58:
      FUN_140d45f4(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,0xc,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      uVar7 = local_5c;
      if (local_60 == 0) {
LAB_140d4a92:
        puVar2[4] = uVar7;
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 99:
      FUN_140d27b0(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
      goto LAB_140d4c7a;
    case 100:
      uVar11 = 0x1f;
      uVar12 = 2;
      uVar6 = 1;
      goto LAB_140d4ad8;
    case 0x65:
      uVar6 = FUN_140c9d64(&local_68);
      iVar8 = FUN_140c976a(uVar4,8,uVar6);
      if (iVar8 == 0) {
        uVar11 = 0x1f;
        uVar12 = 2;
        uVar6 = 10;
      }
      else {
        FUN_140d2450(local_68);
        local_64 = 0xffffffff;
        uVar6 = 1;
        uVar11 = 9;
        uVar12 = 1;
      }
LAB_140d4ad8:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar6,uVar11,uVar12
                   ,iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[3] = local_5c;
      }
      break;
    case 0x6d:
      FUN_140d453a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,1,0xc,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 != 0) break;
      uVar7 = local_5c - 1;
      goto LAB_140d4a92;
    case 0x6e:
      uVar6 = FUN_140c9d64(&local_68);
      iVar8 = FUN_140c9d52(uVar4,uVar6,0);
      bVar10 = iVar8 == 10;
      goto LAB_140d4c5c;
    case 0x74:
      uVar6 = FUN_140c9d64(&local_68);
      iVar8 = FUN_140c9d52(uVar4,uVar6,0);
      bVar10 = iVar8 == 9;
LAB_140d4c5c:
      if (bVar10) {
        FUN_140d32a8(&local_68);
      }
      else {
switchD_140d496a_caseD_45:
        local_60 = local_60 | 4;
      }
      break;
    case 0x78:
      FUN_140d2798(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
LAB_140d4c7a:
      FUN_140d48cc(&local_70,param_2,local_68,local_64,param_5,param_6,iVar1,&local_60,puVar2,
                   ppppuVar13);
LAB_140d4ca0:
      local_68 = local_70;
      local_64 = uStack_6c;
    }
LAB_140d4a3e:
  }
  if ((local_60 != 0) || (local_7c != uVar5)) {
LAB_140d49e8:
    *param_8 = *param_8 | 4;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  return param_1;
}

