/* FUN_2c4daac0 @ 0x2c4daac0 */

undefined4
FUN_2c4daac0(short *param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  short *psVar17;
  undefined1 *puVar18;
  short *psVar19;
  uint *puVar20;
  int iVar21;
  undefined1 *puVar22;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_50;
  short *local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  uint *local_38;
  uint local_34;
  int local_30;
  
  if (param_5 < param_4) {
    return 5;
  }
  FUN_2c674268(param_3,0,param_5 << 2);
  local_3c = param_5 >> 1;
  if (param_6 == 0) {
    iVar1 = (int)*param_1;
    if (iVar1 != param_5) {
      if (iVar1 == 0) {
        return 5;
      }
      iVar9 = iVar1 >> 1;
      if (iVar9 < local_3c) {
        *(undefined1 *)((int)param_1 + local_3c + 4) = *(undefined1 *)((int)param_1 + iVar9 + 4);
        *(undefined1 *)((int)param_1 + local_3c + 5) = *(undefined1 *)((int)param_1 + iVar9 + 5);
        if (iVar9 < param_5 >> 3) {
          iVar1 = 8;
        }
        else if (iVar9 == param_5 >> 3) {
          iVar1 = 4;
        }
        else {
          iVar1 = 2;
        }
        iVar21 = local_3c + -1;
        if (-1 < iVar21) {
          puVar22 = (undefined1 *)((int)param_1 + iVar9 + 4);
          iVar9 = (int)param_1 + ((local_3c + -1) - iVar1);
          do {
            puVar22 = puVar22 + -1;
            uVar4 = *puVar22;
            iVar13 = (int)param_1 + iVar21;
            do {
              *(undefined1 *)(iVar13 + 4) = uVar4;
              iVar10 = iVar13 + -2;
              *(undefined1 *)(iVar13 + 3) = uVar4;
              iVar13 = iVar10;
            } while (iVar9 != iVar10);
            iVar21 = -iVar1 + iVar21;
            iVar9 = iVar9 + -iVar1;
          } while (-1 < iVar21);
        }
      }
      else {
        if (local_3c < iVar1 >> 3) {
          iVar1 = 8;
        }
        else if (local_3c == iVar1 >> 3) {
          iVar1 = 4;
        }
        else {
          iVar1 = 2;
        }
        if (0 < local_3c) {
          puVar22 = (undefined1 *)((int)param_1 + 3);
          puVar18 = puVar22 + local_3c;
          psVar17 = param_1;
          do {
            psVar8 = psVar17 + 2;
            psVar17 = (short *)((int)psVar17 + iVar1);
            puVar22 = puVar22 + 1;
            *puVar22 = (char)*psVar8;
          } while (puVar18 != puVar22);
        }
        *(undefined1 *)((int)param_1 + local_3c + 4) = *(undefined1 *)((int)param_1 + iVar9 + 4);
        *(undefined1 *)((int)param_1 + local_3c + 5) = *(undefined1 *)((int)param_1 + iVar9 + 5);
      }
    }
  }
  else {
    iVar1 = param_5;
    if (param_5 < 0) {
      iVar1 = param_5 + 1;
    }
    FUN_2c674268(param_1 + 1,0,(iVar1 >> 1) + 4);
  }
  local_4c = param_1 + 2;
  *param_1 = (short)param_5;
  if (param_4 < 1) {
    FUN_2c674268(local_4c,1,local_3c);
    goto LAB_2c4dab6a;
  }
  local_48 = param_4 >> 1;
  uVar11 = param_2[1];
  uVar5 = 0x10 - uVar11;
  if ((int)uVar5 < 1) {
    uVar16 = 0;
    uVar5 = *param_2;
  }
  else {
    if (uVar5 == 0x20) {
      uVar16 = 0;
    }
    else {
      uVar16 = *param_2 << (uVar5 & 0xff);
    }
    uVar5 = FUN_2c4d74d4(param_2 + 2);
    *param_2 = uVar5;
    uVar11 = param_2[1] + 0x20;
  }
  puVar20 = param_2 + 2;
  uVar11 = uVar11 - 0x10;
  uVar6 = *(uint *)(DAT_2c4daedc + 0x40);
  param_2[1] = uVar11;
  uVar6 = (uVar5 >> (uVar11 & 0xff) | uVar16) & uVar6;
  if (local_48 != 0) {
    uVar5 = 0xffff;
    uVar11 = 0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (uint *)(param_3 + 4);
    local_30 = 0;
    local_58 = ((uint)*(byte *)((int)param_1 + 5) * 0x100 +
               (uint)(ushort)((*(byte *)(param_1 + 2) & 0xf) << 4)) * 0x10;
    local_40 = (undefined1 *)((int)param_1 + 3);
    local_34 = local_58;
LAB_2c4dac3e:
    local_34 = local_34 & 0xffff;
    iVar1 = 0;
    local_60 = 0;
    local_64 = 0;
LAB_2c4dac46:
    uVar2 = local_64 + local_58;
    uVar16 = uVar2;
    if (uVar2 == 0) {
      uVar16 = 1;
    }
    uVar7 = uVar16 * 0x1000 - 1;
    uVar16 = DAT_2c4daef8;
    puVar12 = DAT_2c4daefc;
    if ((uVar7 <= DAT_2c4daee0) &&
       (puVar12 = DAT_2c4daeec + -0x100, uVar16 = DAT_2c4daef0, DAT_2c4daee4 < uVar7)) {
      uVar16 = DAT_2c4daee8;
      puVar12 = DAT_2c4daeec;
    }
    if (uVar16 < uVar7) {
      puVar12 = puVar12 + 0x80;
    }
    if (puVar12[0x3f] < uVar7) {
      puVar12 = puVar12 + 0x40;
    }
    if (puVar12[0x1f] < uVar7) {
      puVar12 = puVar12 + 0x20;
    }
    if (puVar12[0xf] < uVar7) {
      puVar12 = puVar12 + 0x10;
    }
    if (puVar12[7] < uVar7) {
      puVar12 = puVar12 + 8;
    }
    if (puVar12[3] < uVar7) {
      puVar12 = puVar12 + 4;
    }
    if (puVar12[1] < uVar7) {
      puVar12 = puVar12 + 2;
    }
    uVar16 = *puVar12;
    if (uVar16 < uVar7) {
      uVar16 = puVar12[1];
    }
    if (uVar2 != uVar16 >> 0xc) {
      uVar16 = uVar16 >> 6;
    }
    iVar10 = (uVar6 - uVar11) * 0x4000 + 0x3fff;
    iVar13 = (int)*(short *)(DAT_2c4daef4 + (uVar16 & 0x3f) * 0x22);
    iVar21 = DAT_2c4daef4 + (uVar16 & 0x3f) * 0x22;
    iVar13 = (uVar5 - uVar11) * iVar13 + iVar13;
    iVar9 = (uVar5 - uVar11) + 1;
    if (iVar10 < iVar13) {
      iVar3 = iVar21;
      if (iVar10 < iVar9 * *(short *)(iVar21 + 0x10)) {
        iVar3 = iVar21 + 0x10;
      }
      if (iVar10 < iVar9 * *(short *)(iVar3 + 8)) {
        iVar3 = iVar3 + 8;
      }
      if (iVar10 < iVar9 * *(short *)(iVar3 + 4)) {
        iVar3 = iVar3 + 4;
      }
      if (iVar10 < iVar9 * *(short *)(iVar3 + 2)) {
        iVar3 = iVar3 + 2;
      }
      iVar10 = iVar3 - (iVar21 + -2);
      local_5c = iVar10 >> 1;
      if (iVar21 + -2 == iVar3) {
        iVar10 = 0;
      }
      else {
        iVar13 = iVar9 * *(short *)(iVar21 + iVar10);
        uVar5 = (uVar11 + (iVar9 * *(short *)(iVar21 + iVar10 + -2) >> 0xe)) - 1;
      }
    }
    else {
      iVar10 = 0;
      local_5c = 0;
    }
    uVar16 = uVar11 + (iVar13 >> 0xe);
    uVar5 = uVar5 & 0xffff;
    do {
      uVar11 = uVar16 & 0xffff;
      if ((int)(uVar5 << 0x10) < 0) {
        if ((uVar16 & 0x8000) == 0) {
          if (((uVar16 & 0x4000) == 0) || ((int)(uVar5 << 0x11) < 0)) goto LAB_2c4dade2;
          uVar11 = uVar11 - 0x4000 & 0xffff;
          uVar6 = uVar6 - 0x4000;
          uVar5 = uVar5 - 0x4000 & 0xffff;
        }
      }
      uVar16 = uVar11 << 1;
      uVar11 = param_2[1] - 1;
      uVar5 = (uVar5 & 0x7fff) << 1 | 1;
      if (param_2[1] == 0) {
        uVar2 = FUN_2c4d74d4(puVar20);
        param_2[1] = 0x1f;
        uVar11 = uVar2 >> 0x1f;
        *param_2 = uVar2;
      }
      else {
        param_2[1] = uVar11;
        uVar11 = *param_2 >> (uVar11 & 0xff) & 1;
      }
      uVar6 = uVar6 << 1 | uVar11;
    } while( true );
  }
LAB_2c4db084:
  uVar5 = uVar11 + 0xe;
  if (uVar5 < 0x20) {
    uVar16 = param_2[9];
    if (uVar16 != 0) {
      if (uVar11 != 0) goto LAB_2c4db1ae;
      goto LAB_2c4db09c;
    }
    param_2[1] = uVar5;
    FUN_2c4d766c(puVar20,uVar5,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (param_2[9] == 0) {
      FUN_2c4d766c(puVar20,uVar11);
      uVar16 = param_2[9];
    }
    else {
LAB_2c4db1ae:
      FUN_2c4d7598(puVar20,*param_2,uVar11);
      uVar16 = param_2[9];
    }
LAB_2c4db09c:
    *param_2 = 0;
    param_2[1] = 0;
    FUN_2c4d766c(puVar20,0xe,uVar16 & 0xff);
  }
  if (local_48 != 0) {
    iVar1 = 0;
    piVar15 = (int *)(param_3 + 4);
    do {
      if (piVar15[-1] == 0) {
        if (*piVar15 != 0) goto LAB_2c4db0be;
      }
      else {
        if (*piVar15 == 0) {
LAB_2c4db0be:
          iVar9 = 1;
          iVar21 = 1;
        }
        else {
          iVar9 = 2;
          iVar21 = 2;
        }
        uVar11 = param_2[1];
        uVar5 = iVar21 - uVar11;
        if ((int)uVar5 < 1) {
          uVar5 = *param_2;
          uVar16 = 0;
        }
        else {
          if (uVar5 == 0x20) {
            uVar16 = 0;
          }
          else {
            uVar16 = *param_2 << (uVar5 & 0xff);
          }
          uVar5 = FUN_2c4d74d4(puVar20);
          *param_2 = uVar5;
          uVar11 = param_2[1] + 0x20;
        }
        uVar6 = *(uint *)(DAT_2c4db1c8 + iVar9 * 4);
        param_2[1] = uVar11 - iVar9;
        uVar6 = (uVar5 >> (uVar11 - iVar9 & 0xff) | uVar16) & uVar6;
        if ((piVar15[-1] != 0) && ((int)uVar6 >> (iVar21 - 1U & 0xff) == 0)) {
          piVar15[-1] = -piVar15[-1];
        }
        if ((*piVar15 != 0) && (-1 < (int)(uVar6 << 0x1f))) {
          *piVar15 = -*piVar15;
        }
      }
      iVar1 = iVar1 + 1;
      piVar15 = piVar15 + 2;
    } while (iVar1 != local_48);
    local_4c = (short *)((int)local_4c + iVar1);
    local_3c = local_3c - iVar1;
  }
  FUN_2c674268(local_4c,1,local_3c);
LAB_2c4dab6a:
  uVar14 = 0;
  uVar5 = param_2[9];
joined_r0x2c4dae7e:
  if (uVar5 == 0) {
    FUN_2c4d766c(param_2 + 2,param_2[1]);
  }
  else if (param_2[1] != 0) {
    FUN_2c4d7598(param_2 + 2,*param_2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = FUN_2c4d76a8(param_2 + 2);
  if (iVar1 < 0) {
    return 5;
  }
  return uVar14;
LAB_2c4dade2:
  uVar6 = uVar6 & 0xffff;
  if (0x1e < iVar10) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x18) {
      uVar5 = param_2[9];
      uVar14 = 5;
      goto joined_r0x2c4dae7e;
    }
    if ((int)local_60 < 7) {
      local_60 = local_60 + 1;
      local_64 = local_60 * 0x20000;
    }
    goto LAB_2c4dac46;
  }
  if (iVar10 == 0) {
    if (local_60 != 0) {
      local_48 = local_50;
      uVar11 = param_2[1];
      goto LAB_2c4db084;
    }
    uVar4 = 1;
    iVar1 = 1;
  }
  else {
    local_64 = (int)local_5c >> 2;
    uVar16 = local_5c & 3;
    if (iVar1 != 0) {
      iVar9 = 0;
      psVar17 = DAT_2c4db1c0 + -4;
LAB_2c4daf1a:
      if (uVar16 == 0) {
        iVar21 = 0x1644;
        psVar8 = DAT_2c4db1c0;
      }
      else {
        iVar21 = 0x2949;
        psVar8 = psVar17;
        if (local_64 != 0) {
          iVar21 = 0x1ae4;
          psVar8 = DAT_2c4db1c4;
        }
      }
      iVar13 = (uVar5 - uVar11) + 1;
      iVar10 = (uVar6 - uVar11) * 0x4000 + 0x3fff;
      if (iVar10 < (int)((uVar5 - uVar11) * iVar21 + iVar21)) {
        psVar19 = psVar8 + 1;
        if (iVar10 < iVar13 * psVar8[2]) {
          psVar19 = psVar8 + 2;
        }
        uVar2 = (int)psVar19 - (int)(psVar8 + -1);
        local_60 = (uVar2 & 3) >> 1;
        local_5c = (int)uVar2 >> 2;
      }
      else {
        iVar21 = iVar13 * *psVar8;
        if (iVar21 <= iVar10) {
          local_60 = 0;
          local_5c = 0;
          goto LAB_2c4daf94;
        }
        local_60 = 1;
        local_5c = 0;
        uVar2 = 2;
        psVar19 = psVar8;
      }
      if (psVar8 + -1 == psVar19) {
        iVar21 = iVar13 * *(short *)((int)psVar8 + uVar2);
      }
      else {
        iVar21 = iVar13 * *(short *)((int)psVar8 + uVar2);
        uVar5 = (uVar11 + (iVar13 * *(short *)((int)psVar8 + (uVar2 - 2)) >> 0xe)) - 1;
      }
LAB_2c4daf94:
      uVar2 = uVar11 + (iVar21 >> 0xe);
      uVar5 = uVar5 & 0xffff;
      do {
        uVar11 = uVar2 & 0xffff;
        if ((int)(uVar5 << 0x10) < 0) {
          if ((uVar2 & 0x8000) == 0) {
            if (((uVar2 & 0x4000) == 0) || ((int)(uVar5 << 0x11) < 0)) goto LAB_2c4db00c;
            uVar11 = uVar11 - 0x4000 & 0xffff;
            uVar6 = uVar6 - 0x4000;
            uVar5 = uVar5 - 0x4000 & 0xffff;
          }
        }
        uVar2 = uVar11 << 1;
        uVar11 = param_2[1] - 1;
        uVar5 = (uVar5 & 0x7fff) << 1 | 1;
        if (param_2[1] == 0) {
          uVar7 = FUN_2c4d74d4(puVar20);
          param_2[1] = 0x1f;
          uVar11 = uVar7 >> 0x1f;
          *param_2 = uVar7;
        }
        else {
          param_2[1] = uVar11;
          uVar11 = *param_2 >> (uVar11 & 0xff) & 1;
        }
        uVar6 = uVar11 | uVar6 << 1;
      } while( true );
    }
LAB_2c4db02e:
    local_38[-1] = uVar16;
    *local_38 = local_64;
    iVar1 = uVar16 + local_64 + 1;
    if (0xe < iVar1) {
      iVar1 = 0xf;
    }
    uVar4 = (undefined1)iVar1;
  }
  local_40[1] = uVar4;
  local_50 = local_50 + 1;
  if (local_48 == local_50) goto LAB_2c4db080;
  local_34 = iVar1 + ((uint)(byte)local_40[3] * 0x100 + (local_34 >> 8)) * 0x10;
  local_58 = local_34;
  if ((3 < local_50) && (iVar1 + local_44 + local_30 < 5)) {
    local_58 = local_34 + 0x10000;
  }
  local_30 = local_44;
  local_38 = local_38 + 2;
  local_44 = iVar1;
  local_40 = local_40 + 1;
  goto LAB_2c4dac3e;
LAB_2c4db00c:
  iVar9 = iVar9 + 1;
  uVar16 = local_60 | uVar16 << 1;
  uVar6 = uVar6 & 0xffff;
  local_64 = local_5c | local_64 << 1;
  if (iVar1 == iVar9) goto LAB_2c4db02e;
  goto LAB_2c4daf1a;
LAB_2c4db080:
  uVar11 = param_2[1];
  goto LAB_2c4db084;
}

