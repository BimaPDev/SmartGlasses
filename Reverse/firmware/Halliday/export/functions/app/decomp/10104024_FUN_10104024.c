/* FUN_10104024 @ 0x10104024 */

int FUN_10104024(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  int *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int local_2c;
  
  uVar10 = *(undefined4 *)(param_1 + 8);
  iVar9 = param_2 + 0x6c;
  local_64 = 0;
  if (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x10)) {
    if ((1 < param_3) && (1 < param_3 - 3)) {
      local_64 = 0x13;
      goto LAB_10104042;
    }
    if (*(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f < 0) {
      FUN_100fb5cc(uVar10,*(undefined4 *)(param_2 + 0x58));
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) & 0xfffffffe
      ;
    }
    iVar6 = FUN_100f90e8(param_2,param_3,param_4);
    if (iVar6 != 0) {
      local_64 = 0x62;
      iVar6 = *(int *)(*(int *)(param_2 + 0x9c) + 4);
      goto joined_r0x1010418c;
    }
    if ((*(int *)(param_2 + 0x4c) == 0) || (*(int *)(param_2 + 0x54) == 0)) {
      if (local_64 == 0) {
        *(undefined4 *)(param_2 + 0x48) = DAT_101043e0;
        return 0;
      }
      iVar6 = *(int *)(*(int *)(param_2 + 0x9c) + 4);
      goto joined_r0x1010418c;
    }
    uVar2 = FUN_100fb280(uVar10,*(int *)(param_2 + 0x54),0,*(int *)(param_2 + 0x4c),0,&local_64);
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    if (local_64 == 0) {
      iVar7 = *(int *)(param_2 + 100);
      iVar8 = *(int *)(param_2 + 0x68);
      *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) | 1;
      iVar7 = iVar7 * -0x40;
      if (*(char *)(param_2 + 0x5e) == '\x06') {
        iVar6 = *(int *)(param_2 + 0x4c) << 6;
        iVar6 = (int)((ulonglong)((longlong)DAT_101043e4 * (longlong)iVar6) >> 0x20) -
                (iVar6 >> 0x1f);
      }
      else {
        iVar6 = *(int *)(param_2 + 0x4c) << 6;
      }
      iVar6 = iVar8 * -0x40 + iVar6;
      if (param_4 != (int *)0x0) {
        iVar7 = *param_4 + iVar7;
        iVar6 = iVar6 + param_4[1];
      }
      if (iVar7 != 0 || iVar6 != 0) {
        FUN_100fa540(iVar9,iVar7,iVar6);
      }
      if (param_3 < 2) {
        if (-1 < *(int *)(param_2 + 0x7c) << 0x19) {
          local_50 = 1;
          local_58 = param_2 + 0x4c;
          local_54 = iVar9;
          local_64 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
          goto LAB_10104150;
        }
        uVar3 = *(uint *)(param_2 + 0x70);
        if (uVar3 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar3 + *(short *)(param_2 + 0x6e) * 8;
        }
        uVar1 = *(int *)(param_2 + 0x50) << 2;
        if (uVar1 < 0x8000) {
          local_38 = 0;
          uStack_34 = 0;
          iStack_5c = *(int *)(param_2 + 0x54);
          local_3c = &local_60;
          local_60 = *(int *)(param_2 + 0x58);
          local_2c = *(int *)(param_2 + 0x4c) << 2;
          if (-1 < iStack_5c) {
            local_60 = iStack_5c * (*(int *)(param_2 + 0x4c) + -1) + local_60;
          }
          local_50 = 3;
          local_4c = DAT_101043e8;
          local_30 = uVar1;
          if (uVar3 < uVar12) {
            iVar4 = uVar3 + 8;
            iVar8 = iVar4;
            do {
              *(int *)(iVar8 + -8) = *(int *)(iVar8 + -8) << 2;
              *(int *)(iVar8 + -4) = *(int *)(iVar8 + -4) << 2;
              iVar8 = iVar8 + 8;
            } while ((~uVar3 + uVar12 & 0xfffffff8) + uVar3 + 0x10 != iVar8);
            local_54 = iVar9;
            local_64 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
            do {
              iVar8 = *(int *)(iVar4 + -8);
              iVar5 = *(int *)(iVar4 + -4);
              if (iVar8 < 0) {
                iVar8 = iVar8 + 3;
              }
              if (iVar5 < 0) {
                iVar5 = iVar5 + 3;
              }
              *(int *)(iVar4 + -8) = iVar8 >> 2;
              *(int *)(iVar4 + -4) = iVar5 >> 2;
              iVar4 = iVar4 + 8;
            } while (iVar4 != (~uVar3 + uVar12 & 0xfffffff8) + uVar3 + 0x10);
          }
          else {
            local_54 = iVar9;
            local_64 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
          }
          goto LAB_10104150;
        }
        local_64 = 0x62;
      }
      else {
        if (param_3 == 3) {
          iStack_5c = *(int *)(param_2 + 0x54);
          local_38 = 0;
          uStack_34 = 0;
          local_30 = *(uint *)(param_2 + 0x50);
          local_2c = *(int *)(param_2 + 0x4c);
          local_3c = &local_60;
          local_60 = *(int *)(param_2 + 0x58);
          if (-1 < iStack_5c) {
            local_60 = iStack_5c * (local_2c + -1) + local_60;
          }
          iVar11 = *(int *)(param_1 + 4);
          local_4c = DAT_101043ec;
          local_54 = iVar9;
          local_50 = param_3;
          FUN_100fa540(iVar9,-*(int *)(iVar11 + 0xb4),-*(int *)(iVar11 + 0xb8));
          iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
          iVar4 = *(int *)(iVar11 + 0xb4);
          iVar5 = *(int *)(iVar11 + 0xb8);
          if (iVar8 == 0) {
            local_60 = local_60 + 1;
            FUN_100fa540(iVar9,iVar4 - *(int *)(iVar11 + 0xbc),iVar5 - *(int *)(iVar11 + 0xc0));
            iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
            iVar4 = *(int *)(iVar11 + 0xbc);
            iVar5 = *(int *)(iVar11 + 0xc0);
            if (iVar8 == 0) {
              local_60 = local_60 + 1;
              FUN_100fa540(iVar9,iVar4 - *(int *)(iVar11 + 0xc4),iVar5 - *(int *)(iVar11 + 200));
              iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
              iVar4 = *(int *)(iVar11 + 0xc4);
              iVar5 = *(int *)(iVar11 + 200);
            }
          }
          FUN_100fa540(iVar9,iVar4,iVar5);
          local_64 = iVar8;
        }
        else if (param_3 == 4) {
          iVar11 = *(int *)(param_1 + 4);
          iVar13 = *(int *)(param_2 + 0x54);
          iVar8 = *(int *)(iVar11 + 0xb8);
          *(uint *)(param_2 + 0x4c) =
               (uint)((ulonglong)DAT_101043f0 * (ulonglong)*(uint *)(param_2 + 0x4c) >> 0x21);
          *(int *)(param_2 + 0x54) = iVar13 * 3;
          local_50 = 1;
          local_58 = param_2 + 0x4c;
          local_54 = iVar9;
          FUN_100fa540(iVar9,-iVar8,*(undefined4 *)(iVar11 + 0xb4));
          iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
          iVar5 = *(int *)(iVar11 + 0xb4);
          iVar4 = *(int *)(iVar11 + 0xb8);
          if (iVar8 == 0) {
            iVar14 = *(int *)(iVar11 + 0xbc);
            iVar8 = *(int *)(iVar11 + 0xc0);
            *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + iVar13;
            FUN_100fa540(iVar9,iVar4 - iVar8,iVar14 - iVar5);
            iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
            iVar14 = *(int *)(param_2 + 0x58) - iVar13;
            iVar5 = *(int *)(iVar11 + 0xbc);
            iVar4 = *(int *)(iVar11 + 0xc0);
            if (iVar8 == 0) {
              iVar8 = *(int *)(iVar11 + 0xc4);
              *(int *)(param_2 + 0x58) = iVar14 + iVar13 * 2;
              FUN_100fa540(iVar9,iVar4 - *(int *)(iVar11 + 200),iVar8 - iVar5);
              iVar8 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_58);
              iVar5 = *(int *)(iVar11 + 0xc4);
              iVar14 = *(int *)(param_2 + 0x58) + iVar13 * -2;
              iVar4 = *(int *)(iVar11 + 200);
            }
            *(int *)(param_2 + 0x58) = iVar14;
          }
          FUN_100fa540(iVar9,iVar4,-iVar5);
          *(int *)(param_2 + 0x54) =
               (int)((ulonglong)((longlong)DAT_101043e4 * (longlong)*(int *)(param_2 + 0x54)) >>
                    0x20) - (*(int *)(param_2 + 0x54) >> 0x1f);
          *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) * 3;
          local_64 = iVar8;
        }
LAB_10104150:
        if (local_64 == 0) {
          *(undefined4 *)(param_2 + 0x48) = DAT_101043e0;
          goto LAB_1010407e;
        }
      }
      if (-1 < *(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f) goto LAB_1010407e;
      uVar2 = *(undefined4 *)(param_2 + 0x58);
    }
    else {
      if (-1 < *(int *)(*(int *)(param_2 + 0x9c) + 4) << 0x1f) {
        return local_64;
      }
      iVar6 = 0;
      iVar7 = 0;
    }
  }
  else {
    local_64 = 6;
LAB_10104042:
    iVar6 = *(int *)(*(int *)(param_2 + 0x9c) + 4);
joined_r0x1010418c:
    if (-1 < iVar6 << 0x1f) {
      return local_64;
    }
    iVar6 = 0;
    uVar2 = *(undefined4 *)(param_2 + 0x58);
    iVar7 = iVar6;
  }
  FUN_100fb5cc(uVar10,uVar2);
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(uint *)(*(int *)(param_2 + 0x9c) + 4) = *(uint *)(*(int *)(param_2 + 0x9c) + 4) & 0xfffffffe;
LAB_1010407e:
  if (iVar7 == 0) {
    iVar7 = 0;
    if (iVar6 == 0) {
      return local_64;
    }
  }
  else {
    iVar7 = -iVar7;
  }
  FUN_100fa540(iVar9,iVar7,-iVar6);
  return local_64;
}

