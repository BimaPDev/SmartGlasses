/* FUN_100fa624 @ 0x100fa624 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_100fa624(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  code *pcVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined4 local_3c;
  uint local_38;
  undefined1 auStack_34 [4];
  undefined4 *local_30;
  undefined4 *local_2c;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x58) == 0)) ||
     (iVar18 = *(int *)(param_1 + 0x54), iVar18 == 0)) {
    return (undefined4 *)0x23;
  }
  iVar17 = *(int *)(iVar18 + 0x9c);
  local_30 = (undefined4 *)param_2;
  if ((iVar17 == 0) || (uVar14 = *(uint *)(iVar17 + 4), -1 < (int)(uVar14 << 0x1f))) {
    *(undefined4 *)(iVar18 + 0x58) = 0;
  }
  else {
    if (*(int *)(iVar18 + 0x58) != 0) {
      (**(code **)(*(int *)(*(int *)(iVar18 + 4) + 100) + 8))();
      iVar17 = *(int *)(iVar18 + 0x9c);
      uVar14 = *(uint *)(iVar17 + 4);
    }
    *(undefined4 *)(iVar18 + 0x58) = 0;
    *(uint *)(iVar17 + 4) = uVar14 & 0xfffffffe;
  }
  FUN_1011ea48(iVar18 + 0x18,0,0x20);
  *(undefined4 *)(iVar18 + 0x6c) = 0;
  *(undefined4 *)(iVar18 + 0x70) = 0;
  *(undefined4 *)(iVar18 + 0x74) = 0;
  *(undefined4 *)(iVar18 + 0x78) = 0;
  *(undefined4 *)(iVar18 + 0x7c) = 0;
  *(undefined1 *)(iVar18 + 0x5e) = 0;
  puVar15 = *(undefined4 **)(param_1 + 0x60);
  if ((int)(param_3 << 0x15) < 0) {
    param_3 = param_3 | 0x801;
  }
  piVar20 = *(int **)(puVar15[1] + 0xa0);
  if ((int)(param_3 << 0x1f) < 0) {
    param_3 = param_3 & 0xfffffffb | 10;
  }
  *(undefined4 *)(iVar18 + 100) = 0;
  *(undefined4 *)(iVar18 + 0x68) = 0;
  *(undefined4 *)(iVar18 + 0x80) = 0;
  *(undefined4 *)(iVar18 + 0x84) = 0;
  *(undefined4 *)(iVar18 + 0x88) = 0;
  *(undefined4 *)(iVar18 + 0x8c) = 0;
  *(undefined4 *)(iVar18 + 0x38) = 0;
  *(undefined4 *)(iVar18 + 0x3c) = 0;
  *(undefined4 *)(iVar18 + 0x90) = 0;
  *(undefined4 *)(iVar18 + 0x94) = 0;
  *(undefined4 *)(iVar18 + 0x50) = 0;
  *(undefined4 *)(iVar18 + 0x4c) = 0;
  *(undefined4 *)(iVar18 + 0x54) = 0;
  *(undefined4 *)(iVar18 + 0x98) = 0;
  *(undefined4 *)(iVar18 + 0x48) = 0;
  if ((int)(param_3 << 9) < 0) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((piVar20 == (int *)0x0) || ((param_3 & 0x8002) != 0)) ||
     ((*(uint *)(param_1 + 8) & 0x2001) != 1)) goto LAB_100fa6f8;
  if ((param_3 & 0x800) == 0) {
    iVar17 = **(int **)(param_1 + 0x80);
    if ((*(int **)(param_1 + 0x80))[2] == 0) {
      if (iVar17 != 0) goto LAB_100fa8e2;
    }
    else if (iVar17 == 0) goto LAB_100fa8e2;
LAB_100fa6f8:
    puVar15 = (undefined4 *)
              (**(code **)(puVar15[3] + 0x48))
                        (iVar18,*(undefined4 *)(param_1 + 0x58),local_30,param_3);
    if (puVar15 != (undefined4 *)0x0) {
      return puVar15;
    }
    puVar15 = local_2c;
    puVar7 = (undefined4 *)0x0;
    if (*(int *)(iVar18 + 0x48) == DAT_100fa9f8) {
      iVar6 = (int)*(short *)(iVar18 + 0x6e);
      iVar17 = (int)*(short *)(iVar18 + 0x6c);
      if (iVar6 == 0) {
        if (iVar17 != 0) {
          return (undefined4 *)0x6;
        }
      }
      else {
        if (iVar6 < 1) {
          return (undefined4 *)0x6;
        }
        if (iVar17 < 1) {
          return (undefined4 *)0x6;
        }
        psVar12 = *(short **)(iVar18 + 0x78);
        iVar11 = -1;
        do {
          psVar13 = psVar12 + 1;
          iVar23 = (int)*psVar12;
          if (iVar23 <= iVar11) {
            return (undefined4 *)0x6;
          }
          if (iVar6 <= iVar23) {
            return (undefined4 *)0x6;
          }
          psVar12 = psVar13;
          iVar11 = iVar23;
        } while (*(short **)(iVar18 + 0x78) + iVar17 != psVar13);
        if (iVar23 != iVar6 + -1) {
          return (undefined4 *)0x6;
        }
      }
      if (-1 < (int)(param_3 << 0x1e)) {
        if ((param_3 & 0x10) == 0) {
          uVar14 = *(uint *)(iVar18 + 0x20) & 0xffffffc0;
          uVar21 = *(int *)(iVar18 + 0x24) + 0x3fU & 0xffffffc0;
          *(uint *)(iVar18 + 0x18) =
               (*(int *)(iVar18 + 0x18) + *(uint *)(iVar18 + 0x20) + 0x3f & 0xffffffc0) - uVar14;
          *(uint *)(iVar18 + 0x20) = uVar14;
          *(uint *)(iVar18 + 0x2c) = *(uint *)(iVar18 + 0x2c) & 0xffffffc0;
          *(uint *)(iVar18 + 0x30) = *(uint *)(iVar18 + 0x30) & 0xffffffc0;
          *(uint *)(iVar18 + 0x1c) =
               uVar21 - (*(int *)(iVar18 + 0x24) - *(int *)(iVar18 + 0x1c) & 0xffffffc0U);
          *(uint *)(iVar18 + 0x24) = uVar21;
        }
        else {
          uVar14 = *(uint *)(iVar18 + 0x2c) & 0xffffffc0;
          uVar21 = *(uint *)(iVar18 + 0x30) & 0xffffffc0;
          *(uint *)(iVar18 + 0x18) =
               (*(int *)(iVar18 + 0x18) + *(uint *)(iVar18 + 0x2c) + 0x3f & 0xffffffc0) - uVar14;
          *(uint *)(iVar18 + 0x20) = *(uint *)(iVar18 + 0x20) & 0xffffffc0;
          *(uint *)(iVar18 + 0x24) = *(int *)(iVar18 + 0x24) + 0x3fU & 0xffffffc0;
          *(uint *)(iVar18 + 0x2c) = uVar14;
          *(uint *)(iVar18 + 0x1c) =
               (*(int *)(iVar18 + 0x1c) + *(uint *)(iVar18 + 0x30) + 0x3f & 0xffffffc0) - uVar21;
          *(uint *)(iVar18 + 0x30) = uVar21;
        }
        *(uint *)(iVar18 + 0x28) = *(int *)(iVar18 + 0x28) + 0x20U & 0xffffffc0;
        *(uint *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 0x20U & 0xffffffc0;
        puVar7 = (undefined4 *)0x0;
      }
    }
  }
  else {
LAB_100fa8e2:
    if (((int)(param_3 << 0x1a) < 0) || (-1 < *(int *)*puVar15 << 0x15)) {
LAB_100faa10:
      iVar17 = *(int *)(param_1 + 8);
    }
    else {
      pcVar19 = (code *)((int *)*puVar15)[8];
      if (pcVar19 == (code *)0x0) {
        uVar9 = 0;
      }
      else {
        local_2c = puVar15;
        uVar9 = (*pcVar19)(puVar15,DAT_100faa00);
        puVar15 = local_2c;
      }
      local_2c = puVar15;
      iVar17 = FUN_1013d44e(uVar9,DAT_100faa04);
      puVar15 = local_2c;
      if ((((iVar17 == 0) || (local_2c[7] != 1)) && ((param_3 & 0xfffff) >> 0x10 == 1)) &&
         (-1 < *(int *)*local_2c << 0x14)) goto LAB_100faa10;
      iVar17 = *(int *)(param_1 + 8);
      if (((-1 < iVar17 << 0x1c) || (*(int *)(param_1 + 0x2e0) == 0)) ||
         ((*(short *)(param_1 + 0x11e) != 0 ||
          ((*(int *)(param_1 + 0x2a4) != 0 || (*(int *)(param_1 + 0x2ac) != 0))))))
      goto LAB_100fa6f8;
    }
    if ((((-1 < iVar17 << 0x1e) || ((int)(param_3 << 0x1c) < 0)) ||
        (iVar17 = (**(code **)(puVar15[3] + 0x48))
                            (iVar18,*(undefined4 *)(param_1 + 0x58),local_30,param_3 | 0x4000),
        iVar17 != 0)) ||
       (puVar15 = local_2c, puVar7 = (undefined4 *)0x0, *(int *)(iVar18 + 0x48) != DAT_100fab2c)) {
      iVar6 = *(int *)(param_1 + 0x80);
      iVar17 = *(int *)(*piVar20 + 0x14);
      local_2c = *(undefined4 **)(iVar6 + 0x18);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      local_38 = param_3;
      puVar7 = (undefined4 *)
               (**(code **)(iVar17 + 0xc))(piVar20,iVar18,*(undefined4 *)(param_1 + 0x58),local_30);
      *(undefined4 **)(iVar6 + 0x18) = local_2c;
      puVar15 = local_2c;
    }
  }
  local_2c = puVar7;
  if ((param_3 & 0x10) == 0) {
    uVar14 = param_3 & 0x10;
    uVar9 = *(undefined4 *)(iVar18 + 0x28);
  }
  else {
    uVar9 = 0;
    uVar14 = *(uint *)(iVar18 + 0x34);
  }
  *(undefined4 *)(iVar18 + 0x40) = uVar9;
  *(uint *)(iVar18 + 0x44) = uVar14;
  puVar7 = local_2c;
  if ((-1 < (int)(param_3 << 0x12)) && (*(int *)(param_1 + 8) << 0x1f < 0)) {
    iVar17 = *(int *)(param_1 + 0x58);
    uVar9 = FUN_100f85ec(*(undefined4 *)(iVar18 + 0x38),*(undefined4 *)(iVar17 + 0x10),0x40);
    uVar10 = *(undefined4 *)(iVar17 + 0x14);
    *(undefined4 *)(iVar18 + 0x38) = uVar9;
    uVar9 = FUN_100f85ec(*(undefined4 *)(iVar18 + 0x3c),uVar10,0x40);
    *(undefined4 *)(iVar18 + 0x3c) = uVar9;
    puVar7 = local_2c;
    puVar15 = local_2c;
  }
  local_2c = puVar15;
  if ((param_3 & 0x800) == 0) {
    piVar20 = *(int **)(param_1 + 0x80);
    iVar17 = piVar20[6];
    if (iVar17 != 0) {
      iVar23 = *(int *)(iVar18 + 0x48);
      iVar11 = *(int *)(*(int *)(*(int *)(iVar18 + 4) + 0x60) + 4);
      iVar6 = *(int *)(iVar11 + 0x9c);
      if ((iVar6 == 0) || (iVar23 != *(int *)(iVar6 + 0x10))) {
        for (iVar11 = *(int *)(iVar11 + 0x94); iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
          iVar6 = *(int *)(iVar11 + 8);
          if (iVar23 == *(int *)(iVar6 + 0x10)) goto LAB_100fa7a4;
        }
        if (iVar23 == DAT_100fab30) {
          if (iVar17 << 0x1f < 0) {
            local_2c = puVar7;
            FUN_100fa570(iVar18 + 0x6c,piVar20);
            iVar17 = piVar20[6];
            puVar7 = local_2c;
          }
          if (iVar17 << 0x1e < 0) {
            iVar17 = piVar20[4];
            iVar6 = piVar20[5];
            sVar1 = *(short *)(iVar18 + 0x6e);
            if (0 < sVar1) {
              uVar14 = 0;
              piVar16 = *(int **)(iVar18 + 0x70);
              do {
                uVar14 = uVar14 + 1 & 0xffff;
                *piVar16 = *piVar16 + iVar17;
                piVar16[1] = piVar16[1] + iVar6;
                piVar16 = piVar16 + 2;
              } while ((int)uVar14 < (int)sVar1);
            }
          }
        }
      }
      else {
LAB_100fa7a4:
        puVar7 = (undefined4 *)
                 (**(code **)(*(int *)(iVar6 + 0xc) + 0x2c))(iVar6,iVar18,piVar20,piVar20 + 4);
      }
      if (iVar18 != -0x40) {
        lVar2 = (longlong)*piVar20 * (longlong)*(int *)(iVar18 + 0x40);
        lVar2 = lVar2 + (ulonglong)((int)(lVar2 >> 0x3f) + 0x8000);
        lVar3 = (longlong)piVar20[1] * (longlong)*(int *)(iVar18 + 0x44);
        lVar3 = lVar3 + (ulonglong)((int)(lVar3 >> 0x3f) + 0x8000);
        lVar4 = (longlong)piVar20[2] * (longlong)*(int *)(iVar18 + 0x40);
        lVar4 = lVar4 + (ulonglong)((int)(lVar4 >> 0x3f) + 0x8000);
        lVar5 = (longlong)piVar20[3] * (longlong)*(int *)(iVar18 + 0x44);
        lVar5 = lVar5 + (ulonglong)((int)(lVar5 >> 0x3f) + 0x8000);
        *(uint *)(iVar18 + 0x40) =
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) * 0x10000) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) * 0x10000);
        *(uint *)(iVar18 + 0x44) =
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) * 0x10000) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) * 0x10000);
      }
    }
  }
  *(undefined4 **)(iVar18 + 0xc) = local_30;
  *(uint *)(*(int *)(iVar18 + 0x9c) + 0x28) = param_3;
  if (puVar7 != (undefined4 *)0x0) {
    return puVar7;
  }
  if ((int)(param_3 << 0x1f) < 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(iVar18 + 0x48) == DAT_100fa9fc) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(iVar18 + 0x48) == DAT_100fa9fc + 0x105f8fd) {
    return (undefined4 *)0x0;
  }
  uVar14 = (param_3 & 0xfffff) >> 0x10;
  if ((param_3 & 0xf0000) == 0) {
    if ((param_3 & 0x1000) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 2;
    }
  }
  if ((undefined4 *)(param_3 & 4) == (undefined4 *)0x0) {
    local_30 = (undefined4 *)(param_3 & 4);
    FUN_100f90e8(iVar18,uVar14,0);
    return local_30;
  }
  if (*(int *)(iVar18 + 4) == 0) {
    return (undefined4 *)0x6;
  }
  iVar17 = *(int *)(*(int *)(*(int *)(iVar18 + 4) + 0x60) + 4);
  iVar6 = *(int *)(iVar18 + 0x48);
  if (iVar6 == DAT_100fad1c) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(*(int *)(iVar18 + 0x9c) + 0x28) << 0xb < 0) {
    iVar11 = *(int *)(iVar18 + 4);
    uVar21 = *(uint *)(iVar18 + 0xc);
    local_2c = (undefined4 *)0x0;
    if ((((iVar11 == 0) || (*(uint *)(iVar11 + 0x10) <= uVar21)) ||
        (-1 < *(int *)(iVar11 + 8) << 0x1c)) ||
       (pcVar19 = *(code **)(*(int *)(iVar11 + 0x21c) + 0x84), pcVar19 == (code *)0x0))
    goto LAB_100fab52;
    iVar6 = (*pcVar19)(iVar11,uVar21,&local_3c,&local_38,auStack_34);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar18 + 0x48);
      goto LAB_100fab52;
    }
    iVar6 = FUN_100f9340(iVar11,0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar11 + 0x21c);
      do {
        iVar23 = FUN_100fa624(iVar11,local_3c,
                              *(uint *)(*(int *)(iVar18 + 0x9c) + 0x28) & 0xffefffff | 4);
        if ((iVar23 != 0) ||
           (iVar23 = (**(code **)(iVar6 + 0x88))
                               (iVar11,local_38,iVar18,*(undefined4 *)(iVar11 + 0x54)), iVar23 != 0)
           ) {
          iVar6 = *(int *)(iVar11 + 0x54);
          if (iVar6 == 0) goto LAB_100faca8;
          iVar8 = *(int *)(iVar6 + 4);
          iVar11 = *(int *)(iVar8 + 0x54);
          iVar22 = *(int *)(*(int *)(iVar8 + 0x60) + 8);
          if (iVar11 != 0) goto LAB_100fac92;
          goto LAB_100faca8;
        }
      } while (((uVar21 < *(uint *)(iVar11 + 0x10)) && (*(int *)(iVar11 + 8) << 0x1c < 0)) &&
              ((pcVar19 = *(code **)(*(int *)(iVar11 + 0x21c) + 0x84), pcVar19 != (code *)0x0 &&
               (iVar8 = (*pcVar19)(iVar11,uVar21,&local_3c,&local_38,auStack_34), iVar8 != 0))));
      iVar6 = *(int *)(iVar11 + 0x54);
      *(int *)(iVar18 + 0x48) = DAT_100fad1c;
      if (iVar6 == 0) {
        return (undefined4 *)0x0;
      }
      iVar8 = *(int *)(iVar6 + 4);
      iVar11 = *(int *)(iVar8 + 0x54);
      iVar22 = *(int *)(*(int *)(iVar8 + 0x60) + 8);
      if (iVar11 == 0) {
        return (undefined4 *)0x0;
      }
LAB_100fac92:
      if (iVar6 == iVar11) {
        *(undefined4 *)(iVar8 + 0x54) = *(undefined4 *)(iVar6 + 8);
      }
      else {
        do {
          iVar8 = iVar11;
          iVar11 = *(int *)(iVar8 + 8);
          if (iVar11 == 0) goto joined_r0x100faca6;
        } while (iVar6 != iVar11);
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar6 + 8);
      }
      if (*(code **)(iVar6 + 0x14) != (code *)0x0) {
        (**(code **)(iVar6 + 0x14))(iVar6);
      }
      FUN_100f8a54(iVar6);
      (**(code **)(iVar22 + 8))(iVar22,iVar6);
joined_r0x100faca6:
      if (iVar23 == 0) {
        return (undefined4 *)0x0;
      }
    }
LAB_100faca8:
    *(int *)(iVar18 + 0x48) = DAT_100fad20;
  }
  else {
LAB_100fab52:
    if (iVar6 != DAT_100fad20) {
      if (iVar17 != 0) {
        for (iVar11 = *(int *)(iVar17 + 0x94); iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
          iVar23 = *(int *)(iVar11 + 8);
          if (iVar6 == *(int *)(iVar23 + 0x10)) goto LAB_100fab7a;
        }
      }
      goto LAB_100facba;
    }
  }
  iVar23 = *(int *)(iVar17 + 0x9c);
  iVar11 = *(int *)(iVar17 + 0x94);
  if (iVar23 != 0) {
LAB_100fab7a:
    while( true ) {
      puVar15 = (undefined4 *)(**(code **)(iVar23 + 0x3c))(iVar23,iVar18,uVar14,0);
      if (puVar15 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      if (((uint)puVar15 & 0xff) != 0x13) break;
      if (iVar17 == 0) {
        return puVar15;
      }
      iVar6 = *(int *)(iVar17 + 0x94);
      if (iVar11 != 0) {
        iVar6 = *(int *)(iVar11 + 4);
      }
      while( true ) {
        iVar11 = iVar6;
        if (iVar11 == 0) {
          return puVar15;
        }
        iVar23 = *(int *)(iVar11 + 8);
        if (*(int *)(iVar18 + 0x48) == *(int *)(iVar23 + 0x10)) break;
        iVar6 = *(int *)(iVar11 + 4);
      }
    }
    return puVar15;
  }
LAB_100facba:
  return (undefined4 *)&DAT_00000007;
}

