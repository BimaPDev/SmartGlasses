/* FUN_100fdedc @ 0x100fdedc */

/* WARNING: Removing unreachable block (ram,0x100fe3c8) */

uint FUN_100fdedc(int *param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_40;
  
  iVar3 = param_1[4];
  uVar1 = CONCAT11(*(undefined1 *)(iVar3 + 6),*(undefined1 *)(iVar3 + 7));
  uVar6 = uVar1 & 0xfffffffe;
  if ((uVar1 & 0xfffe) == 0) {
    return 0;
  }
  uVar18 = *param_2;
  uVar7 = (uint)(uVar1 >> 1);
  if (param_3 == 0) {
    if (uVar7 == 0) {
      return 0;
    }
  }
  else {
    uVar18 = uVar18 + 1;
    if (uVar7 == 0) {
      uVar21 = 0xffff;
      uVar4 = 0;
      uVar6 = 0;
      goto LAB_100fdf58;
    }
  }
  uVar10 = 0;
  iVar5 = uVar6 + 2;
  uVar21 = uVar7;
  do {
    while( true ) {
      uVar4 = uVar10 + uVar21 >> 1;
      iVar13 = iVar3 + (uVar4 + 7) * 2;
      iVar11 = iVar13 + iVar5;
      uVar1 = CONCAT11(*(undefined1 *)(iVar13 + iVar5),*(undefined1 *)(iVar11 + 1));
      uVar8 = (uint)uVar1;
      uVar2 = CONCAT11(*(undefined1 *)(iVar3 + (uVar4 + 7) * 2),*(undefined1 *)(iVar13 + 1));
      uVar14 = (uint)uVar2;
      uVar17 = uVar4;
      if (uVar8 <= uVar18) break;
      uVar21 = uVar4;
      if (uVar4 <= uVar10) goto LAB_100fdf4e;
    }
    if (uVar18 <= uVar14) {
      iVar15 = *param_1;
      iVar13 = iVar11 + uVar6 + uVar6;
      local_60 = (int)CONCAT11(*(undefined1 *)(iVar11 + uVar6),*(undefined1 *)(iVar11 + uVar6 + 1));
      local_5c = (uint)CONCAT11(*(undefined1 *)(iVar11 + uVar6 * 2),*(undefined1 *)(iVar13 + 1));
      puVar9 = (undefined1 *)(*(int *)(iVar15 + 0x1fc) + *(int *)(iVar15 + 0x200));
      local_50 = local_5c;
      local_4c = local_60;
      if ((uVar4 < uVar7 - 1) || ((uVar2 & uVar1) != 0xffff)) {
LAB_100fe01c:
        if ((param_1[5] & 2U) == 0) {
          uVar21 = uVar14;
          if (local_5c != 0xffff) goto LAB_100fe0e8;
          if (param_3 == 0) {
            return 0;
          }
          iVar3 = FUN_100fdd08(param_1);
          if (iVar3 != 0) {
            return 0;
          }
          param_1[6] = uVar18;
          goto LAB_100fdfac;
        }
        uVar21 = uVar8;
        local_48 = uVar14;
        if (local_5c != 0xffff) goto LAB_100fe044;
        local_58 = 1;
        uVar10 = uVar4 + 1;
        if (uVar4 == 0) goto LAB_100fe23a;
      }
      else {
        uVar21 = 0xffff;
        local_48 = uVar21;
        if (local_5c == 0) {
          if (-1 < param_1[5] << 0x1e) goto LAB_100fe144;
        }
        else {
          if ((undefined1 *)(local_5c + 2 + iVar13) <= puVar9) goto LAB_100fe01c;
          if (-1 < param_1[5] << 0x1e) {
            local_60 = 1;
            goto LAB_100fe144;
          }
          local_50 = 0;
          local_4c = 1;
        }
LAB_100fe044:
        local_58 = uVar4;
        uVar10 = uVar4;
        if (uVar4 == 0) goto LAB_100fe190;
      }
      local_58 = uVar10;
      local_40 = uVar4 + 1;
      iVar20 = iVar3 + uVar4 * 2;
      iVar12 = uVar6 + uVar4 * 2;
      iVar11 = uVar6 * 3 + uVar4 * 2 + iVar3;
      iVar16 = iVar3 + (iVar12 - uVar4) * 2;
      iVar12 = iVar12 + iVar3;
      uVar10 = local_48;
      goto LAB_100fe07e;
    }
    uVar10 = uVar4 + 1;
  } while (uVar10 < uVar21);
LAB_100fdf4e:
  uVar6 = 0;
  uVar21 = uVar14;
  goto LAB_100fdf52;
  while( true ) {
    bVar22 = uVar17 == 1;
    iVar11 = iVar11 + -2;
    iVar20 = iVar20 + -2;
    iVar12 = iVar12 + -2;
    iVar16 = iVar16 + -2;
    uVar17 = uVar17 - 1;
    if (bVar22) break;
LAB_100fe07e:
    local_48 = (uint)CONCAT11(*(undefined1 *)(iVar20 + 0xc),*(undefined1 *)(iVar20 + 0xd));
    if (local_48 < uVar18) {
      local_48 = uVar10;
      if (local_58 != local_40) goto LAB_100fe190;
      if (uVar4 == uVar17) {
        uVar8 = uVar21;
        uVar14 = uVar10;
        local_60 = local_4c;
        local_5c = local_50;
      }
      goto LAB_100fe23a;
    }
    uVar21 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 0xe),*(undefined1 *)(iVar12 + 0xf));
    local_4c = (int)CONCAT11(*(undefined1 *)(iVar16 + 0xe),*(undefined1 *)(iVar16 + 0xf));
    local_50 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0xe),*(undefined1 *)(iVar11 + 0xf));
    iVar13 = iVar11 + 0xe;
    uVar10 = local_48;
    if (local_50 != 0xffff) {
      local_58 = uVar17 - 1;
      iVar11 = iVar11 + -2;
      iVar20 = iVar20 + -2;
      iVar12 = iVar12 + -2;
      iVar16 = iVar16 + -2;
      uVar17 = local_58;
      if (local_58 == 0) goto LAB_100fe218;
      goto LAB_100fe07e;
    }
  }
  if (local_58 != local_40) {
    uVar17 = 0;
LAB_100fe190:
    if (local_58 == uVar17) {
LAB_100fe218:
      uVar8 = uVar21;
      local_60 = local_4c;
      local_5c = local_50;
      uVar17 = local_58;
      uVar21 = local_48;
    }
    else {
      iVar11 = iVar3 + (local_58 + 7) * 2;
      iVar12 = iVar11 + iVar5;
      iVar13 = iVar12 + uVar6 + uVar6;
      local_60 = (int)CONCAT11(*(undefined1 *)(iVar12 + uVar6),*(undefined1 *)(iVar12 + uVar6 + 1));
      local_5c = (uint)CONCAT11(*(undefined1 *)(iVar12 + uVar6 * 2),*(undefined1 *)(iVar13 + 1));
      uVar8 = (uint)CONCAT11(*(undefined1 *)(iVar11 + iVar5),*(undefined1 *)(iVar12 + 1));
      uVar17 = local_58;
      uVar21 = (uint)CONCAT11(*(undefined1 *)(iVar3 + (local_58 + 7) * 2),
                              *(undefined1 *)(iVar11 + 1));
    }
LAB_100fe0e8:
    uVar4 = uVar17;
    if (local_5c == 0) {
LAB_100fe144:
      uVar10 = uVar18 + local_60;
      uVar6 = uVar10 & 0xffff;
      if (param_3 == 0) {
        return uVar6;
      }
      if (uVar6 < *(uint *)(iVar15 + 0x10)) goto LAB_100fdf58;
      if ((int)uVar10 < 0) {
        if (-1 < (int)(uVar21 + local_60)) {
          uVar6 = 0;
          uVar18 = -local_60;
          goto LAB_100fdf58;
        }
      }
      else if (((int)uVar10 < 0x10000) && (0xffff < (int)(uVar21 + local_60))) {
        uVar6 = 0;
        uVar18 = 0x10000 - local_60;
        goto LAB_100fdf58;
      }
    }
    else {
      puVar19 = (undefined1 *)(iVar13 + local_5c + (uVar18 - uVar8) * 2);
      if ((param_3 == 0) || (puVar19 <= puVar9)) {
        uVar6 = 0;
        if ((CONCAT11(*puVar19,puVar19[1]) != 0) &&
           (uVar6 = (uint)CONCAT11(*puVar19,puVar19[1]) + local_60 & 0xffff,
           *(uint *)(iVar15 + 0x10) <= uVar6)) {
          uVar6 = 0;
        }
        goto LAB_100fdf52;
      }
    }
    uVar6 = 0;
    goto LAB_100fdf58;
  }
LAB_100fe23a:
  if (local_58 < uVar7) {
    iVar11 = uVar6 + local_58 * 2;
    iVar16 = iVar3 + (iVar11 - local_58) * 2;
    iVar20 = iVar3 + local_58 * 2;
    iVar11 = iVar11 + iVar3;
    iVar12 = uVar6 * 3 + local_58 * 2 + iVar3;
    uVar10 = local_58;
    local_58 = uVar4;
    do {
      uVar17 = uVar10;
      iVar13 = iVar12;
      uVar21 = (uint)CONCAT11(*(undefined1 *)(iVar11 + 0x10),*(undefined1 *)(iVar11 + 0x11));
      local_48 = (uint)CONCAT11(*(undefined1 *)(iVar20 + 0xe),*(undefined1 *)(iVar20 + 0xf));
      iVar20 = iVar20 + 2;
      if (uVar18 < uVar21) {
        uVar17 = uVar17 - 1;
        uVar21 = uVar8;
        iVar13 = iVar11;
        local_50 = local_5c;
        local_48 = uVar14;
        break;
      }
      local_60 = (int)CONCAT11(*(undefined1 *)(iVar16 + 0x10),*(undefined1 *)(iVar16 + 0x11));
      iVar16 = iVar16 + 2;
      local_5c = (uint)CONCAT11(*(undefined1 *)(iVar13 + 0x10),*(undefined1 *)(iVar13 + 0x11));
      if (local_5c != 0xffff) {
        local_58 = uVar17;
      }
      uVar8 = uVar21;
      iVar11 = iVar11 + 2;
      iVar12 = iVar13 + 2;
      uVar10 = uVar17 + 1;
      uVar14 = local_48;
      local_50 = local_5c;
    } while (uVar7 != uVar17 + 1);
    iVar13 = iVar13 + 0x10;
    local_4c = local_60;
    if (uVar4 != local_58) goto LAB_100fe190;
    uVar6 = 0;
    uVar21 = local_48;
  }
  else {
    uVar6 = 0;
    uVar17 = local_58 - 1;
    uVar21 = uVar14;
  }
LAB_100fdf52:
  uVar4 = uVar17;
  if (param_3 == 0) {
    return uVar6;
  }
LAB_100fdf58:
  if ((uVar21 < uVar18) && (uVar7 == uVar4 + 1)) {
    return 0;
  }
  iVar3 = FUN_100fdd08(param_1);
  if (iVar3 == 0) {
    param_1[6] = uVar18;
    if (uVar6 == 0) {
LAB_100fdfac:
      FUN_100fdde4(param_1);
      uVar6 = param_1[7];
      if (uVar6 == 0) {
        return 0;
      }
      uVar18 = param_1[6];
    }
    else {
      param_1[7] = uVar6;
    }
  }
  else if (uVar6 == 0) {
    return 0;
  }
  *param_2 = uVar18;
  return uVar6;
}

