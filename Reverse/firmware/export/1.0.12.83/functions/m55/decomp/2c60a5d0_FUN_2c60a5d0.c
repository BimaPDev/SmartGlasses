/* FUN_2c60a5d0 @ 0x2c60a5d0 */

void FUN_2c60a5d0(int param_1,undefined4 *param_2,short *param_3,uint param_4,ushort param_5,
                 ushort param_6)

{
  short sVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint local_188;
  short *local_180;
  int local_178;
  int local_16c;
  short local_160;
  short local_15e;
  short local_15c;
  short local_15a;
  short local_158;
  short local_156;
  short local_154;
  short local_152;
  short local_150;
  short local_14e;
  short local_14c;
  short local_14a;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  short local_110;
  short local_10e;
  short local_10c;
  short local_10a;
  undefined1 auStack_f8 [108];
  undefined2 local_8c;
  byte local_8a;
  undefined1 local_89;
  undefined4 local_88;
  int local_68;
  undefined1 local_5c;
  int local_34;
  
  local_34 = *DAT_2c60a6fc;
  uVar15 = (uint)param_5;
  uVar14 = (uint)param_6;
  if ((*(byte *)(param_2 + 4) < 3) ||
     (local_188 = (uint)*(short *)(param_2 + 1), uVar15 == uVar14 || local_188 == 0))
  goto LAB_2c60a9f0;
  sVar3 = (short)param_4;
  if ((int)param_4 < (int)local_188) {
    local_188 = (uint)sVar3;
  }
  FUN_2c61314c(&local_8c,0);
  local_8a = (byte)(((uint)*(byte *)((int)param_2 + 0x11) << 0x1e) >> 0x1e);
  if (param_2[3] == 0) {
    local_89 = *(undefined1 *)(param_2 + 4);
    local_88 = *param_2;
  }
  else {
    local_89 = 0;
    local_5c = *(undefined1 *)(param_2 + 4);
    local_68 = param_2[3];
  }
  local_152 = *(short *)(param_2 + 1);
  local_15c = *param_3 + sVar3 + -1;
  local_160 = *param_3 - sVar3;
  local_15a = sVar3 + -1 + param_3[1];
  local_15e = param_3[1] - sVar3;
  local_154 = local_15c - local_152;
  local_158 = local_160 + local_152;
  local_156 = local_15e + local_152;
  local_152 = local_15a - local_152;
  if (((short)((local_154 + 1) - local_158) < 1) || ((short)((local_152 + 1) - local_156) < 1)) {
    FUN_2c6144a0(auStack_128,&local_160,0x7fff,0);
    uVar7 = FUN_2c613e5c(auStack_128,0);
    if ((uVar15 + 0x168 == uVar14) || (uVar15 == uVar14 + 0x168)) {
      local_8c = 0x7fff;
      FUN_2c61319c(param_1,&local_8c,&local_160);
      FUN_2c613ee4(uVar7);
      FUN_2c613f44(auStack_128);
      goto LAB_2c60a9f0;
    }
    local_178 = -1;
    bVar6 = false;
  }
  else {
    FUN_2c6144a0(auStack_140,&local_158,0x7fff,1);
    local_178 = FUN_2c613e5c(auStack_140,0);
    FUN_2c6144a0(auStack_128,&local_160,0x7fff,0);
    uVar7 = FUN_2c613e5c(auStack_128,0);
    if ((uVar15 + 0x168 == uVar14) || (uVar15 == uVar14 + 0x168)) {
      local_8c = 0x7fff;
      FUN_2c61319c(param_1,&local_8c,&local_160);
      FUN_2c613ee4(uVar7);
      if (local_178 != -1) {
        FUN_2c613ee4(local_178);
      }
      FUN_2c613f44(auStack_128);
      FUN_2c613f44(auStack_140);
      goto LAB_2c60a9f0;
    }
    bVar6 = true;
  }
  for (; 0x167 < uVar15; uVar15 = uVar15 - 0x168 & 0xffff) {
  }
  for (; 0x167 < uVar14; uVar14 = uVar14 - 0x168 & 0xffff) {
  }
  sVar4 = (short)uVar14;
  iVar10 = (int)sVar4;
  sVar5 = (short)uVar15;
  iVar16 = (int)sVar5;
  FUN_2c614414(auStack_f8,(int)*param_3,(int)param_3[1],iVar16,iVar10);
  uVar8 = FUN_2c613e5c(auStack_f8,0);
  if (uVar15 < uVar14) {
    iVar11 = 0x168 - (uVar14 - uVar15);
  }
  else {
    iVar11 = uVar15 - uVar14;
  }
  uVar17 = *(undefined4 *)(param_1 + 8);
  if ((iVar11 < 0x3d) || (param_4 < 0xb)) {
    FUN_2c61319c(param_1,&local_8c,&local_160);
  }
  else {
    uVar12 = (uint)((ulonglong)DAT_2c60aa18 * (ulonglong)(uVar15 >> 1) >> 0x25);
    lVar2 = (ulonglong)DAT_2c60aa18 * (ulonglong)(uVar14 >> 1);
    uVar13 = (uint)((ulonglong)lVar2 >> 0x25);
    iVar11 = (int)sVar3;
    if (uVar15 < 0x5a) {
      if ((uVar14 < 0x5a) && (uVar15 < uVar14)) {
        sVar1 = param_3[1];
        iVar9 = FUN_2c62e208(iVar16,DAT_2c60aa18,(int)lVar2);
        local_10e = sVar1 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
        local_10c = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
        sVar1 = param_3[1];
        iVar9 = FUN_2c62e208(iVar10);
        local_10a = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
        local_110 = sVar1 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
        iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
        if (iVar9 != 0) {
          *(short **)(param_1 + 8) = &local_110;
          FUN_2c61319c(param_1,&local_8c,&local_160);
        }
        *(undefined4 *)(param_1 + 8) = uVar17;
LAB_2c60a810:
        if ((uVar12 == uVar13) && (uVar14 < uVar15)) {
LAB_2c60afd0:
          local_10e = param_3[1];
          local_10a = local_10e + sVar3;
          local_110 = *param_3 - sVar3;
          local_10c = *param_3 + -1;
          iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
          if (iVar9 != 0) {
            *(short **)(param_1 + 8) = &local_110;
            FUN_2c61319c(param_1,&local_8c,&local_160);
          }
        }
        else if ((((uVar15 < 0x5a) && (uVar13 == 2)) || ((uVar13 == 3 && (uVar15 < 0x5a)))) ||
                ((uVar12 == 3 && (uVar13 == 2)))) goto LAB_2c60afd0;
LAB_2c60a852:
        *(undefined4 *)(param_1 + 8) = uVar17;
        if (uVar12 == 2) {
          if ((uVar14 <= uVar15) || (uVar13 != 2)) {
            local_16c = iVar11 - local_188;
            goto LAB_2c60ac0c;
          }
          sVar1 = *param_3;
          iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
          local_110 = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
          sVar5 = param_3[1];
          iVar9 = FUN_2c62e208(iVar16);
          local_10a = sVar5 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
          sVar5 = param_3[1];
          iVar9 = FUN_2c62e208(iVar10);
          local_10e = sVar5 + (short)(iVar11 * iVar9 >> 0xf);
          sVar5 = *param_3;
          iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
          local_10c = sVar5 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
          iVar11 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
          if (iVar11 != 0) {
            *(short **)(param_1 + 8) = &local_110;
            FUN_2c61319c(param_1,&local_8c,&local_160);
          }
          *(undefined4 *)(param_1 + 8) = uVar17;
          goto LAB_2c60a8c2;
        }
        if (uVar13 == 2) {
          local_16c = iVar11 - local_188;
          goto LAB_2c60ac78;
        }
      }
      else {
        sVar1 = param_3[1];
        local_110 = *param_3;
        local_10a = sVar3 + sVar1;
        iVar9 = FUN_2c62e208(iVar16);
        local_16c = iVar11 - local_188;
        local_10e = sVar1 + (short)(local_16c * iVar9 >> 0xf);
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
        local_10c = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
        iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
        if (iVar9 != 0) {
          *(short **)(param_1 + 8) = &local_110;
          FUN_2c61319c(param_1,&local_8c,&local_160);
        }
        if (uVar14 < 0x5a) goto LAB_2c60aac0;
LAB_2c60a7fa:
        *(undefined4 *)(param_1 + 8) = uVar17;
        if (uVar12 != 1) {
LAB_2c60a808:
          if (uVar13 == 1) {
            local_16c = iVar11 - local_188;
            goto LAB_2c60ab9a;
          }
          goto LAB_2c60a810;
        }
        if ((uVar14 <= uVar15) || (uVar13 != 1)) {
          local_16c = iVar11 - local_188;
          goto LAB_2c60ab30;
        }
        sVar1 = param_3[1];
        iVar9 = FUN_2c62e208(iVar16);
        local_10a = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
        local_10c = sVar1 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
        sVar1 = param_3[1];
        iVar9 = FUN_2c62e208(iVar10);
        local_10e = sVar1 + (short)((int)((iVar11 - local_188) * iVar9) >> 0xf);
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
        local_110 = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
        iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
        if (iVar9 != 0) {
          *(short **)(param_1 + 8) = &local_110;
          FUN_2c61319c(param_1,&local_8c,&local_160);
        }
        *(undefined4 *)(param_1 + 8) = uVar17;
      }
LAB_2c60a868:
      if (((((uVar12 == uVar13) && (uVar14 < uVar15)) || ((uVar15 < 0x5a && (uVar13 == 3)))) ||
          ((uVar12 == 1 && (uVar13 == 3)))) || ((uVar14 < 0x5a && (uVar12 == 1)))) {
        local_110 = *param_3 - sVar3;
        local_10c = *param_3 + -1;
        local_10e = param_3[1] - sVar3;
        local_10a = param_3[1] + -1;
        iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
        if (iVar9 != 0) {
          *(short **)(param_1 + 8) = &local_110;
          FUN_2c61319c(param_1,&local_8c,&local_160);
        }
      }
LAB_2c60a8ac:
      *(undefined4 *)(param_1 + 8) = uVar17;
      if (uVar12 == 3) {
        local_16c = iVar11 - local_188;
        if ((uVar14 <= uVar15) || (uVar13 != 3)) {
LAB_2c60acf8:
          sVar1 = *param_3;
          local_10a = param_3[1] + -1;
          local_10c = sVar3 + sVar1;
          iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
          local_110 = sVar1 + (short)(local_16c * iVar9 >> 0xf);
          sVar5 = param_3[1];
          iVar9 = FUN_2c62e208(iVar16);
          local_10e = sVar5 + (short)(iVar11 * iVar9 >> 0xf);
          iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
          if (iVar9 != 0) {
            *(short **)(param_1 + 8) = &local_110;
            FUN_2c61319c(param_1,&local_8c,&local_160);
          }
          if (uVar13 == 3) goto LAB_2c60ad5a;
          goto LAB_2c60a904;
        }
        sVar1 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
        local_110 = sVar1 + (short)(local_16c * iVar9 >> 0xf);
        sVar5 = param_3[1];
        iVar9 = FUN_2c62e208(iVar16);
        local_10e = sVar5 + (short)(iVar11 * iVar9 >> 0xf);
        sVar5 = *param_3;
        iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
        local_10c = sVar5 + (short)(iVar11 * iVar9 >> 0xf);
        sVar4 = param_3[1];
        iVar11 = FUN_2c62e208(iVar10);
        local_10a = sVar4 + (short)(local_16c * iVar11 >> 0xf);
        goto LAB_2c60afbc;
      }
      if (uVar13 != 3) goto LAB_2c60a8c2;
      local_16c = iVar11 - local_188;
LAB_2c60ad5a:
      sVar5 = *param_3;
      local_10e = param_3[1] - sVar3;
      local_110 = sVar5;
      iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
      local_10c = sVar5 + (short)(iVar9 * iVar11 >> 0xf);
      sVar4 = param_3[1];
      iVar11 = FUN_2c62e208(iVar10);
      local_10a = sVar4 + (short)(iVar11 * local_16c >> 0xf);
      iVar11 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar11 == 0) goto LAB_2c60a904;
LAB_2c60adb2:
      local_180 = &local_110;
      *(short **)(param_1 + 8) = local_180;
      FUN_2c61319c(param_1,&local_8c,&local_160);
    }
    else {
      if (0x59 < uVar14) {
        if ((((uVar14 < uVar15) && (uVar12 == uVar13)) || ((uVar12 == 2 && (uVar13 == 1)))) ||
           (((uVar13 == 2 && (uVar12 == 3)) || ((uVar13 == 1 && (uVar12 == 3)))))) {
          local_110 = *param_3;
          local_10c = local_110 + sVar3;
          local_10e = param_3[1];
          local_10a = local_10e + sVar3;
          iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
          if (iVar9 != 0) {
            *(short **)(param_1 + 8) = &local_110;
            FUN_2c61319c(param_1,&local_8c,&local_160);
          }
        }
        goto LAB_2c60a7fa;
      }
      local_16c = iVar11 - local_188;
LAB_2c60aac0:
      local_10c = *param_3 + sVar3;
      sVar1 = param_3[1];
      local_10e = sVar1;
      iVar9 = FUN_2c62e208(iVar10);
      local_10a = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
      sVar1 = *param_3;
      iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
      local_110 = sVar1 + (short)(local_16c * iVar9 >> 0xf);
      iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar9 != 0) {
        *(short **)(param_1 + 8) = &local_110;
        FUN_2c61319c(param_1,&local_8c,&local_160);
      }
      *(undefined4 *)(param_1 + 8) = uVar17;
      if (uVar12 != 1) goto LAB_2c60a808;
LAB_2c60ab30:
      local_110 = *param_3 - sVar3;
      sVar1 = param_3[1];
      local_10e = sVar1;
      iVar9 = FUN_2c62e208(iVar16);
      local_10a = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
      sVar1 = *param_3;
      iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
      local_10c = sVar1 + (short)(local_16c * iVar9 >> 0xf);
      iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar9 != 0) {
        *(short **)(param_1 + 8) = &local_110;
        FUN_2c61319c(param_1,&local_8c,&local_160);
      }
      if (uVar13 != 1) goto LAB_2c60a852;
LAB_2c60ab9a:
      local_10c = *param_3 + -1;
      sVar1 = param_3[1];
      local_10a = sVar3 + sVar1;
      iVar9 = FUN_2c62e208(iVar10);
      local_10e = sVar1 + (short)(local_16c * iVar9 >> 0xf);
      sVar1 = *param_3;
      iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
      local_110 = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
      iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar9 != 0) {
        *(short **)(param_1 + 8) = &local_110;
        FUN_2c61319c(param_1,&local_8c,&local_160);
      }
      *(undefined4 *)(param_1 + 8) = uVar17;
      if (uVar12 != 2) goto LAB_2c60a868;
LAB_2c60ac0c:
      local_10e = param_3[1] - sVar3;
      sVar1 = *param_3;
      local_10c = sVar1 + -1;
      iVar9 = FUN_2c62e208((int)(short)(sVar5 + 0x5a));
      local_110 = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
      sVar1 = param_3[1];
      iVar9 = FUN_2c62e208(iVar16);
      local_10a = sVar1 + (short)(local_16c * iVar9 >> 0xf);
      iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar9 != 0) {
        *(short **)(param_1 + 8) = &local_110;
        FUN_2c61319c(param_1,&local_8c,&local_160);
      }
      if (uVar13 != 2) goto LAB_2c60a8ac;
LAB_2c60ac78:
      local_10a = param_3[1] + -1;
      sVar1 = *param_3;
      local_110 = sVar1 - sVar3;
      iVar9 = FUN_2c62e208((int)(short)(sVar4 + 0x5a));
      local_10c = sVar1 + (short)(local_16c * iVar9 >> 0xf);
      sVar1 = param_3[1];
      iVar9 = FUN_2c62e208(iVar10);
      local_10e = sVar1 + (short)(iVar11 * iVar9 >> 0xf);
      iVar9 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
      if (iVar9 != 0) {
        *(short **)(param_1 + 8) = &local_110;
        FUN_2c61319c(param_1,&local_8c,&local_160);
      }
      *(undefined4 *)(param_1 + 8) = uVar17;
      if (uVar12 == 3) goto LAB_2c60acf8;
LAB_2c60a8c2:
      if ((uVar12 == uVar13) && (uVar14 < uVar15)) {
LAB_2c60af9a:
        local_110 = *param_3;
        local_10c = local_110 + sVar3;
        local_10e = param_3[1] - sVar3;
        local_10a = param_3[1] + -1;
LAB_2c60afbc:
        iVar11 = FUN_2c62a6b4(&local_110,&local_110,uVar17);
        if (iVar11 != 0) goto LAB_2c60adb2;
      }
      else if (((uVar14 < 0x5a) && (uVar12 == 2)) ||
              (((uVar12 == 1 && (uVar14 < 0x5a)) || ((uVar13 == 1 && (uVar12 == 2))))))
      goto LAB_2c60af9a;
    }
LAB_2c60a904:
    *(undefined4 *)(param_1 + 8) = uVar17;
  }
  FUN_2c613f44(auStack_f8);
  FUN_2c613f44(auStack_128);
  if (bVar6) {
    FUN_2c613f44(auStack_140);
  }
  FUN_2c613ee4(uVar8);
  FUN_2c613ee4(uVar7);
  if (local_178 != -1) {
    FUN_2c613ee4(local_178);
  }
  if ((int)((uint)*(byte *)((int)param_2 + 0x11) << 0x1d) < 0) {
    FUN_2c60a540(iVar16,(int)sVar3,local_188 & 0xff,&local_150);
    local_150 = local_150 + *param_3;
    local_14c = *param_3 + local_14c;
    local_14e = local_14e + param_3[1];
    local_14a = param_3[1] + local_14a;
    iVar16 = FUN_2c62a6b4(auStack_148,uVar17,&local_150);
    if (iVar16 != 0) {
      FUN_2c6144a0(&local_110,&local_150,0x7fff,0);
      uVar7 = FUN_2c613e5c(&local_110,0);
      *(undefined1 **)(param_1 + 8) = auStack_148;
      FUN_2c61319c(param_1,&local_8c,&local_160);
      FUN_2c613ee4(uVar7);
      FUN_2c613f44(&local_110);
    }
    FUN_2c60a540(iVar10,(int)sVar3,local_188 & 0xff,&local_150);
    local_150 = local_150 + *param_3;
    local_14c = *param_3 + local_14c;
    local_14e = local_14e + param_3[1];
    local_14a = param_3[1] + local_14a;
    iVar10 = FUN_2c62a6b4(auStack_148,uVar17,&local_150);
    if (iVar10 != 0) {
      FUN_2c6144a0(&local_110,&local_150,0x7fff,0);
      uVar7 = FUN_2c613e5c(&local_110,0);
      *(undefined1 **)(param_1 + 8) = auStack_148;
      FUN_2c61319c(param_1,&local_8c,&local_160);
      FUN_2c613ee4(uVar7);
      FUN_2c613f44(&local_110);
    }
    *(undefined4 *)(param_1 + 8) = uVar17;
  }
LAB_2c60a9f0:
  if (*DAT_2c60aa1c != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

