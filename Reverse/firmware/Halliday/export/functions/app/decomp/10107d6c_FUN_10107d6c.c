/* FUN_10107d6c @ 0x10107d6c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_10107d6c(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  code *pcVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int local_a0;
  int local_9c;
  short local_6c;
  short local_6a;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_50;
  int iStack_4c;
  uint local_48;
  int iStack_44;
  uint local_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  
  iVar22 = *param_1;
  iVar12 = param_1[3];
  if (*(ushort *)(iVar22 + 0x122) < param_3) {
    *(short *)(iVar22 + 0x122) = (short)param_3;
  }
  local_68 = 0;
  if (*(uint *)(iVar22 + 0x10) <= param_2) {
    return 0x10;
  }
  param_1[5] = param_2;
  if (param_1[4] << 0x1f < 0) {
    local_a0 = 0x10000;
    local_9c = 0x10000;
  }
  else {
    local_a0 = *(int *)(*(int *)(param_1[1] + 0x2c) + 4);
    local_9c = *(int *)(*(int *)(param_1[1] + 0x2c) + 8);
  }
  iVar9 = FUN_10105990(iVar22,param_2,param_1 + 7);
  if ((0 < param_1[7]) && (*(int *)(iVar22 + 0x2d0) == 0)) {
    return 8;
  }
  local_68 = (**(code **)(iVar22 + 0x208))(param_1,param_2,*(int *)(iVar22 + 0x2d0) + iVar9);
  if (local_68 != 0) {
    return local_68;
  }
  local_68 = (**(code **)(iVar22 + 0x210))(param_1);
  (**(code **)(iVar22 + 0x20c))(param_1);
  if (local_68 != 0) {
    return local_68;
  }
  if ((param_1[7] == 0) || ((short)param_1[8] == 0)) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
  }
  iVar18 = param_1[6];
  iVar24 = *param_1;
  local_6c = 0;
  local_6a = 0;
  local_64 = local_64 & 0xffff0000;
  local_50 = local_50 & 0xffff0000;
  uVar10 = FUN_100fadac(iVar18);
  (**(code **)(*(int *)(iVar24 + 0x21c) + 0x8c))(iVar24,0,param_2,&local_6c,&local_64);
  if (*(char *)(iVar24 + 0x124) == '\0') {
    if (*(short *)(iVar24 + 0x174) == -1) {
      local_6a = *(short *)(iVar24 + 0xdc) - (short)param_1[0xc];
      iVar24 = (int)*(short *)(iVar24 + 0xdc) - (int)*(short *)(iVar24 + 0xde);
      if (iVar24 < 0) goto LAB_10108214;
LAB_10108102:
      sVar3 = (short)iVar24;
    }
    else {
      local_6a = *(short *)(iVar24 + 0x1ba) - (short)param_1[0xc];
      iVar24 = (int)*(short *)(iVar24 + 0x1ba) - (int)*(short *)(iVar24 + 0x1bc);
      if (-1 < iVar24) goto LAB_10108102;
LAB_10108214:
      sVar3 = -(short)iVar24;
    }
    local_50 = CONCAT22(local_50._2_2_,sVar3);
  }
  else {
    (**(code **)(*(int *)(iVar24 + 0x21c) + 0x8c))(iVar24,1,param_2,&local_6a,&local_50);
  }
  local_68 = FUN_100fad58(iVar18,uVar10);
  if (local_68 != 0) {
    return local_68;
  }
  iVar18 = (int)local_6c;
  uVar13 = local_64 & 0xffff;
  iVar24 = (int)local_6a;
  uVar30 = local_50 & 0xffff;
  param_1[0xd] = iVar18;
  param_1[0xe] = uVar13;
  param_1[0x2b] = iVar24;
  param_1[0x2c] = uVar30;
  if ((char)param_1[0x10] == '\0') {
    param_1[0xf] = uVar13;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((param_1[7] == 0) || ((short)param_1[8] == 0)) {
    iVar18 = param_1[9] - iVar18;
    iVar24 = iVar24 + param_1[0xc];
    param_1[0x13] = uVar13 + iVar18;
    param_1[0x11] = iVar18;
    param_1[0x30] = iVar24 - uVar30;
    param_1[0x2e] = iVar24;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = 0;
    if ((param_1[4] & 1U) == 0) {
      lVar7 = (longlong)local_a0 * (longlong)iVar18 +
              (ulonglong)((int)((longlong)local_a0 * (longlong)iVar18 >> 0x3f) + 0x8000);
      param_1[0x11] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
      lVar7 = (longlong)local_a0 * (longlong)(int)(uVar13 + iVar18);
      lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
      param_1[0x13] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
      param_1[0x2d] = 0;
      lVar7 = (longlong)local_9c * (longlong)iVar24 +
              (ulonglong)((int)((longlong)local_9c * (longlong)iVar24 >> 0x3f) + 0x8000);
      param_1[0x2e] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
      param_1[0x2f] = 0;
      lVar7 = (longlong)local_9c * (longlong)(int)(iVar24 - uVar30);
      lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
      param_1[0x30] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
      return 0;
    }
    return 0;
  }
  iVar15 = *(int *)(iVar22 + 0x2d0);
  param_1[0x13] = uVar13 + (param_1[9] - iVar18);
  param_1[0x2e] = param_1[0xc] + iVar24;
  param_1[0x12] = 0;
  pcVar25 = *(code **)(iVar22 + 0x208);
  param_1[0x14] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x11] = param_1[9] - iVar18;
  param_1[0x30] = (param_1[0xc] + iVar24) - uVar30;
  local_68 = (*pcVar25)(param_1,param_2,iVar15 + 10 + iVar9,param_1[7] + -10);
  if (local_68 != 0) {
    return local_68;
  }
  if (0 < (short)param_1[8]) {
    local_68 = (**(code **)(iVar22 + 0x214))(param_1);
    if (local_68 == 0) {
      (**(code **)(iVar22 + 0x20c))(param_1);
      iVar24 = param_1[3];
      iVar18 = (int)*(short *)(iVar24 + 0x3a);
      iVar22 = param_1[0x12];
      piVar19 = (int *)(*(int *)(iVar24 + 0x3c) + iVar18 * 8);
      *piVar19 = param_1[0x11];
      piVar19[1] = iVar22;
      iVar22 = param_1[0x14];
      piVar19[2] = param_1[0x13];
      piVar19[3] = iVar22;
      iVar22 = param_1[0x2e];
      piVar19[4] = param_1[0x2d];
      piVar19[5] = iVar22;
      iVar9 = *(int *)(iVar24 + 0x40);
      iVar22 = param_1[0x30];
      piVar19[6] = param_1[0x2f];
      piVar19[7] = iVar22;
      *(undefined1 *)(iVar9 + iVar18) = 0;
      *(undefined1 *)(*(int *)(iVar24 + 0x40) + iVar18 + 1) = 0;
      *(undefined1 *)(*(int *)(iVar24 + 0x40) + iVar18 + 2) = 0;
      *(undefined1 *)(*(int *)(iVar24 + 0x40) + iVar18 + 3) = 0;
      uVar13 = param_1[4];
      uVar30 = uVar13 & 2;
      if (uVar30 == 0) {
        iVar15 = *(int *)(iVar24 + 0x4c);
        uVar2 = *(ushort *)(iVar24 + 0x3a);
        iVar9 = *(int *)(iVar24 + 0x3c);
        iVar22 = *(int *)(iVar24 + 0x50);
        *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)(iVar24 + 0x38);
        iVar29 = *(int *)(iVar24 + 0x40);
        param_1[0x21] = iVar15;
        iVar15 = *(int *)(iVar24 + 0x44);
        *(ushort *)(param_1 + 0x20) = uVar2;
        param_1[0x24] = iVar29;
        param_1[0x25] = iVar15;
        param_1[0x22] = iVar9;
        param_1[0x23] = iVar22;
        *(undefined2 *)(param_1 + 0x26) = 0;
        FUN_1011ea40(iVar22,iVar9,(uVar2 + 4) * 8);
        uVar13 = param_1[4];
        uVar30 = uVar13 & 2;
      }
      uVar11 = *(uint *)(iVar24 + 0x3c);
      if (-1 < (int)(uVar13 << 0x1f)) {
        uVar13 = uVar11 + (iVar18 + 4) * 8;
        iVar22 = *(int *)(*(int *)(param_1[1] + 0x2c) + 4);
        iVar9 = *(int *)(*(int *)(param_1[1] + 0x2c) + 8);
        if (uVar11 < uVar13) {
          iVar24 = uVar11 + 8;
          do {
            lVar7 = (longlong)iVar22 * (longlong)*(int *)(iVar24 + -8);
            lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
            *(uint *)(iVar24 + -8) = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000
            ;
            lVar7 = (longlong)iVar9 * (longlong)*(int *)(iVar24 + -4);
            lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
            *(uint *)(iVar24 + -4) = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000
            ;
            iVar24 = iVar24 + 8;
          } while (iVar24 != (~uVar11 + uVar13 & 0xfffffff8) + uVar11 + 0x10);
        }
      }
      piVar19 = (int *)(iVar18 * 8 + uVar11);
      iVar22 = piVar19[1];
      param_1[0x11] = *piVar19;
      param_1[0x12] = iVar22;
      iVar22 = piVar19[3];
      param_1[0x13] = piVar19[2];
      param_1[0x14] = iVar22;
      iVar22 = piVar19[5];
      param_1[0x2d] = piVar19[4];
      param_1[0x2e] = iVar22;
      iVar22 = piVar19[7];
      param_1[0x2f] = piVar19[6];
      param_1[0x30] = iVar22;
      if (uVar30 == 0) {
        *(short *)(param_1 + 0x20) = (short)param_1[0x20] + 4;
        local_68 = FUN_10106db4(param_1,0);
        if (local_68 != 0) {
          return local_68;
        }
      }
      else {
        local_68 = 0;
      }
      FUN_100f8d28(iVar12);
      return local_68;
    }
    goto LAB_10108258;
  }
  if ((short)param_1[8] == 0) goto LAB_10108258;
  piVar19 = param_1 + 0x33;
  uVar10 = *(undefined4 *)(iVar22 + 100);
  *(undefined2 *)(param_1 + 8) = 0xffff;
  if (piVar19 == (int *)0x0) {
    iVar9 = FUN_100fb5d4(0,param_2);
  }
  else {
    uVar13 = param_3;
    for (iVar9 = param_1[0x33]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      iVar18 = iVar9;
      if (uVar13 == 0) goto LAB_10108288;
      uVar13 = uVar13 - 1;
    }
    iVar9 = FUN_100fb5d4(piVar19,param_2);
  }
  if (iVar9 != 0) goto LAB_10108254;
  iVar9 = FUN_100fb248(uVar10,0xc,&local_68);
  if (local_68 != 0) goto LAB_10108258;
  *(uint *)(iVar9 + 8) = param_2;
  FUN_100fb5e8(piVar19,iVar9);
LAB_101082a2:
  sVar3 = *(short *)(iVar12 + 0x16);
  uVar13 = (uint)sVar3;
  sVar4 = *(short *)(iVar12 + 0x14);
  local_68 = (**(code **)(iVar22 + 0x218))(param_1);
  if (local_68 != 0) {
LAB_10108258:
    (**(code **)(iVar22 + 0x20c))(param_1);
    return local_68;
  }
  iVar9 = param_1[0x29];
  (**(code **)(iVar22 + 0x20c))(param_1);
  if (-1 < param_1[4] << 0x1f) {
    lVar7 = (longlong)local_a0 * (longlong)param_1[0x11] +
            (ulonglong)((int)((longlong)local_a0 * (longlong)param_1[0x11] >> 0x3f) + 0x8000);
    param_1[0x11] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
    lVar7 = (longlong)local_a0 * (longlong)param_1[0x13] +
            (ulonglong)((int)((longlong)local_a0 * (longlong)param_1[0x13] >> 0x3f) + 0x8000);
    param_1[0x13] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
    lVar7 = (longlong)local_a0 * (longlong)param_1[0x2d] +
            (ulonglong)((int)((longlong)local_a0 * (longlong)param_1[0x2d] >> 0x3f) + 0x8000);
    param_1[0x2d] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
    lVar7 = (longlong)local_9c * (longlong)param_1[0x2e] +
            (ulonglong)((int)((longlong)local_9c * (longlong)param_1[0x2e] >> 0x3f) + 0x8000);
    param_1[0x2e] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
    lVar7 = (longlong)local_a0 * (longlong)param_1[0x2f] +
            (ulonglong)((int)((longlong)local_a0 * (longlong)param_1[0x2f] >> 0x3f) + 0x8000);
    param_1[0x2f] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
    lVar7 = (longlong)local_9c * (longlong)param_1[0x30] +
            (ulonglong)((int)((longlong)local_9c * (longlong)param_1[0x30] >> 0x3f) + 0x8000);
    param_1[0x30] = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
  }
  if ((param_1[4] & 0x400U) != 0) {
    FUN_100f8d28(iVar12);
    *(undefined4 *)(param_1[2] + 0x48) = DAT_1010888c;
    return local_68;
  }
  iVar22 = param_1[6];
  iVar15 = *(int *)(iVar12 + 0x54);
  iVar18 = param_1[7];
  iVar24 = *(int *)(iVar12 + 0x30);
  FUN_100f8d28(iVar12);
  if (iVar15 == 0) {
    param_1[6] = iVar22;
    param_1[7] = iVar18;
    param_1[0x29] = iVar9;
  }
  else {
    puVar16 = (uint *)(param_1 + 0x11);
    iVar24 = iVar24 << 5;
    puVar21 = (uint *)(param_1 + 0x2d);
    puVar23 = (uint *)(param_1 + 0x2f);
    puVar17 = (uint *)(param_1 + 0x13);
    iVar29 = 0;
    do {
      local_50 = *puVar16;
      iStack_4c = param_1[0x12];
      local_48 = *puVar17;
      iStack_44 = param_1[0x14];
      local_40 = *puVar21;
      iStack_3c = param_1[0x2e];
      local_38 = *puVar23;
      iStack_34 = param_1[0x30];
      iVar28 = param_1[0xf];
      iVar26 = param_1[0x2c];
      sVar5 = *(short *)(iVar12 + 0x16);
      uVar30 = (uint)sVar5;
      local_68 = FUN_10107d6c(param_1,*(undefined4 *)(*(int *)(iVar12 + 0x34) + iVar24),param_3 + 1)
      ;
      if (local_68 != 0) {
        return local_68;
      }
      iVar27 = *(int *)(iVar12 + 0x34) + iVar24;
      uVar2 = *(ushort *)(iVar27 + 4);
      if ((uVar2 & 0x200) == 0) {
        *puVar16 = local_50;
        param_1[0x12] = iStack_4c;
        *puVar17 = local_48;
        param_1[0x14] = iStack_44;
        *puVar21 = local_40;
        param_1[0x2e] = iStack_3c;
        *puVar23 = local_38;
        param_1[0x30] = iStack_34;
        param_1[0xf] = iVar28;
        param_1[0x2c] = iVar26;
      }
      sVar6 = *(short *)(iVar12 + 0x16);
      if (uVar30 != (int)sVar6) {
        iVar26 = param_1[3];
        uVar8 = uVar2 & 200;
        local_60 = *(int *)(iVar26 + 0x18) + uVar30 * 8;
        local_64 = CONCAT22(*(short *)(iVar26 + 0x16) - sVar5,(undefined2)local_64);
        if ((uVar2 & 200) != 0) {
          FUN_100fa570(&local_64,iVar27 + 0x10);
          uVar2 = *(ushort *)(iVar27 + 4);
        }
        if ((uVar2 & 2) == 0) {
          uVar11 = *(int *)(iVar27 + 8) + uVar13;
          uVar14 = *(int *)(iVar27 + 0xc) + uVar30;
          if ((uVar30 <= uVar11) || ((uint)(int)*(short *)(iVar26 + 0x16) <= uVar14)) {
            return 0x15;
          }
          iVar26 = *(int *)(iVar26 + 0x18);
          uVar30 = *(int *)(iVar26 + uVar11 * 8 + 4) - *(int *)(iVar26 + uVar14 * 8 + 4);
          uVar11 = *(int *)(iVar26 + uVar11 * 8) - *(int *)(iVar26 + uVar14 * 8);
LAB_1010842c:
          if (uVar11 == 0 && uVar30 == 0) goto LAB_10108438;
        }
        else {
          uVar11 = *(uint *)(iVar27 + 8);
          uVar30 = *(uint *)(iVar27 + 0xc);
          if (uVar11 == 0 && uVar30 == 0) goto LAB_10108438;
          if ((uVar8 != 0) && ((uVar2 & 0x800) != 0)) {
            iVar26 = FUN_100f8518(*(undefined4 *)(iVar27 + 0x10),*(undefined4 *)(iVar27 + 0x14));
            iVar28 = FUN_100f8518(*(undefined4 *)(iVar27 + 0x1c),*(undefined4 *)(iVar27 + 0x18));
            lVar7 = (longlong)iVar26 * (longlong)(int)uVar11 +
                    (ulonglong)((int)((longlong)iVar26 * (longlong)(int)uVar11 >> 0x3f) + 0x8000);
            uVar11 = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
            lVar7 = (longlong)iVar28 * (longlong)(int)uVar30 +
                    (ulonglong)((int)((longlong)iVar28 * (longlong)(int)uVar30 >> 0x3f) + 0x8000);
            uVar30 = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
            iVar26 = param_1[4];
            if (iVar26 << 0x1f < 0) goto LAB_1010842c;
LAB_1010852e:
            lVar7 = (longlong)*(int *)(*(int *)(param_1[1] + 0x2c) + 4) * (longlong)(int)uVar11;
            lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
            uVar11 = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
            lVar7 = (longlong)*(int *)(*(int *)(param_1[1] + 0x2c) + 8) * (longlong)(int)uVar30;
            lVar7 = lVar7 + (ulonglong)((int)(lVar7 >> 0x3f) + 0x8000);
            uVar30 = (uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) * 0x10000;
            if (((int)((uint)*(ushort *)(iVar27 + 4) << 0x1d) < 0) && (-1 < iVar26 << 0x1e)) {
              if (*(int *)(*(int *)(*param_1 + 0x60) + 0x40) == 0x23) {
                uVar11 = uVar11 + 0x20 & 0xffffffc0;
              }
              uVar30 = uVar30 + 0x20 & 0xffffffc0;
            }
            goto LAB_1010842c;
          }
          iVar26 = param_1[4];
          if (-1 < iVar26 << 0x1f) goto LAB_1010852e;
        }
        FUN_100fa540(&local_64,uVar11);
      }
LAB_10108438:
      local_68 = 0;
      iVar29 = iVar29 + 1;
      iVar24 = iVar24 + 0x20;
    } while (iVar15 != iVar29);
    param_1[6] = iVar22;
    param_1[7] = iVar18;
    param_1[0x29] = iVar9;
    if ((((param_1[4] & 2U) == 0) && ((int)((uint)*(ushort *)(iVar27 + 4) << 0x17) < 0)) &&
       (uVar13 < (uint)(int)sVar6)) {
      iVar9 = param_1[3];
      iVar22 = (int)*(short *)(iVar9 + 0x16);
      if ((iVar22 != -4) &&
         (*(uint *)(iVar9 + 4) < (uint)(*(short *)(iVar9 + 0x3a) + 4 + iVar22 * 2))) {
        iVar22 = FUN_100fb410(iVar9,iVar22 + 4,0);
        if (iVar22 != 0) {
          return iVar22;
        }
        iVar22 = (int)*(short *)(iVar9 + 0x16);
      }
      local_64 = 0;
      uVar30 = param_1[0x12];
      puVar20 = (uint *)(*(int *)(iVar9 + 0x18) + iVar22 * 8);
      *puVar20 = *puVar16;
      puVar20[1] = uVar30;
      uVar30 = param_1[0x14];
      puVar20[2] = *puVar17;
      puVar20[3] = uVar30;
      uVar30 = param_1[0x2e];
      puVar20[4] = *puVar21;
      puVar20[5] = uVar30;
      iVar18 = *(int *)(iVar9 + 0x1c);
      uVar30 = param_1[0x30];
      puVar20[6] = *puVar23;
      puVar20[7] = uVar30;
      *(undefined1 *)(iVar18 + iVar22) = 0;
      *(undefined1 *)(*(int *)(iVar9 + 0x1c) + (int)*(short *)(iVar9 + 0x16) + 1) = 0;
      *(undefined1 *)(*(int *)(iVar9 + 0x1c) + (int)*(short *)(iVar9 + 0x16) + 2) = 0;
      *(undefined1 *)(*(int *)(iVar9 + 0x1c) + (int)*(short *)(iVar9 + 0x16) + 3) = 0;
      iVar22 = param_1[6];
      local_64 = FUN_100fad58(iVar22,param_1[0x29]);
      if ((local_64 == 0) && (uVar30 = FUN_100fb070(iVar22,&local_64), local_64 == 0)) {
        if (*(ushort *)(*param_1 + 0x11e) < uVar30) {
          if (param_1[7] < (int)uVar30) {
            return 0x16;
          }
          iVar9 = param_1[0x27];
          uVar11 = *(uint *)(iVar9 + 0x188);
          if (uVar11 < uVar30) {
            uVar10 = FUN_100fb280(*(undefined4 *)(iVar9 + 8),1,uVar11,uVar30,
                                  *(undefined4 *)(iVar9 + 0x18c),&local_50);
            *(undefined4 *)(iVar9 + 0x18c) = uVar10;
            if (local_50 != 0) {
              *(uint *)(param_1[0x27] + 0x188) = uVar11;
              return local_50;
            }
            iVar9 = param_1[0x27];
            uVar11 = uVar30;
          }
          local_64 = 0;
          *(uint *)(iVar9 + 0x188) = uVar11 & 0xffff;
        }
        else {
          if (uVar30 == 0) {
            local_68 = 0;
            goto LAB_1010861c;
          }
          iVar9 = param_1[0x27];
        }
        local_64 = FUN_100fadb0(iVar22,*(undefined4 *)(iVar9 + 0x18c),uVar30);
        if (local_64 != 0) {
          return local_64;
        }
        iVar9 = param_1[3];
        sVar5 = *(short *)(iVar9 + 0x16);
        sVar6 = *(short *)(iVar9 + 0x14);
        iVar22 = param_1[2];
        iVar18 = *(int *)(iVar9 + 0x28);
        iVar15 = *(int *)(iVar9 + 0x2c);
        *(undefined4 *)(iVar22 + 0x88) = *(undefined4 *)(param_1[0x27] + 0x18c);
        iVar24 = *(int *)(iVar9 + 0x18);
        *(uint *)(iVar22 + 0x8c) = uVar30;
        iVar22 = *(int *)(iVar9 + 0x1c);
        iVar9 = *(int *)(iVar9 + 0x20);
        param_1[0x21] = iVar18 + uVar13 * 8;
        param_1[0x22] = iVar24 + uVar13 * 8;
        param_1[0x24] = iVar22 + uVar13;
        param_1[0x25] = iVar9 + sVar4 * 2;
        *(short *)(param_1 + 0x20) = sVar5 - sVar3;
        *(short *)((int)param_1 + 0x82) = sVar6 - sVar4;
        param_1[0x23] = iVar15 + uVar13 * 8;
        *(short *)(param_1 + 0x26) = sVar3;
        for (uVar13 = 0; uVar13 < *(ushort *)(param_1 + 0x20); uVar13 = uVar13 + 1) {
          *(byte *)(param_1[0x24] + uVar13) = *(byte *)(param_1[0x24] + uVar13) & 0xe7;
        }
        *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) + 4;
        local_64 = FUN_10106db4(param_1,1);
      }
      local_68 = local_64;
      if (local_64 != 0) {
        return local_64;
      }
    }
  }
LAB_1010861c:
  if (*(int *)(iVar12 + 0x30) == 0) {
    return local_68;
  }
  if ((int)((uint)*(ushort *)(*(int *)(iVar12 + 0x34) + 4) << 0x15) < 0) {
    *(uint *)(iVar12 + 0x24) = *(uint *)(iVar12 + 0x24) | 0x40;
    return local_68;
  }
  return local_68;
LAB_10108288:
  do {
    *(undefined4 *)(iVar18 + 8) = 0xffffffff;
    piVar1 = (int *)(iVar18 + 4);
    iVar18 = *piVar1;
  } while (*piVar1 != 0);
  iVar18 = FUN_100fb5d4(piVar19,param_2);
  if (iVar18 != 0) {
LAB_10108254:
    local_68 = 0x15;
    goto LAB_10108258;
  }
  *(uint *)(iVar9 + 8) = param_2;
  goto LAB_101082a2;
}

