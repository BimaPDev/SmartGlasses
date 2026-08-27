/* FUN_2c6619ac @ 0x2c6619ac */

undefined4 *
FUN_2c6619ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = FUN_2c65fc58(iVar8);
  uVar4 = FUN_2c65faf0(iVar8);
  uVar5 = FUN_2c66ea0c(param_10);
  local_60 = 0;
  for (local_7c = 0;
      (iVar8 = FUN_2c656c1a(&local_68,&param_5), uVar7 = local_60, iVar8 != 0 && (local_7c < uVar5))
      ; local_7c = local_7c + 1) {
    if (local_60 != 0) goto LAB_2c661ac8;
    iVar9 = param_10 + local_7c * 4;
    iVar8 = FUN_2c656bc6(uVar4,*(undefined4 *)(param_10 + local_7c * 4),0);
    if (iVar8 != 0x25) {
      iVar9 = *(int *)(param_10 + local_7c * 4);
      iVar8 = FUN_2c656bd8(&local_68);
      if (iVar9 == iVar8) {
        FUN_2c660394(&local_68);
      }
      else {
        local_60 = local_60 | 4;
      }
      goto LAB_2c661b1e;
    }
    iVar8 = FUN_2c656bc6(uVar4,*(undefined4 *)(iVar9 + 4),0);
    local_5c = uVar7;
    if ((iVar8 == 0x45) || (uVar7 = local_7c + 1, iVar8 == 0x4f)) {
      iVar8 = FUN_2c656bc6(uVar4,*(undefined4 *)(iVar9 + 8),0);
      uVar7 = local_7c + 2;
    }
    local_7c = uVar7;
    switch(iVar8) {
    case 0x41:
      FUN_2c65f8a8(uVar3,local_58);
      goto LAB_2c661ae0;
    case 0x42:
      FUN_2c65f8e8(uVar3,local_58);
      goto LAB_2c661b38;
    case 0x43:
    case 0x59:
    case 0x79:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,9999,4,iVar1,
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
      iVar8 = DAT_2c661f48;
      goto LAB_2c661c34;
    default:
      goto switchD_2c661a4a_caseD_45;
    case 0x48:
      uVar11 = 0x17;
      uVar6 = 0;
      goto LAB_2c661c4c;
    case 0x49:
      uVar11 = 0xc;
      uVar6 = 1;
LAB_2c661c4c:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar6,uVar11,2,
                   iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[2] = local_5c;
      }
      break;
    case 0x4d:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3b,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[1] = local_5c;
      }
      break;
    case 0x52:
      iVar9 = DAT_2c661f4c + -6;
      iVar8 = DAT_2c661f4c;
      goto LAB_2c661d50;
    case 0x53:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,0,0x3d,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        *puVar2 = local_5c;
      }
      break;
    case 0x54:
      iVar8 = DAT_2c661f50;
LAB_2c661c34:
      iVar9 = iVar8 + -9;
LAB_2c661d50:
      FUN_2c6565d4(uVar4,iVar9,iVar8,local_58);
      ppppuVar13 = local_58;
      goto LAB_2c661d5a;
    case 0x58:
      FUN_2c65f890(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
      goto LAB_2c661d5a;
    case 0x5a:
      uVar6 = FUN_2c656bd8(&local_68);
      iVar8 = FUN_2c6565e2(uVar4,1,uVar6);
      if (iVar8 == 0) goto switchD_2c661a4a_caseD_45;
      FUN_2c6616d4(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,DAT_2c661f54,0xe,
                   iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      iVar8 = FUN_2c656c1a(&local_68,&param_5);
      if ((iVar8 == 0) || ((undefined4 ****)local_58[0] != (undefined4 ****)0x0 || local_60 != 0))
      break;
      iVar8 = FUN_2c656bd8(&local_68);
      iVar9 = FUN_2c656bd2(uVar4,0x2d);
      if (iVar9 != iVar8) {
        iVar8 = FUN_2c656bd8(&local_68);
        iVar9 = FUN_2c656bd2(uVar4,0x2b);
        if (iVar9 != iVar8) break;
      }
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,local_58,0,0x17,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      FUN_2c66161a(&local_70,param_2,local_70,uStack_6c,param_5,param_6,local_58,0,0x3b,2,iVar1,
                   &local_60);
      goto LAB_2c661d80;
    case 0x61:
      FUN_2c65f8c8(uVar3,local_58);
LAB_2c661ae0:
      FUN_2c6616d4(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,7,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[6] = local_5c;
      }
      break;
    case 0x62:
    case 0x68:
      FUN_2c65f926(uVar3,local_58);
LAB_2c661b38:
      FUN_2c6616d4(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,local_58,0xc,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      uVar7 = local_5c;
      if (local_60 == 0) {
LAB_2c661b72:
        puVar2[4] = uVar7;
        local_68 = local_70;
        local_64 = uStack_6c;
      }
      break;
    case 99:
      FUN_2c65f89c(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
      goto LAB_2c661d5a;
    case 100:
      uVar11 = 0x1f;
      uVar12 = 2;
      uVar6 = 1;
      goto LAB_2c661bb8;
    case 0x65:
      uVar6 = FUN_2c656bd8(&local_68);
      iVar8 = FUN_2c6565e2(uVar4,8,uVar6);
      if (iVar8 == 0) {
        uVar11 = 0x1f;
        uVar12 = 2;
        uVar6 = 10;
      }
      else {
        FUN_2c65f53c(local_68);
        local_64 = 0xffffffff;
        uVar6 = 1;
        uVar11 = 9;
        uVar12 = 1;
      }
LAB_2c661bb8:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,uVar6,uVar11,uVar12
                   ,iVar1,&local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 == 0) {
        puVar2[3] = local_5c;
      }
      break;
    case 0x6d:
      FUN_2c66161a(&local_70,param_2,local_68,local_64,param_5,param_6,&local_5c,1,0xc,2,iVar1,
                   &local_60);
      local_68 = local_70;
      local_64 = uStack_6c;
      if (local_60 != 0) break;
      uVar7 = local_5c - 1;
      goto LAB_2c661b72;
    case 0x6e:
      uVar6 = FUN_2c656bd8(&local_68);
      iVar8 = FUN_2c656bc6(uVar4,uVar6,0);
      bVar10 = iVar8 == 10;
      goto LAB_2c661d3c;
    case 0x74:
      uVar6 = FUN_2c656bd8(&local_68);
      iVar8 = FUN_2c656bc6(uVar4,uVar6,0);
      bVar10 = iVar8 == 9;
LAB_2c661d3c:
      if (bVar10) {
        FUN_2c660394(&local_68);
      }
      else {
switchD_2c661a4a_caseD_45:
        local_60 = local_60 | 4;
      }
      break;
    case 0x78:
      FUN_2c65f884(uVar3,local_58);
      ppppuVar13 = (undefined4 ****)local_58[0];
LAB_2c661d5a:
      FUN_2c6619ac(&local_70,param_2,local_68,local_64,param_5,param_6,iVar1,&local_60,puVar2,
                   ppppuVar13);
LAB_2c661d80:
      local_68 = local_70;
      local_64 = uStack_6c;
    }
LAB_2c661b1e:
  }
  if ((local_60 != 0) || (local_7c != uVar5)) {
LAB_2c661ac8:
    *param_8 = *param_8 | 4;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  return param_1;
}

