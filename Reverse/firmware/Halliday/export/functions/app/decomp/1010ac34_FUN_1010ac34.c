/* FUN_1010ac34 @ 0x1010ac34 */

int FUN_1010ac34(int param_1,int *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint extraout_r3;
  code *pcVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  int local_124;
  int local_110;
  int local_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int local_fc;
  int *local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e4;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 local_c0;
  int local_b8;
  int local_b0;
  int local_60;
  undefined4 uStack_5c;
  int local_44;
  int local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar28 = *(int *)(param_1 + 4);
  if (param_2 == (int *)0x0) {
    return 0x24;
  }
  if (iVar28 == 0) {
    return 0x23;
  }
  if (*(uint *)(iVar28 + 0x10) <= param_3) {
    return 6;
  }
  if ((int)(param_4 << 0x1e) < 0) {
    uVar15 = *(uint *)(iVar28 + 8) & 0x2000;
    if (uVar15 != 0) {
      param_4 = param_4 & 0xfffffffd;
    }
    if ((int)(param_4 << 0x10) < 0) {
      param_4 = param_4 | 2;
    }
    if ((param_4 & 0x401) != 0) {
LAB_1010addc:
      if (uVar15 == 0) {
        param_4 = param_4 | 0xb;
      }
      else {
        param_4 = param_4 | 9;
      }
    }
    uVar15 = param_4 & 2;
    if (uVar15 == 0) goto LAB_1010adea;
    piVar16 = param_2 + 3;
  }
  else {
    if ((param_4 & 0x401) != 0) {
      uVar15 = *(uint *)(iVar28 + 8) & 0x2000;
      goto LAB_1010addc;
    }
LAB_1010adea:
    uVar15 = 0;
    piVar16 = param_2 + 0xc;
  }
  param_2[0xb] = (int)piVar16;
  uVar17 = param_4 & 1;
  if ((uVar17 == 0) && ((char)param_2[0x1c] == '\0')) {
    return 0x24;
  }
  if ((param_4 & 0x4000) != 0) {
    return 6;
  }
  uVar18 = *(undefined4 *)(iVar28 + 0x68);
  FUN_1011ea48(&local_fc,0,0xd4);
  if (uVar15 == 0) {
    iVar26 = param_2[0x4c];
    uVar19 = (param_4 & 0xff) >> 7;
    if (iVar26 < 0) {
      iVar26 = *param_2;
      iVar20 = *(int *)(iVar26 + 100);
      FUN_100fb5cc(iVar20,param_2[0x21]);
      param_2[0x21] = 0;
      FUN_100fb5cc(iVar20,param_2[0x24]);
      param_2[0x24] = 0;
      FUN_100fb5cc(iVar20,param_2[0x3f]);
      param_2[0x3f] = 0;
      FUN_100fb5cc(iVar20,param_2[0x41]);
      puVar22 = (undefined4 *)param_2[0x4b];
      param_2[0x41] = 0;
      if (puVar22 != (undefined4 *)0x0) {
        uVar11 = puVar22[2];
        puVar22[0x6f] = 0;
        FUN_100fb5cc(uVar11,puVar22[6]);
        puVar22[5] = 0;
        puVar22[6] = 0;
        FUN_100fb5cc(uVar11,puVar22[0x6e]);
        puVar22[0x6d] = 0;
        puVar22[0x6e] = 0;
        puVar22[0x6c] = 0;
        FUN_100fb5cc(uVar11,puVar22[99]);
        puVar22[0x62] = 0;
        puVar22[99] = 0;
        *puVar22 = 0;
        puVar22[1] = 0;
        FUN_100fb5cc(uVar11,puVar22);
      }
      iVar29 = param_2[0x42];
      if (iVar29 != 0) {
        FUN_100fb5cc(iVar29,param_2[0x49]);
        param_2[0x49] = 0;
        FUN_100fb5cc(iVar29,param_2[0x48]);
        param_2[0x48] = 0;
        FUN_100fb5cc(iVar29,param_2[0x46]);
        param_2[0x46] = 0;
        FUN_100fb5cc(iVar29,param_2[0x45]);
        param_2[0x45] = 0;
        FUN_100fb5cc(iVar29,param_2[0x47]);
        param_2[0x42] = 0;
        param_2[0x43] = 0;
        param_2[0x47] = 0;
        param_2[0x44] = 0;
      }
      uVar11 = *(undefined4 *)(iVar26 + 0x60);
      param_2[0x4c] = -1;
      param_2[0x4d] = -1;
      iVar29 = FUN_1010ab90(uVar11);
      iVar12 = *(int *)(iVar26 + 0x2b4);
      uVar7 = *(ushort *)(iVar26 + 0x118);
      uVar1 = *(ushort *)(iVar26 + 0x11a);
      uVar2 = *(undefined2 *)(iVar26 + 0x116);
      param_2[0x1f] = 0;
      param_2[0x20] = (uint)uVar7;
      param_2[0x22] = 0;
      param_2[0x23] = (uint)uVar1;
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x4b] = iVar29;
      param_2[0x3e] = iVar12;
      *(undefined1 *)((int)param_2 + 0x71) = 0;
      *(undefined1 *)((int)param_2 + 0x72) = 0;
      *(undefined2 *)(param_2 + 0x40) = uVar2;
      iVar29 = FUN_100fb280(iVar20,0x18,0,(uint)uVar7,0,&local_110);
      param_2[0x21] = iVar29;
      if (local_110 == 0) {
        iVar29 = FUN_100fb280(iVar20,0x18,0,param_2[0x23],0,&local_110);
        param_2[0x24] = iVar29;
        if (local_110 != 0) goto LAB_1010b434;
        iVar29 = FUN_100fb280(iVar20,4,0,param_2[0x3e],0,&local_110);
        param_2[0x3f] = iVar29;
        if (local_110 != 0) goto LAB_1010b434;
        iVar29 = FUN_100fb280(iVar20,4,0,(short)param_2[0x40],0,&local_110);
        param_2[0x41] = iVar29;
        if (local_110 != 0) goto LAB_1010b434;
        sVar6 = *(short *)(iVar26 + 0x114) + 4;
        FUN_1011ea48(param_2 + 0x43,0,0x20);
        param_2[0x42] = iVar20;
        iVar29 = FUN_100fb280(iVar20,8,0,sVar6,0,&local_10c);
        param_2[0x45] = iVar29;
        if (local_10c == 0) {
          iVar29 = FUN_100fb280(iVar20,8,0,sVar6,0,&local_10c);
          param_2[0x46] = iVar29;
          if (local_10c != 0) goto LAB_1010b2ee;
          iVar29 = FUN_100fb280(iVar20,8,0,sVar6,0,&local_10c);
          param_2[0x47] = iVar29;
          if (local_10c != 0) goto LAB_1010b2ee;
          iVar29 = FUN_100fb280(iVar20,1,0,sVar6,0,&local_10c);
          param_2[0x48] = iVar29;
          if (local_10c != 0) goto LAB_1010b2ee;
          iVar20 = FUN_100fb280(iVar20,2,0,0,0,&local_10c);
          param_2[0x49] = iVar20;
          if (local_10c != 0) goto LAB_1010b2ee;
          *(undefined2 *)((int)param_2 + 0x10e) = 0;
          *(short *)(param_2 + 0x43) = sVar6;
        }
        else {
LAB_1010b2ee:
          iVar20 = param_2[0x42];
          if (iVar20 != 0) {
            FUN_100fb5cc(iVar20,param_2[0x49]);
            param_2[0x49] = 0;
            FUN_100fb5cc(iVar20,param_2[0x48]);
            param_2[0x48] = 0;
            FUN_100fb5cc(iVar20,param_2[0x46]);
            param_2[0x46] = 0;
            FUN_100fb5cc(iVar20,param_2[0x45]);
            param_2[0x45] = 0;
            FUN_100fb5cc(iVar20,param_2[0x47]);
            param_2[0x42] = 0;
            param_2[0x43] = 0;
            param_2[0x47] = 0;
            param_2[0x44] = 0;
          }
          local_110 = local_10c;
          if (local_10c != 0) goto LAB_1010b434;
        }
        *(short *)(param_2 + 0x44) = sVar6;
        FUN_1011ea40(param_2 + 0x2d,DAT_1010b624,0x44);
        iVar20 = *(int *)(*(int *)(*(int *)(iVar26 + 0x60) + 4) + 0xa4);
        if (iVar20 == 0) {
          iVar20 = DAT_1010b628;
        }
        *(int *)(iVar26 + 700) = iVar20;
        iVar29 = param_2[0x4b];
        iVar20 = *param_2;
        iVar26 = FUN_101078a4(iVar29,iVar20,param_2);
        if (iVar26 != 0) {
          return iVar26;
        }
        *(undefined1 *)(iVar29 + 0x1ec) = 0;
        *(char *)(iVar29 + 0x235) = (char)uVar19;
        iVar26 = *(int *)(iVar20 + 0x2a4);
        uVar11 = *(undefined4 *)(iVar20 + 0x2a8);
        *(undefined4 *)(iVar29 + 0x1e4) = 0;
        *(undefined4 *)(iVar29 + 0x1e8) = 0;
        *(undefined4 *)(iVar29 + 0xdc) = 0;
        *(undefined4 *)(iVar29 + 0xe0) = 0;
        *(undefined4 *)(iVar29 + 0x1c0) = uVar11;
        *(int *)(iVar29 + 0x1c4) = iVar26;
        *(undefined4 *)(iVar29 + 0x1c8) = 0;
        *(undefined4 *)(iVar29 + 0x1cc) = 0;
        *(undefined4 *)(iVar29 + 0x1d0) = 0;
        *(undefined4 *)(iVar29 + 0x1d4) = 0;
        *(undefined4 *)(iVar29 + 0x1b0) = 0;
        *(undefined4 *)(iVar29 + 0x10) = 0;
        *(undefined4 *)(iVar29 + 0xe4) = 0;
        *(undefined2 *)(iVar29 + 0x100) = 0;
        *(undefined4 *)(iVar29 + 0x108) = 0;
        *(undefined4 *)(iVar29 + 0x1e0) = 0x40;
        *(undefined4 *)(iVar29 + 0x238) = 0x4000;
        *(undefined4 *)(iVar29 + 0x104) = 0x10000;
        if (iVar26 == 0) {
          param_2[0x4c] = 0;
        }
        else {
          *(undefined4 *)(iVar29 + 0x16c) = 0;
          *(int *)(iVar29 + 0x170) = iVar26;
          pcVar25 = *(code **)(iVar20 + 700);
          *(undefined4 *)(iVar29 + 0x168) = uVar11;
          *(undefined4 *)(iVar29 + 0x164) = 1;
          iVar26 = (*pcVar25)(iVar29);
          param_2[0x4c] = iVar26;
          if (iVar26 != 0) {
            return iVar26;
          }
        }
        iVar26 = *(int *)(iVar29 + 0x19c);
        param_2[0x1f] = *(int *)(iVar29 + 400);
        param_2[0x22] = iVar26;
        iVar12 = *(int *)(iVar29 + 0x1ac);
        iVar26 = *(int *)(iVar29 + 0x1c0);
        iVar20 = *(int *)(iVar29 + 0x1c4);
        param_2[0x25] = *(int *)(iVar29 + 0x1a8);
        param_2[0x26] = iVar12;
        param_2[0x27] = iVar26;
        param_2[0x28] = iVar20;
        iVar26 = *(int *)(iVar29 + 0x1cc);
        param_2[0x29] = *(int *)(iVar29 + 0x1c8);
        param_2[0x2a] = iVar26;
        iVar26 = *(int *)(iVar29 + 0x1d4);
        param_2[0x2b] = *(int *)(iVar29 + 0x1d0);
        param_2[0x2c] = iVar26;
      }
      else {
LAB_1010b434:
        puVar22 = (undefined4 *)param_2[0x4b];
        uVar11 = *(undefined4 *)(*param_2 + 100);
        if (puVar22 != (undefined4 *)0x0) {
          uVar8 = puVar22[2];
          puVar22[0x6f] = 0;
          FUN_100fb5cc(uVar8,puVar22[6]);
          puVar22[5] = 0;
          puVar22[6] = 0;
          FUN_100fb5cc(uVar8,puVar22[0x6e]);
          puVar22[0x6d] = 0;
          puVar22[0x6e] = 0;
          puVar22[0x6c] = 0;
          FUN_100fb5cc(uVar8,puVar22[99]);
          puVar22[0x62] = 0;
          puVar22[99] = 0;
          *puVar22 = 0;
          puVar22[1] = 0;
          FUN_100fb5cc(uVar8,puVar22);
          param_2[0x4b] = 0;
        }
        FUN_100fb5cc(uVar11,param_2[0x3f]);
        param_2[0x3e] = 0;
        param_2[0x3f] = 0;
        FUN_100fb5cc(uVar11,param_2[0x41]);
        iVar26 = param_2[0x42];
        param_2[0x41] = 0;
        *(undefined2 *)(param_2 + 0x40) = 0;
        if (iVar26 != 0) {
          FUN_100fb5cc(iVar26,param_2[0x49]);
          param_2[0x49] = 0;
          FUN_100fb5cc(iVar26,param_2[0x48]);
          param_2[0x48] = 0;
          FUN_100fb5cc(iVar26,param_2[0x46]);
          param_2[0x46] = 0;
          FUN_100fb5cc(iVar26,param_2[0x45]);
          param_2[0x45] = 0;
          FUN_100fb5cc(iVar26,param_2[0x47]);
          param_2[0x42] = 0;
          param_2[0x43] = 0;
          param_2[0x47] = 0;
          param_2[0x44] = 0;
        }
        FUN_100fb5cc(uVar11,param_2[0x21]);
        param_2[0x21] = 0;
        FUN_100fb5cc(uVar11,param_2[0x24]);
        param_2[0x1f] = 0;
        param_2[0x20] = 0;
        param_2[0x22] = 0;
        param_2[0x23] = 0;
        param_2[0x25] = 0;
        param_2[0x26] = 0;
        param_2[0x4c] = -1;
        param_2[0x4d] = -1;
        param_2[0x24] = 0;
        if (local_110 != 0) {
          return local_110;
        }
      }
      iVar20 = param_2[0x4d];
      if (iVar20 < 0) goto LAB_1010afba;
    }
    else {
      iVar20 = param_2[0x4d];
      if (iVar20 < 0) {
        if (iVar26 != 0) {
          return iVar26;
        }
LAB_1010afba:
        uVar27 = (uint)*(ushort *)(param_2 + 0x44);
        if (uVar27 != 0) {
          uVar13 = param_2[0x45];
          puVar22 = (undefined4 *)param_2[0x46];
          if (((((uint)puVar22 | uVar13) & 7) == 0) && (5 < uVar27 - 1)) {
            puVar14 = (undefined4 *)(uVar13 - 8);
            puVar23 = puVar22;
            do {
              puVar14[2] = 0;
              puVar14[3] = 0;
              puVar24 = puVar23 + 2;
              *puVar23 = 0;
              puVar23[1] = 0;
              puVar14 = puVar14 + 2;
              puVar23 = puVar24;
            } while (puVar22 + uVar27 * 2 != puVar24);
          }
          else {
            uVar10 = 0;
            do {
              *(undefined4 *)(uVar13 + uVar10 * 8) = 0;
              *(undefined4 *)(uVar13 + 4 + uVar10 * 8) = 0;
              puVar22[uVar10 * 2] = 0;
              puVar22[uVar10 * 2 + 1] = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar27);
          }
        }
        uVar27 = (uint)*(ushort *)(param_2 + 0x40);
        if (uVar27 != 0) {
          puVar22 = (undefined4 *)param_2[0x41];
          iVar26 = ((int)puVar22 << 0x1d) >> 0x1f;
          if (uVar27 - 1 < 6) {
            iVar26 = 0;
          }
          else {
            if (-iVar26 != 0) {
              *puVar22 = 0;
            }
            uVar13 = uVar27 + iVar26;
            puVar14 = puVar22 + -iVar26;
            do {
              puVar23 = puVar14 + 2;
              *puVar14 = 0;
              puVar14[1] = 0;
              puVar14 = puVar23;
            } while (puVar22 + -iVar26 + (uVar13 & 0xfffffffe) != puVar23);
            iVar26 = -iVar26 + (uVar13 & 0xfffffffe);
            if ((uVar13 & 0xfffffffe) == uVar13) goto LAB_1010b074;
          }
          puVar22[iVar26] = 0;
          if (iVar26 + 1U < uVar27) {
            puVar22[iVar26 + 1U] = 0;
            if (iVar26 + 2U < uVar27) {
              puVar22[iVar26 + 2U] = 0;
              if (iVar26 + 3U < uVar27) {
                puVar22[iVar26 + 3U] = 0;
                if (iVar26 + 4U < uVar27) {
                  puVar22[iVar26 + 4U] = 0;
                  if (iVar26 + 5U < uVar27) {
                    puVar22[iVar26 + 5U] = 0;
                  }
                }
              }
            }
          }
        }
LAB_1010b074:
        FUN_1011ea40(param_2 + 0x2d,DAT_1010b104,0x44);
        iVar20 = FUN_10107aa0(param_2,uVar19);
      }
      else if (iVar26 != 0) {
        return iVar26;
      }
    }
    if (iVar20 != 0) {
      return iVar20;
    }
    iVar26 = param_2[0x4b];
    if (iVar26 == 0) {
      return 0x99;
    }
    iVar20 = FUN_101078a4(iVar26,iVar28,param_2);
    if (iVar20 != 0) {
      return iVar20;
    }
    bVar30 = (param_4 & 0xfffff) >> 0x10 != 2;
    if ((bool)*(char *)(iVar26 + 0x264) != bVar30) {
      *(bool *)(iVar26 + 0x264) = bVar30;
      iVar20 = FUN_10107aa0(param_2,uVar19);
      if (iVar20 != 0) {
        return iVar20;
      }
    }
    if ((int)((uint)*(byte *)(iVar26 + 0x154) << 0x1f) < 0) {
      param_4 = param_4 | 2;
    }
    if ((int)((uint)*(byte *)(iVar26 + 0x154) << 0x1e) < 0) {
      FUN_1011ea40(iVar26 + 0x120,DAT_1010afa4,0x44);
    }
    uStack_5c = *(undefined4 *)(iVar26 + 0x18c);
    *(char *)(iVar26 + 0x235) = (char)uVar19;
    local_60 = iVar26;
  }
  iVar26 = **(int **)(param_1 + 0x9c);
  FUN_100f89c0(iVar26);
  *(undefined4 *)(param_1 + 0x48) = DAT_1010afa8;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_fc = iVar28;
  local_f8 = param_2;
  local_f4 = param_1;
  local_f0 = iVar26;
  local_ec = param_4;
  local_e4 = uVar18;
  iVar28 = FUN_10107d6c(&local_fc,param_3);
  if (iVar28 != 0) goto LAB_1010af6a;
  iVar26 = local_fc;
  piVar16 = local_f8;
  iVar20 = local_f4;
  if (*(int *)(param_1 + 0x48) == DAT_1010afac) {
    uVar19 = *(uint *)(local_f0 + 0x34);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(local_f0 + 0x30);
    *(uint *)(param_1 + 0x84) = uVar19;
  }
  else {
    uVar18 = *(undefined4 *)(local_f0 + 0x18);
    uVar11 = *(undefined4 *)(local_f0 + 0x1c);
    uVar19 = *(uint *)(local_f0 + 0x20);
    uVar27 = *(uint *)(local_f0 + 0x24);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(local_f0 + 0x14);
    *(undefined4 *)(param_1 + 0x70) = uVar18;
    *(undefined4 *)(param_1 + 0x74) = uVar11;
    *(uint *)(param_1 + 0x78) = uVar19;
    *(uint *)(param_1 + 0x7c) = uVar27 & 0xfffffdff;
    if (local_b8 != 0) {
      FUN_100fa540((undefined4 *)(param_1 + 0x6c),-local_b8,0);
      iVar26 = local_fc;
      piVar16 = local_f8;
      iVar20 = local_f4;
      uVar19 = extraout_r3;
    }
  }
  if (uVar15 != 0) goto switchD_1010adbc_caseD_1;
  if (*(char *)(local_60 + 0x155) == '\0') {
switchD_1010adbc_caseD_2:
    uVar19 = *(uint *)(param_1 + 0x7c) | 8;
    *(uint *)(param_1 + 0x7c) = uVar19;
  }
  else {
    uVar19 = *(uint *)(local_60 + 0x158);
    switch(uVar19) {
    case 0:
      uVar19 = *(uint *)(param_1 + 0x7c) | 0x20;
      *(uint *)(param_1 + 0x7c) = uVar19;
      break;
    case 1:
      break;
    default:
      goto switchD_1010adbc_caseD_2;
    case 4:
      uVar19 = *(uint *)(param_1 + 0x7c) | 0x30;
      *(uint *)(param_1 + 0x7c) = uVar19;
      break;
    case 5:
      uVar19 = *(uint *)(param_1 + 0x7c) | 0x10;
      *(uint *)(param_1 + 0x7c) = uVar19;
    }
  }
switchD_1010adbc_caseD_1:
  bVar30 = (local_ec & 1) == 0;
  if (bVar30) {
    uVar19 = piVar16[0xb];
  }
  if (bVar30) {
    iVar29 = *(int *)(uVar19 + 8);
  }
  else {
    iVar29 = 0x10000;
  }
  local_fc = iVar26;
  local_f8 = piVar16;
  local_f4 = iVar20;
  if (*(int *)(iVar20 + 0x48) != DAT_1010afac) {
    FUN_100fa4d4(iVar20 + 0x6c,&local_10c);
    local_d8 = local_10c;
    iStack_d4 = local_108;
    iStack_d0 = iStack_104;
    iStack_cc = local_100;
  }
  local_100 = iStack_cc;
  iStack_104 = iStack_d0;
  local_108 = iStack_d4;
  local_10c = local_d8;
  uVar15 = DAT_1010afb0;
  *(undefined4 *)(iVar20 + 0x38) = local_c0;
  iVar12 = *(int *)(iVar26 + 0x1e8);
  *(int *)(iVar20 + 0x24) = local_100;
  *(int *)(iVar20 + 0x28) = local_b0 - local_b8;
  *(int *)(iVar20 + 0x20) = local_10c;
  if ((local_ec & uVar15) == 0 && iVar12 == 0) {
    local_124 = *(int *)(iVar26 + 0x2e8);
    if (local_124 != 0) {
      local_124 = local_124 + 8;
    }
    if (*(int *)(iVar26 + 0x2f0) != 0) {
      iVar12 = *(int *)(iVar26 + 0x2f8);
      pbVar21 = (byte *)(iVar12 + -1);
      do {
        pbVar9 = pbVar21 + (1 - iVar12);
        pbVar21 = pbVar21 + 1;
        if ((ushort)*pbVar21 == *(ushort *)piVar16[0xb]) {
          if ((param_3 + 2 < *(uint *)(iVar26 + 0x2f4)) &&
             (iVar12 = (int)pbVar9 * *(uint *)(iVar26 + 0x2f4) + param_3 + 2,
             local_124 + iVar12 != 0)) {
            *(uint *)(iVar20 + 0x28) = (uint)*(byte *)(local_124 + iVar12) << 6;
          }
          break;
        }
      } while ((byte *)(iVar12 + *(int *)(iVar26 + 0x2f0) + -1) != pbVar21);
    }
  }
  *(int *)(iVar20 + 0x18) = iStack_104 - local_10c;
  *(int *)(iVar20 + 0x1c) = local_100 - local_108;
  if ((*(char *)(iVar26 + 0x124) == '\0') || (*(short *)(iVar26 + 0x14a) == 0)) {
    sVar6 = FUN_100f87b8(local_100 - local_108,iVar29);
    if (*(short *)(iVar26 + 0x174) == -1) {
      sVar3 = *(short *)(iVar26 + 0xde);
      sVar4 = *(short *)(iVar26 + 0xdc);
    }
    else {
      sVar3 = *(short *)(iVar26 + 0x1bc);
      sVar4 = *(short *)(iVar26 + 0x1ba);
    }
    uVar15 = (int)sVar4 - (int)sVar3;
    uVar19 = (int)(uVar15 - (int)sVar6) / 2;
  }
  else {
    sVar6 = FUN_100f87b8(local_44 - local_100,iVar29);
    uVar19 = (uint)sVar6;
    if (local_3c < local_44) {
      uVar7 = FUN_100f87b8(local_44 - local_3c,iVar29);
      uVar15 = (uint)uVar7;
    }
    else {
      uVar15 = 0;
    }
  }
  *(uint *)(iVar20 + 0x3c) = uVar15;
  if (-1 < (int)(local_ec << 0x1f)) {
    lVar5 = (longlong)iVar29 * (longlong)(int)uVar19 +
            (ulonglong)((int)((longlong)iVar29 * (longlong)(int)uVar19 >> 0x3f) + 0x8000);
    uVar19 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) * 0x10000;
    lVar5 = (longlong)iVar29 * (longlong)(int)uVar15 +
            (ulonglong)((int)((longlong)iVar29 * (longlong)(int)uVar15 >> 0x3f) + 0x8000);
    uVar15 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) * 0x10000;
  }
  *(uint *)(iVar20 + 0x30) = uVar19;
  *(uint *)(iVar20 + 0x34) = uVar15;
  *(int *)(iVar20 + 0x2c) = *(int *)(iVar20 + 0x20) - *(int *)(iVar20 + 0x28) / 2;
LAB_1010af6a:
  if ((uVar17 == 0) && (*(ushort *)(param_2[0xb] + 2) < 0x18)) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100;
  }
  FUN_100fb600(&local_30,0,*(undefined4 *)(local_fc + 100));
  return iVar28;
}

