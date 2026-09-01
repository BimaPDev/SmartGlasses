/* FUN_10105fe0 @ 0x10105fe0 */

uint FUN_10105fe0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  int extraout_r1;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  int *piVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  code *pcVar24;
  uint uVar25;
  uint local_bc;
  uint *local_b8;
  uint local_a8;
  uint local_a4 [28];
  uint uStack_34;
  uint uStack_30;
  
  iVar10 = FUN_100f9dd4(*(undefined4 *)(*(int *)(param_2 + 0x60) + 4),DAT_10106298);
  if (iVar10 == 0) {
    return 0xb;
  }
  uVar11 = FUN_100fad58(param_1,0);
  if (uVar11 != 0) {
    return uVar11;
  }
  uVar11 = (**(code **)(iVar10 + 4))(param_1,param_2,param_3,param_4,param_5);
  if (uVar11 != 0) {
    return uVar11;
  }
  iVar16 = *(int *)(param_2 + 0x94);
  if ((((iVar16 != 0x10000) && (iVar16 != 0x20000)) && (iVar16 != DAT_1010629c)) &&
     ((iVar16 != DAT_1010629c + 0x30f8ecff && (iVar16 != DAT_1010629c + 0x30f9fe0f)))) {
    return 2;
  }
  iVar16 = *(int *)(param_2 + 0x68);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  if (param_3 < 0) {
    return 0;
  }
  uVar11 = (**(code **)(iVar10 + 8))(iVar16,param_2,param_3,param_4,param_5);
  if (uVar11 != 0) {
    return uVar11;
  }
  iVar10 = *(int *)(param_2 + 0x14);
  if (iVar10 != 0) {
    iVar23 = DAT_101062a0 + 0x208;
    iVar18 = DAT_101062a0;
    do {
      iVar12 = FUN_1013d44e(iVar10,iVar18);
      iVar18 = iVar18 + 0x14;
      if (iVar12 != 0) {
        pcVar24 = *(code **)(param_2 + 0x204);
        goto LAB_101060b2;
      }
    } while (iVar18 != iVar23);
  }
  FUN_1011ea48(local_a4,0,0x74);
  uVar13 = *(ushort *)(param_2 + 0x98);
  if (uVar13 == 0) {
    pcVar24 = *(code **)(param_2 + 0x204);
    uVar11 = 0;
LAB_101065c4:
    local_b8 = local_a4;
    iVar18 = DAT_10106654 + 0x2b8;
    iVar10 = DAT_10106654;
    while( true ) {
      if (*(int *)(iVar10 + 4) == 0) {
        uVar11 = uVar11 + 1;
        *local_b8 = uVar11;
      }
      if (*(int *)(iVar10 + 0xc) == 0) {
        uVar11 = uVar11 + 1;
        *local_b8 = uVar11;
      }
      piVar20 = (int *)(iVar10 + 0x14);
      iVar10 = iVar10 + 0x18;
      if (*piVar20 == 0) {
        uVar11 = uVar11 + 1;
        *local_b8 = uVar11;
      }
      local_b8 = local_b8 + 1;
      if (uVar11 == 3) goto LAB_101060b2;
      if (iVar10 == iVar18) break;
      uVar11 = *local_b8;
    }
  }
  else {
    bVar2 = false;
    bVar4 = false;
    pcVar24 = *(code **)(param_2 + 0x204);
    uVar15 = 0;
    bVar3 = false;
    do {
      local_b8 = local_a4;
      iVar10 = *(int *)(param_2 + 0x9c);
      iVar23 = (uint)uVar15 * 0x10;
      iVar18 = *(int *)(iVar10 + iVar23);
      if (iVar18 == DAT_101062bc) {
        iVar18 = 1;
        bVar4 = true;
LAB_101061a6:
        piVar20 = (int *)(DAT_101062c0 + iVar18 * 8);
        iVar18 = 0;
        while( true ) {
          if (((undefined4 *)(iVar10 + iVar23))[3] == piVar20[1]) {
            if ((iVar18 == 0) && (pcVar24 != (code *)0x0)) {
              iVar10 = (*pcVar24)(param_2,*(undefined4 *)(iVar10 + iVar23),
                                  *(undefined4 *)(param_2 + 0x68),0);
              if (iVar10 == 0) {
                uVar19 = *(undefined4 *)(param_2 + 0x68);
                local_bc = *(uint *)(*(int *)(param_2 + 0x9c) + iVar23 + 0xc);
                iVar10 = FUN_100faf14(uVar19,local_bc);
                if (iVar10 == 0) {
                  if (3 < local_bc) {
                    iVar18 = 0;
                    uVar11 = local_bc;
                    do {
                      iVar10 = FUN_100fb00c(uVar19);
                      uVar11 = uVar11 - 4;
                      iVar18 = iVar18 + iVar10;
                    } while (3 < uVar11);
                    local_bc = local_bc & 3;
                  }
                  if (local_bc != 0) {
                    uVar11 = 3;
                    do {
                      bVar8 = FUN_100fafdc(uVar19);
                      uVar21 = uVar11 - 1;
                      iVar18 = iVar18 + ((uint)bVar8 << ((uVar11 & 0x1f) << 3));
                      uVar11 = uVar21;
                    } while (uVar21 != 3 - local_bc);
                  }
                  FUN_100fafbc(uVar19);
                }
              }
              pcVar24 = *(code **)(param_2 + 0x204);
            }
            uVar11 = *local_b8;
            if (*piVar20 == iVar18) {
              uVar11 = uVar11 + 1;
              *local_b8 = uVar11;
            }
            if (uVar11 == 3) goto LAB_101060b2;
          }
          if (local_b8 + 1 == &uStack_30) break;
          piVar20 = piVar20 + 6;
          local_b8 = local_b8 + 1;
          iVar10 = *(int *)(param_2 + 0x9c);
        }
        uVar13 = *(ushort *)(param_2 + 0x98);
      }
      else {
        if (iVar18 == DAT_101062bc + 0xa01fe03) {
          iVar18 = 2;
          bVar3 = true;
          goto LAB_101061a6;
        }
        if (iVar18 == DAT_101062bc + -0x2f9f34d) {
          iVar18 = 0;
          bVar2 = true;
          goto LAB_101061a6;
        }
      }
      local_b8 = local_a4;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar13);
    if (bVar2) {
      if (bVar3) {
        if (bVar4) {
          uVar11 = local_a4[0];
          while (uVar11 != 3) {
            if (&uStack_34 == local_b8) goto LAB_101060ba;
            local_b8 = local_b8 + 1;
            uVar11 = *local_b8;
          }
LAB_101060b2:
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
        }
        else {
          iVar10 = DAT_101067f8;
          uVar11 = local_a4[0];
          while( true ) {
            piVar20 = (int *)(iVar10 + 0xc);
            iVar10 = iVar10 + 0x18;
            if (*piVar20 == 0) {
              uVar11 = uVar11 + 1;
              *local_b8 = uVar11;
            }
            if (uVar11 == 3) goto LAB_101060b2;
            if (local_b8 == &uStack_34) break;
            local_b8 = local_b8 + 1;
            uVar11 = *local_b8;
          }
        }
      }
      else if (bVar4) {
        iVar10 = DAT_10106654;
        uVar11 = local_a4[0];
        while( true ) {
          piVar20 = (int *)(iVar10 + 0x14);
          iVar10 = iVar10 + 0x18;
          if (*piVar20 == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          if (uVar11 == 3) goto LAB_101060b2;
          if (local_b8 == &uStack_34) break;
          local_b8 = local_b8 + 1;
          uVar11 = *local_b8;
        }
      }
      else {
        iVar18 = DAT_101067f8 + 0x2b8;
        iVar10 = DAT_101067f8;
        uVar11 = local_a4[0];
        while( true ) {
          if (*(int *)(iVar10 + 0xc) == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          piVar20 = (int *)(iVar10 + 0x14);
          iVar10 = iVar10 + 0x18;
          if (*piVar20 == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          if (uVar11 == 3) goto LAB_101060b2;
          if (iVar10 == iVar18) break;
          local_b8 = local_b8 + 1;
          uVar11 = *local_b8;
        }
      }
    }
    else if (bVar3) {
      if (bVar4) {
        iVar10 = DAT_10106654;
        uVar11 = local_a4[0];
        while( true ) {
          piVar20 = (int *)(iVar10 + 4);
          iVar10 = iVar10 + 0x18;
          if (*piVar20 == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          if (uVar11 == 3) goto LAB_101060b2;
          if (local_b8 == &uStack_34) break;
          local_b8 = local_b8 + 1;
          uVar11 = *local_b8;
        }
      }
      else {
        iVar18 = DAT_101067f8 + 0x2b8;
        iVar10 = DAT_101067f8;
        uVar11 = local_a4[0];
        while( true ) {
          if (*(int *)(iVar10 + 4) == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          piVar20 = (int *)(iVar10 + 0xc);
          iVar10 = iVar10 + 0x18;
          if (*piVar20 == 0) {
            uVar11 = uVar11 + 1;
            *local_b8 = uVar11;
          }
          if (uVar11 == 3) goto LAB_101060b2;
          if (iVar10 == iVar18) break;
          local_b8 = local_b8 + 1;
          uVar11 = *local_b8;
        }
      }
    }
    else {
      uVar11 = local_a4[0];
      if (!bVar4) goto LAB_101065c4;
      iVar18 = DAT_101067f8 + 0x2b8;
      iVar10 = DAT_101067f8;
      while( true ) {
        if (*(int *)(iVar10 + 4) == 0) {
          uVar11 = uVar11 + 1;
          *local_b8 = uVar11;
        }
        piVar20 = (int *)(iVar10 + 0x14);
        iVar10 = iVar10 + 0x18;
        if (*piVar20 == 0) {
          uVar11 = uVar11 + 1;
          *local_b8 = uVar11;
        }
        if (uVar11 == 3) goto LAB_101060b2;
        if (iVar10 == iVar18) break;
        local_b8 = local_b8 + 1;
        uVar11 = *local_b8;
      }
    }
  }
LAB_101060ba:
  local_b8 = local_a4;
  uVar19 = *(undefined4 *)(iVar16 + 0x1c);
  local_a8 = (*pcVar24)(param_2,DAT_101062a4,iVar16,local_b8);
  if ((local_a8 == 0) && (7 < local_a4[0])) {
    local_a8 = FUN_100fae48(iVar16,local_a4[0],param_2 + 0x2e8);
    uVar11 = local_a4[0];
    if (local_a8 != 0) {
      return local_a8;
    }
    iVar10 = *(int *)(param_2 + 0x2e8);
    uVar14 = *(uint *)(iVar10 + 4);
    uVar21 = (uVar14 >> 0x10 & 0xff) << 8;
    uVar17 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | uVar21 | uVar14 >> 0x18;
    uVar25 = (uint)CONCAT11(*(undefined1 *)(iVar10 + 2),*(undefined1 *)(iVar10 + 3));
    if (0xfffeffff < uVar17) {
      uVar17 = uVar21 | uVar14 >> 0x18;
    }
    if (uVar25 < 0x100) {
      if (uVar25 == 0) {
        uVar19 = FUN_100fb280(uVar19,1,0,0,0,&local_a8);
        *(undefined4 *)(param_2 + 0x2f8) = uVar19;
        if (local_a8 != 0) goto LAB_101064c2;
LAB_1010658a:
        uVar14 = 0;
      }
      else {
        if (0xfffd < uVar17 - 4) goto LAB_101064be;
        iVar18 = FUN_100fb280(uVar19,1,0,uVar25,0,&local_a8);
        *(int *)(param_2 + 0x2f8) = iVar18;
        if (local_a8 != 0) goto LAB_101064c2;
        uVar11 = uVar11 + iVar10;
        uVar21 = iVar10 + 8 + uVar17;
        if (uVar11 < uVar21) goto LAB_1010658a;
        uVar14 = 0;
        while( true ) {
          uVar21 = uVar21 + uVar17;
          puVar1 = (undefined1 *)(iVar10 + 8);
          iVar10 = iVar10 + uVar17;
          *(undefined1 *)(iVar18 + uVar14) = *puVar1;
          uVar14 = uVar14 + 1;
          if ((uVar25 == uVar14) || (uVar11 < uVar21)) break;
          iVar18 = *(int *)(param_2 + 0x2f8);
        }
      }
      *(uint *)(param_2 + 0x2f0) = uVar14;
      *(uint *)(param_2 + 0x2f4) = uVar17;
      *(uint *)(param_2 + 0x2ec) = local_a4[0];
    }
    else {
LAB_101064be:
      local_a8 = 3;
LAB_101064c2:
      FUN_100faef8(iVar16,param_2 + 0x2e8);
      *(undefined4 *)(param_2 + 0x2ec) = 0;
    }
    if (local_a8 != 0) {
      return local_a8;
    }
  }
  uVar21 = *(uint *)(param_2 + 8) & 1;
  uVar11 = 0;
  if (uVar21 == 0) goto LAB_101060e2;
  uVar11 = (**(code **)(param_2 + 0x204))(param_2,DAT_10106640,iVar16,param_2 + 0x2cc);
  if ((uVar11 & 0xff) == 0x8e) {
    *(undefined4 *)(param_2 + 0x2cc) = 0;
    *(undefined4 *)(param_2 + 0x2d0) = 0;
  }
  else {
    if (uVar11 != 0) {
      return uVar11;
    }
    uVar19 = FUN_100fadac(iVar16);
    *(undefined4 *)(param_2 + 0x2d0) = uVar19;
  }
  iVar10 = (**(code **)(param_2 + 0x204))(param_2,DAT_10106644,iVar16,local_b8);
  if (iVar10 != 0) {
    return 0x90;
  }
  if (*(short *)(param_2 + 0xd2) == 0) {
    if (local_a4[0] < 0x20000) {
      uVar11 = local_a4[0] >> 1;
    }
    else {
      local_a4[0] = DAT_1010665c;
      uVar11 = 0xffff;
    }
    *(uint *)(param_2 + 0x2e0) = uVar11;
  }
  else {
    if (local_a4[0] < 0x40000) {
      uVar11 = local_a4[0] >> 2;
    }
    else {
      local_a4[0] = DAT_10106658;
      uVar11 = 0xffff;
    }
    uVar21 = 2;
    *(uint *)(param_2 + 0x2e0) = uVar11;
  }
  uVar25 = *(uint *)(param_2 + 0x10) + 1;
  if ((uVar11 != uVar25) && (uVar11 <= *(uint *)(param_2 + 0x10))) {
    uVar11 = *(uint *)(param_2 + 0x9c);
    uVar25 = uVar25 << uVar21;
    uVar21 = uVar11 + (uint)*(ushort *)(param_2 + 0x98) * 0x10;
    iVar10 = FUN_100fadac(iVar16);
    if (uVar11 < uVar21) {
      bVar2 = false;
      uVar14 = 0x7fffffff;
      do {
        piVar20 = (int *)(uVar11 + 8);
        uVar11 = uVar11 + 0x10;
        uVar17 = *piVar20 - iVar10;
        if ((0 < (int)uVar17) && ((int)uVar17 < (int)uVar14)) {
          bVar2 = true;
          uVar14 = uVar17;
        }
      } while (uVar11 < uVar21);
      if (!bVar2) goto LAB_101067c0;
    }
    else {
LAB_101067c0:
      uVar14 = *(int *)(iVar16 + 4) - iVar10;
    }
    if (uVar14 < uVar25) {
      iVar10 = 0;
      if (*(int *)(param_2 + 0x2e0) != 0) {
        iVar10 = *(int *)(param_2 + 0x2e0) + -1;
      }
      *(int *)(param_2 + 0x10) = iVar10;
    }
    else {
      *(int *)(param_2 + 0x2e0) = *(int *)(param_2 + 0x10) + 1;
      local_a4[0] = uVar25;
    }
  }
  uVar11 = FUN_100fae48(iVar16,local_a4[0],param_2 + 0x2e4);
  if ((*(int *)(param_2 + 0x2cc) != 0) && ((uVar11 & 0xff) == 0x8e)) {
    return uVar11;
  }
  if (uVar11 != 0) {
    return uVar11;
  }
  uVar19 = *(undefined4 *)(iVar16 + 0x1c);
  local_a8 = (**(code **)(param_2 + 0x204))(param_2,DAT_10106648,iVar16,local_b8);
  if (local_a8 == 0) {
    *(uint *)(param_2 + 0x2b4) = local_a4[0] >> 1;
    uVar19 = FUN_100fb280(uVar19,4,0,local_a4[0] >> 1,0,&local_a8);
    *(undefined4 *)(param_2 + 0x2b8) = uVar19;
    if ((local_a8 == 0) &&
       (local_a8 = FUN_100faf14(iVar16,*(int *)(param_2 + 0x2b4) << 1), local_a8 == 0)) {
      piVar20 = *(int **)(param_2 + 0x2b8);
      piVar22 = piVar20 + *(int *)(param_2 + 0x2b4);
      for (; piVar20 < piVar22; piVar20 = piVar20 + 1) {
        sVar9 = FUN_100faff0(iVar16);
        *piVar20 = (int)sVar9 << 6;
      }
      FUN_100fafbc(iVar16);
      if (local_a8 == 0) goto LAB_1010642a;
    }
    if ((local_a8 & 0xff) != 0x8e) {
      return local_a8;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2b4) = 0;
    *(undefined4 *)(param_2 + 0x2b8) = 0;
  }
LAB_1010642a:
  iVar10 = (**(code **)(param_2 + 0x204))(param_2,DAT_1010664c,iVar16,local_b8);
  if (iVar10 == 0) {
    *(uint *)(param_2 + 0x2a4) = local_a4[0];
    uVar11 = FUN_100fae48(iVar16,local_a4[0],param_2 + 0x2a8);
    if ((uVar11 != 0) && ((uVar11 & 0xff) != 0x8e)) {
      return uVar11;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2a4) = 0;
    *(undefined4 *)(param_2 + 0x2a8) = 0;
  }
  iVar10 = (**(code **)(param_2 + 0x204))(param_2,DAT_10106650,iVar16,local_b8);
  if (iVar10 == 0) {
    *(uint *)(param_2 + 0x2ac) = local_a4[0];
    uVar11 = FUN_100fae48(iVar16,local_a4[0],param_2 + 0x2b0);
    if ((uVar11 != 0) && ((uVar11 & 0xff) != 0x8e)) {
      return uVar11;
    }
  }
  else {
    uVar11 = 0;
    *(undefined4 *)(param_2 + 0x2ac) = 0;
    *(undefined4 *)(param_2 + 0x2b0) = 0;
  }
  if (((*(int *)(param_2 + 0x1c) != 0) && (*(int *)(param_2 + 0x2e4) != 0)) &&
     (*(int *)(param_2 + 0x2e0) != 0)) {
    iVar10 = 0;
    bVar2 = false;
    uVar21 = 0;
    do {
      FUN_10105990(param_2,uVar21);
      if (local_a8 != 0) {
        if (bVar2) goto LAB_101060e2;
        bVar2 = true;
        iVar10 = extraout_r1;
      }
      uVar21 = extraout_r1 + 1;
    } while (uVar21 < *(uint *)(param_2 + 0x2e0));
    if ((bVar2) &&
       ((iVar10 == 0 ||
        (((iVar10 = FUN_100f9cf4(param_2,iVar10,local_b8,8), iVar10 == 0 &&
          ((local_a4[0] & 0xff) == 0x2e)) &&
         (iVar10 = FUN_1011ea20(local_b8,DAT_101067fc,8), iVar10 == 0)))))) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
    }
  }
LAB_101060e2:
  uVar6 = DAT_101062b4;
  uVar5 = DAT_101062b0;
  uVar19 = DAT_101062ac;
  *(undefined4 *)(param_2 + 0x208) = DAT_101062a8;
  uVar7 = DAT_101062b8;
  *(undefined4 *)(param_2 + 0x210) = uVar19;
  *(undefined4 *)(param_2 + 0x214) = uVar5;
  *(undefined4 *)(param_2 + 0x218) = uVar6;
  *(undefined4 *)(param_2 + 0x20c) = uVar7;
  return uVar11;
}

