/* FUN_10008360 @ 0x10008360 */

char * FUN_10008360(int param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5,
                   int *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  char *pcVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  ulonglong in_d0;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  char *local_80;
  char *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_5c;
  char *local_50;
  uint local_4c;
  int local_38;
  int local_34 [2];
  
  uVar23 = (uint)(in_d0 >> 0x20);
  uVar28 = (uint)in_d0;
  if (*(int *)(param_1 + 0x24) == 0) {
    puVar5 = (undefined4 *)FUN_10117e44(0x10);
    *(undefined4 **)(param_1 + 0x24) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      uVar12 = 0xea;
      uVar26 = DAT_10008658;
      goto LAB_10008392;
    }
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
  }
  iVar13 = **(int **)(param_1 + 0x24);
  if (iVar13 != 0) {
    uVar14 = (*(int **)(param_1 + 0x24))[1];
    *(uint *)(iVar13 + 4) = uVar14;
    *(int *)(iVar13 + 8) = 1 << (uVar14 & 0xff);
    FUN_101193f4(param_1);
    **(undefined4 **)(param_1 + 0x24) = 0;
  }
  uVar14 = DAT_10008660;
  if ((longlong)in_d0 < 0) {
    uVar23 = uVar23 & 0x7fffffff;
    *param_5 = 1;
  }
  else {
    *param_5 = 0;
    uVar14 = DAT_10008660;
  }
  uVar29 = CONCAT44(uVar23,uVar28);
  uVar33 = CONCAT44(uVar23,uVar28);
  if ((uVar14 & ~uVar23) == 0) {
    *param_4 = 9999;
    if ((uVar23 & 0xfffff) == 0 && uVar28 == 0) {
      if (param_6 == (int *)0x0) {
        return DAT_10008f30;
      }
      local_80 = DAT_10008668;
      pcVar17 = DAT_10008668 + 8;
    }
    else {
      if (param_6 == (int *)0x0) {
        return DAT_10008664;
      }
      local_80 = DAT_10008664;
      pcVar17 = DAT_10008664 + 3;
    }
    *param_6 = (int)pcVar17;
    return local_80;
  }
  iVar13 = FUN_10003fd8(uVar28,uVar23,0,0);
  if (iVar13 != 0) {
    *param_4 = 1;
    iVar13 = DAT_1000866c;
    if (param_6 == (int *)0x0) {
      return DAT_10008f2c;
    }
    *param_6 = DAT_1000866c;
    return (char *)(iVar13 + -1);
  }
  uVar14 = (uVar23 & 0x7fffffff) >> 0x14;
  uVar12 = FUN_101198f0(uVar28,param_1,local_34,&local_38);
  if (uVar14 == 0) {
    iVar13 = local_38 + local_34[0];
    iVar6 = iVar13 + 0x432;
    if (iVar6 < 0x21) {
      uVar14 = uVar28 << (0x20U - iVar6 & 0xff);
    }
    else {
      uVar14 = uVar28 >> (iVar13 + 0x412U & 0xff) | uVar23 << (0x40U - iVar6 & 0xff);
    }
    iVar13 = iVar13 + -1;
    uVar31 = FUN_10003a14(uVar14);
    uVar14 = (uint)uVar31;
    uVar24 = (int)((ulonglong)uVar31 >> 0x20) + 0xfe100000;
    bVar3 = true;
  }
  else {
    iVar13 = uVar14 - 0x3ff;
    uVar24 = uVar23 & 0xfffff | 0x3ff00000;
    bVar3 = false;
    uVar14 = uVar28;
  }
  uVar31 = FUN_10003798(uVar14,uVar24,0,DAT_10008670);
  uVar31 = FUN_10003b08((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),DAT_10008640,DAT_10008644);
  uVar31 = FUN_1000379c((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),DAT_10008648,DAT_1000864c);
  uVar32 = FUN_10003a34(iVar13);
  uVar32 = FUN_10003b08((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),DAT_10008650,DAT_10008654);
  uVar31 = FUN_1000379c((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),(int)uVar32,
                        (int)((ulonglong)uVar32 >> 0x20));
  uVar26 = (undefined4)((ulonglong)uVar31 >> 0x20);
  uVar14 = FUN_10004068();
  iVar6 = FUN_10003fec((int)uVar31,uVar26,0,0);
  if (iVar6 != 0) {
    uVar32 = FUN_10003a34(uVar14);
    iVar6 = FUN_10003fd8((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar31,uVar26);
    if (iVar6 == 0) {
      uVar14 = uVar14 - 1;
    }
  }
  if (uVar14 < 0x17) {
    puVar5 = (undefined4 *)(DAT_10008674 + uVar14 * 8);
    iVar6 = FUN_10003fec(uVar28,uVar23,*puVar5,puVar5[1]);
    if (iVar6 == 0) {
      bVar2 = false;
    }
    else {
      uVar14 = uVar14 - 1;
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  local_70 = (local_38 - iVar13) + -1;
  if (local_70 < 0) {
    iVar13 = 1 - (local_38 - iVar13);
    local_70 = 0;
  }
  else {
    iVar13 = 0;
  }
  if ((int)uVar14 < 0) {
    local_68 = -uVar14;
    iVar13 = iVar13 - uVar14;
    local_4c = 0;
  }
  else {
    local_70 = local_70 + uVar14;
    local_68 = 0;
    local_4c = uVar14;
  }
  if (9 < param_2) {
    bVar1 = true;
    local_6c = 0;
switchD_10008550_default:
    bVar16 = true;
    local_7c = (char *)0xffffffff;
    local_5c = 0;
    param_3 = 0x12;
    pcVar17 = (char *)0xffffffff;
    goto LAB_100085c6;
  }
  local_6c = param_2;
  if (5 < (int)param_2) {
    local_6c = param_2 - 4;
  }
  bVar1 = 5 >= (int)param_2;
  local_5c = param_3;
  switch(local_6c) {
  case 2:
    bVar16 = false;
    break;
  case 3:
    bVar16 = false;
    goto LAB_100085f4;
  case 4:
    bVar16 = true;
    break;
  case 5:
    bVar16 = true;
LAB_100085f4:
    pcVar17 = (char *)(uVar14 + param_3);
    local_7c = (char *)((int)pcVar17 + 1);
    param_3 = (uint)local_7c;
    if ((int)local_7c < 1) {
      param_3 = 1;
    }
    goto LAB_100085c6;
  default:
    goto switchD_10008550_default;
  }
  pcVar17 = (char *)param_3;
  local_7c = (char *)param_3;
  if ((int)param_3 < 1) {
    local_7c = (char *)0x1;
    local_5c = 1;
    param_3 = 1;
    pcVar17 = (char *)1;
  }
LAB_100085c6:
  iVar6 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar6 + 4) = 0;
  for (iVar15 = 4; iVar15 + 0x14U <= param_3; iVar15 = iVar15 << 1) {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
  }
  pcVar7 = (char *)FUN_10119374(param_1);
  if (pcVar7 == (char *)0x0) {
    uVar12 = 0x1aa;
    uVar26 = DAT_10008678;
    goto LAB_10008392;
  }
  **(undefined4 **)(param_1 + 0x24) = pcVar7;
  puVar5 = DAT_100089a4;
  if ((local_7c < 0xf) && (bVar1)) {
    if ((int)uVar14 < 1) {
      if (uVar14 == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = 2;
        iVar15 = (int)-uVar14 >> 4;
        puVar18 = (undefined4 *)(DAT_100089a0 + (-uVar14 & 0xf) * 8);
        uVar29 = FUN_10003b08(uVar28,uVar23,*puVar18,puVar18[1]);
        bVar1 = false;
        uVar33 = uVar29;
        while( true ) {
          if (iVar15 == 0) break;
          if (iVar15 << 0x1f < 0) {
            iVar6 = iVar6 + 1;
            uVar33 = FUN_10003b08((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),*puVar5,puVar5[1]);
            bVar1 = true;
          }
          iVar15 = iVar15 >> 1;
          puVar5 = puVar5 + 2;
        }
        if (bVar1) goto LAB_100086de;
      }
    }
    else {
      uVar24 = (int)uVar14 >> 4;
      uVar29 = *(undefined8 *)(DAT_100089a0 + (uVar14 & 0xf) * 8);
      if ((uVar14 & 0x100) == 0) {
        iVar6 = 2;
      }
      else {
        uVar24 = uVar24 & 0xf;
        iVar6 = 3;
        uVar33 = FUN_10003d5c(uVar28,uVar23,DAT_100089a4[8],DAT_100089a4[9]);
        puVar5 = DAT_100089a4;
      }
      while( true ) {
        uStack_74 = (undefined4)((ulonglong)uVar33 >> 0x20);
        local_78 = (undefined4)uVar33;
        uVar26 = (undefined4)((ulonglong)uVar29 >> 0x20);
        if (uVar24 == 0) break;
        if ((int)(uVar24 << 0x1f) < 0) {
          iVar6 = iVar6 + 1;
          uVar29 = FUN_10003b08((int)uVar29,uVar26,*puVar5,puVar5[1]);
        }
        uVar24 = (int)uVar24 >> 1;
        puVar5 = puVar5 + 2;
      }
      uVar33 = FUN_10003d5c(local_78,uStack_74,(int)uVar29,uVar26);
LAB_100086de:
      uVar29 = uVar33;
    }
    uStack_74 = (undefined4)((ulonglong)uVar29 >> 0x20);
    local_78 = (undefined4)uVar29;
    if (((bVar2) && (iVar15 = FUN_10003fec(local_78,uStack_74,0,DAT_100089a8), iVar15 != 0)) &&
       (local_7c != (char *)0x0)) {
      if ((int)pcVar17 < 1) goto LAB_100087e4;
      iVar6 = iVar6 + 1;
      uVar29 = FUN_10003b08(local_78,uStack_74,0,DAT_100089ac);
      local_64 = uVar14 - 1;
      local_50 = pcVar17;
    }
    else {
      local_50 = local_7c;
      local_64 = uVar14;
    }
    uStack_74 = (undefined4)((ulonglong)uVar29 >> 0x20);
    local_78 = (undefined4)uVar29;
    uVar33 = FUN_10003a34(iVar6);
    uVar33 = FUN_10003b08((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),local_78,uStack_74);
    uVar33 = FUN_1000379c((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,DAT_100089b0);
    iVar6 = (int)((ulonglong)uVar33 >> 0x20);
    uVar26 = (undefined4)uVar33;
    iVar15 = iVar6 + -0x3400000;
    if (local_50 != (char *)0x0) {
      pcVar19 = pcVar7 + (int)local_50;
      iVar6 = DAT_100089a0 + (int)local_50 * 8;
      if (bVar16) {
        uVar33 = FUN_10003d5c(0,DAT_100089b8);
        uVar33 = FUN_10003798((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uVar26,iVar15);
        pcVar20 = pcVar7;
        while( true ) {
          uVar30 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar25 = (undefined4)uVar33;
          uVar26 = (undefined4)((ulonglong)uVar29 >> 0x20);
          cVar4 = FUN_10004068((int)uVar29,uVar26);
          uVar33 = FUN_10003a34();
          uVar33 = FUN_10003798((int)uVar29,uVar26,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
          uVar27 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar26 = (undefined4)uVar33;
          pcVar21 = pcVar20 + 1;
          *pcVar20 = cVar4 + '0';
          iVar6 = FUN_10003fec(uVar26,uVar27,uVar25,uVar30);
          if (iVar6 != 0) break;
          uVar33 = FUN_10003798(0,DAT_100089a8,uVar26,uVar27);
          iVar6 = FUN_10003fec((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uVar25,uVar30);
          pcVar20 = pcVar21;
          if (iVar6 != 0) goto LAB_10008a5a;
          if (pcVar21 == pcVar19) goto LAB_100087e4;
          uVar33 = FUN_10003b08(uVar25,uVar30,0,DAT_100089ac);
          uVar29 = FUN_10003b08(uVar26,uVar27,0,DAT_100089ac);
        }
        goto LAB_10008a34;
      }
      uVar33 = FUN_10003b08(uVar26,iVar15,*(undefined4 *)(iVar6 + -8),*(undefined4 *)(iVar6 + -4));
      uVar26 = (undefined4)((ulonglong)uVar33 >> 0x20);
      pcVar21 = pcVar7;
      while( true ) {
        uVar27 = (undefined4)((ulonglong)uVar29 >> 0x20);
        cVar4 = FUN_10004068((int)uVar29,uVar27);
        uVar31 = FUN_10003a34();
        uVar29 = FUN_10003798((int)uVar29,uVar27,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
        uVar25 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar27 = (undefined4)uVar29;
        pcVar20 = pcVar21 + 1;
        *pcVar21 = cVar4 + '0';
        if (pcVar20 == pcVar19) break;
        uVar29 = FUN_10003b08(uVar27,uVar25,0,DAT_10008c7c);
        pcVar21 = pcVar20;
      }
      uVar29 = FUN_1000379c((int)uVar33,uVar26,0,DAT_100089b8);
      iVar6 = FUN_10004028(uVar27,uVar25,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
      if (iVar6 != 0) {
LAB_10008a5a:
        do {
          pcVar21 = pcVar20;
          pcVar20 = pcVar21 + -1;
          if (*pcVar20 != '9') goto LAB_10008a76;
        } while (pcVar7 != pcVar20);
        local_64 = local_64 + 1;
        *pcVar7 = '0';
LAB_10008a76:
        *pcVar20 = *pcVar20 + '\x01';
        goto LAB_10008a34;
      }
      uVar33 = FUN_10003798(0,DAT_100089b8,(int)uVar33,uVar26);
      iVar6 = FUN_10003fec(uVar27,uVar25,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
      local_50 = pcVar19;
      if (iVar6 != 0) {
        do {
          pcVar17 = local_50 + -1;
          pcVar21 = local_50;
          local_50 = local_50 + -1;
        } while (*pcVar17 == '0');
        goto LAB_10008a34;
      }
      goto LAB_100087e4;
    }
    uVar33 = FUN_10003798(local_78,uStack_74,0,DAT_100089b4);
    uVar27 = (undefined4)((ulonglong)uVar33 >> 0x20);
    iVar15 = FUN_10004028((int)uVar33,uVar27,uVar26,iVar15);
    if (iVar15 == 0) {
      iVar6 = FUN_10003fec((int)uVar33,uVar27,uVar26,iVar6 + 0x7cc00000);
      if (iVar6 == 0) goto LAB_100087e4;
LAB_10008ce8:
      iVar22 = 0;
      iVar15 = 0;
      goto LAB_10008cb2;
    }
    iVar13 = 0;
    iVar6 = 0;
LAB_10008830:
    uVar14 = local_64 + 1;
    *pcVar7 = '1';
    local_7c = pcVar7 + 1;
    iVar22 = iVar13;
    iVar15 = iVar6;
LAB_10008cba:
    iVar6 = 0;
  }
  else {
LAB_100087e4:
    if ((-1 < local_34[0]) && ((int)uVar14 < 0xf)) {
      puVar5 = (undefined4 *)(DAT_100089a0 + uVar14 * 8);
      uVar26 = *puVar5;
      uVar27 = puVar5[1];
      pcVar17 = pcVar7;
      uVar33 = CONCAT44(uVar23,uVar28);
      if ((-1 < (int)local_5c) || (uVar33 = CONCAT44(uVar23,uVar28), 0 < (int)local_7c)) {
        do {
          uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
          FUN_10003d5c((int)uVar33,uVar25,uVar26,uVar27);
          iVar13 = FUN_10004068();
          uVar29 = FUN_10003a34();
          uVar29 = FUN_10003b08((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uVar26,uVar27);
          uVar33 = FUN_10003798((int)uVar33,uVar25,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
          uVar30 = (undefined4)((ulonglong)uVar33 >> 0x20);
          uVar25 = (undefined4)uVar33;
          pcVar21 = pcVar17 + 1;
          *pcVar17 = (char)iVar13 + '0';
          if (local_7c == (char *)((int)pcVar21 - (int)pcVar7)) {
            uVar33 = FUN_1000379c(uVar25,uVar30,uVar25,uVar30);
            uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
            iVar6 = FUN_10004028((int)uVar33,uVar25,uVar26,uVar27);
            pcVar20 = pcVar21;
            local_64 = uVar14;
            if ((iVar6 != 0) ||
               ((iVar6 = FUN_10003fd8((int)uVar33,uVar25,uVar26,uVar27), iVar6 != 0 &&
                (iVar13 << 0x1f < 0)))) goto LAB_10008a5a;
            break;
          }
          uVar33 = FUN_10003b08(uVar25,uVar30,0,DAT_10008c7c);
          iVar13 = FUN_10003fd8((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,0);
          pcVar17 = pcVar21;
          local_64 = uVar14;
        } while (iVar13 == 0);
        goto LAB_10008a34;
      }
      if (local_7c != (char *)0x0) goto LAB_10008ce8;
      uVar33 = FUN_10003b08(uVar26,uVar27,0,DAT_100089b4);
      iVar8 = FUN_10004014((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uVar28,uVar23);
      iVar22 = 0;
      iVar15 = 0;
      iVar13 = 0;
      iVar6 = 0;
      local_64 = uVar14;
      if (iVar8 == 0) goto LAB_10008830;
LAB_10008cb2:
      uVar14 = ~local_5c;
      local_7c = pcVar7;
      goto LAB_10008cba;
    }
    iVar6 = local_68;
    if (bVar16) {
      iVar22 = iVar13;
      if ((int)local_6c < 2) {
        if (bVar3) {
          pcVar19 = (char *)(local_34[0] + 0x433);
        }
        else {
          pcVar19 = (char *)(0x36 - local_38);
        }
      }
      else {
        iVar15 = (int)local_7c - 1;
        if (local_68 < iVar15) {
          iVar6 = 0;
          local_4c = local_4c + (iVar15 - local_68);
          local_68 = iVar15;
        }
        else {
          iVar6 = local_68 - iVar15;
        }
        pcVar19 = local_7c;
        if ((int)local_7c < 0) {
          pcVar19 = (char *)0;
          iVar22 = iVar13 - (int)local_7c;
        }
      }
      iVar8 = iVar13 + (int)pcVar19;
      local_70 = local_70 + (int)pcVar19;
      iVar15 = FUN_101194cc(param_1,1);
      iVar13 = iVar22;
    }
    else {
      iVar15 = 0;
      iVar8 = iVar13;
    }
    if ((0 < iVar13) && (0 < local_70)) {
      iVar22 = local_70;
      if (iVar13 <= local_70) {
        iVar22 = iVar13;
      }
      iVar8 = iVar8 - iVar22;
      iVar13 = iVar13 - iVar22;
      local_70 = local_70 - iVar22;
    }
    if (local_68 != 0) {
      if (bVar16) {
        uVar26 = uVar12;
        if (0 < iVar6) {
          iVar15 = FUN_10119644(param_1,iVar15,iVar6);
          uVar26 = FUN_101194f8(param_1,iVar15,uVar12);
          FUN_101193f4(param_1,uVar12);
        }
        local_68 = local_68 - iVar6;
        uVar12 = uVar26;
        if (local_68 == 0) goto LAB_10008b2a;
      }
      uVar12 = FUN_10119644(param_1,uVar12,local_68);
    }
LAB_10008b2a:
    iVar22 = FUN_101194cc(param_1,1);
    if ((int)local_4c < 1) {
      if ((int)local_6c < 2) goto LAB_10008c38;
LAB_10008c6a:
      bVar3 = false;
LAB_10008c5c:
      if (local_4c != 0) goto LAB_10008b50;
      iVar6 = 1;
    }
    else {
      iVar22 = FUN_10119644(param_1,iVar22,local_4c);
      if ((int)local_6c < 2) {
LAB_10008c38:
        if (uVar28 != 0) goto LAB_10008c6a;
        if ((uVar23 & 0xfffff) == 0) {
          bVar3 = false;
          if ((uVar23 & 0x7ff00000) != 0) {
            iVar8 = iVar8 + 1;
            local_70 = local_70 + 1;
            bVar3 = true;
          }
        }
        else {
          bVar3 = false;
        }
        goto LAB_10008c5c;
      }
      bVar3 = false;
LAB_10008b50:
      iVar6 = FUN_1013d702(*(undefined4 *)(iVar22 + *(int *)(iVar22 + 0x10) * 4 + 0x10));
      iVar6 = 0x20 - iVar6;
    }
    uVar23 = iVar6 + local_70 & 0x1f;
    iVar6 = 0;
    if (uVar23 == 0) {
LAB_10008b78:
      iVar6 = iVar6 + 0x1c;
      iVar8 = iVar8 + iVar6;
      iVar13 = iVar13 + iVar6;
      local_70 = local_70 + iVar6;
    }
    else {
      iVar6 = 0x20 - uVar23;
      if (4 < iVar6) {
        iVar6 = -uVar23;
        goto LAB_10008b78;
      }
      if (iVar6 != 4) goto LAB_10008b78;
    }
    if (0 < iVar8) {
      uVar12 = FUN_101196f8(param_1,uVar12,iVar8);
    }
    if (0 < local_70) {
      iVar22 = FUN_101196f8(param_1,iVar22,local_70);
    }
    pcVar19 = pcVar7;
    if ((bVar2) && (iVar6 = FUN_1013d7a2(uVar12,iVar22), iVar6 < 0)) {
      uVar12 = FUN_10119438(param_1,uVar12,10,0);
      uVar14 = uVar14 - 1;
      local_7c = pcVar17;
      if (bVar16) {
        iVar15 = FUN_10119438(param_1,iVar15,10,0);
        if ((0 < (int)pcVar17) || ((int)local_6c < 3)) goto LAB_10008d04;
      }
      else if ((0 < (int)pcVar17) || ((int)local_6c < 3)) goto LAB_10008f00;
LAB_10008c90:
      if (local_7c == (char *)0x0) {
        iVar22 = FUN_10119438(param_1,iVar22,5,0);
        iVar8 = FUN_1013d7a2(uVar12,iVar22);
        iVar13 = iVar22;
        iVar6 = iVar15;
        local_64 = uVar14;
        if (0 < iVar8) goto LAB_10008830;
      }
      goto LAB_10008cb2;
    }
    if (((int)local_7c < 1) && (2 < (int)local_6c)) goto LAB_10008c90;
    pcVar17 = local_7c;
    if (bVar16) {
LAB_10008d04:
      iVar6 = iVar15;
      if (0 < iVar13) {
        iVar6 = FUN_101196f8(param_1,iVar15,iVar13);
      }
      iVar15 = iVar6;
      if (bVar3) {
        iVar13 = FUN_10119374(param_1,*(undefined4 *)(iVar6 + 4));
        if (iVar13 == 0) {
          uVar12 = 0x2ea;
          uVar26 = DAT_10008f28;
LAB_10008392:
                    /* WARNING: Subroutine does not return */
          FUN_10117c88(DAT_1000865c,uVar12,0,uVar26);
        }
        FUN_1011ea40(iVar13 + 0xc,iVar6 + 0xc,(*(int *)(iVar6 + 0x10) + 2) * 4);
        iVar15 = FUN_101196f8(param_1,iVar13,1);
      }
LAB_10008d64:
      local_7c = pcVar19 + 1;
      iVar8 = FUN_1013d532(uVar12,iVar22);
      iVar13 = iVar8 + 0x30;
      iVar9 = FUN_1013d7a2(uVar12,iVar6);
      iVar10 = FUN_101197d0(param_1,iVar22,iVar15);
      if (*(int *)(iVar10 + 0xc) == 0) {
        iVar11 = FUN_1013d7a2(uVar12,iVar10);
      }
      else {
        iVar11 = 1;
      }
      FUN_101193f4(param_1,iVar10);
      if ((in_d0 & 1) == 0 && (local_6c == 0 && iVar11 == 0)) {
        if (iVar13 == 0x39) {
LAB_10008e18:
          *pcVar19 = '9';
          pcVar17 = local_7c;
          goto LAB_10008e20;
        }
        if (0 < iVar9) {
LAB_10008dca:
          iVar13 = iVar8 + 0x31;
        }
LAB_10008dce:
        cVar4 = (char)iVar13;
        goto LAB_10008dd0;
      }
      if ((iVar9 < 0) || ((local_6c == 0 && iVar9 == 0) && (in_d0 & 1) == 0)) {
        if (0 < iVar11) {
          uVar12 = FUN_101196f8(param_1,uVar12,1);
          iVar9 = FUN_1013d7a2(uVar12,iVar22);
          if ((0 < iVar9) || ((iVar9 == 0 && (iVar8 << 0x1f < 0)))) {
            if (iVar13 != 0x39) goto LAB_10008dca;
            goto LAB_10008e18;
          }
        }
        goto LAB_10008dce;
      }
      if (0 < iVar11) {
        if (iVar13 == 0x39) goto LAB_10008e18;
        iVar13 = iVar8 + 0x31;
        goto LAB_10008dce;
      }
      *pcVar19 = (char)iVar13;
      if (local_7c != pcVar7 + (int)pcVar17) {
        uVar12 = FUN_10119438(param_1,uVar12,10,0);
        pcVar19 = local_7c;
        if (iVar6 == iVar15) {
          iVar15 = FUN_10119438(param_1,iVar6,10,0);
          iVar6 = iVar15;
        }
        else {
          iVar6 = FUN_10119438(param_1,iVar6,10,0);
          iVar15 = FUN_10119438(param_1,iVar15,10,0);
        }
        goto LAB_10008d64;
      }
    }
    else {
LAB_10008f00:
      while( true ) {
        iVar13 = FUN_1013d532(uVar12,iVar22);
        iVar13 = iVar13 + 0x30;
        *pcVar19 = (char)iVar13;
        if ((int)local_7c <= (int)(pcVar19 + 1) - (int)pcVar7) break;
        uVar12 = FUN_10119438(param_1,uVar12,10,0);
        pcVar19 = pcVar19 + 1;
      }
      iVar6 = 0;
      if ((int)local_7c < 1) {
        local_7c = (char *)0x1;
      }
      local_7c = pcVar7 + (int)local_7c;
    }
    uVar12 = FUN_101196f8(param_1,uVar12,1);
    iVar8 = FUN_1013d7a2(uVar12,iVar22);
    pcVar17 = local_7c;
    if ((iVar8 < 1) && ((iVar8 != 0 || (-1 < iVar13 << 0x1f)))) {
      do {
        local_7c = pcVar17;
        pcVar17 = local_7c + -1;
      } while (local_7c[-1] == '0');
    }
    else {
LAB_10008e20:
      do {
        local_7c = pcVar17;
        pcVar17 = local_7c + -1;
        if (local_7c[-1] != '9') {
          *pcVar17 = local_7c[-1] + '\x01';
          goto LAB_10008cbe;
        }
      } while (pcVar7 != pcVar17);
      uVar14 = uVar14 + 1;
      cVar4 = '1';
      pcVar19 = pcVar7;
LAB_10008dd0:
      *pcVar19 = cVar4;
    }
  }
LAB_10008cbe:
  FUN_101193f4(param_1,iVar22);
  pcVar21 = local_7c;
  local_64 = uVar14;
  if (iVar15 != 0) {
    if ((iVar6 != 0) && (iVar6 != iVar15)) {
      FUN_101193f4(param_1,iVar6);
    }
    FUN_101193f4(param_1,iVar15);
  }
LAB_10008a34:
  FUN_101193f4(param_1,uVar12);
  *pcVar21 = '\0';
  *param_4 = local_64 + 1;
  if (param_6 != (int *)0x0) {
    *param_6 = (int)pcVar21;
  }
  return pcVar7;
}

