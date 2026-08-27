/* FUN_2c13d8bc @ 0x2c13d8bc */

/* WARNING: Removing unreachable block (ram,0x2c13e902) */
/* WARNING: Removing unreachable block (ram,0x2c13e80e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_2c13d8bc(char param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined1 uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  code *pcVar17;
  uint *puVar18;
  undefined4 unaff_r4;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 auStack_d4 [4];
  uint uStack_d0;
  undefined4 *puStack_cc;
  uint *puStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 *puStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 *puStack_98;
  uint *puStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 *puStack_84;
  uint *puStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iStack_24 = *_DAT_2c13db90;
  uVar20 = param_3 & 0xffff;
  puVar14 = param_2;
  puVar13 = (uint *)func_0x2c13ad90(param_1,param_2,param_3,0);
  iVar11 = _DAT_2c13dc7c;
  pcVar10 = _DAT_2c13dbc8;
  pcVar9 = _DAT_2c13dbc4;
  pcVar8 = _DAT_2c13db9c;
  pbVar7 = _DAT_2c13db98;
  puVar6 = _DAT_2c13ac64;
  iVar15 = _DAT_2c13ac60;
  puVar5 = _DAT_2c13ab8c;
  if (puVar13 == (uint *)0x0) {
LAB_2c13d94c:
    if (*_DAT_2c13db90 == iStack_24) {
      return puVar13;
    }
LAB_2c13dc72:
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c();
  }
  if (param_1 == '\x16') {
    bVar1 = (byte)*param_2;
    if (bVar1 < 5) {
      uVar12 = func_0x2c13a990(bVar1);
    }
    else {
      uVar12 = 0;
    }
    puStack_cc = &uStack_a4;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,0x16);
    puStack_c8 = (uint *)CONCAT22(puStack_c8._2_2_,2);
    uStack_a4 = CONCAT31(CONCAT21(uStack_a4._2_2_,uVar12),bVar1);
    puVar13 = (uint *)FUN_2c139360(uStack_d0,puStack_cc,puStack_c8);
    goto LAB_2c13d94c;
  }
  if (param_1 == '#') {
    if (uVar20 == 2) {
      bVar1 = *(byte *)((int)param_2 + 1);
      bVar2 = (byte)*param_2;
      puVar13 = (uint *)FUN_2c135988(4,0x83,_DAT_2c13dbac,_DAT_2c13dba8,_DAT_2c13dba4,_DAT_2c13dba0,
                                     bVar2,*_DAT_2c13db9c,*_DAT_2c13dbc8,bVar1 != 0,*_DAT_2c13db98,
                                     *_DAT_2c13dbc4);
      if (bVar2 < 2) {
        if (*pcVar8 != '\0') {
          if (bVar1 == 0) {
            if (*pbVar7 != 0) {
              func_0x2c13a8bc(0);
              puVar13 = (uint *)func_0x2c13a8bc(1);
              *pbVar7 = 0;
            }
          }
          else {
            puVar13 = (uint *)(uint)*pbVar7;
            if (puVar13 == (uint *)0x0) {
              func_0x2c13a830(0,_DAT_2c13dc84);
              puVar13 = (uint *)func_0x2c13a830(1,_DAT_2c13dc84);
              *pbVar7 = 1;
            }
          }
        }
      }
      else if ((bVar2 == 2) && (*pcVar10 != '\0')) {
        if (bVar1 == 0) {
          if (*pcVar9 != '\0') {
            puVar13 = (uint *)func_0x2c13a8bc(2);
            *pcVar9 = '\0';
          }
        }
        else if (*pcVar9 == '\0') {
          puVar13 = (uint *)func_0x2c13a830(2,_DAT_2c13dc84);
          *pcVar9 = '\x01';
        }
      }
    }
    goto LAB_2c13d94c;
  }
  if (param_1 == '(') {
    *(bool *)_DAT_2c13db94 = (byte)*param_2 != 0;
    goto LAB_2c13d94c;
  }
  if (param_1 == '*') {
    *(bool *)_DAT_2c13dbb0 = (byte)*param_2 != 0;
    goto LAB_2c13d94c;
  }
  if (param_1 == '%') {
    bVar1 = (byte)*param_2;
    if (bVar1 < 5) {
      uVar12 = func_0x2c13a948(bVar1);
      puStack_cc = &uStack_a4;
      uStack_d0 = CONCAT31(uStack_d0._1_3_,0x25);
      puStack_c8 = (uint *)CONCAT22(puStack_c8._2_2_,2);
      uStack_a4 = CONCAT31(CONCAT21(uStack_a4._2_2_,uVar12),bVar1);
      puVar13 = (uint *)FUN_2c139360(uStack_d0,puStack_cc,puStack_c8);
    }
    goto LAB_2c13d94c;
  }
  if (param_1 == '&') {
    if (*_DAT_2c13db90 == iStack_24) {
      uVar20 = *param_2;
      iVar15 = *_DAT_2c13d8b8;
      puVar13 = (uint *)FUN_2c13e9dc(&uStack_d0,0,0x31,0,puVar14);
      if ((byte)uVar20 < 5) {
        func_0x2c13aa2c((byte)uVar20,&uStack_d0);
        FUN_2c13e9dc(&puStack_98,0,0x7c);
        uStack_9c = uStack_d0;
        puStack_98 = puStack_cc;
        puStack_94 = puStack_c8;
        uStack_90 = uStack_c4;
        uStack_8c = uStack_c0;
        uStack_88 = uStack_bc;
        puStack_84 = puStack_b8;
        puStack_80 = puStack_b4;
        uStack_7c = uStack_b0;
        uStack_78 = uStack_ac;
        uStack_74 = uStack_a8;
        uStack_70 = uStack_a4;
        auStack_d4._0_2_ = 0x31;
        uStack_6c = (undefined1)uStack_a0;
        puVar13 = (uint *)FUN_2c139360(0x26,&uStack_9c,auStack_d4);
      }
      if (*_DAT_2c13d8b8 == iVar15) {
        return puVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c13424c();
    }
    goto LAB_2c13dc72;
  }
  if (param_1 == '\'') {
    uStack_a4 = 0;
    FUN_2c13e9dc(&uStack_a0,0,0x7c);
    uVar20 = *param_2;
    uStack_c0 = param_2[1];
    uStack_bc = param_2[2];
    puStack_b8 = (undefined4 *)param_2[3];
    uStack_a8 = param_2[7];
    puVar13 = (uint *)param_2[4];
    uStack_b0 = param_2[5];
    uStack_ac = param_2[6];
    uStack_c4._1_1_ = (byte)(uVar20 >> 8);
    bVar4 = uStack_c4._1_1_ < 5;
    uStack_c4 = uVar20;
    puStack_b4 = puVar13;
    if ((bVar4) && (puVar13 = (uint *)FUN_2c13a904(&uStack_c4), *(byte *)((int)param_2 + 3) == 1)) {
      puStack_c8 = (uint *)CONCAT22(puStack_c8._2_2_,0x20);
      uStack_d0 = CONCAT31(uStack_d0._1_3_,0x27);
      uStack_a4 = uStack_c4;
      uStack_a0 = uStack_c0;
      uStack_9c = uStack_bc;
      puStack_98 = puStack_b8;
      puStack_94 = puStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      uStack_88 = uStack_a8;
      puStack_cc = &uStack_a4;
      puVar13 = (uint *)FUN_2c139360(uStack_d0,&uStack_a4,puStack_c8);
    }
    goto LAB_2c13d94c;
  }
  if (param_1 == ',') {
    uVar19 = (uint)*(byte *)((int)param_2 + 2);
    uVar20 = (uint)(byte)*param_2;
    uVar16 = (uint)*(byte *)((int)param_2 + 1);
    if (uVar19 == 0) {
      if (*_DAT_2c13db90 != iStack_24) goto LAB_2c13dc72;
      if ((2 < uVar16) || (4 < uVar20)) {
        uStack_20 = _DAT_2c13ab7c;
        puVar13 = (uint *)FUN_2c135988(4,0xc4,_DAT_2c13ab84,_DAT_2c13ab80);
        return puVar13;
      }
      uStack_20 = _DAT_2c13ab88;
      FUN_2c135988(4,199,_DAT_2c13ab84,_DAT_2c13ab80);
      FUN_2c13f29c(*puVar5,0xffffffff);
      if (uVar16 == 1) {
        _DAT_2c13ab90[1] = 0;
      }
      else if (uVar16 == 2) {
        _DAT_2c13ab90[2] = 0;
      }
      else {
        *_DAT_2c13ab90 = 0;
      }
      if ((*(char *)(_DAT_2c13ab94 + uVar20 * 0xc + 4) != '\0') &&
         (pcVar17 = *(code **)(*(int *)(_DAT_2c13ab94 + uVar20 * 0xc) + 0x18),
         pcVar17 != (code *)0x0)) {
        (*pcVar17)(uVar16,0);
      }
      puVar13 = (uint *)*puVar5;
      goto FUN_2c13f2d8;
    }
    if (uVar19 != 1) {
      puVar13 = (uint *)FUN_2c135988(1,0x114,_DAT_2c13dbac,_DAT_2c13dba8,_DAT_2c13dbb4,uVar19);
      goto LAB_2c13d94c;
    }
    if (*_DAT_2c13dc78 != iStack_24) goto LAB_2c13dc72;
    if ((2 < uVar16) || (4 < uVar20)) {
      uStack_38 = _DAT_2c13ac4c;
      uStack_34 = uVar16;
      puVar13 = (uint *)FUN_2c135988(4,0xe6,_DAT_2c13ac54,_DAT_2c13ac50);
      return puVar13;
    }
    iStack_24 = _DAT_2c13dc7c;
    uStack_28 = (uint)*(byte *)(_DAT_2c13ac60 + uVar20 * 0xc + 4);
    uStack_38 = _DAT_2c13ac58;
    uStack_34 = uVar20;
    uStack_30 = uVar16;
    uStack_2c = uVar19;
    uStack_20 = unaff_r4;
    FUN_2c135988(4,0xea,_DAT_2c13ac54,_DAT_2c13ac50);
    FUN_2c13f29c(*puVar6,0xffffffff);
    if (uVar16 == 1) {
      if (iVar11 != 0) {
        _DAT_2c13ac5c[1] = iVar11;
        goto LAB_2c13ac10;
      }
    }
    else if (uVar16 == 2) {
      if (iVar11 != 0) {
        _DAT_2c13ac5c[2] = iVar11;
LAB_2c13ac10:
        if ((*(char *)(iVar15 + uVar20 * 0xc + 4) != '\0') &&
           (pcVar17 = *(code **)(*(int *)(iVar15 + uVar20 * 0xc) + 0x18), pcVar17 != (code *)0x0)) {
          (*pcVar17)(uVar16,1);
        }
      }
    }
    else if (iVar11 != 0) {
      *_DAT_2c13ac5c = iVar11;
      goto LAB_2c13ac10;
    }
    puVar13 = (uint *)*puVar6;
FUN_2c13f2d8:
    FUN_2c13eeb8();
    uVar20 = 0;
    bVar4 = (bool)isCurrentModePrivileged();
    if (bVar4) {
      uVar20 = getCurrentExceptionNumber();
      uVar20 = uVar20 & 0x1ff;
    }
    if (uVar20 == 0) {
      iVar15 = 0;
      bVar4 = (bool)isCurrentModePrivileged();
      if (bVar4) {
        iVar15 = isIRQinterruptsEnabled();
      }
      if (iVar15 == 0) {
        iVar15 = 0;
        bVar4 = (bool)isCurrentModePrivileged();
        if (bVar4) {
          iVar15 = getBasePriority();
        }
        if (iVar15 == 0) {
          software_interrupt(0);
          return puVar13;
        }
      }
    }
    FUN_2c13ee98(puVar13,0xfffffffa);
    return (uint *)0xfffffffa;
  }
  if (param_1 == '\x17') {
    if (uVar20 == 0x80) {
      FUN_2c13e7f0(_DAT_2c13dbbc,param_2,0x80);
      puVar14 = (uint *)*_DAT_2c13dbc0;
      puVar13 = (uint *)0x0;
      if (puVar14 != (uint *)0x0) {
        if (*_DAT_2c13db90 == iStack_24) {
          func_0x2c13eee0();
          uVar20 = 0;
          bVar4 = (bool)isCurrentModePrivileged();
          if (bVar4) {
            uVar20 = getCurrentExceptionNumber();
            uVar20 = uVar20 & 0x1ff;
          }
          if (uVar20 == 0) {
            iVar15 = 0;
            bVar4 = (bool)isCurrentModePrivileged();
            if (bVar4) {
              iVar15 = isIRQinterruptsEnabled();
            }
            if (iVar15 == 0) {
              iVar15 = 0;
              bVar4 = (bool)isCurrentModePrivileged();
              if (bVar4) {
                iVar15 = getBasePriority();
              }
              if (iVar15 == 0) {
                software_interrupt(0);
                return puVar14;
              }
            }
          }
          if ((puVar14 == (uint *)0x0) || ((char)*puVar14 != -10)) {
            FUN_2c13eec0(puVar14,0xfffffffc);
            return (uint *)0xfffffffc;
          }
          puVar13 = puVar14 + 3;
          do {
            ExclusiveAccess(puVar13);
            uVar3 = (ushort)*puVar13;
            if (*(ushort *)((int)puVar14 + 0xe) <= uVar3) {
              ClearExclusiveLocal();
              goto LAB_2c141ab8;
            }
            bVar4 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar4);
          *(ushort *)puVar13 = uVar3 + 1;
LAB_2c141ab8:
          if (uVar3 < *(ushort *)((int)puVar14 + 0xe)) {
            FUN_2c1415e0(puVar14);
            func_0x2c13eee4(puVar14,(short)puVar14[3]);
            return (uint *)0x0;
          }
          FUN_2c13eec0(puVar14,0xffffffef);
          return (uint *)0xfffffffd;
        }
        goto LAB_2c13dc72;
      }
    }
    else {
      puVar13 = (uint *)FUN_2c135988(4,0x11a,_DAT_2c13dbac,_DAT_2c13dba8,_DAT_2c13dbb8,uVar20,0x80);
    }
    goto LAB_2c13d94c;
  }
  if (param_1 == '\x18') {
    if (*_DAT_2c13db90 == iStack_24) {
      iVar15 = *_DAT_2c13af94;
      if (*_DAT_2c13af90 == '\0') {
        puVar13 = (uint *)func_0x2c13ae60(&stack0xffffffec,0);
      }
      if (*_DAT_2c13af94 == iVar15) {
        return puVar13;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c13424c();
    }
    goto LAB_2c13dc72;
  }
  if (param_1 == '+') {
    uVar12 = FUN_2c13a9d8((byte)*param_2);
    puStack_cc = (undefined4 *)(auStack_d4 + 3);
    uStack_d0 = CONCAT31(uStack_d0._1_3_,0x2b);
    puStack_c8 = (uint *)CONCAT22(puStack_c8._2_2_,1);
    auStack_d4[3] = uVar12;
    puVar13 = (uint *)FUN_2c139360(uStack_d0,puStack_cc,puStack_c8);
    goto LAB_2c13d94c;
  }
  if (param_1 == 'x') {
    if (*_DAT_2c13db90 == iStack_24) {
      bVar1 = (byte)*param_2;
      if ((uint *)(uint)bVar1 < (uint *)0x5) {
        *_DAT_2c13ad10 = bVar1;
      }
      return (uint *)(uint)bVar1;
    }
    goto LAB_2c13dc72;
  }
  if (param_1 != ')') goto LAB_2c13d94c;
  FUN_2c13e9dc(_DAT_2c13dc80,0,0x15c);
  puVar13 = _DAT_2c13dc80;
  if (*_DAT_2c13dc78 != iStack_24) goto LAB_2c13dc72;
  if ((_DAT_2c13dc80 <= param_2) || (0x15b < (uint)((int)_DAT_2c13dc80 - (int)param_2))) {
    puVar21 = (uint *)(-(int)_DAT_2c13dc80 & 3);
    uVar20 = (int)param_2 - (int)_DAT_2c13dc80;
    uVar16 = 0x15c - (int)puVar21;
    puVar14 = _DAT_2c13dc80;
    puVar18 = _DAT_2c13dc80;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(puVar21) {
    case (uint *)0x3:
      puVar14 = (uint *)((int)_DAT_2c13dc80 + 1);
      *(byte *)_DAT_2c13dc80 = *(byte *)((int)_DAT_2c13dc80 + uVar20);
    case (uint *)0x2:
      puVar18 = (uint *)((int)puVar14 + 1);
      *(byte *)puVar14 = *(byte *)((int)puVar14 + uVar20);
    case (uint *)0x1:
      puVar14 = (uint *)((int)puVar18 + 1);
      *(byte *)puVar18 = *(byte *)((int)puVar18 + uVar20);
      break;
    case (uint *)0xbad1abe1bad1abe1:
      while( true ) {
        *puVar14 = uVar20;
        puVar14[1] = uVar20;
        puVar14[2] = uVar20;
        puVar14[3] = uVar20;
        puVar14[4] = uVar20;
        puVar14[5] = uVar20;
        puVar14[6] = uVar20;
        puVar14[7] = uVar20;
        puVar14[8] = uVar20;
        if (puVar21 == puVar14 + 9) break;
        puVar14[9] = uVar20;
        puVar14[10] = uVar20;
        puVar14[0xb] = uVar20;
        puVar14[0xc] = uVar20;
        puVar14[0xd] = uVar20;
        puVar18 = puVar14 + 0xf;
        puVar14[0xe] = uVar20;
        puVar14 = puVar14 + 0x10;
        *puVar18 = uVar20;
      }
      return puVar13;
    }
    if (uVar16 == 0) {
      return puVar13;
    }
    if (3 < uVar16) {
      puVar21 = puVar14 + (uVar16 >> 2);
      puVar18 = puVar14;
      switch(uVar16 >> 2 & 0xf) {
      case 1:
        goto code_r0x2c13e9aa;
      case 2:
        goto code_r0x2c13e9a4;
      case 3:
        goto code_r0x2c13e99e;
      case 4:
        goto code_r0x2c13e998;
      case 5:
        goto code_r0x2c13e992;
      case 6:
        goto code_r0x2c13e98c;
      case 7:
        goto code_r0x2c13e986;
      case 8:
        goto code_r0x2c13e980;
      case 9:
        goto code_r0x2c13e97a;
      case 10:
        goto code_r0x2c13e974;
      case 0xb:
        goto code_r0x2c13e96e;
      case 0xc:
        goto code_r0x2c13e968;
      case 0xd:
        goto code_r0x2c13e962;
      case 0xe:
        goto code_r0x2c13e95c;
      case 0xf:
        goto code_r0x2c13e956;
      }
      do {
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e956:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e95c:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e962:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e968:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e96e:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e974:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e97a:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e980:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e986:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e98c:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e992:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e998:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e99e:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
code_r0x2c13e9a4:
        puVar18 = puVar14 + 1;
        *puVar14 = *(uint *)((int)puVar14 + uVar20);
code_r0x2c13e9aa:
        puVar14 = puVar18 + 1;
        *puVar18 = *(uint *)((int)puVar18 + uVar20);
      } while (puVar21 != puVar14);
      uVar16 = uVar16 & 3;
      if (uVar16 == 0) {
        return puVar13;
      }
    }
    *puVar14 = (*puVar14 ^ *(uint *)((int)puVar14 + uVar20)) & -1 << ((uVar16 & 0x1f) << 3) ^
               *(uint *)((int)puVar14 + uVar20);
    return puVar13;
  }
  puVar21 = (uint *)((int)_DAT_2c13dc80 + 0x15b);
  iVar15 = (int)param_2 - (int)_DAT_2c13dc80;
  uVar20 = 0x15c - ((uint)(_DAT_2c13dc80 + 0x57) & 3);
  puVar14 = puVar21;
  puVar18 = puVar21;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uint)(_DAT_2c13dc80 + 0x57) & 3) {
  case 3:
    puVar18 = (uint *)((int)_DAT_2c13dc80 + 0x15a);
    *(byte *)puVar21 = *(byte *)((int)puVar21 + iVar15);
  case 2:
    puVar14 = (uint *)((int)puVar18 + -1);
    *(byte *)puVar18 = *(byte *)((int)puVar18 + iVar15);
  case 1:
    puVar21 = (uint *)((int)puVar14 + -1);
    *(byte *)puVar14 = *(byte *)((int)puVar14 + iVar15);
    break;
  case 0xbad1abe1bad1abe1:
    puVar13 = (uint *)((int)_DAT_2c13dc80 << 8);
    goto code_r0x2c13e8ce;
  }
  if (uVar20 != 0) {
    puVar21 = (uint *)((uint)puVar21 & 0xfffffffc);
    if (3 < uVar20) {
      puVar18 = puVar21 + -(uVar20 >> 2);
      puVar14 = puVar21;
      switch(uVar20 >> 2 & 0xf) {
      case 1:
        goto code_r0x2c13e8ba;
      case 2:
        goto code_r0x2c13e8b4;
      case 3:
        goto code_r0x2c13e8ae;
      case 4:
        goto code_r0x2c13e8a8;
      case 5:
        goto code_r0x2c13e8a2;
      case 6:
        goto code_r0x2c13e89c;
      case 7:
        goto code_r0x2c13e896;
      case 8:
        goto code_r0x2c13e890;
      case 9:
        goto code_r0x2c13e88a;
      case 10:
        goto code_r0x2c13e884;
      case 0xb:
        goto code_r0x2c13e87e;
      case 0xc:
        goto code_r0x2c13e878;
      case 0xd:
        goto code_r0x2c13e872;
      case 0xe:
        goto code_r0x2c13e86c;
      case 0xf:
        goto code_r0x2c13e866;
      }
      do {
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e866:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e86c:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e872:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e878:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e87e:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e884:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e88a:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e890:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e896:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e89c:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e8a2:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e8a8:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e8ae:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
code_r0x2c13e8b4:
        puVar14 = puVar21 + -1;
        *puVar21 = *(uint *)((int)puVar21 + iVar15);
code_r0x2c13e8ba:
        puVar21 = puVar14 + -1;
        *puVar14 = *(uint *)((int)puVar14 + iVar15);
      } while (puVar18 != puVar21);
      if (((uint)puVar13 & 3) == 0) {
        return puVar13;
      }
    }
    uVar20 = -(int)puVar13;
code_r0x2c13e8ce:
    *puVar21 = (*puVar21 ^ *(uint *)((int)puVar21 + iVar15)) & 0xffffffffU >> ((uVar20 & 3) << 3) ^
               *(uint *)((int)puVar21 + iVar15);
  }
  return puVar13;
}

