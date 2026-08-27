/* FUN_2c671c18 @ 0x2c671c18 */

/* WARNING: Type propagation algorithm not settling */

int FUN_2c671c18(undefined4 *param_1,int *param_2,uint *param_3,double *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  int **ppiVar16;
  undefined1 *puVar17;
  double *pdVar18;
  double *pdVar19;
  uint *puVar20;
  double dVar21;
  uint local_154;
  double *local_150;
  uint *local_14c;
  uint *local_148;
  int local_144;
  uint *local_140;
  int local_13c;
  int local_138;
  int local_134;
  uint local_124;
  uint local_120;
  int local_11c;
  uint *local_118;
  uint *local_114;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  undefined4 local_104;
  int *local_100 [2];
  undefined1 auStack_f8 [32];
  int aiStack_d8 [4];
  undefined1 auStack_c8 [144];
  uint auStack_38 [2];
  uint uStack_30;
  
  local_114 = (uint *)0x0;
  puVar2 = (undefined4 *)FUN_2c670680();
  local_120 = (uint)*(byte *)*puVar2;
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar3 = FUN_2c669c14(param_1,0x40);
    *param_2 = iVar3;
    param_2[4] = iVar3;
    if (iVar3 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_13c = 0;
  local_134 = 0;
  local_144 = 0;
  local_14c = param_3;
  dVar21 = DAT_2c671ea8;
LAB_2c671c84:
  puVar14 = param_3;
  if (*puVar14 != 0) goto code_r0x2c671c8c;
  goto LAB_2c671c90;
code_r0x2c671c8c:
  param_3 = puVar14 + 1;
  if (*puVar14 == 0x25) {
LAB_2c671c90:
    if (local_14c != puVar14) {
      iVar3 = FUN_2c6710c2(param_1,param_2,local_14c,(int)puVar14 - (int)local_14c);
      if (iVar3 == -1) goto LAB_2c671e7e;
      local_144 = local_144 + ((int)puVar14 - (int)local_14c >> 2);
    }
    if (*puVar14 != 0) {
      bVar8 = false;
      puVar12 = (uint *)0xffffffff;
      uVar11 = 0;
      local_124 = 0;
      local_148 = (uint *)0x0;
      local_14c = puVar14 + 1;
      pdVar18 = param_4;
      uVar9 = 0;
LAB_2c671cca:
      local_154 = *local_14c;
      local_14c = local_14c + 1;
LAB_2c671cd4:
      while (uVar13 = uVar11, local_154 < 0x3a) {
        if (local_154 < 0x20) goto LAB_2c671d7e;
        pdVar19 = pdVar18;
        switch(local_154) {
        case 0x20:
          if (uVar9 != 0) goto LAB_2c671cca;
        case 0x2b:
          bVar8 = true;
          uVar9 = local_154;
          goto LAB_2c671cca;
        default:
          goto switchD_2c671ce6_caseD_21;
        case 0x23:
          uVar11 = uVar11 | 1;
          goto LAB_2c671cca;
        case 0x2a:
          pdVar19 = (double *)((int)pdVar18 + 4);
          local_148 = *(uint **)pdVar18;
          pdVar18 = pdVar19;
          if ((int)local_148 < 0) {
            local_148 = (uint *)-(int)local_148;
            goto switchD_2c671ce6_caseD_2d;
          }
          goto LAB_2c671cca;
        case 0x2d:
switchD_2c671ce6_caseD_2d:
          uVar11 = uVar11 | 4;
          pdVar18 = pdVar19;
          goto LAB_2c671cca;
        case 0x2e:
          local_154 = *local_14c;
          if (local_154 == 0x2a) {
            puVar12 = (uint *)(*(uint *)pdVar18 | (int)*(uint *)pdVar18 >> 0x1f);
            local_14c = local_14c + 1;
            pdVar18 = (double *)((int)pdVar18 + 4);
            goto LAB_2c671cca;
          }
          uVar13 = 0;
          local_14c = local_14c + 1;
          while (local_154 - 0x30 < 10) {
            uVar13 = uVar13 * 10 + (local_154 - 0x30);
            local_154 = *local_14c;
            local_14c = local_14c + 1;
          }
          puVar12 = (uint *)(uVar13 | (int)uVar13 >> 0x1f);
          break;
        case 0x30:
          uVar11 = uVar11 | 0x80;
          goto LAB_2c671cca;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_2c671ce6_caseD_31;
        }
      }
      goto switchD_2c671d08_switchD;
    }
    goto LAB_2c671e7e;
  }
  goto LAB_2c671c84;
switchD_2c671ce6_caseD_31:
  local_148 = (uint *)0x0;
  do {
    local_148 = (uint *)((int)local_148 * 10 + local_154 + -0x30);
    puVar14 = local_14c + 1;
    local_154 = *local_14c;
    local_14c = puVar14;
  } while (local_154 - 0x30 < 10);
  goto LAB_2c671cd4;
switchD_2c671d08_switchD:
  switch(local_154) {
  case 0x45:
  case 0x47:
  case 0x65:
  case 0x66:
  case 0x67:
    if (bVar8) {
      local_124 = uVar9;
    }
    local_150 = (double *)((int)pdVar18 + 7U & 0xfffffff8);
    dVar21 = *local_150;
    local_150 = local_150 + 1;
    if (ABS(dVar21) <= DAT_2c672190) {
      if (!NAN(dVar21)) {
        if (puVar12 == (uint *)0xffffffff) {
          puVar12 = (uint *)&DAT_00000006;
        }
        else if (((local_154 & 0xffffffdf) == 0x47) && (puVar12 == (uint *)0x0)) {
          puVar12 = (uint *)0x1;
        }
        uVar13 = uVar11 | 0x100;
        puVar6 = (uint *)FUN_2c671b48(SUB84(dVar21,0),param_1,puVar12,uVar13,&local_11c,&local_118,
                                      local_154,&local_114,aiStack_d8 + 2,0x28);
        if ((puVar6 == (uint *)(aiStack_d8 + 2)) && (0x28 < (int)local_114)) {
          puVar4 = (uint *)FUN_2c669c14(param_1,(int)local_114 << 2);
          if (puVar4 == (uint *)0x0) goto LAB_2c671e72;
          puVar6 = (uint *)FUN_2c671b48(SUB84(dVar21,0),param_1,puVar12,uVar13,&local_11c,&local_118
                                        ,local_154,&local_114,puVar4,local_114);
        }
        else {
          puVar4 = (uint *)0x0;
        }
        puVar14 = local_118;
        puVar20 = local_118;
        if ((local_154 & 0xffffffdf) == 0x47) {
          if ((-4 < (int)local_118) && ((int)local_118 <= (int)puVar12)) {
            if ((int)local_118 < (int)local_114) {
              if ((int)local_118 < 1) {
                iVar3 = 2 - (int)local_118;
              }
              else {
                iVar3 = 1;
              }
              puVar14 = (uint *)(iVar3 + (int)local_114);
            }
            else if ((int)(uVar11 << 0x1f) < 0) {
              puVar14 = (uint *)((int)local_118 + 1);
            }
            local_154 = 0x67;
            goto LAB_2c672068;
          }
          local_154 = local_154 - 2;
        }
        else if (local_154 == 0x66) {
          if ((int)local_118 < 1) {
            if ((uVar11 & 1) == 0 && puVar12 == (uint *)0x0) {
              puVar14 = (uint *)0x1;
            }
            else {
              puVar14 = (uint *)((int)puVar12 + 2);
            }
          }
          else if ((uVar11 & 1) != 0 || puVar12 != (uint *)0x0) {
            puVar14 = (uint *)((undefined1 *)((int)puVar12 + 1) + (int)local_118);
          }
          goto LAB_2c672068;
        }
        puVar14 = (uint *)((int)local_118 + -1);
        local_108 = local_154;
        if ((int)puVar14 < 0) {
          local_104 = 0x2d;
          puVar12 = (uint *)(1 - (int)local_118);
        }
        else {
          local_104 = 0x2b;
          puVar12 = puVar14;
        }
        if ((int)puVar12 < 10) {
          puVar17 = auStack_f8;
          local_100[1] = (int *)(puVar12 + 0xc);
          local_100[0] = (int *)0x30;
        }
        else {
          piVar5 = aiStack_d8 + 2;
          do {
            piVar15 = piVar5;
            puVar20 = (uint *)((int)puVar12 / 10);
            piVar15[-1] = (int)puVar12 % 10 + 0x30;
            bVar8 = 99 < (int)puVar12;
            puVar12 = puVar20;
            piVar5 = piVar15 + -1;
          } while (bVar8);
          piVar15[-2] = (int)(puVar20 + 0xc);
          ppiVar16 = local_100;
          for (piVar5 = piVar15 + -2; piVar5 < aiStack_d8 + 2; piVar5 = piVar5 + 1) {
            *ppiVar16 = (int *)*piVar5;
            ppiVar16 = ppiVar16 + 1;
          }
          puVar17 = auStack_c8 + -(int)piVar15;
          if (aiStack_d8 + 2 < (int *)((int)piVar15 - 0xbU)) {
            puVar17 = (undefined1 *)0x0;
          }
          puVar17 = (undefined1 *)((int)local_100 + (int)puVar17);
        }
        local_134 = (int)puVar17 - (int)&local_108 >> 2;
        local_118 = puVar14;
        if ((1 < (int)local_114) ||
           (puVar14 = (uint *)((int)local_114 + local_134), puVar20 = (uint *)0x0, (uVar11 & 1) != 0
           )) {
          puVar14 = (uint *)((int)local_114 + local_134 + 1);
          puVar20 = (uint *)0x0;
        }
LAB_2c672068:
        if (local_11c == 0) {
          puVar12 = (uint *)0x0;
        }
        else {
          puVar12 = (uint *)0x0;
          local_124 = 0x2d;
        }
        goto LAB_2c672078;
      }
      puVar12 = DAT_2c6721a0;
      puVar20 = DAT_2c6721a4;
      if ((longlong)dVar21 < 0) {
        local_124 = 0x2d;
      }
    }
    else {
      puVar12 = DAT_2c67219c;
      puVar20 = DAT_2c672198;
      if ((int)((uint)(dVar21 < 0.0) << 0x1f) < 0) {
        local_124 = 0x2d;
      }
    }
    uVar11 = uVar11 & 0xffffff7f;
    puVar14 = (uint *)0x3;
    if (0x47 < local_154) {
      puVar20 = puVar12;
    }
LAB_2c671f20:
    puVar12 = (uint *)0x0;
    puVar6 = puVar20;
    goto LAB_2c6726c2;
  default:
    goto switchD_2c671ce6_caseD_21;
  case 0x4c:
    uVar11 = uVar11 | 8;
    goto LAB_2c671cca;
  case 0x58:
    local_13c = DAT_2c6724d0;
    goto LAB_2c671d96;
  case 99:
    if (bVar8) {
      local_124 = uVar9;
    }
    local_150 = (double *)((int)pdVar18 + 4);
    uVar9 = *(uint *)pdVar18;
    if (((int)(uVar11 << 0x1b) < 0) || (uVar9 = FUN_2c668520(), uVar9 != 0xffffffff)) {
      aiStack_d8[3] = 0;
      aiStack_d8[2] = uVar9;
      goto LAB_2c671e98;
    }
LAB_2c671e72:
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    goto LAB_2c671e7e;
  case 100:
  case 0x69:
    if (bVar8) {
      local_124 = uVar9;
    }
    uVar9 = *(uint *)pdVar18;
    if ((-1 < (int)(uVar11 << 0x1b)) && ((int)(uVar11 << 0x19) < 0)) {
      uVar9 = (uint)(short)uVar9;
    }
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
      local_124 = 0x2d;
    }
    iVar3 = 1;
    goto LAB_2c67221e;
  case 0x68:
    uVar11 = uVar11 | 0x40;
    goto LAB_2c671cca;
  case 0x6c:
  case 0x71:
    uVar11 = uVar11 | 0x10;
    goto LAB_2c671cca;
  case 0x6e:
    if (bVar8) {
      local_124 = uVar9;
    }
    param_4 = (double *)((int)pdVar18 + 4);
    if (((int)(uVar11 << 0x1b) < 0) || (-1 < (int)(uVar11 << 0x19))) {
      **(int **)pdVar18 = local_144;
      param_3 = local_14c;
    }
    else {
      **(undefined2 **)pdVar18 = (short)local_144;
      param_3 = local_14c;
    }
    goto LAB_2c671c84;
  case 0x6f:
    uVar9 = *(uint *)pdVar18;
    if ((uVar11 & 0x10) == 0) {
      iVar3 = 0;
      if ((uVar11 & 0x40) == 0) break;
      uVar9 = uVar9 & 0xffff;
    }
    iVar3 = 0;
    break;
  case 0x70:
    uVar11 = uVar11 | 2;
    uVar9 = *(uint *)pdVar18;
    local_154 = 0x78;
    local_110 = 0x30;
    local_10c = 0x78;
    local_13c = DAT_2c6724cc;
    iVar3 = 2;
    break;
  case 0x73:
    local_150 = (double *)((int)pdVar18 + 4);
    puVar20 = *(uint **)pdVar18;
    local_124 = 0;
    puVar14 = puVar12;
    if ((uVar11 & 0x10) != 0) {
      if (puVar12 == (uint *)0xffffffff) {
        puVar14 = (uint *)FUN_2c66ea0c(puVar20);
      }
      else {
        iVar3 = FUN_2c66ed00(puVar20,0,puVar12);
        if ((iVar3 != 0) &&
           (puVar6 = (uint *)(iVar3 - (int)puVar20 >> 2), (int)puVar6 <= (int)puVar12)) {
          puVar14 = puVar6;
        }
      }
      goto LAB_2c671f20;
    }
    if (puVar12 == (uint *)0xffffffff) {
      puVar14 = (uint *)FUN_2c66c4ec(puVar20);
    }
    else {
      iVar3 = FUN_2c643680(puVar20,0,puVar12);
      if (iVar3 != 0) {
        puVar14 = (uint *)(iVar3 - (int)puVar20);
      }
    }
    if (puVar14 < &Reserved4) {
      puVar6 = (uint *)(aiStack_d8 + 2);
      puVar4 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)FUN_2c669c14(param_1,(int)((int)puVar14 + 1) * 4);
      puVar4 = puVar6;
      if (puVar6 == (uint *)0x0) goto LAB_2c671e72;
    }
    for (puVar10 = (uint *)0x0; puVar10 != puVar14; puVar10 = (uint *)((int)puVar10 + 1)) {
      puVar6[(int)puVar10] = (uint)*(byte *)((int)puVar20 + (int)puVar10);
    }
    puVar12 = (uint *)0x0;
    puVar6[(int)puVar10] = 0;
    puVar20 = (uint *)0x0;
    goto LAB_2c672078;
  case 0x75:
    uVar9 = *(uint *)pdVar18;
    if ((-1 < (int)(uVar11 << 0x1b)) && ((int)(uVar11 << 0x19) < 0)) {
      uVar9 = uVar9 & 0xffff;
    }
    iVar3 = 1;
    break;
  case 0x78:
    local_13c = DAT_2c671eb0;
LAB_2c671d96:
    uVar9 = *(uint *)pdVar18;
    if ((-1 < (int)(uVar11 << 0x1b)) && ((int)(uVar11 << 0x19) < 0)) {
      uVar9 = uVar9 & 0xffff;
    }
    if (((int)(uVar11 << 0x1f) < 0) && (uVar9 != 0)) {
      uVar11 = uVar11 | 2;
      local_110 = 0x30;
      local_10c = local_154;
    }
    iVar3 = 2;
  }
  local_124 = 0;
  uVar13 = uVar11;
LAB_2c67221e:
  local_150 = (double *)((int)pdVar18 + 4);
  if (puVar12 == (uint *)0xffffffff) {
    uVar11 = uVar13;
    if (uVar9 == 0) goto LAB_2c672234;
LAB_2c67267e:
    if (iVar3 != 1) goto LAB_2c672684;
    if (uVar9 < 10) {
LAB_2c672326:
      auStack_38[1] = uVar9 + 0x30;
LAB_2c672328:
      puVar6 = auStack_38 + 1;
      goto LAB_2c6726b2;
    }
    puVar6 = &uStack_30;
    do {
      puVar6 = puVar6 + -1;
      *puVar6 = uVar9 % 10 + 0x30;
      bVar8 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar8);
  }
  else {
    uVar11 = uVar13 & 0xffffff7f;
    if (uVar9 != 0) goto LAB_2c67267e;
    if (puVar12 == (uint *)0x0) {
      if ((iVar3 != 0) || (-1 < (int)(uVar13 << 0x1f))) {
        puVar6 = &uStack_30;
        goto LAB_2c6726b2;
      }
      auStack_38[1] = 0x30;
      goto LAB_2c672328;
    }
LAB_2c672234:
    if (iVar3 == 1) goto LAB_2c672326;
LAB_2c672684:
    puVar6 = &uStack_30;
    if (iVar3 == 2) {
      do {
        uVar13 = uVar9 & 0xf;
        uVar9 = uVar9 >> 4;
        puVar6 = puVar6 + -1;
        *puVar6 = *(uint *)(local_13c + uVar13 * 4);
      } while (uVar9 != 0);
    }
    else {
      do {
        puVar14 = puVar6;
        uVar13 = uVar9 & 7;
        uVar9 = uVar9 >> 3;
        uVar13 = uVar13 + 0x30;
        puVar6 = puVar14 + -1;
        *puVar6 = uVar13;
      } while (uVar9 != 0);
      if (((int)(uVar11 << 0x1f) < 0) && (uVar13 != 0x30)) {
        puVar14[-2] = 0x30;
        puVar6 = puVar14 + -2;
      }
    }
  }
LAB_2c6726b2:
  puVar14 = (uint *)((int)&uStack_30 - (int)puVar6 >> 2);
LAB_2c6726c2:
  puVar20 = (uint *)0x0;
  uVar13 = uVar11;
  puVar4 = puVar20;
LAB_2c672078:
  local_140 = puVar12;
  if ((int)puVar12 < (int)puVar14) {
    local_140 = puVar14;
  }
  if (local_124 != 0) {
    local_140 = (uint *)((int)local_140 + 1);
  }
  if ((uVar13 & 2) != 0) {
    local_140 = (uint *)((int)local_140 + 2);
  }
  if (((uVar13 & 0x84) == 0) && (local_138 = (int)local_148 - (int)local_140, 0 < local_138)) {
    for (; 0x10 < local_138; local_138 = local_138 + -0x10) {
      iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6724d4,0x40);
      if (iVar3 == -1) goto LAB_2c67239e;
    }
    iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6724d4,local_138 << 2);
    if (iVar3 == -1) goto LAB_2c67239e;
  }
  if (((local_124 != 0) && (iVar3 = FUN_2c6710c2(param_1,param_2,&local_124,4), iVar3 == -1)) ||
     (((uVar13 & 2) != 0 && (iVar3 = FUN_2c6710c2(param_1,param_2,&local_110,8), iVar3 == -1))))
  goto LAB_2c67239e;
  if (((uVar13 & 0x84) == 0x80) && (local_138 = (int)local_148 - (int)local_140, 0 < local_138)) {
    for (; 0x10 < local_138; local_138 = local_138 + -0x10) {
      iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6721a8,0x40);
      if (iVar3 == -1) goto LAB_2c67239e;
    }
    iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6721a8,local_138 << 2);
    if (iVar3 == -1) goto LAB_2c67239e;
  }
  iVar3 = (int)puVar12 - (int)puVar14;
  if (0 < iVar3) {
    for (; 0x10 < iVar3; iVar3 = iVar3 + -0x10) {
      iVar7 = FUN_2c6710c2(param_1,param_2,DAT_2c6721a8,0x40);
      if (iVar7 == -1) goto LAB_2c67239e;
    }
    iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6721a8,iVar3 << 2);
    if (iVar3 == -1) goto LAB_2c67239e;
  }
  if ((int)(uVar13 << 0x17) < 0) {
    if (local_154 < 0x66) {
      iVar3 = 4;
      if (((int)local_114 < 2) && (-1 < (int)(uVar13 << 0x1f))) {
LAB_2c672602:
        iVar3 = FUN_2c6710c2(param_1,param_2,puVar6,iVar3);
        if (iVar3 == -1) goto LAB_2c67239e;
      }
      else {
        iVar3 = FUN_2c6710c2(param_1,param_2,puVar6,4);
        if ((iVar3 == -1) ||
           (iVar3 = FUN_2c6710c2(param_1,param_2,&local_120,4), puVar14 = DAT_2c6726c8, iVar3 == -1)
           ) goto LAB_2c67239e;
        puVar17 = (undefined1 *)((int)local_114 + -1);
        if (dVar21 != 0.0) {
          iVar3 = (int)puVar17 * 4;
          puVar6 = puVar6 + 1;
          goto LAB_2c672602;
        }
        if (0 < (int)puVar17) {
          for (; 0x10 < (int)puVar17; puVar17 = puVar17 + -0x10) {
            iVar3 = FUN_2c6710c2(param_1,param_2,puVar14,0x40);
            if (iVar3 == -1) goto LAB_2c67239e;
          }
          iVar3 = (int)puVar17 << 2;
          puVar6 = DAT_2c6726c8;
          goto LAB_2c672602;
        }
      }
      puVar6 = &local_108;
      iVar3 = local_134 << 2;
    }
    else {
      if (dVar21 == 0.0) {
        iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6724d8,4);
        if (iVar3 == -1) goto LAB_2c67239e;
        if (((int)local_114 <= (int)local_118) && (-1 < (int)(uVar13 << 0x1f))) goto LAB_2c672136;
        iVar3 = FUN_2c6710c2(param_1,param_2,&local_120,4);
        puVar14 = DAT_2c6724dc;
        if (iVar3 == -1) goto LAB_2c67239e;
        puVar17 = (undefined1 *)((int)local_114 + -1);
        if ((int)puVar17 < 1) goto LAB_2c672136;
        for (; 0x10 < (int)puVar17; puVar17 = puVar17 + -0x10) {
          iVar3 = FUN_2c6710c2(param_1,param_2,puVar14,0x40);
          if (iVar3 == -1) goto LAB_2c67239e;
        }
      }
      else {
        if ((int)local_118 < 1) {
          iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6724d8,4);
          if (iVar3 == -1) goto LAB_2c67239e;
          if ((local_118 == (uint *)0x0 && local_114 == (uint *)0x0) && (uVar13 & 1) == 0)
          goto LAB_2c672136;
          iVar3 = FUN_2c6710c2(param_1,param_2,&local_120,4);
          puVar12 = DAT_2c6724dc;
          if (iVar3 == -1) goto LAB_2c67239e;
          puVar14 = local_114;
          if ((int)local_118 < 0) {
            for (iVar3 = -(int)local_118; 0x10 < iVar3; iVar3 = iVar3 + -0x10) {
              iVar7 = FUN_2c6710c2(param_1,param_2,puVar12,0x40);
              if (iVar7 == -1) goto LAB_2c67239e;
            }
            iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6724dc,iVar3 << 2);
            puVar14 = local_114;
            if (iVar3 == -1) goto LAB_2c67239e;
          }
          goto LAB_2c672126;
        }
        puVar14 = (uint *)(((int)local_114 << 2) >> 2);
        if ((int)puVar20 <= (int)puVar14) {
          puVar14 = puVar20;
        }
        if ((0 < (int)puVar14) &&
           (iVar3 = FUN_2c6710c2(param_1,param_2,puVar6,(int)puVar14 << 2), iVar3 == -1)) {
LAB_2c67239e:
          if (puVar4 != (uint *)0x0) {
            FUN_2c669b3c(param_1,puVar4);
          }
LAB_2c671e7e:
          if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
            local_144 = -1;
          }
          return local_144;
        }
        puVar12 = DAT_2c6726c8;
        puVar10 = puVar20;
        if (-1 < (int)puVar14) {
          puVar10 = (uint *)((int)puVar20 - (int)puVar14);
        }
        if (0 < (int)puVar10) {
          for (; 0x10 < (int)puVar10; puVar10 = puVar10 + -4) {
            iVar3 = FUN_2c6710c2(param_1,param_2,puVar12,0x40);
            if (iVar3 == -1) goto LAB_2c67239e;
          }
          iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6726c8,(int)puVar10 << 2);
          if (iVar3 == -1) goto LAB_2c67239e;
        }
        if ((((int)local_118 < (int)local_114) || ((int)(uVar13 << 0x1f) < 0)) &&
           (iVar3 = FUN_2c6710c2(param_1,param_2,&local_120,4), iVar3 == -1)) goto LAB_2c67239e;
        iVar7 = (int)local_114 * 4 + (int)puVar20 * -4 >> 2;
        iVar3 = (int)local_114 - (int)local_118;
        if (iVar7 <= (int)local_114 - (int)local_118) {
          iVar3 = iVar7;
        }
        if ((0 < iVar3) &&
           (iVar7 = FUN_2c6710c2(param_1,param_2,puVar6 + (int)puVar20,iVar3 << 2), iVar7 == -1))
        goto LAB_2c67239e;
        puVar14 = DAT_2c6726c8;
        puVar17 = (undefined1 *)((int)local_114 - (int)local_118);
        if (-1 < iVar3) {
          puVar17 = puVar17 + -iVar3;
        }
        if ((int)puVar17 < 1) goto LAB_2c672136;
        for (; 0x10 < (int)puVar17; puVar17 = puVar17 + -0x10) {
          iVar3 = FUN_2c6710c2(param_1,param_2,puVar14,0x40);
          if (iVar3 == -1) goto LAB_2c67239e;
        }
      }
      iVar3 = (int)puVar17 << 2;
      puVar6 = DAT_2c6724dc;
    }
  }
  else {
LAB_2c672126:
    iVar3 = (int)puVar14 << 2;
  }
  iVar3 = FUN_2c6710c2(param_1,param_2,puVar6,iVar3);
  if (iVar3 == -1) goto LAB_2c67239e;
LAB_2c672136:
  uVar1 = DAT_2c6726cc;
  if (((int)(uVar13 << 0x1d) < 0) && (iVar3 = (int)local_148 - (int)local_140, 0 < iVar3)) {
    for (; 0x10 < iVar3; iVar3 = iVar3 + -0x10) {
      iVar7 = FUN_2c6710c2(param_1,param_2,uVar1,0x40);
      if (iVar7 == -1) goto LAB_2c67239e;
    }
    iVar3 = FUN_2c6710c2(param_1,param_2,DAT_2c6726cc,iVar3 << 2);
    if (iVar3 == -1) goto LAB_2c67239e;
  }
  if ((int)local_148 < (int)local_140) {
    local_148 = local_140;
  }
  local_144 = local_144 + (int)local_148;
  param_3 = local_14c;
  param_4 = local_150;
  if (puVar4 != (uint *)0x0) {
    FUN_2c669b3c(param_1,puVar4);
    param_3 = local_14c;
  }
  goto LAB_2c671c84;
switchD_2c671ce6_caseD_21:
  if (bVar8) {
LAB_2c671d7e:
    if (local_154 == 0) goto LAB_2c671e7e;
  }
  aiStack_d8[2] = local_154;
  local_150 = pdVar18;
LAB_2c671e98:
  local_124 = 0;
  puVar14 = (uint *)0x1;
  puVar12 = (uint *)0x0;
  puVar20 = (uint *)0x0;
  puVar6 = (uint *)(aiStack_d8 + 2);
  puVar4 = (uint *)0x0;
  goto LAB_2c672078;
}

