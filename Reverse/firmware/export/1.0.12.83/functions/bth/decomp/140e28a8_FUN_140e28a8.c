/* FUN_140e28a8 @ 0x140e28a8 */

char * FUN_140e28a8(int param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5,
                   int *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  char *pcVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  ulonglong in_d0;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_80;
  char *local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_5c;
  uint local_58;
  char *local_44;
  int local_40;
  int local_3c [2];
  
  uVar29 = (uint)in_d0;
  uVar23 = (uint)(in_d0 >> 0x20);
  uVar22 = uVar29;
  uVar27 = uVar23;
  local_68 = param_2;
  local_5c = param_3;
  if (*(int *)(param_1 + 0x24) != 0) goto LAB_140e28ea;
  puVar6 = (uint *)FUN_140db6f0(0x10);
  *(uint **)(param_1 + 0x24) = puVar6;
  uVar12 = 0;
  if (puVar6 != (uint *)0x0) goto LAB_140e28e2;
  uVar10 = 0xea;
  uVar25 = DAT_140e2b78;
LAB_140e28dc:
  puVar6 = (uint *)FUN_140da8c8(DAT_140e2b7c,uVar10,0,uVar25);
LAB_140e28e2:
  puVar6[1] = uVar12;
  puVar6[2] = uVar12;
  *puVar6 = uVar12;
  puVar6[3] = uVar12;
LAB_140e28ea:
  iVar11 = **(int **)(param_1 + 0x24);
  if (iVar11 != 0) {
    uVar12 = (*(int **)(param_1 + 0x24))[1];
    *(uint *)(iVar11 + 4) = uVar12;
    *(int *)(iVar11 + 8) = 1 << (uVar12 & 0xff);
    FUN_140e0664(param_1);
    **(undefined4 **)(param_1 + 0x24) = 0;
  }
  uVar12 = DAT_140e2b80;
  if ((int)uVar23 < 0) {
    uVar27 = uVar23 & 0x7fffffff;
    *param_5 = 1;
  }
  else {
    *param_5 = 0;
    uVar12 = DAT_140e2b80;
  }
  uVar33 = CONCAT44(uVar27,uVar29);
  uVar32 = CONCAT44(uVar27,uVar29);
  if ((uVar12 & ~uVar27) == 0) {
    *param_4 = 9999;
    if ((uVar27 & 0xfffff) == 0 && uVar22 == 0) {
      if (param_6 == (int *)0x0) {
        return DAT_140e347c;
      }
      local_7c = DAT_140e2b88;
      pcVar14 = DAT_140e2b88 + 8;
    }
    else {
      if (param_6 == (int *)0x0) {
        return DAT_140e2b84;
      }
      local_7c = DAT_140e2b84;
      pcVar14 = DAT_140e2b84 + 3;
    }
    *param_6 = (int)pcVar14;
    return local_7c;
  }
  iVar11 = FUN_140e3cd0(uVar29,uVar27,0,0);
  if (iVar11 != 0) {
    *param_4 = 1;
    iVar11 = DAT_140e2b8c;
    if (param_6 == (int *)0x0) {
      return DAT_140e3478;
    }
    *param_6 = DAT_140e2b8c;
    return (char *)(iVar11 + -1);
  }
  uVar23 = (uVar27 & 0x7fffffff) >> 0x14;
  uVar10 = FUN_140e0dc8(uVar29,param_1,local_3c,&local_40);
  if (uVar23 == 0) {
    iVar11 = local_40 + local_3c[0];
    iVar7 = iVar11 + 0x432;
    if (iVar7 < 0x21) {
      uVar22 = uVar22 << (0x20U - iVar7 & 0xff);
    }
    else {
      uVar22 = uVar22 >> (iVar11 + 0x412U & 0xff) | uVar27 << (0x40U - iVar7 & 0xff);
    }
    iVar11 = iVar11 + -1;
    uVar30 = FUN_140e370c(uVar22);
    uVar22 = (uint)uVar30;
    uVar23 = (int)((ulonglong)uVar30 >> 0x20) + 0xfe100000;
    bVar3 = true;
  }
  else {
    iVar11 = uVar23 - 0x3ff;
    uVar23 = uVar27 & 0xfffff | 0x3ff00000;
    bVar3 = false;
    uVar22 = uVar29;
  }
  uVar30 = FUN_140e3490(uVar22,uVar23,0,DAT_140e2b90);
  uVar30 = FUN_140e3800((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),DAT_140e2b60,DAT_140e2b64);
  uVar30 = FUN_140e3494((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),DAT_140e2b68,DAT_140e2b6c);
  uVar31 = FUN_140e372c(iVar11);
  uVar31 = FUN_140e3800((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),DAT_140e2b70,DAT_140e2b74);
  uVar30 = FUN_140e3494((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar31,
                        (int)((ulonglong)uVar31 >> 0x20));
  uVar23 = (uint)((ulonglong)uVar30 >> 0x20);
  local_80 = FUN_140e3d60();
  iVar7 = FUN_140e3ce4((int)uVar30,uVar23,0,0);
  if (iVar7 != 0) {
    uVar31 = FUN_140e372c(local_80);
    iVar7 = FUN_140e3cd0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),(int)uVar30,uVar23);
    if (iVar7 == 0) {
      local_80 = local_80 - 1;
    }
  }
  if (local_80 < 0x17) {
    puVar15 = (undefined4 *)(DAT_140e2b94 + local_80 * 8);
    iVar7 = FUN_140e3ce4(uVar29,uVar27,*puVar15,puVar15[1]);
    if (iVar7 == 0) {
      bVar2 = false;
    }
    else {
      local_80 = local_80 - 1;
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  local_6c = (local_40 - iVar11) + -1;
  if (local_6c < 0) {
    local_70 = 1 - (local_40 - iVar11);
    local_6c = 0;
  }
  else {
    local_70 = 0;
  }
  if ((int)local_80 < 0) {
    local_70 = local_70 - local_80;
    local_64 = -local_80;
    local_58 = 0;
  }
  else {
    local_6c = local_6c + local_80;
    local_58 = local_80;
    local_64 = 0;
  }
  if (9 < local_68) {
    uVar12 = 1;
    local_68 = 0;
switchD_140e2aa0_default:
    bVar13 = true;
    local_5c = 0;
    local_78 = 0xffffffff;
    local_74 = 0xffffffff;
    uVar16 = 0x12;
    goto LAB_140e2b30;
  }
  bVar13 = 5 < (int)local_68;
  if (bVar13) {
    local_68 = local_68 - 4;
  }
  uVar12 = (uint)!bVar13;
  switch(local_68) {
  case 2:
    bVar13 = false;
    break;
  case 3:
    bVar13 = false;
    goto LAB_140e2b1c;
  case 4:
    bVar13 = true;
    break;
  case 5:
    bVar13 = true;
LAB_140e2b1c:
    local_78 = local_80 + local_5c;
    local_74 = local_78 + 1;
    uVar16 = local_74;
    if ((int)local_74 < 1) {
      uVar16 = 1;
    }
    goto LAB_140e2b30;
  default:
    goto switchD_140e2aa0_default;
  }
  if ((int)local_5c < 1) {
    uVar16 = 1;
    local_5c = 1;
    local_78 = 1;
    local_74 = 1;
  }
  else {
    local_78 = local_5c;
    local_74 = local_5c;
    uVar16 = local_5c;
  }
LAB_140e2b30:
  iVar11 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar11 + 4) = 0;
  iVar7 = 4;
  while( true ) {
    uVar22 = iVar7 + 0x14;
    if (uVar16 < uVar22) break;
    iVar7 = iVar7 << 1;
    *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + 1;
  }
  pcVar14 = (char *)FUN_140e05e4(param_1);
  if (pcVar14 == (char *)0x0) {
    uVar10 = 0x1aa;
    param_5 = (undefined4 *)0x0;
    uVar25 = DAT_140e2b98;
    goto LAB_140e28dc;
  }
  **(undefined4 **)(param_1 + 0x24) = pcVar14;
  puVar15 = DAT_140e2ec4;
  uVar22 = local_80;
  if ((local_74 < 0xf) && (uVar12 != 0)) {
    if ((int)local_80 < 1) {
      if (local_80 == 0) {
        iVar11 = 2;
      }
      else {
        iVar11 = 2;
        iVar7 = (int)-local_80 >> 4;
        puVar18 = (undefined4 *)(DAT_140e2ec0 + (-local_80 & 0xf) * 8);
        uVar33 = FUN_140e3800(uVar29,uVar27,*puVar18,puVar18[1]);
        bVar1 = false;
        uVar32 = uVar33;
        while( true ) {
          if (iVar7 == 0) break;
          if (iVar7 << 0x1f < 0) {
            iVar11 = iVar11 + 1;
            uVar32 = FUN_140e3800((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),*puVar15,puVar15[1]);
            bVar1 = true;
          }
          iVar7 = iVar7 >> 1;
          puVar15 = puVar15 + 2;
        }
        if (bVar1) goto LAB_140e2c22;
      }
    }
    else {
      puVar17 = (undefined8 *)(DAT_140e2ec0 + (local_80 & 0xf) * 8);
      uVar33 = *puVar17;
      uVar30 = *puVar17;
      uVar23 = (int)local_80 >> 4;
      if ((int)(local_80 << 0x17) < 0) {
        uVar23 = uVar23 & 0xf;
        iVar11 = 3;
        uVar32 = FUN_140e3a54(uVar29,uVar27,DAT_140e2ec4[8],DAT_140e2ec4[9]);
        puVar15 = DAT_140e2ec4;
        uVar33 = uVar30;
      }
      else {
        iVar11 = 2;
      }
      while( true ) {
        uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
        if (uVar23 == 0) break;
        if ((int)(uVar23 << 0x1f) < 0) {
          iVar11 = iVar11 + 1;
          uVar33 = FUN_140e3800((int)uVar33,uVar25,*puVar15,puVar15[1]);
        }
        uVar23 = (int)uVar23 >> 1;
        puVar15 = puVar15 + 2;
      }
      uVar32 = FUN_140e3a54((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar33,uVar25);
LAB_140e2c22:
      uVar33 = uVar32;
    }
    uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
    uVar23 = local_74;
    if (((bVar2) && (iVar7 = FUN_140e3ce4((int)uVar33,uVar25,0,DAT_140e2ec8), iVar7 != 0)) &&
       (local_74 != 0)) {
      if ((int)local_78 < 1) goto LAB_140e2d10;
      uVar33 = FUN_140e3800((int)uVar33,uVar25,0,DAT_140e2ecc);
      iVar11 = iVar11 + 1;
      uVar23 = local_78;
      uVar22 = local_80 - 1;
    }
    uVar26 = (undefined4)((ulonglong)uVar33 >> 0x20);
    uVar32 = FUN_140e372c(iVar11);
    uVar32 = FUN_140e3800((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar33,uVar26);
    uVar32 = FUN_140e3494((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,DAT_140e2ed0);
    iVar11 = (int)((ulonglong)uVar32 >> 0x20);
    uVar25 = (undefined4)uVar32;
    iVar7 = iVar11 + -0x3400000;
    if (uVar23 == 0) {
      uVar32 = FUN_140e3490((int)uVar33,uVar26,0,DAT_140e2ed4);
      uVar26 = (undefined4)((ulonglong)uVar32 >> 0x20);
      iVar7 = FUN_140e3d20((int)uVar32,uVar26,uVar25,iVar7);
      if (iVar7 == 0) {
        iVar11 = FUN_140e3ce4((int)uVar32,uVar26,uVar25,iVar11 + 0x7cc00000);
        if (iVar11 == 0) goto LAB_140e2d10;
        goto LAB_140e321a;
      }
      uVar27 = 0;
      uVar23 = 0;
      local_80 = uVar22;
LAB_140e2d5c:
      *pcVar14 = '1';
      local_80 = local_80 + 1;
      local_44 = pcVar14 + 1;
      uVar22 = uVar27;
      uVar12 = uVar23;
      goto LAB_140e31ea;
    }
    pcVar19 = pcVar14 + uVar23;
    iVar11 = DAT_140e2ec0 + uVar23 * 8;
    if (bVar13) {
      uVar32 = FUN_140e3a54(0,DAT_140e2ed8);
      uVar32 = FUN_140e3490((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),uVar25,iVar7);
      pcVar20 = pcVar14;
      while( true ) {
        uVar28 = (undefined4)((ulonglong)uVar32 >> 0x20);
        uVar24 = (undefined4)uVar32;
        uVar25 = (undefined4)((ulonglong)uVar33 >> 0x20);
        cVar4 = FUN_140e3d60((int)uVar33,uVar25);
        uVar32 = FUN_140e372c();
        uVar32 = FUN_140e3490((int)uVar33,uVar25,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
        uVar26 = (undefined4)((ulonglong)uVar32 >> 0x20);
        uVar25 = (undefined4)uVar32;
        local_44 = pcVar20 + 1;
        *pcVar20 = cVar4 + '0';
        iVar11 = FUN_140e3ce4(uVar25,uVar26,uVar24,uVar28);
        if (iVar11 != 0) goto LAB_140e2f48;
        uVar32 = FUN_140e3490(0,DAT_140e2ec8,uVar25,uVar26);
        iVar11 = FUN_140e3ce4((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),uVar24,uVar28);
        pcVar21 = local_44;
        if (iVar11 != 0) goto LAB_140e2f6e;
        if (local_44 == pcVar19) break;
        uVar32 = FUN_140e3800(uVar24,uVar28,0,DAT_140e2ecc);
        uVar33 = FUN_140e3800(uVar25,uVar26,0,DAT_140e2ecc);
        pcVar20 = local_44;
      }
      goto LAB_140e2d10;
    }
    uVar32 = FUN_140e3800(uVar25,iVar7,*(undefined4 *)(iVar11 + -8),*(undefined4 *)(iVar11 + -4));
    uVar25 = (undefined4)((ulonglong)uVar32 >> 0x20);
    pcVar20 = pcVar14;
    while( true ) {
      uVar26 = (undefined4)((ulonglong)uVar33 >> 0x20);
      cVar4 = FUN_140e3d60((int)uVar33,uVar26);
      uVar30 = FUN_140e372c();
      uVar33 = FUN_140e3490((int)uVar33,uVar26,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
      uVar24 = (undefined4)((ulonglong)uVar33 >> 0x20);
      uVar26 = (undefined4)uVar33;
      pcVar21 = pcVar20 + 1;
      *pcVar20 = cVar4 + '0';
      if (pcVar21 == pcVar19) break;
      uVar33 = FUN_140e3800(uVar26,uVar24,0,DAT_140e2ecc);
      pcVar20 = pcVar21;
    }
    uVar33 = FUN_140e3494((int)uVar32,uVar25,0,DAT_140e2ed8);
    iVar11 = FUN_140e3d20(uVar26,uVar24,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
    if (iVar11 != 0) goto LAB_140e2f6e;
    uVar32 = FUN_140e3490(0,DAT_140e2ed8,(int)uVar32,uVar25);
    iVar11 = FUN_140e3ce4(uVar26,uVar24,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
    if (iVar11 != 0) goto LAB_140e2ea2;
  }
LAB_140e2d10:
  if ((local_3c[0] < 0) || (0xe < (int)local_80)) {
    iVar7 = local_70;
    iVar11 = local_64;
    if (bVar13) {
      if ((int)local_68 < 2) {
        if (bVar3) {
          uVar22 = local_3c[0] + 0x433;
        }
        else {
          uVar22 = 0x36 - local_40;
        }
      }
      else {
        iVar8 = local_74 - 1;
        if (local_64 < iVar8) {
          iVar11 = 0;
          local_58 = local_58 + (iVar8 - local_64);
          local_64 = iVar8;
        }
        else {
          iVar11 = local_64 - iVar8;
        }
        uVar22 = local_74;
        if ((int)local_74 < 0) {
          uVar22 = 0;
          iVar7 = local_70 - local_74;
        }
      }
      local_70 = local_70 + uVar22;
      local_6c = local_6c + uVar22;
      uVar12 = FUN_140e086c(param_1,1);
    }
    else {
      uVar12 = 0;
    }
    if ((0 < iVar7) && (0 < local_6c)) {
      iVar8 = local_6c;
      if (iVar7 <= local_6c) {
        iVar8 = iVar7;
      }
      local_70 = local_70 - iVar8;
      iVar7 = iVar7 - iVar8;
      local_6c = local_6c - iVar8;
    }
    if (local_64 != 0) {
      if (bVar13) {
        if (0 < iVar11) {
          uVar12 = FUN_140e09e8(param_1,uVar12,iVar11);
          uVar25 = FUN_140e0898(param_1,uVar12,uVar10);
          FUN_140e0664(param_1,uVar10);
          uVar10 = uVar25;
        }
        local_64 = local_64 - iVar11;
        if (local_64 == 0) goto LAB_140e3048;
      }
      uVar10 = FUN_140e09e8(param_1,uVar10,local_64);
    }
LAB_140e3048:
    uVar22 = FUN_140e086c(param_1,1);
    if ((int)local_58 < 1) {
      if ((int)local_68 < 2) goto LAB_140e316c;
LAB_140e319e:
      param_5 = (undefined4 *)0x0;
LAB_140e3192:
      if (local_58 != 0) goto LAB_140e3070;
      iVar11 = 1;
    }
    else {
      uVar22 = FUN_140e09e8(param_1,uVar22,local_58);
      if ((int)local_68 < 2) {
LAB_140e316c:
        if ((uVar29 != 0) || ((uVar27 & 0xfffff) != 0)) goto LAB_140e319e;
        if ((uVar27 & 0x7ff00000) == 0) {
          param_5 = (undefined4 *)0x0;
        }
        else {
          param_5 = (undefined4 *)0x1;
          local_70 = local_70 + 1;
          local_6c = local_6c + 1;
        }
        goto LAB_140e3192;
      }
      param_5 = (undefined4 *)0x0;
LAB_140e3070:
      iVar11 = FUN_140e07cc(*(undefined4 *)(uVar22 + *(int *)(uVar22 + 0x10) * 4 + 0x10));
      iVar11 = 0x20 - iVar11;
    }
    uVar23 = iVar11 + local_6c & 0x1f;
    iVar11 = 0;
    if (uVar23 == 0) {
LAB_140e309a:
      iVar11 = iVar11 + 0x1c;
      iVar7 = iVar7 + iVar11;
      local_70 = local_70 + iVar11;
      local_6c = local_6c + iVar11;
    }
    else {
      iVar11 = 0x20 - uVar23;
      if (4 < iVar11) {
        iVar11 = -uVar23;
        goto LAB_140e309a;
      }
      if (iVar11 != 4) goto LAB_140e309a;
    }
    if (0 < local_70) {
      uVar10 = FUN_140e0a9c(param_1,uVar10,local_70);
    }
    if (0 < local_6c) {
      uVar22 = FUN_140e0a9c(param_1,uVar22,local_6c);
    }
    pcVar19 = pcVar14;
    if ((bVar2) && (iVar11 = FUN_140e0b7c(uVar10,uVar22), iVar11 < 0)) {
      local_80 = local_80 - 1;
      uVar10 = FUN_140e06a8(param_1,uVar10,10,0);
      if (bVar13) {
        uVar12 = FUN_140e06a8(param_1,uVar12,10,0);
        if ((0 < (int)local_78) || ((int)local_68 < 3)) goto LAB_140e3234;
      }
      else if ((0 < (int)local_78) || ((int)local_68 < 3)) goto LAB_140e33ca;
    }
    else {
      if ((0 < (int)local_74) || ((int)local_68 < 3)) {
        if (bVar13) {
          local_78 = local_74;
LAB_140e3234:
          uVar23 = uVar12;
          if (0 < iVar7) {
            uVar23 = FUN_140e0a9c(param_1,uVar12,iVar7);
          }
          uVar12 = uVar23;
          if (param_5 == (undefined4 *)0x0) goto LAB_140e327c;
          iVar11 = FUN_140e05e4(param_1,*(undefined4 *)(uVar23 + 4));
          if (iVar11 == 0) {
            uVar10 = 0x2ea;
            uVar12 = 0;
            uVar25 = DAT_140e3474;
            goto LAB_140e28dc;
          }
          FUN_140e5278(iVar11 + 0xc,uVar23 + 0xc,(*(int *)(uVar23 + 0x10) + 2) * 4);
          uVar12 = FUN_140e0a9c(param_1,iVar11,1);
LAB_140e327c:
LAB_140e3294:
          local_44 = pcVar19 + 1;
          iVar11 = FUN_140e2780(uVar10,uVar22);
          uVar27 = iVar11 + 0x30;
          iVar7 = FUN_140e0b7c(uVar10,uVar23);
          iVar8 = FUN_140e0bb4(param_1,uVar22,uVar12);
          if (*(int *)(iVar8 + 0xc) == 0) {
            iVar9 = FUN_140e0b7c(uVar10,iVar8);
          }
          else {
            iVar9 = 1;
          }
          FUN_140e0664(param_1,iVar8);
          if ((in_d0 & 1) == 0 && (local_68 == 0 && iVar9 == 0)) {
            if (uVar27 == 0x39) {
LAB_140e3346:
              *pcVar19 = '9';
              pcVar19 = local_44;
              goto LAB_140e334e;
            }
            if (0 < iVar7) {
LAB_140e32f6:
              uVar27 = iVar11 + 0x31;
            }
LAB_140e32fc:
            *pcVar19 = (char)uVar27;
            goto LAB_140e31ee;
          }
          if ((iVar7 < 0) || ((iVar7 == 0 && local_68 == 0) && (in_d0 & 1) == 0)) {
            if (0 < iVar9) {
              uVar10 = FUN_140e0a9c(param_1,uVar10,1);
              iVar7 = FUN_140e0b7c(uVar10,uVar22);
              if ((0 < iVar7) || ((iVar7 == 0 && ((uVar27 & 1) != 0)))) {
                if (uVar27 != 0x39) goto LAB_140e32f6;
                goto LAB_140e3346;
              }
            }
            goto LAB_140e32fc;
          }
          if (0 < iVar9) {
            if (uVar27 == 0x39) goto LAB_140e3346;
            *pcVar19 = (char)uVar27 + '\x01';
            goto LAB_140e31ee;
          }
          *pcVar19 = (char)uVar27;
          if (local_44 != pcVar14 + local_78) {
            uVar10 = FUN_140e06a8(param_1,uVar10,10,0);
            pcVar19 = local_44;
            if (uVar23 == uVar12) {
              uVar12 = FUN_140e06a8(param_1,uVar23,10,0);
              uVar23 = uVar12;
            }
            else {
              uVar23 = FUN_140e06a8(param_1,uVar23,10,0);
              uVar12 = FUN_140e06a8(param_1,uVar12,10,0);
            }
            goto LAB_140e3294;
          }
        }
        else {
          local_78 = local_74;
LAB_140e33ca:
          while( true ) {
            iVar11 = FUN_140e2780(uVar10,uVar22);
            uVar27 = iVar11 + 0x30;
            *pcVar19 = (char)uVar27;
            if ((int)local_78 <= (int)(pcVar19 + 1) - (int)pcVar14) break;
            uVar10 = FUN_140e06a8(param_1,uVar10,10,0);
            pcVar19 = pcVar19 + 1;
          }
          uVar23 = 0;
          if ((int)local_78 < 1) {
            local_78 = 1;
          }
          local_44 = pcVar14 + local_78;
        }
        uVar10 = FUN_140e0a9c(param_1,uVar10,1);
        iVar11 = FUN_140e0b7c(uVar10,uVar22);
        pcVar19 = local_44;
        if ((iVar11 < 1) && ((iVar11 != 0 || ((uVar27 & 1) == 0)))) {
          do {
            local_44 = pcVar19;
            pcVar19 = local_44 + -1;
          } while (local_44[-1] == '0');
        }
        else {
LAB_140e334e:
          do {
            local_44 = pcVar19;
            pcVar19 = local_44 + -1;
            if (local_44[-1] != '9') {
              *pcVar19 = local_44[-1] + '\x01';
              goto LAB_140e31ee;
            }
          } while (pcVar14 != pcVar19);
          local_80 = local_80 + 1;
          *pcVar14 = '1';
        }
LAB_140e31ee:
        FUN_140e0664(param_1,uVar22);
        uVar22 = local_80;
        if (uVar12 != 0) {
          if ((uVar23 != 0) && (uVar23 != uVar12)) {
            FUN_140e0664(param_1,uVar23);
          }
          FUN_140e0664(param_1,uVar12);
        }
        goto LAB_140e2f48;
      }
      local_78 = local_74;
    }
    if (local_78 == 0) {
      uVar22 = FUN_140e06a8(param_1,uVar22,5);
      iVar11 = FUN_140e0b7c(uVar10,uVar22);
      uVar27 = uVar22;
      uVar23 = uVar12;
      if (0 < iVar11) goto LAB_140e2d5c;
    }
  }
  else {
    puVar15 = (undefined4 *)(DAT_140e2ec0 + local_80 * 8);
    uVar25 = *puVar15;
    uVar26 = puVar15[1];
    pcVar19 = pcVar14;
    uVar32 = CONCAT44(uVar27,uVar29);
    if ((-1 < (int)local_5c) || (uVar32 = CONCAT44(uVar27,uVar29), 0 < (int)local_74))
    goto LAB_140e2ee2;
    if (local_74 == 0) {
      uVar32 = FUN_140e3800(uVar25,uVar26,0,DAT_140e2ed4);
      iVar11 = FUN_140e3d0c((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),uVar29,uVar27);
      uVar22 = 0;
      uVar27 = 0;
      uVar12 = 0;
      uVar23 = 0;
      if (iVar11 == 0) goto LAB_140e2d5c;
    }
    else {
LAB_140e321a:
      uVar22 = 0;
      uVar12 = uVar22;
    }
  }
  local_80 = ~local_5c;
  local_44 = pcVar14;
LAB_140e31ea:
  uVar23 = 0;
  goto LAB_140e31ee;
LAB_140e2ea2:
  do {
    local_44 = pcVar19;
    pcVar19 = local_44 + -1;
  } while (local_44[-1] == '0');
  goto LAB_140e2f48;
  while( true ) {
    uVar32 = FUN_140e3800(uVar24,uVar28,0,DAT_140e3224);
    iVar11 = FUN_140e3cd0((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0);
    pcVar19 = local_44;
    uVar22 = local_80;
    if (iVar11 != 0) break;
LAB_140e2ee2:
    uVar24 = (undefined4)((ulonglong)uVar32 >> 0x20);
    FUN_140e3a54((int)uVar32,uVar24,uVar25,uVar26);
    bVar5 = FUN_140e3d60();
    uVar33 = FUN_140e372c();
    uVar33 = FUN_140e3800((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),uVar25,uVar26);
    uVar32 = FUN_140e3490((int)uVar32,uVar24,(int)uVar33,(int)((ulonglong)uVar33 >> 0x20));
    uVar28 = (undefined4)((ulonglong)uVar32 >> 0x20);
    uVar24 = (undefined4)uVar32;
    local_44 = pcVar19 + 1;
    *pcVar19 = bVar5 + 0x30;
    if (local_74 == (int)local_44 - (int)pcVar14) {
      uVar32 = FUN_140e3494(uVar24,uVar28,uVar24,uVar28);
      uVar24 = (undefined4)((ulonglong)uVar32 >> 0x20);
      iVar11 = FUN_140e3d20((int)uVar32,uVar24,uVar25,uVar26);
      pcVar21 = local_44;
      uVar22 = local_80;
      if ((iVar11 != 0) ||
         ((iVar11 = FUN_140e3cd0((int)uVar32,uVar24,uVar25,uVar26), iVar11 != 0 &&
          ((bVar5 & 1) != 0)))) goto LAB_140e2f6e;
      break;
    }
  }
  goto LAB_140e2f48;
  while (pcVar14 != pcVar21) {
LAB_140e2f6e:
    local_44 = pcVar21;
    pcVar21 = local_44 + -1;
    if (*pcVar21 != '9') goto LAB_140e2f86;
  }
  uVar22 = uVar22 + 1;
  *pcVar14 = '0';
LAB_140e2f86:
  *pcVar21 = *pcVar21 + '\x01';
LAB_140e2f48:
  local_80 = uVar22;
  FUN_140e0664(param_1,uVar10);
  *local_44 = '\0';
  *param_4 = local_80 + 1;
  if (param_6 != (int *)0x0) {
    *param_6 = (int)local_44;
  }
  return pcVar14;
}

