/* FUN_10130622 @ 0x10130622 */

undefined4 FUN_10130622(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_20;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  iVar8 = FUN_100a9c30(*(undefined1 *)(param_1 + 0x9a),0);
  if (iVar8 == 0) {
    iStack_20 = param_1;
    iVar8 = FUN_100b3c64(&stack0xffffffe8);
    *(int *)(param_1 + 0xc) = iVar8;
    if (iVar8 == 0) {
      uVar12 = 0xffffffea;
    }
    else {
      iVar8 = FUN_1012e06e(1,*(undefined1 *)(param_2 + 3));
      iVar3 = FUN_1012e0a2(1,*(undefined1 *)(param_2 + 3));
      if (((iVar8 != 0) && (0 < iVar3)) && (0 < *(int *)(*(int *)(param_1 + 0xc) + 0xb8))) {
        if (*(char *)(param_1 + 0x9d) == '\x01') {
          uVar12 = FUN_1009f374(iVar8,iVar3);
          *(undefined4 *)(param_1 + 0x14) = uVar12;
          uVar12 = FUN_1009f374(*(undefined4 *)(*(int *)(param_1 + 0xc) + 100),
                                *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xb8));
          *(undefined4 *)(param_1 + 0x1c) = uVar12;
        }
        else {
          uVar12 = FUN_1009f374(iVar8);
          *(undefined4 *)(param_1 + 0x14) = uVar12;
          uVar12 = FUN_1009f374(iVar8 + (iVar3 >> 1));
          *(undefined4 *)(param_1 + 0x18) = uVar12;
          uVar12 = FUN_1009f374(*(undefined4 *)(*(int *)(param_1 + 0xc) + 100),
                                *(int *)(*(int *)(param_1 + 0xc) + 0xb8) / 2);
          *(undefined4 *)(param_1 + 0x1c) = uVar12;
          uVar12 = FUN_1009f374(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x68),
                                *(int *)(*(int *)(param_1 + 0xc) + 0xb8) / 2);
          *(undefined4 *)(param_1 + 0x20) = uVar12;
        }
      }
      uVar12 = 0;
    }
    return uVar12;
  }
  uVar10 = (DAT_100b38a0 - DAT_100b389c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b38a4 | uVar10,DAT_100b38a8);
  FUN_100a5b78(uVar10 | 0x16a0031,DAT_100b38a8);
  iVar8 = FUN_1012def6(*(undefined1 *)(param_2 + 3));
  if (iVar8 != 0) {
    iVar8 = FUN_10064eb8(0);
    if (iVar8 == 0) {
      FUN_100a5b78(uVar10 | 0xe40011,DAT_100b38ac);
    }
    else {
      if ((*(int *)(param_2 + 0x24) == 0) || (iVar3 = FUN_1012d6fa(), iVar3 == 0)) {
        uVar12 = FUN_1012e06e(1,*(undefined1 *)(param_2 + 3));
        uVar2 = FUN_1012e0a2(1,*(undefined1 *)(param_2 + 3));
        iVar3 = FUN_1011dc92(iVar8,uVar12,uVar2);
        *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 2;
      }
      *(int *)(param_1 + 0x4c) = iVar8;
      *(int *)(param_1 + 0x50) = iVar3;
    }
    FUN_1012dee0(*(undefined1 *)(param_2 + 3));
    uVar12 = 0;
    goto LAB_100b36ec;
  }
  local_58 = 1;
  uStack_54 = 0x3f;
  local_50 = iVar8;
  local_4c = iVar8;
  iVar8 = FUN_100a9c60(*(undefined1 *)(param_1 + 0x9a),0);
  if (iVar8 != 0) {
    local_50 = iVar8;
  }
  iVar8 = FUN_100a9c90(*(undefined1 *)(param_1 + 0x9a),0);
  if (iVar8 != 0) {
    local_4c = iVar8;
  }
  iVar8 = FUN_10064eb8(&local_58);
  if (iVar8 == 0) {
    FUN_100a5b78(uVar10 | 0x1840011,DAT_100b38ac);
    uVar12 = 0xffffffed;
  }
  else {
    if ((*(int *)(param_2 + 0x24) == 0) || (iVar3 = FUN_1012d6fa(), iVar3 == 0)) {
      uVar12 = FUN_1012e06e(1,*(undefined1 *)(param_2 + 3));
      uVar2 = FUN_1012e0a2(1,*(undefined1 *)(param_2 + 3));
      iVar3 = FUN_1011dc92(iVar8,uVar12,uVar2);
      *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 2;
    }
    if ((*(int *)(param_2 + 0x28) == 0) || (iVar4 = FUN_1012d6fa(), iVar4 == 0)) {
      uVar12 = FUN_1012e06e(3,*(undefined1 *)(param_2 + 3));
      uVar2 = FUN_1012e0a2(3,*(undefined1 *)(param_2 + 3));
      iVar4 = FUN_1011dc92(iVar8,uVar12,uVar2);
      *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) | 4;
    }
    if (*(char *)(param_2 + 3) == '\t') {
      if ((iVar3 != 0) && (iVar4 != 0)) {
        iVar5 = 0;
        goto LAB_100b38cc;
      }
      FUN_100a5b78(uVar10 | 0x1ae0011,DAT_100b38c4);
      iVar5 = 0;
    }
    else {
      uVar12 = FUN_1012e06e(6);
      uVar2 = FUN_1012e0a2(6,*(undefined1 *)(param_2 + 3));
      iVar5 = FUN_1011dc92(iVar8,uVar12,uVar2);
      if (((iVar3 != 0) && (iVar4 != 0)) && (iVar5 != 0)) {
LAB_100b38cc:
        uVar12 = DAT_100b3b58;
        uVar6 = DAT_100b3b54 | uVar10;
        *(int *)(param_1 + 0x4c) = iVar8;
        FUN_100a5b78(uVar6,uVar12,iVar3);
        FUN_100a5b78(uVar10 | 0x1b80031,DAT_100b3b5c,iVar4);
        FUN_100a5b78(DAT_100b3b60 | uVar10,DAT_100b3b64,iVar8);
        *(int *)(param_1 + 0x50) = iVar3;
        *(int *)(param_1 + 0x54) = iVar4;
        *(int *)(param_1 + 0x58) = iVar5;
        *(undefined2 *)(param_1 + 0x86) = 6000;
        iVar8 = FUN_1012df10(*(undefined1 *)(param_2 + 3));
        if (iVar8 != 0) {
          uVar1 = FUN_1012df42();
          local_48 = CONCAT22(local_48._2_2_,uVar1);
          FUN_100a5b78(uVar10 | 0xff0031,DAT_100b3b68);
          local_48 = CONCAT22(1,(undefined2)local_48);
          uVar1 = FUN_1012def2(*(undefined1 *)(param_1 + 0x9a));
          local_44 = CONCAT22(local_44._2_2_,uVar1);
          local_40 = FUN_10130726(*(undefined4 *)(param_1 + 0x50));
          local_38 = FUN_10130726(*(undefined4 *)(param_1 + 0x58));
          uVar1 = FUN_100b0df0(&local_3c,param_2,*(undefined4 *)(param_1 + 8));
          local_48 = CONCAT22(uVar1,(undefined2)local_48);
          FUN_101306dc(*(undefined4 *)(param_1 + 0x4c),3,5,0x14,&local_48);
        }
        FUN_1011ea48(&local_48,0);
        local_48 = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x9a),(undefined2)local_48);
        uVar6 = (uint)*(ushort *)(param_2 + 0x20);
        if (*(char *)(param_2 + 0x18) == '\x03') {
          if ((uVar6 == 0) ||
             (iVar8 = (uint)*(byte *)(param_1 + 0x9b) * (uint)*(byte *)(param_2 + 0x1c),
             (uint)(iVar8 * 0x50) >> 3 < uVar6)) {
            local_44._0_2_ = 1;
          }
          else if ((uint)(iVar8 * 0x30) >> 3 < uVar6) {
            local_44._0_2_ = 6;
          }
          else {
            local_44._0_2_ = 0x11;
          }
        }
        else {
          local_44._0_2_ = 0;
        }
        local_44._2_2_ = 0x10;
        uVar1 = FUN_100af4e0(*(undefined1 *)(param_1 + 0x9c));
        local_40 = CONCAT22(local_40._2_2_,uVar1);
        uVar1 = FUN_100af4e0(*(undefined1 *)(param_1 + 0x9b));
        local_3c = (uint)*(ushort *)(param_2 + 0x20) * 1000;
        bVar9 = *(byte *)(param_2 + 0x1d);
        if (*(byte *)(param_2 + 0x1c) == bVar9) {
          bVar9 = 0;
        }
        local_40 = CONCAT22(uVar1,(undefined2)local_40);
        local_38 = CONCAT13(*(undefined1 *)(param_2 + 0x1e),
                            CONCAT12(*(byte *)(param_2 + 0x1c) & 0xf | bVar9 << 4,0x35));
        local_34 = 0x1e0;
        local_2c = FUN_10130726(*(undefined4 *)(param_1 + 0x54));
        if (*(char *)(param_1 + 0x9a) == '\x01') {
          if (*(byte *)(param_2 + 0x3c) < 0x11) {
            local_38 = CONCAT22(local_38._2_2_,(ushort)*(byte *)(param_2 + 0x3c));
          }
          local_44._0_2_ = *(undefined2 *)(param_2 + 10);
        }
        else if (*(char *)(param_1 + 0x9a) == '\f') {
          local_34 = 0x140;
          local_38 = CONCAT22(local_38._2_2_,5);
        }
        iVar8 = FUN_1012df10(*(undefined1 *)(param_2 + 3));
        if (iVar8 == 0) {
          uVar12 = *(undefined4 *)(param_1 + 0x50);
        }
        else {
          uVar12 = *(undefined4 *)(param_1 + 0x58);
        }
        local_30 = FUN_10130726(uVar12);
        FUN_101306dc(*(undefined4 *)(param_1 + 0x4c),3,2,0x20,&local_48);
        local_60 = 0;
        local_5c = 0;
        puVar7 = (undefined4 *)FUN_1012e06e(0x2f,*(undefined1 *)(param_2 + 3));
        *(undefined4 **)(param_1 + 0x94) = puVar7;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          local_60 = FUN_10130726();
        }
        iVar8 = FUN_1012e06e(0x30,*(undefined1 *)(param_2 + 3));
        if (iVar8 != 0) {
          uVar11 = *(undefined4 *)(param_1 + 0x4c);
          uVar12 = FUN_1012e06e(0x30,*(undefined1 *)(param_2 + 3));
          uVar2 = FUN_1012e0a2(0x30,*(undefined1 *)(param_2 + 3));
          uVar12 = FUN_1011dc92(uVar11,uVar12,uVar2);
          *(undefined4 *)(param_1 + 0x5c) = uVar12;
          local_5c = FUN_10130726();
        }
        if ((*(char *)(param_1 + 0x9a) == '\x01') && (local_5c == 0)) {
          uVar11 = *(undefined4 *)(param_1 + 0x4c);
          uVar12 = FUN_1012e06e(0x31,*(undefined1 *)(param_2 + 3));
          uVar2 = FUN_1012e0a2(0x31,*(undefined1 *)(param_2 + 3));
          uVar12 = FUN_1011dc92(uVar11,uVar12,uVar2);
          *(undefined4 *)(param_1 + 0x5c) = uVar12;
          local_5c = FUN_10130726();
        }
        FUN_101306dc(*(undefined4 *)(param_1 + 0x4c),3,0x1b,8,&local_60);
        FUN_100a5b78(uVar10 | 0x15a0032,DAT_100b3b6c,*(undefined1 *)(param_1 + 0x9a),
                     (undefined2)local_44);
        FUN_100a5b78(DAT_100b3b70 | uVar10,DAT_100b3b74,local_40._2_2_);
        FUN_100a5b78(uVar10 | 0x15c0031,DAT_100b3b78,local_3c);
        local_40 = 0;
        local_48 = 0x21;
        local_44 = 0;
        FUN_10064d1c(*(undefined4 *)(param_1 + 0x4c),&local_48);
        uVar12 = 0;
        goto LAB_100b36ec;
      }
      FUN_100a5b78(DAT_100b38c0 | uVar10,DAT_100b38c4);
    }
    if ((iVar3 != 0) && ((int)((uint)*(byte *)(param_1 + 0xa3) << 0x1e) < 0)) {
      FUN_1011dcae(iVar3);
    }
    if ((iVar4 != 0) && ((int)((uint)*(byte *)(param_1 + 0xa3) << 0x1d) < 0)) {
      FUN_1011dcae(iVar4);
    }
    if (iVar5 != 0) {
      FUN_1011dcae(iVar5);
    }
    FUN_10064c60(iVar8);
    uVar12 = 0xfffffff4;
  }
  FUN_100a5b78(DAT_100b38b8 | uVar10,DAT_100b38bc);
LAB_100b36ec:
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_100a5b78(DAT_100b38b0 | uVar10,DAT_100b38b4);
    uVar12 = 0xffffff80;
  }
  return uVar12;
}

