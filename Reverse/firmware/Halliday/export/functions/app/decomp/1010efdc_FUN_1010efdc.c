/* FUN_1010efdc @ 0x1010efdc */

int FUN_1010efdc(uint *param_1,undefined4 *param_2,int param_3,float *param_4,ushort param_5,
                undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_90;
  uint local_8c;
  int local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48 [4];
  undefined4 local_38;
  uint *local_34;
  undefined4 local_2c;
  
  local_68 = 0;
  local_64 = 0;
  uVar16 = (uint)param_5;
  if ((*(char *)(param_2 + 4) == '\x01') || (uVar16 - 7 < 2)) {
    iVar3 = 7;
  }
  else if (param_2[0xb] == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    if (param_2[10] != 0) {
      if (param_4 == (float *)0x0) {
        param_4 = DAT_1010f35c;
      }
      uVar8 = uVar16 - 0xc & 0xffff;
      if ((2 < uVar8) || (iVar3 = FUN_1010e9a0(1,0xff), iVar3 == 0)) {
        iVar4 = DAT_1010f360;
        *(ushort *)(DAT_1010f360 + 0x760) = param_5;
        *(undefined1 *)((int)param_1 + 0xb3) = 0;
        if ((uVar16 + 0xdfff & 0xffff) < 9) {
          bVar1 = true;
        }
        else if (uVar8 < 3) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (*(char *)((int)param_1 + 0xb2) == '\0') {
          if (bVar1) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0x10000000;
            *(undefined1 *)((int)param_1 + 0xb3) = 1;
          }
        }
        else {
          uVar15 = 0;
        }
        if (uVar16 == 0xb) {
          uVar15 = 0;
        }
        iVar3 = FUN_1010cba0(param_1);
        uVar2 = DAT_1010f364;
        if (iVar3 == 0) {
          uVar9 = *(ushort *)((int)param_1 + 0xe) - 0x40c;
          if ((((uVar9 & 0xffff) < 0xd) && ((int)((0x120bU >> (uVar9 & 0xff)) << 0x1f) < 0)) &&
             (*(char *)(param_2 + 4) != '\x03')) {
            *(undefined1 *)(param_2 + 4) = 3;
            FUN_101188d0(uVar2);
          }
          uVar14 = *param_1;
          local_8c = param_1[1];
          uVar9 = uVar14;
          uVar10 = local_8c;
          if (*(int *)(iVar4 + 0x730) != 0) {
            uVar9 = *(int *)(iVar4 + 0x744) - *(int *)(iVar4 + 0x73c);
            uVar10 = *(int *)(iVar4 + 0x748) - *(int *)(iVar4 + 0x740);
          }
          if ((uVar9 == 0) || (uVar10 == 0)) {
            iVar3 = 3;
          }
          else {
            if ((((int)uVar9 < (int)uVar14) || ((int)uVar10 < (int)local_8c)) ||
               (*(int *)(iVar4 + 0x730) != 0)) {
              FUN_1010c378(*param_2,param_2[1],&local_68,param_4);
              uVar10 = local_64;
              uVar9 = local_68;
              FUN_1010c378(param_2[2],param_2[1],&local_68,param_4);
              local_90 = local_68;
              if ((int)uVar9 <= (int)local_68) {
                local_90 = uVar9;
              }
              uVar13 = local_64;
              if ((int)uVar10 <= (int)local_64) {
                uVar13 = uVar10;
              }
              if ((int)uVar9 < (int)local_68) {
                uVar9 = local_68;
              }
              if ((int)uVar10 < (int)local_64) {
                uVar10 = local_64;
              }
              FUN_1010c378(param_2[2],param_2[3],&local_68,param_4);
              if ((int)local_68 <= (int)local_90) {
                local_90 = local_68;
              }
              if ((int)local_64 <= (int)uVar13) {
                uVar13 = local_64;
              }
              if ((int)uVar9 < (int)local_68) {
                uVar9 = local_68;
              }
              if ((int)uVar10 < (int)local_64) {
                uVar10 = local_64;
              }
              FUN_1010c378(*param_2,param_2[3],&local_68,param_4);
              if ((int)local_68 <= (int)local_90) {
                local_90 = local_68;
              }
              if ((int)local_64 <= (int)uVar13) {
                uVar13 = local_64;
              }
              if ((int)uVar9 < (int)local_68) {
                uVar9 = local_68;
              }
              local_8c = local_64;
              if ((int)local_64 < (int)uVar10) {
                local_8c = uVar10;
              }
              local_90 = local_90 & ~((int)local_90 >> 0x1f);
              uVar14 = *param_1;
              if ((int)uVar9 <= (int)*param_1) {
                uVar14 = uVar9;
              }
              if ((int)param_1[1] <= (int)local_8c) {
                local_8c = param_1[1];
              }
              uVar13 = uVar13 & ~((int)uVar13 >> 0x1f);
              if (*(int *)(DAT_1010f360 + 0x730) != 0) {
                if ((int)local_90 < (int)*(uint *)(DAT_1010f360 + 0x73c)) {
                  local_90 = *(uint *)(DAT_1010f360 + 0x73c);
                }
                if ((int)uVar13 < (int)*(uint *)(DAT_1010f360 + 0x740)) {
                  uVar13 = *(uint *)(DAT_1010f360 + 0x740);
                }
                if ((int)*(uint *)(DAT_1010f360 + 0x744) <= (int)uVar14) {
                  uVar14 = *(uint *)(DAT_1010f360 + 0x744);
                }
                if ((int)*(uint *)(DAT_1010f360 + 0x748) <= (int)local_8c) {
                  local_8c = *(uint *)(DAT_1010f360 + 0x748);
                }
              }
            }
            else {
              uVar13 = 0;
              local_90 = 0;
            }
            local_5c = param_4[1];
            local_60 = *param_4;
            local_58 = param_4[2] + (local_60 + local_5c) * DAT_1010f368;
            local_54 = param_4[3];
            local_50 = param_4[4];
            local_4c = param_4[5] + (local_54 + local_50) * DAT_1010f368;
            uVar16 = FUN_1013b082(uVar16);
            iVar4 = DAT_1010f360;
            uVar10 = (uint)*(byte *)((int)param_2 + 0x11);
            uVar9 = uVar10 - 1;
            if (2 < uVar9) {
              uVar10 = 0;
            }
            uVar7 = (uint)*(byte *)(param_2 + 4);
            if (uVar9 < 3) {
              uVar10 = uVar10 << 0x14;
            }
            uVar9 = uVar10;
            if (2 < uVar7) {
              uVar9 = 0;
            }
            if (uVar7 < 3) {
              uVar9 = 3 - uVar7;
            }
            if ((*(byte *)(DAT_1010f360 + 0x6cc) & 3) == 2) {
              uVar7 = 0x2000000;
            }
            else {
              uVar7 = 0;
            }
            if (param_3 == 0x1900) {
              uVar11 = 0x10;
            }
            else {
              uVar11 = 0;
            }
            uVar12 = *(uint *)(DAT_1010f360 + 0x6f4);
            iVar3 = FUN_1013b1e8(DAT_1010f360,0xa00,
                                 *(uint *)(DAT_1010f360 + 0x794) | *(uint *)(DAT_1010f360 + 0x734) |
                                 *(uint *)(DAT_1010f360 + 0x7cc) | *(uint *)(DAT_1010f360 + 0x798) |
                                 *(byte *)(DAT_1010f360 + 0x6cc) & 3 | uVar15 | uVar16);
            if ((iVar3 == 0) && (iVar3 = FUN_1013b1e8(iVar4,0xa02,param_6), iVar3 == 0)) {
              uVar16 = uVar10 | uVar9 | uVar7;
              iVar3 = FUN_1013b1e8(iVar4,0xa34,uVar11 | uVar16 | 0x1000000);
              if (((((iVar3 == 0) &&
                    ((((iVar3 = FUN_1013b1e8(iVar4,0xa3b,0x3f800000), iVar3 == 0 &&
                       (iVar3 = FUN_1013b1e8(iVar4,0xa3c,0), iVar3 == 0)) &&
                      (iVar3 = FUN_1013b26c(iVar4,0xa40,&local_60), iVar3 == 0)) &&
                     ((iVar3 = FUN_1013b26c(iVar4,0xa41,&local_5c), iVar3 == 0 &&
                      (iVar3 = FUN_1013b26c(iVar4,0xa42,&local_58), iVar3 == 0)))))) &&
                   (iVar3 = FUN_1013b26c(iVar4,0xa43,&local_54), iVar3 == 0)) &&
                  ((iVar3 = FUN_1013b26c(iVar4,0xa44,&local_50), iVar3 == 0 &&
                   (iVar3 = FUN_1013b26c(iVar4,0xa45,&local_4c), iVar3 == 0)))) &&
                 ((iVar3 = FUN_1013b26c(iVar4,0xacd,param_4 + 2), iVar3 == 0 &&
                  (iVar3 = FUN_1013b26c(iVar4,0xace,param_4 + 5), iVar3 == 0)))) {
                if (((int)(param_2[9] << 0x1f) < 0) && (*(char *)(param_2 + 0xc) != '\0')) {
                  if (param_2[5] != 0) {
                    local_6c = param_2[5];
                    iVar4 = FUN_10062a28(3,&local_6c);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    param_2[6] = 0;
                    param_2[7] = 0;
                    param_2[5] = 0;
                  }
                  uVar15 = param_2[10] + 7 & 0xfffffff8;
                  local_48[0] = uVar15 + 0x10;
                  local_48[1] = 1;
                  iVar4 = FUN_10062a28(2,local_48);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = param_2[10];
                  puVar6 = (undefined4 *)((iVar4 + 7U & 0xfffffff8) + (int)local_34);
                  *puVar6 = 0;
                  puVar6[1] = 0;
                  *local_34 = iVar4 + 7U >> 3 | 0x40000000;
                  local_34[1] = 0;
                  FUN_1011ea40(local_34 + 2,param_2[0xb],param_2[10]);
                  *(undefined4 *)((int)local_34 + uVar15 + 8) = 0x70000000;
                  *(undefined4 *)((int)local_34 + uVar15 + 0xc) = 0;
                  param_2[5] = local_38;
                  param_2[6] = local_34;
                  *(undefined1 *)(param_2 + 0xc) = 0;
                  param_2[7] = local_2c;
                  param_2[8] = local_48[0];
                }
                iVar4 = DAT_1010f624;
                if ((int)*param_1 < (int)uVar14) {
                  uVar14 = *param_1 - local_90;
                }
                else {
                  uVar14 = uVar14 - local_90;
                }
                *(uint *)(DAT_1010f624 + 0x6fc) = uVar14 | (local_8c - uVar13) * 0x10000;
                if ((*(byte *)((int)param_2 + 0x32) - 2 < 2) ||
                   (*(byte *)((int)param_2 + 0x32) == 0)) {
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa1b,0x11000);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa3d,uVar12 >> 6);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa39,local_90 | uVar13 << 0x10);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa3a,*(undefined4 *)(iVar4 + 0x6fc));
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  if ((int)(param_2[9] << 0x1f) < 0) {
                    iVar5 = FUN_1010c174(DAT_1010f624,param_2[7],param_2[8]);
                  }
                  else {
                    iVar5 = FUN_1010c09c(DAT_1010f624,param_2[10],param_2[0xb]);
                  }
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                }
                if ((*(byte *)((int)param_2 + 0x32) & 0xfd) == 1) {
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa1b,0x11000);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa3d,uVar12 >> 6);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar5 = FUN_1013b1e8(DAT_1010f624,0xa39,local_90 | uVar13 << 0x10);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  iVar4 = FUN_1013b1e8(DAT_1010f624,0xa3a,*(undefined4 *)(iVar4 + 0x6fc));
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  if ((int)(param_2[9] << 0x1f) < 0) {
                    iVar4 = FUN_1013b1e8(DAT_1010f624,0xa34,uVar16 | 0x1000200);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar4 = FUN_1013b1e8(DAT_1010f624,0xa02,param_2[0x10]);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar4 = FUN_1010c174(DAT_1010f624,param_2[7],param_2[8]);
                  }
                  else {
                    iVar4 = FUN_1013b1e8(DAT_1010f624,0xa34,uVar7 | uVar9 | 0x1300200);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar4 = FUN_1013b1e8(DAT_1010f624,0xa02,param_2[0x10]);
                    if (iVar4 != 0) {
                      return iVar4;
                    }
                    iVar4 = FUN_1010c09c(DAT_1010f624,param_2[0xf],param_2[0xe]);
                  }
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                }
                if (uVar8 < 3) {
                  iVar3 = FUN_1010e9a0(0,0xff);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}

