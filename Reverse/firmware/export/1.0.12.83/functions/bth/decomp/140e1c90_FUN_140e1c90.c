/* FUN_140e1c90 @ 0x140e1c90 */

/* WARNING: Type propagation algorithm not settling */

int FUN_140e1c90(undefined4 *param_1,int *param_2,uint *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  uint *puVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint local_15c;
  uint *local_158;
  uint *local_154;
  uint *local_150;
  int local_14c;
  uint *local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_12c;
  uint local_128;
  int local_124;
  uint *local_120;
  uint *local_11c;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  int *local_108 [2];
  undefined1 auStack_100 [32];
  int aiStack_e0 [4];
  undefined1 auStack_d0 [144];
  uint auStack_40 [2];
  uint uStack_38;
  
  local_11c = (uint *)0x0;
  puVar1 = (undefined4 *)FUN_140e3480();
  local_128 = (uint)*(byte *)*puVar1;
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar2 = FUN_140db8a8(param_1,0x40);
    *param_2 = iVar2;
    param_2[4] = iVar2;
    if (iVar2 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_144 = 0;
  local_13c = 0;
  local_14c = 0;
  local_154 = param_3;
  lVar20 = DAT_140e1f28;
LAB_140e1d04:
  puVar17 = param_3;
  if (*puVar17 != 0) goto code_r0x140e1d0c;
  goto LAB_140e1d10;
code_r0x140e1d0c:
  param_3 = puVar17 + 1;
  if (*puVar17 == 0x25) {
LAB_140e1d10:
    if (local_154 != puVar17) {
      iVar2 = FUN_140e0fcc(param_1,param_2,local_154,(int)puVar17 - (int)local_154);
      if (iVar2 == -1) goto LAB_140e1efc;
      local_14c = local_14c + ((int)puVar17 - (int)local_154 >> 2);
    }
    if (*puVar17 != 0) {
      bVar7 = false;
      puVar13 = (uint *)0xffffffff;
      uVar18 = 0;
      local_12c = 0;
      local_150 = (uint *)0x0;
      local_154 = puVar17 + 1;
      puVar17 = param_4;
      uVar10 = 0;
LAB_140e1d4c:
      local_15c = *local_154;
      local_154 = local_154 + 1;
LAB_140e1d56:
      while (uVar14 = uVar18, local_15c < 0x3a) {
        if (local_15c < 0x20) goto LAB_140e1e00;
        puVar15 = puVar17;
        switch(local_15c) {
        case 0x20:
          if (uVar10 != 0) goto LAB_140e1d4c;
        case 0x2b:
          bVar7 = true;
          uVar10 = local_15c;
          goto LAB_140e1d4c;
        default:
          goto switchD_140e1d68_caseD_21;
        case 0x23:
          uVar18 = uVar18 | 1;
          goto LAB_140e1d4c;
        case 0x2a:
          puVar15 = puVar17 + 1;
          local_150 = (uint *)*puVar17;
          puVar17 = puVar15;
          if ((int)local_150 < 0) {
            local_150 = (uint *)-(int)local_150;
            goto switchD_140e1d68_caseD_2d;
          }
          goto LAB_140e1d4c;
        case 0x2d:
switchD_140e1d68_caseD_2d:
          uVar18 = uVar18 | 4;
          puVar17 = puVar15;
          goto LAB_140e1d4c;
        case 0x2e:
          local_15c = *local_154;
          if (local_15c == 0x2a) {
            puVar13 = (uint *)(*puVar17 | (int)*puVar17 >> 0x1f);
            local_154 = local_154 + 1;
            puVar17 = puVar17 + 1;
            goto LAB_140e1d4c;
          }
          uVar14 = 0;
          local_154 = local_154 + 1;
          while (local_15c - 0x30 < 10) {
            uVar14 = uVar14 * 10 + (local_15c - 0x30);
            local_15c = *local_154;
            local_154 = local_154 + 1;
          }
          puVar13 = (uint *)(uVar14 | (int)uVar14 >> 0x1f);
          break;
        case 0x30:
          uVar18 = uVar18 | 0x80;
          goto LAB_140e1d4c;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_140e1d68_caseD_31;
        }
      }
      goto switchD_140e1d8a_switchD;
    }
    goto LAB_140e1efc;
  }
  goto LAB_140e1d04;
switchD_140e1d68_caseD_31:
  local_150 = (uint *)0x0;
  do {
    local_150 = (uint *)((int)local_150 * 10 + local_15c + -0x30);
    puVar15 = local_154 + 1;
    local_15c = *local_154;
    local_154 = puVar15;
  } while (local_15c - 0x30 < 10);
  goto LAB_140e1d56;
switchD_140e1d8a_switchD:
  switch(local_15c) {
  case 0x45:
  case 0x47:
  case 0x65:
  case 0x66:
  case 0x67:
    if (bVar7) {
      local_12c = uVar10;
    }
    plVar11 = (longlong *)((int)puVar17 + 7U & 0xfffffff8);
    lVar20 = *plVar11;
    local_158 = (uint *)(plVar11 + 1);
    uVar9 = (undefined4)lVar20;
    uVar10 = (uint)((ulonglong)lVar20 >> 0x20);
    iVar2 = FUN_140e3d34(uVar9,uVar10 & 0x7fffffff,0xffffffff,DAT_140e2218);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_140e3cf8(uVar9,uVar10 & 0x7fffffff,0xffffffff,DAT_140e2218), iVar2 == 0)) {
      iVar2 = FUN_140e3ce4(uVar9,uVar10,0,0);
      puVar13 = DAT_140e2220;
      puVar17 = DAT_140e221c;
      if (iVar2 != 0) {
        local_12c = 0x2d;
      }
    }
    else {
      uVar21 = FUN_140e3d34(uVar9,uVar10,uVar9,uVar10);
      if ((int)uVar21 == 0) {
        if (puVar13 == (uint *)0xffffffff) {
          puVar13 = (uint *)0x6;
        }
        else if (((local_15c & 0xffffffdf) == 0x47) && (puVar13 == (uint *)0x0)) {
          puVar13 = (uint *)0x1;
        }
        uVar14 = uVar18 | 0x100;
        puVar5 = (uint *)FUN_140e1ba8(param_1,(int)((ulonglong)uVar21 >> 0x20),uVar9,uVar10,puVar13,
                                      uVar14,&local_124,&local_120,local_15c,&local_11c,
                                      aiStack_e0 + 2,0x28);
        if ((puVar5 == (uint *)(aiStack_e0 + 2)) && (0x28 < (int)local_11c)) {
          uVar21 = FUN_140db8a8(param_1,(int)local_11c << 2);
          puVar19 = (uint *)uVar21;
          if (puVar19 == (uint *)0x0) goto LAB_140e1ef0;
          puVar5 = (uint *)FUN_140e1ba8(param_1,(int)((ulonglong)uVar21 >> 0x20),uVar9,uVar10,
                                        puVar13,uVar14,&local_124,&local_120,local_15c,&local_11c,
                                        puVar19,local_11c);
        }
        else {
          puVar19 = (uint *)0x0;
        }
        puVar15 = local_120;
        puVar17 = local_120;
        if ((local_15c & 0xffffffdf) == 0x47) {
          if ((-4 < (int)local_120) && ((int)local_120 <= (int)puVar13)) {
            if ((int)local_120 < (int)local_11c) {
              if ((int)local_120 < 1) {
                iVar2 = 2 - (int)local_120;
              }
              else {
                iVar2 = 1;
              }
              puVar15 = (uint *)(iVar2 + (int)local_11c);
            }
            else if ((int)(uVar18 << 0x1f) < 0) {
              puVar15 = (uint *)((int)local_120 + 1);
            }
            local_15c = 0x67;
            goto LAB_140e211a;
          }
          local_15c = local_15c - 2;
        }
        else if (local_15c == 0x66) {
          if ((int)local_120 < 1) {
            if ((uVar18 & 1) == 0 && puVar13 == (uint *)0x0) {
              puVar15 = (uint *)0x1;
            }
            else {
              puVar15 = (uint *)((int)puVar13 + 2);
            }
          }
          else if ((uVar18 & 1) != 0 || puVar13 != (uint *)0x0) {
            puVar15 = (uint *)((undefined1 *)((int)puVar13 + 1) + (int)local_120);
          }
          goto LAB_140e211a;
        }
        puVar17 = (uint *)((int)local_120 + -1);
        local_110 = local_15c;
        if ((int)puVar17 < 0) {
          local_10c = 0x2d;
          puVar13 = (uint *)(1 - (int)local_120);
        }
        else {
          local_10c = 0x2b;
          puVar13 = puVar17;
        }
        if ((int)puVar13 < 10) {
          puVar16 = auStack_100;
          local_108[1] = (int *)(puVar13 + 0xc);
          local_108[0] = (int *)0x30;
        }
        else {
          piVar8 = aiStack_e0 + 2;
          do {
            piVar3 = piVar8;
            puVar15 = (uint *)((int)puVar13 / 10);
            piVar3[-1] = (int)puVar13 % 10 + 0x30;
            bVar7 = 99 < (int)puVar13;
            piVar8 = piVar3 + -1;
            puVar13 = puVar15;
          } while (bVar7);
          piVar3[-2] = (int)(puVar15 + 0xc);
          ppiVar4 = local_108;
          for (piVar8 = piVar3 + -2; piVar8 < aiStack_e0 + 2; piVar8 = piVar8 + 1) {
            *ppiVar4 = (int *)*piVar8;
            ppiVar4 = ppiVar4 + 1;
          }
          puVar16 = auStack_d0 + -(int)piVar3;
          if (aiStack_e0 + 2 < (int *)((int)piVar3 - 0xbU)) {
            puVar16 = (undefined1 *)0x0;
          }
          puVar16 = (undefined1 *)((int)local_108 + (int)puVar16);
        }
        local_13c = (int)puVar16 - (int)&local_110 >> 2;
        local_120 = puVar17;
        if ((1 < (int)local_11c) ||
           (puVar15 = (uint *)((int)local_11c + local_13c), puVar17 = (uint *)0x0, (uVar18 & 1) != 0
           )) {
          puVar15 = (uint *)((int)local_11c + local_13c + 1);
          puVar17 = (uint *)0x0;
        }
LAB_140e211a:
        if (local_124 == 0) {
          puVar13 = (uint *)0x0;
        }
        else {
          puVar13 = (uint *)0x0;
          local_12c = 0x2d;
        }
        goto LAB_140e212a;
      }
      puVar13 = DAT_140e2224;
      puVar17 = DAT_140e2228;
      if (lVar20 < 0) {
        local_12c = 0x2d;
      }
    }
    uVar18 = uVar18 & 0xffffff7f;
    puVar15 = (uint *)0x3;
    if (0x47 < local_15c) {
      puVar17 = puVar13;
    }
LAB_140e1fca:
    puVar13 = (uint *)0x0;
    puVar5 = puVar17;
    goto LAB_140e2774;
  default:
    goto switchD_140e1d68_caseD_21;
  case 0x4c:
    uVar18 = uVar18 | 8;
    goto LAB_140e1d4c;
  case 0x58:
    local_144 = DAT_140e2580;
    goto LAB_140e1e18;
  case 99:
    if (bVar7) {
      local_12c = uVar10;
    }
    local_158 = puVar17 + 1;
    uVar10 = *puVar17;
    if (((int)(uVar18 << 0x1b) < 0) || (uVar10 = FUN_140da918(), uVar10 != 0xffffffff)) {
      aiStack_e0[3] = 0;
      aiStack_e0[2] = uVar10;
      goto LAB_140e1f16;
    }
LAB_140e1ef0:
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    goto LAB_140e1efc;
  case 100:
  case 0x69:
    if (bVar7) {
      local_12c = uVar10;
    }
    uVar10 = *puVar17;
    if ((-1 < (int)(uVar18 << 0x1b)) && ((int)(uVar18 << 0x19) < 0)) {
      uVar10 = (uint)(short)uVar10;
    }
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
      local_12c = 0x2d;
    }
    iVar2 = 1;
    goto LAB_140e22c8;
  case 0x68:
    uVar18 = uVar18 | 0x40;
    goto LAB_140e1d4c;
  case 0x6c:
  case 0x71:
    uVar18 = uVar18 | 0x10;
    goto LAB_140e1d4c;
  case 0x6e:
    if (bVar7) {
      local_12c = uVar10;
    }
    param_4 = puVar17 + 1;
    if (((int)(uVar18 << 0x1b) < 0) || (-1 < (int)(uVar18 << 0x19))) {
      *(int *)*puVar17 = local_14c;
      param_3 = local_154;
    }
    else {
      *(short *)*puVar17 = (short)local_14c;
      param_3 = local_154;
    }
    goto LAB_140e1d04;
  case 0x6f:
    uVar10 = *puVar17;
    if ((uVar18 & 0x10) == 0) {
      iVar2 = 0;
      if ((uVar18 & 0x40) == 0) break;
      uVar10 = uVar10 & 0xffff;
    }
    iVar2 = 0;
    break;
  case 0x70:
    uVar18 = uVar18 | 2;
    uVar10 = *puVar17;
    local_15c = 0x78;
    local_118 = 0x30;
    local_114 = 0x78;
    local_144 = DAT_140e257c;
    iVar2 = 2;
    break;
  case 0x73:
    local_158 = puVar17 + 1;
    puVar17 = (uint *)*puVar17;
    local_12c = 0;
    puVar15 = puVar13;
    if ((uVar18 & 0x10) != 0) {
      if (puVar13 == (uint *)0xffffffff) {
        puVar15 = (uint *)FUN_140df568(puVar17);
      }
      else {
        iVar2 = FUN_140df85c(puVar17,0,puVar13);
        if ((iVar2 != 0) &&
           (puVar5 = (uint *)(iVar2 - (int)puVar17 >> 2), (int)puVar5 <= (int)puVar13)) {
          puVar15 = puVar5;
        }
      }
      goto LAB_140e1fca;
    }
    if (puVar13 == (uint *)0xffffffff) {
      puVar15 = (uint *)FUN_140dd3a4(puVar17);
    }
    else {
      iVar2 = FUN_140bd5f0(puVar17,0,puVar13);
      if (iVar2 != 0) {
        puVar15 = (uint *)(iVar2 - (int)puVar17);
      }
    }
    if (puVar15 < &Reserved4) {
      puVar5 = (uint *)(aiStack_e0 + 2);
      puVar19 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)FUN_140db8a8(param_1,(int)((int)puVar15 + 1) * 4);
      puVar19 = puVar5;
      if (puVar5 == (uint *)0x0) goto LAB_140e1ef0;
    }
    for (puVar12 = (uint *)0x0; puVar12 != puVar15; puVar12 = (uint *)((int)puVar12 + 1)) {
      puVar5[(int)puVar12] = (uint)*(byte *)((int)puVar17 + (int)puVar12);
    }
    puVar13 = (uint *)0x0;
    puVar5[(int)puVar12] = 0;
    puVar17 = (uint *)0x0;
    goto LAB_140e212a;
  case 0x75:
    uVar10 = *puVar17;
    if ((-1 < (int)(uVar18 << 0x1b)) && ((int)(uVar18 << 0x19) < 0)) {
      uVar10 = uVar10 & 0xffff;
    }
    iVar2 = 1;
    break;
  case 0x78:
    local_144 = DAT_140e1f30;
LAB_140e1e18:
    uVar10 = *puVar17;
    if ((-1 < (int)(uVar18 << 0x1b)) && ((int)(uVar18 << 0x19) < 0)) {
      uVar10 = uVar10 & 0xffff;
    }
    if (((int)(uVar18 << 0x1f) < 0) && (uVar10 != 0)) {
      uVar18 = uVar18 | 2;
      local_118 = 0x30;
      local_114 = local_15c;
    }
    iVar2 = 2;
  }
  local_12c = 0;
  uVar14 = uVar18;
LAB_140e22c8:
  local_158 = puVar17 + 1;
  if (puVar13 == (uint *)0xffffffff) {
    uVar18 = uVar14;
    if (uVar10 == 0) goto LAB_140e22de;
LAB_140e2730:
    if (iVar2 != 1) goto LAB_140e2736;
    if (uVar10 < 10) {
LAB_140e23d2:
      auStack_40[1] = uVar10 + 0x30;
LAB_140e23d4:
      puVar5 = auStack_40 + 1;
      goto LAB_140e2764;
    }
    puVar5 = &uStack_38;
    do {
      puVar5 = puVar5 + -1;
      *puVar5 = uVar10 % 10 + 0x30;
      bVar7 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar7);
  }
  else {
    uVar18 = uVar14 & 0xffffff7f;
    if (uVar10 != 0) goto LAB_140e2730;
    if (puVar13 == (uint *)0x0) {
      if ((iVar2 != 0) || (-1 < (int)(uVar14 << 0x1f))) {
        puVar5 = &uStack_38;
        goto LAB_140e2764;
      }
      auStack_40[1] = 0x30;
      goto LAB_140e23d4;
    }
LAB_140e22de:
    if (iVar2 == 1) goto LAB_140e23d2;
LAB_140e2736:
    puVar5 = &uStack_38;
    if (iVar2 == 2) {
      do {
        uVar14 = uVar10 & 0xf;
        uVar10 = uVar10 >> 4;
        puVar5 = puVar5 + -1;
        *puVar5 = *(uint *)(local_144 + uVar14 * 4);
      } while (uVar10 != 0);
    }
    else {
      do {
        puVar17 = puVar5;
        uVar14 = uVar10 & 7;
        uVar10 = uVar10 >> 3;
        uVar14 = uVar14 + 0x30;
        puVar5 = puVar17 + -1;
        *puVar5 = uVar14;
      } while (uVar10 != 0);
      if (((int)(uVar18 << 0x1f) < 0) && (uVar14 != 0x30)) {
        puVar17[-2] = 0x30;
        puVar5 = puVar17 + -2;
      }
    }
  }
LAB_140e2764:
  puVar15 = (uint *)((int)&uStack_38 - (int)puVar5 >> 2);
LAB_140e2774:
  puVar17 = (uint *)0x0;
  uVar14 = uVar18;
  puVar19 = puVar17;
LAB_140e212a:
  local_148 = puVar13;
  if ((int)puVar13 < (int)puVar15) {
    local_148 = puVar15;
  }
  if (local_12c != 0) {
    local_148 = (uint *)((int)local_148 + 1);
  }
  if ((uVar14 & 2) != 0) {
    local_148 = (uint *)((int)local_148 + 2);
  }
  if (((uVar14 & 0x84) == 0) && (local_140 = (int)local_150 - (int)local_148, 0 < local_140)) {
    for (; 0x10 < local_140; local_140 = local_140 + -0x10) {
      iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e2584,0x40);
      if (iVar2 == -1) goto LAB_140e2448;
    }
    iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e2584,local_140 << 2);
    if (iVar2 == -1) goto LAB_140e2448;
  }
  if (((local_12c != 0) && (iVar2 = FUN_140e0fcc(param_1,param_2,&local_12c,4), iVar2 == -1)) ||
     (((uVar14 & 2) != 0 && (iVar2 = FUN_140e0fcc(param_1,param_2,&local_118,8), iVar2 == -1))))
  goto LAB_140e2448;
  if (((uVar14 & 0x84) == 0x80) && (local_140 = (int)local_150 - (int)local_148, 0 < local_140)) {
    for (; 0x10 < local_140; local_140 = local_140 + -0x10) {
      iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e222c,0x40);
      if (iVar2 == -1) goto LAB_140e2448;
    }
    iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e222c,local_140 << 2);
    if (iVar2 == -1) goto LAB_140e2448;
  }
  iVar2 = (int)puVar13 - (int)puVar15;
  if (0 < iVar2) {
    for (; 0x10 < iVar2; iVar2 = iVar2 + -0x10) {
      iVar6 = FUN_140e0fcc(param_1,param_2,DAT_140e222c,0x40);
      if (iVar6 == -1) goto LAB_140e2448;
    }
    iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e222c,iVar2 << 2);
    if (iVar2 == -1) goto LAB_140e2448;
  }
  if ((int)(uVar14 << 0x17) < 0) {
    uVar9 = (undefined4)((ulonglong)lVar20 >> 0x20);
    if (local_15c < 0x66) {
      iVar2 = 4;
      if (((int)local_11c < 2) && (-1 < (int)(uVar14 << 0x1f))) {
LAB_140e26b6:
        iVar2 = FUN_140e0fcc(param_1,param_2,puVar5,iVar2);
        if (iVar2 == -1) goto LAB_140e2448;
      }
      else {
        iVar2 = FUN_140e0fcc(param_1,param_2,puVar5,4);
        if ((iVar2 == -1) || (iVar2 = FUN_140e0fcc(param_1,param_2,&local_128,4), iVar2 == -1))
        goto LAB_140e2448;
        puVar16 = (undefined1 *)((int)local_11c + -1);
        iVar2 = FUN_140e3cd0((int)lVar20,uVar9,0,0);
        puVar17 = DAT_140e2778;
        if (iVar2 == 0) {
          iVar2 = (int)puVar16 * 4;
          puVar5 = puVar5 + 1;
          goto LAB_140e26b6;
        }
        if (0 < (int)puVar16) {
          for (; 0x10 < (int)puVar16; puVar16 = puVar16 + -0x10) {
            iVar2 = FUN_140e0fcc(param_1,param_2,puVar17,0x40);
            if (iVar2 == -1) goto LAB_140e2448;
          }
          iVar2 = (int)puVar16 << 2;
          puVar5 = DAT_140e2778;
          goto LAB_140e26b6;
        }
      }
      puVar5 = &local_110;
      iVar2 = local_13c << 2;
    }
    else {
      iVar2 = FUN_140e3cd0((int)lVar20,uVar9,0,0);
      if (iVar2 == 0) {
        if ((int)local_120 < 1) {
          iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e2588,4);
          if (iVar2 == -1) goto LAB_140e2448;
          if ((local_120 == (uint *)0x0 && local_11c == (uint *)0x0) && (uVar14 & 1) == 0)
          goto LAB_140e21e8;
          iVar2 = FUN_140e0fcc(param_1,param_2,&local_128,4);
          puVar17 = DAT_140e258c;
          if (iVar2 == -1) goto LAB_140e2448;
          puVar15 = local_11c;
          if ((int)local_120 < 0) {
            for (iVar2 = -(int)local_120; 0x10 < iVar2; iVar2 = iVar2 + -0x10) {
              iVar6 = FUN_140e0fcc(param_1,param_2,puVar17,0x40);
              if (iVar6 == -1) goto LAB_140e2448;
            }
            iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e258c,iVar2 << 2);
            puVar15 = local_11c;
            if (iVar2 == -1) goto LAB_140e2448;
          }
          goto LAB_140e21d8;
        }
        puVar13 = (uint *)(((int)local_11c << 2) >> 2);
        if ((int)puVar17 <= (int)puVar13) {
          puVar13 = puVar17;
        }
        if ((0 < (int)puVar13) &&
           (iVar2 = FUN_140e0fcc(param_1,param_2,puVar5,(int)puVar13 << 2), iVar2 == -1)) {
LAB_140e2448:
          if (puVar19 != (uint *)0x0) {
            FUN_140db7d0(param_1,puVar19);
          }
LAB_140e1efc:
          if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
            local_14c = -1;
          }
          return local_14c;
        }
        puVar15 = DAT_140e2778;
        puVar12 = puVar17;
        if (-1 < (int)puVar13) {
          puVar12 = (uint *)((int)puVar17 - (int)puVar13);
        }
        if (0 < (int)puVar12) {
          for (; 0x10 < (int)puVar12; puVar12 = puVar12 + -4) {
            iVar2 = FUN_140e0fcc(param_1,param_2,puVar15,0x40);
            if (iVar2 == -1) goto LAB_140e2448;
          }
          iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e2778,(int)puVar12 << 2);
          if (iVar2 == -1) goto LAB_140e2448;
        }
        if ((((int)local_120 < (int)local_11c) || ((int)(uVar14 << 0x1f) < 0)) &&
           (iVar2 = FUN_140e0fcc(param_1,param_2,&local_128,4), iVar2 == -1)) goto LAB_140e2448;
        iVar6 = (int)local_11c * 4 + (int)puVar17 * -4 >> 2;
        iVar2 = (int)local_11c - (int)local_120;
        if (iVar6 <= (int)local_11c - (int)local_120) {
          iVar2 = iVar6;
        }
        if ((0 < iVar2) &&
           (iVar6 = FUN_140e0fcc(param_1,param_2,puVar5 + (int)puVar17,iVar2 << 2), iVar6 == -1))
        goto LAB_140e2448;
        puVar17 = DAT_140e2778;
        puVar16 = (undefined1 *)((int)local_11c - (int)local_120);
        if (-1 < iVar2) {
          puVar16 = puVar16 + -iVar2;
        }
        if ((int)puVar16 < 1) goto LAB_140e21e8;
        for (; 0x10 < (int)puVar16; puVar16 = puVar16 + -0x10) {
          iVar2 = FUN_140e0fcc(param_1,param_2,puVar17,0x40);
          if (iVar2 == -1) goto LAB_140e2448;
        }
      }
      else {
        iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e2588,4);
        if (iVar2 == -1) goto LAB_140e2448;
        if (((int)local_11c <= (int)local_120) && (-1 < (int)(uVar14 << 0x1f))) goto LAB_140e21e8;
        iVar2 = FUN_140e0fcc(param_1,param_2,&local_128,4);
        puVar17 = DAT_140e258c;
        if (iVar2 == -1) goto LAB_140e2448;
        puVar16 = (undefined1 *)((int)local_11c + -1);
        if ((int)puVar16 < 1) goto LAB_140e21e8;
        for (; 0x10 < (int)puVar16; puVar16 = puVar16 + -0x10) {
          iVar2 = FUN_140e0fcc(param_1,param_2,puVar17,0x40);
          if (iVar2 == -1) goto LAB_140e2448;
        }
      }
      iVar2 = (int)puVar16 << 2;
      puVar5 = DAT_140e258c;
    }
  }
  else {
LAB_140e21d8:
    iVar2 = (int)puVar15 << 2;
  }
  iVar2 = FUN_140e0fcc(param_1,param_2,puVar5,iVar2);
  if (iVar2 == -1) goto LAB_140e2448;
LAB_140e21e8:
  if (((int)(uVar14 << 0x1d) < 0) && (iVar2 = (int)local_150 - (int)local_148, 0 < iVar2)) {
    for (; 0x10 < iVar2; iVar2 = iVar2 + -0x10) {
      iVar6 = FUN_140e0fcc(param_1,param_2,DAT_140e277c,0x40);
      if (iVar6 == -1) goto LAB_140e2448;
    }
    iVar2 = FUN_140e0fcc(param_1,param_2,DAT_140e277c,iVar2 << 2);
    if (iVar2 == -1) goto LAB_140e2448;
  }
  if ((int)local_150 < (int)local_148) {
    local_150 = local_148;
  }
  local_14c = local_14c + (int)local_150;
  param_3 = local_154;
  param_4 = local_158;
  if (puVar19 != (uint *)0x0) {
    FUN_140db7d0(param_1,puVar19);
    param_3 = local_154;
  }
  goto LAB_140e1d04;
switchD_140e1d68_caseD_21:
  if (bVar7) {
LAB_140e1e00:
    if (local_15c == 0) goto LAB_140e1efc;
  }
  aiStack_e0[2] = local_15c;
  local_158 = puVar17;
LAB_140e1f16:
  local_12c = 0;
  puVar15 = (uint *)0x1;
  puVar13 = (uint *)0x0;
  puVar17 = (uint *)0x0;
  puVar5 = (uint *)(aiStack_e0 + 2);
  puVar19 = (uint *)0x0;
  goto LAB_140e212a;
}

