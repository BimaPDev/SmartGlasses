/* FUN_10101aec @ 0x10101aec */

int * FUN_10101aec(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  ushort *puVar25;
  int *piVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  byte *pbVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  undefined4 uVar44;
  int iVar45;
  char cVar46;
  int iVar47;
  int iVar48;
  undefined1 *puVar49;
  int iVar50;
  uint uVar51;
  uint uVar52;
  byte bVar53;
  bool bVar54;
  int *local_240;
  int *local_238;
  int *local_234;
  int *local_22c;
  int *local_218;
  int *local_214;
  int *local_20c;
  int *local_208;
  ushort *local_204;
  int *local_200;
  int *local_1fc;
  int local_1f8;
  int *local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined2 local_1e8;
  int local_1e4;
  int *local_1d0;
  undefined1 *local_1cc;
  byte *local_1c8;
  int *local_1bc;
  int *local_198;
  int *local_194;
  int *local_190;
  int *local_18c;
  undefined4 local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int local_178;
  int *local_174;
  undefined1 auStack_170 [4];
  undefined4 local_16c;
  uint local_168;
  ushort local_164;
  int *local_160;
  int local_15c;
  uint local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  int *local_144;
  int local_140;
  uint local_13c;
  ushort local_138 [2];
  int *local_134;
  int local_130;
  int *local_12c [64];
  
  uVar34 = *param_4;
  uVar44 = *(undefined4 *)(param_1 + 0x1c);
  local_198 = (int *)0x0;
  local_198 = (int *)FUN_100fb104(param_1,DAT_10101e14,auStack_170);
  if (local_198 != (int *)0x0) {
    return local_198;
  }
  if ((((local_16c == DAT_10101e18) || (local_168 != *(uint *)(param_1 + 4))) ||
      (uVar30 = (uint)local_164, uVar30 == 0)) || (local_168 <= uVar30 * 0x14 + 0x30))
  goto LAB_10101d18;
  if (local_158 == 0) {
    if (local_150 != 0 || local_154 != 0) goto LAB_10101d18;
LAB_10101b60:
    if (local_168 <= local_158) goto LAB_10101d18;
  }
  else {
    if (local_154 == 0) goto LAB_10101b60;
    if (((local_150 == 0) || (local_168 <= local_158)) || (local_168 - local_158 < local_154))
    goto LAB_10101d18;
  }
  if (local_14c == 0) {
    if (local_148 != 0) {
LAB_10101d18:
      return (int *)&NMI;
    }
  }
  else if ((local_168 <= local_14c) || (local_168 - local_14c < local_148)) goto LAB_10101d18;
  local_130 = 0;
  pbVar8 = (byte *)FUN_100fb280(uVar44,0x20,0,uVar30,0,&local_198);
  if (local_198 != (int *)0x0) {
    local_234 = (int *)0x0;
    piVar9 = (int *)0x0;
    piVar11 = (int *)0x0;
    local_240 = (int *)0x0;
    local_22c = (int *)0x0;
    goto LAB_10101c8a;
  }
  local_22c = (int *)FUN_100fb280(uVar44,4,0,local_164,0,&local_198);
  if (local_198 != (int *)0x0) goto LAB_10101e44;
  uVar30 = 0;
  if (local_164 != 0) {
    local_238 = local_22c + -1;
    iVar47 = 0;
    uVar31 = 0;
    pbVar40 = pbVar8;
    do {
      bVar5 = FUN_100fb024(param_1,&local_198);
      local_240 = local_198;
      uVar42 = (uint)bVar5;
      *pbVar40 = bVar5;
      if (local_198 != (int *)0x0) goto LAB_10101e44;
      if ((uVar42 & 0x3f) == 0x3f) {
        piVar9 = (int *)FUN_100fb0bc(param_1,&local_198);
        *(int **)(pbVar40 + 4) = piVar9;
        if (local_198 != (int *)0x0) {
          piVar9 = (int *)0x0;
          piVar11 = (int *)0x0;
          local_234 = (int *)0x0;
          goto LAB_10101c8a;
        }
        uVar42 = (uint)*pbVar40;
      }
      else {
        FUN_1011ea40(local_12c,DAT_10101e1c,0xfc);
        piVar9 = local_12c[uVar42 & 0x3f];
        *(int **)(pbVar40 + 4) = piVar9;
        if (piVar9 == (int *)0x0) goto LAB_10101fe0;
      }
      uVar42 = uVar42 >> 6;
      if ((piVar9 == DAT_10101e20) || (piVar9 == (int *)((int)DAT_10101e20 + 0x502e9fb))) {
        if (uVar42 == 0) {
          uVar19 = 0x100;
        }
        else {
          uVar19 = 0;
        }
      }
      else if (uVar42 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0x100;
      }
      uVar35 = 0;
      local_12c[0] = (int *)0x0;
      iVar39 = 0;
      while( true ) {
        uVar30 = FUN_100fb024(param_1,local_12c);
        piVar9 = local_12c[0];
        if (local_12c[0] != (int *)0x0) goto LAB_10101c82;
        if ((iVar39 == 0) && ((uVar30 & 0xff) == 0x80)) goto LAB_10101c7a;
        uVar20 = uVar35 & 0xfe000000;
        iVar39 = iVar39 + 1;
        uVar35 = uVar30 & 0x7f | uVar35 << 7;
        if (uVar20 != 0) goto LAB_10101c7a;
        if (-1 < (int)uVar30) break;
        if (iVar39 == 5) goto LAB_10101c7a;
      }
      *(uint *)(pbVar40 + 8) = uVar35;
      *(uint *)(pbVar40 + 0xc) = uVar35;
      if ((int)((uVar42 | uVar19) << 0x17) < 0) {
        iVar39 = 0;
        uVar35 = 0;
        local_198 = (int *)0x0;
        local_12c[0] = (int *)0x0;
LAB_10101d94:
        uVar30 = FUN_100fb024(param_1,local_12c);
        iVar36 = DAT_10101e24;
        piVar21 = local_12c[0];
        if (local_12c[0] != (int *)0x0) goto LAB_10101dc6;
        if ((iVar39 == 0) && ((uVar30 & 0xff) == 0x80)) goto LAB_10101dc0;
        uVar20 = uVar35 & 0xfe000000;
        iVar39 = iVar39 + 1;
        uVar35 = uVar30 & 0x7f | uVar35 << 7;
        if (uVar20 != 0) goto LAB_10101dc0;
        if ((int)uVar30 < 0) goto code_r0x10101dbc;
        *(uint *)(pbVar40 + 0xc) = uVar35;
        if (*(int *)(pbVar40 + 4) != iVar36) goto LAB_10101d5a;
        uVar20 = uVar31;
        if (uVar35 != 0) goto LAB_10101fe0;
      }
      else {
LAB_10101d5a:
        uVar20 = uVar35 + uVar31;
        if (CARRY4(uVar35,uVar31)) goto LAB_10101c7a;
      }
      local_198 = (int *)0x0;
      uVar30 = (uint)local_164;
      iVar47 = iVar47 + 1;
      *(uint *)(pbVar40 + 0x14) = uVar31;
      *(uint *)(pbVar40 + 0x18) = uVar35;
      *(uint *)(pbVar40 + 0x10) = uVar42 | uVar19;
      local_238 = local_238 + 1;
      *local_238 = (int)pbVar40;
      pbVar40 = pbVar40 + 0x20;
      uVar31 = uVar20;
    } while (iVar47 < (int)uVar30);
  }
  uVar31 = *(uint *)(local_22c[uVar30 + 0x3fffffff] + 0x14);
  uVar30 = *(uint *)(local_22c[uVar30 + 0x3fffffff] + 0x18);
  local_144 = (int *)(uVar31 + uVar30);
  if (CARRY4(uVar31,uVar30)) goto LAB_10101c7a;
  local_138[0] = 1;
  if (local_16c == DAT_1010214c) {
    local_13c = (uint)CARRY4(uVar31,uVar30);
    local_13c = FUN_100fb0bc(param_1,&local_198);
    if (local_198 == (int *)0x0) {
      if ((local_13c != 0x10000) && (local_13c != 0x20000)) {
LAB_10101fe0:
        piVar9 = (int *)0x0;
        local_198 = (int *)&NMI;
        piVar11 = piVar9;
        local_234 = piVar9;
        local_240 = piVar9;
        goto LAB_10101c8a;
      }
      local_198 = (int *)FUN_100ffdd8(param_1,local_138);
      if (local_198 == (int *)0x0) {
        if (local_138[0] == 0) goto LAB_10101fe0;
        local_130 = FUN_100fb280(uVar44,0xc,0,local_138[0],0,&local_198);
        if (local_198 == (int *)0x0) {
          for (iVar47 = 0; iVar39 = local_130, iVar47 < (int)(uint)local_138[0]; iVar47 = iVar47 + 1
              ) {
            iVar36 = local_130 + iVar47 * 0xc;
            local_198 = (int *)FUN_100ffdd8(param_1,iVar36 + 4);
            if (local_198 != (int *)0x0) goto LAB_10101e44;
            uVar10 = FUN_100fb0bc(param_1,&local_198);
            local_240 = local_198;
            *(undefined4 *)(iVar39 + iVar47 * 0xc) = uVar10;
            if (local_198 != (int *)0x0) goto LAB_10101e44;
            uVar10 = FUN_100fb280(uVar44,2,0,*(undefined2 *)(iVar36 + 4),0,&local_198);
            *(undefined4 *)(iVar36 + 8) = uVar10;
            if (local_198 != (int *)0x0) {
              piVar9 = (int *)0x0;
              piVar11 = (int *)0x0;
              local_234 = (int *)0x0;
              goto LAB_10101c8a;
            }
            uVar31 = 0;
            uVar42 = 0;
            for (uVar30 = 0; uVar30 < *(ushort *)(iVar36 + 4); uVar30 = uVar30 + 1) {
              local_198 = (int *)FUN_100ffdd8(param_1,local_12c);
              if (local_198 != (int *)0x0) goto LAB_10101e44;
              if ((uint)local_164 <= ((uint)local_12c[0] & 0xffff)) {
                local_198 = (int *)&NMI;
                goto LAB_10101e44;
              }
              *(undefined2 *)(*(int *)(iVar36 + 8) + uVar30 * 2) = local_12c[0]._0_2_;
              uVar35 = (uint)local_12c[0] & 0xffff;
              uVar19 = uVar35;
              if ((*(int *)(local_22c[uVar35] + 4) != DAT_10102154) &&
                 (uVar19 = uVar42, *(int *)(local_22c[uVar35] + 4) == DAT_10102154 + -0x502e9fb)) {
                uVar31 = uVar35;
              }
              uVar42 = uVar19;
            }
            if (uVar31 == 0) {
              if (uVar42 != 0) goto LAB_101021d8;
            }
            else {
              if (uVar42 < uVar31) goto LAB_10101c7a;
LAB_101021d8:
              if (uVar42 - uVar31 != 1) goto LAB_10101c7a;
            }
          }
          goto LAB_10101e90;
        }
      }
    }
LAB_10101e44:
    piVar9 = (int *)0x0;
    local_240 = (int *)0x0;
    piVar11 = (int *)0x0;
    local_234 = (int *)0x0;
    goto LAB_10101c8a;
  }
  local_13c = 0;
  local_130 = 0;
LAB_10101e90:
  local_140 = FUN_100fadac(param_1);
  iVar47 = local_130;
  uVar30 = local_15c + 3 + local_140 & 0xfffffffc;
  if (local_168 < uVar30) {
LAB_10101c7a:
    piVar9 = (int *)&NMI;
  }
  else {
    if (local_158 != 0) {
      if (uVar30 != local_158) goto LAB_10101c7a;
      uVar30 = uVar30 + local_154 + 3 & 0xfffffffc;
    }
    if (local_14c != 0) {
      if (local_14c != uVar30) goto LAB_10101c7a;
      uVar30 = uVar30 + local_148 + 3 & 0xfffffffc;
    }
    if ((local_168 + 3 & 0xfffffffc) != uVar30) goto LAB_10101c7a;
    uVar30 = *param_4;
    uVar31 = (uint)local_138[0];
    if ((int)uVar34 < 0) {
      uVar34 = -uVar34;
    }
    uVar34 = uVar34 & 0xffff;
    *param_5 = uVar31;
    if ((int)uVar30 < 0) {
      uVar34 = uVar34 - 1;
      if ((int)uVar31 <= (int)uVar34) {
        uVar34 = 0;
      }
LAB_10101efe:
      if (local_13c != 0) {
        iVar36 = local_130 + uVar34 * 0xc;
        iVar39 = FUN_100fb280(uVar44,4,0,*(undefined2 *)(iVar36 + 4),0,&local_198);
        piVar9 = local_198;
        if (local_198 != (int *)0x0) goto LAB_10101c82;
        uVar4 = *(ushort *)(iVar36 + 4);
        for (iVar43 = 0; iVar43 < (int)(uint)uVar4; iVar43 = iVar43 + 1) {
          *(int *)(iVar39 + iVar43 * 4) = local_22c[*(ushort *)(*(int *)(iVar36 + 8) + iVar43 * 2)];
        }
        local_22c = (int *)FUN_100fb280(uVar44,4,local_164,(uint)uVar4,local_22c,&local_198);
        if (local_198 != (int *)0x0) goto LAB_10101e44;
        uVar4 = *(ushort *)(iVar36 + 4);
        for (iVar43 = 0; iVar43 < (int)(uint)uVar4; iVar43 = iVar43 + 1) {
          local_22c[iVar43] = *(int *)(iVar39 + iVar43 * 4);
        }
        FUN_100fb5cc(uVar44,iVar39);
        local_16c = *(int *)(iVar47 + uVar34 * 0xc);
        local_164 = *(ushort *)(iVar36 + 4);
      }
      local_194 = (int *)((uint)local_164 * 0x10 + 0xc);
      if (local_194 < local_160) {
        if (local_168 < (uint)local_160 >> 6) {
          local_160 = (int *)(local_168 << 6);
        }
        local_194 = local_160;
        if ((int *)0x3ffffff < local_160) {
          local_194 = (int *)0x4000000;
        }
      }
      piVar9 = (int *)FUN_100fb248(uVar44,local_194,&local_198);
      if (local_198 != (int *)0x0) {
        local_240 = (int *)0x0;
        piVar11 = (int *)0x0;
        local_234 = (int *)0x0;
        goto LAB_10101c8a;
      }
      local_240 = (int *)FUN_100fb248(uVar44,0x28,&local_198);
      if (local_198 != (int *)0x0) {
        piVar11 = (int *)0x0;
        local_234 = (int *)0x0;
        goto LAB_10101c8a;
      }
      *(undefined1 *)piVar9 = local_16c._3_1_;
      *(char *)((int)piVar9 + 1) = (char)((uint)local_16c >> 0x10);
      *(char *)((int)piVar9 + 2) = (char)((uint)local_16c >> 8);
      *(char *)((int)piVar9 + 3) = (char)local_16c;
      uVar34 = (uint)local_164;
      if (uVar34 != 0) {
        uVar30 = uVar34;
        uVar31 = 0;
        do {
          uVar42 = uVar31;
          uVar30 = uVar30 >> 1;
          uVar31 = uVar42 + 1;
        } while (uVar30 != 0);
        iVar39 = 0x10 << (uVar42 & 0xff);
        *(char *)(piVar9 + 1) = (char)(local_164 >> 8);
        iVar47 = uVar34 * 0x10 - iVar39;
        *(char *)((int)piVar9 + 10) = (char)((uint)iVar47 >> 8);
        *(char *)((int)piVar9 + 5) = (char)local_164;
        *(char *)((int)piVar9 + 0xb) = (char)iVar47;
        *(char *)((int)piVar9 + 7) = (char)iVar39;
        *(char *)((int)piVar9 + 6) = (char)((uint)iVar39 >> 8);
        *(char *)((int)piVar9 + 9) = (char)uVar42;
        *(char *)(piVar9 + 2) = (char)(uVar42 >> 8);
      }
      local_1cc = (undefined1 *)FUN_100fdb7c(piVar9,0xc);
      FUN_100f615c(local_22c,local_164,4,DAT_10102150);
      if (local_144 == (int *)0x0) {
        local_198 = (int *)&NMI;
        piVar11 = (int *)0x0;
        local_234 = (int *)0x0;
        goto LAB_10101c8a;
      }
      if (local_194 < local_144) {
        local_198 = (int *)&NMI;
        piVar11 = (int *)0x0;
        local_234 = (int *)0x0;
        goto LAB_10101c8a;
      }
      piVar11 = (int *)FUN_100fb248(uVar44,local_144,&local_198);
      if (local_198 == (int *)0x0) {
        local_198 = (int *)FUN_100faf14(param_1,local_15c);
        if (local_198 != (int *)0x0) {
          local_234 = (int *)0x0;
          goto LAB_10101c8a;
        }
        local_198 = (int *)&DAT_00000007;
        FUN_100fafbc(param_1);
        piVar21 = local_144;
        if (local_198 != (int *)0x0) {
          local_234 = (int *)0x0;
          goto LAB_10101c8a;
        }
        local_188 = 0xc;
        local_190 = local_198;
        uVar34 = (uint)local_164;
        iVar47 = 0;
        do {
          if ((int)uVar34 <= iVar47) {
            local_1e4 = 0;
            break;
          }
          local_1e4 = local_22c[iVar47];
          iVar47 = iVar47 + 1;
        } while (*(int *)(local_1e4 + 4) != DAT_101024c8);
        piVar26 = local_22c + uVar34;
        piVar12 = local_22c;
        do {
          if (piVar26 == piVar12) {
            local_1f8 = 0;
            break;
          }
          local_1f8 = *piVar12;
          piVar12 = piVar12 + 1;
        } while (*(int *)(local_1f8 + 4) != DAT_101024cc);
        local_18c = piVar9;
        if (((local_1e4 == 0) == (local_1f8 == 0)) &&
           ((local_1e4 == 0 ||
            (-1 < (int)((*(uint *)(local_1e4 + 0x10) ^ *(uint *)(local_1f8 + 0x10)) << 0x17))))) {
          pbVar40 = (byte *)FUN_100fb280(uVar44,1,0,0x10,0,&local_190);
          local_234 = local_190;
          if (local_190 == (int *)0x0) {
            piVar12 = (int *)FUN_100fb248(uVar44,0x28,&local_190);
            piVar9 = local_190;
            if (local_190 == (int *)0x0) {
              local_1bc = local_190;
              local_20c = local_190;
              local_1fc = local_190;
              local_208 = local_190;
              FUN_100fad3c(piVar12,piVar11,piVar21);
              local_234 = piVar9;
              local_1d0 = local_22c;
              local_214 = (int *)(uVar34 * 0x10 + 0xc);
LAB_10102316:
              piVar9 = local_22c;
              if (piVar26 == local_1d0) goto LAB_101028ba;
              iVar39 = *local_1d0;
              iVar43 = *(int *)(iVar39 + 0x14);
              iVar36 = *(int *)(iVar39 + 8);
              iVar47 = *(int *)(iVar39 + 4);
              uVar30 = *(uint *)(iVar39 + 0x18);
              piVar9 = *(int **)(iVar39 + 0x1c);
              uVar34 = *(uint *)(iVar39 + 0x10);
              local_190 = (int *)FUN_100fad58(piVar12,iVar43);
              if (local_190 != (int *)0x0) goto LAB_10102514;
              if (piVar21 < (int *)(iVar43 + uVar30)) goto LAB_1010250a;
              if (iVar47 == DAT_101024d0) {
                local_12c[0] = local_190;
                local_12c[0] = (int *)FUN_100fad7c(piVar12,0x22);
                if (((local_12c[0] != (int *)0x0) ||
                    (local_1fc = (int *)FUN_100fb070(piVar12,local_12c), local_12c[0] != (int *)0x0)
                    ) || ((int)(uVar34 << 0x17) < 0)) goto LAB_10102506;
              }
              else {
                if ((uVar34 & 0x100) != 0) {
                  if (iVar47 == DAT_10102844) {
                    local_180 = local_18c;
                    local_184 = local_190;
                    iVar39 = FUN_100fadac(piVar12);
                    local_17c = local_214;
                    piVar9 = (int *)FUN_100fb280(uVar44,0xc,0,7,0,&local_184);
                    if (((local_184 != (int *)0x0) ||
                        (local_184 = (int *)FUN_100fad7c(piVar12,4), local_184 != (int *)0x0)) ||
                       ((local_200 = (int *)FUN_100fb070(piVar12,&local_184),
                        local_184 != (int *)0x0 ||
                        (iVar43 = FUN_100fb070(piVar12,&local_184), local_184 != (int *)0x0)))) {
                      local_200 = local_20c;
                      local_238 = (int *)0x0;
                      local_208 = (int *)0x0;
                      piVar13 = (int *)0x0;
                      piVar14 = local_238;
                      goto LAB_10102a9e;
                    }
                    if (iVar43 == 0) {
                      iVar38 = 2;
                    }
                    else {
                      iVar38 = 4;
                    }
                    puVar22 = (undefined1 *)((int)local_200 + 1);
                    if (((int)local_200 * iVar38 + iVar38 == *(int *)(local_1f8 + 8)) &&
                       (0x23 < *(uint *)(local_1e4 + 0xc))) {
                      iVar41 = 0x24;
                      piVar13 = piVar9;
                      do {
                        uVar34 = FUN_100fb0bc(piVar12,&local_184);
                        local_238 = local_184;
                        iVar16 = iVar39 + iVar41;
                        if (local_184 != (int *)0x0) {
                          local_238 = (int *)0x0;
                          local_208 = (int *)0x0;
                          piVar13 = (int *)0x0;
                          piVar14 = local_238;
                          goto LAB_10102a9e;
                        }
                        uVar30 = *(int *)(local_1e4 + 0xc) - iVar41;
                        iVar41 = iVar41 + uVar34;
                        if (uVar30 < uVar34) goto LAB_10102c46;
                        piVar13[2] = uVar34;
                        *piVar13 = iVar16;
                        piVar13[1] = iVar16;
                        piVar13 = piVar13 + 3;
                      } while (piVar13 != piVar9 + 0x15);
                      local_208 = (int *)FUN_100fb280(uVar44,4,0,puVar22,0,&local_184);
                      piVar13 = local_184;
                      if (local_184 != (int *)0x0) {
                        piVar13 = local_238;
                        piVar14 = local_238;
LAB_10102a9e:
                        local_238 = piVar14;
                        local_218 = (int *)0x0;
                        local_204 = (ushort *)0x0;
                        goto LAB_10102aa4;
                      }
                      iVar39 = piVar9[0x10];
                      piVar9[0x10] = iVar39 + ((uint)((int)local_200 + 0x1f) >> 5) * 4;
                      piVar14 = (int *)FUN_100fb280(uVar44,1,0,0x1400,0,&local_184);
                      piVar37 = local_184;
                      if ((local_184 != (int *)0x0) ||
                         (local_234 = (int *)FUN_100fb280(uVar44,2,0,local_200,0,&local_184),
                         piVar13 = piVar37, local_184 != (int *)0x0)) goto LAB_10102a9e;
                      local_1ec = 0x1400;
                      local_238 = local_184;
                      for (local_1f4 = local_184; piVar13 = local_238, local_1f4 < local_200;
                          local_1f4 = (int *)((int)local_1f4 + 1)) {
                        local_184 = (int *)FUN_100fad58(piVar12,iVar39 + ((uint)local_1f4 >> 3));
                        if ((local_184 != (int *)0x0) ||
                           (bVar5 = FUN_100fb024(piVar12,&local_184), local_184 != (int *)0x0))
                        goto LAB_10102a9e;
                        uVar34 = (uint)bVar5 & 0x80 >> ((uint)local_1f4 & 7);
                        local_184 = (int *)FUN_100fad58(piVar12,piVar9[1]);
                        if ((local_184 != (int *)0x0) ||
                           (uVar30 = FUN_100fb070(piVar12,&local_184), local_218 = local_184,
                           local_184 != (int *)0x0)) goto LAB_10102a9e;
                        piVar9[1] = piVar9[1] + 2;
                        if (uVar30 == 0xffff) {
                          local_174 = (int *)((uint)local_174 & 0xffff0000);
                          if (uVar34 == 0) goto LAB_10102d92;
                          iVar41 = piVar9[0xd];
                          local_12c[0] = local_184;
                          local_12c[0] = (int *)FUN_100fad58(piVar12,iVar41);
                          if (local_12c[0] != (int *)0x0) goto LAB_10102d92;
                          local_218 = (int *)0x0;
                          do {
                            uVar34 = FUN_100fb070(piVar12,local_12c);
                            local_218 = (int *)((uint)local_218 | (uVar34 & 0x1ff) >> 8);
                            if (local_12c[0] != (int *)0x0) goto LAB_10102d92;
                            if ((uVar34 & 1) == 0) {
                              iVar16 = 4;
                            }
                            else {
                              iVar16 = 6;
                            }
                            if ((uVar34 & 8) == 0) {
                              if ((uVar34 & 0x40) == 0) {
                                if ((uVar34 & 0x80) != 0) {
                                  iVar16 = iVar16 + 8;
                                }
                              }
                              else {
                                iVar16 = iVar16 + 4;
                              }
                            }
                            else {
                              iVar16 = iVar16 + 2;
                            }
                            local_12c[0] = (int *)FUN_100fad7c(piVar12,iVar16);
                            if (local_12c[0] != (int *)0x0) goto LAB_10102d92;
                          } while ((uVar34 & 0x20) != 0);
                          iVar16 = FUN_100fadac(piVar12);
                          iVar16 = iVar16 - iVar41;
                          if (local_12c[0] != (int *)0x0) goto LAB_10102d92;
                          if (local_218 != (int *)0x0) {
                            local_184 = (int *)FUN_100fad58(piVar12,piVar9[10]);
                            if ((local_184 != (int *)0x0) ||
                               (local_184 = (int *)FUN_100ffdd8(piVar12,&local_174),
                               local_184 != (int *)0x0)) goto LAB_10102d92;
                            iVar41 = FUN_100fadac(piVar12);
                            piVar9[10] = iVar41;
                          }
                          local_20c = (int *)(((uint)local_174 & 0xffff) + 0xc + iVar16);
                          if (local_1ec < local_20c) {
                            piVar14 = (int *)FUN_100fb280(uVar44,1,local_1ec,local_20c,piVar14,
                                                          &local_184);
                            if (local_184 != (int *)0x0) goto LAB_10102d92;
                          }
                          else {
                            local_20c = (int *)local_1ec;
                          }
                          *(undefined1 *)piVar14 = 0xff;
                          *(undefined1 *)((int)piVar14 + 1) = 0xff;
                          local_184 = (int *)FUN_100fad58(piVar12,piVar9[0x10]);
                          if ((((local_184 != (int *)0x0) ||
                               (local_1e8 = FUN_100fb070(piVar12,&local_184),
                               local_184 != (int *)0x0)) ||
                              (local_184 = (int *)FUN_100fad58(piVar12,piVar9[0x10]),
                              local_184 != (int *)0x0)) ||
                             (local_184 = (int *)FUN_100fadb0(piVar12,(undefined1 *)
                                                                      ((int)piVar14 + 2),8),
                             local_184 != (int *)0x0)) goto LAB_10102d92;
                          piVar9[0x10] = piVar9[0x10] + 8;
                          local_184 = (int *)FUN_100fad58(piVar12,piVar9[0xd]);
                          if ((local_184 != (int *)0x0) ||
                             (local_184 = (int *)FUN_100fadb0(piVar12,(undefined1 *)
                                                                      ((int)piVar14 + 10),iVar16),
                             local_184 != (int *)0x0)) goto LAB_10102d92;
                          iVar41 = iVar16 + 10;
                          piVar9[0xd] = piVar9[0xd] + iVar16;
                          if (local_218 != (int *)0x0) {
                            *(char *)((int)piVar14 + iVar41) = (char)((uint)local_174 >> 8);
                            *(char *)((int)piVar14 + iVar16 + 0xb) = (char)local_174;
                            local_184 = (int *)FUN_100fad58(piVar12,piVar9[0x13]);
                            if ((local_184 != (int *)0x0) ||
                               (local_184 = (int *)FUN_100fadb0(piVar12,(undefined1 *)
                                                                        ((int)piVar14 + iVar16 + 0xc
                                                                        ),(uint)local_174 & 0xffff),
                               local_184 != (int *)0x0)) goto LAB_10102d92;
                            iVar41 = iVar16 + 0xc + ((uint)local_174 & 0xffff);
                            piVar9[0x13] = piVar9[0x13] + ((uint)local_174 & 0xffff);
                          }
                          local_1ec = (uint)local_20c;
                        }
                        else {
                          if (uVar30 != 0) {
                            local_204 = (ushort *)FUN_100fb280(uVar44,2,0,uVar30,0,&local_184);
                            piVar37 = local_184;
                            if (local_184 == (int *)0x0) {
                              local_184 = (int *)FUN_100fad58(piVar12,piVar9[4]);
                              if (local_184 == (int *)0x0) {
                                uVar31 = 0;
                                uVar42 = 0;
                                do {
                                  local_184 = (int *)0x0;
                                  local_184 = (int *)FUN_100ffdd8(piVar12,&local_174);
                                  if (local_184 != (int *)0x0) {
                                    local_218 = (int *)0x0;
                                    goto LAB_10102d98;
                                  }
                                  local_204[uVar31] = (ushort)local_174;
                                  uVar31 = uVar31 + 1;
                                  bVar54 = CARRY4((uint)local_174 & 0xffff,uVar42);
                                  uVar42 = ((uint)local_174 & 0xffff) + uVar42;
                                  if (bVar54) {
                                    local_218 = (int *)0x0;
                                    goto LAB_10102d98;
                                  }
                                } while (uVar31 < uVar30);
                                iVar41 = FUN_100fadac(piVar12);
                                piVar9[4] = iVar41;
                                if (uVar42 <= (uint)piVar9[8]) {
                                  iVar50 = piVar9[10];
                                  iVar45 = *piVar12;
                                  iVar41 = iVar45 + iVar50;
                                  iVar16 = piVar9[7];
                                  if ((uint)(iVar50 - piVar9[9]) <= (uint)piVar9[0xb]) {
                                    uVar31 = (piVar9[0xb] + piVar9[9]) - iVar50;
                                    local_218 = (int *)FUN_100fb280(uVar44,0xc,0,uVar42,0,&local_184
                                                                   );
                                    if ((local_184 == (int *)0x0) && (uVar42 <= uVar31)) {
                                      pbVar27 = (byte *)(iVar16 + iVar45);
                                      iVar16 = 0;
                                      iVar45 = 0;
                                      piVar37 = local_218;
                                      uVar19 = 0;
                                      local_1c8 = pbVar27;
                                      while (local_1c8 != pbVar27 + uVar42) {
                                        bVar5 = *local_1c8;
                                        uVar35 = (uint)bVar5;
                                        uVar20 = uVar35 & 0x7f;
                                        if (uVar20 < 0x54) {
                                          uVar51 = 1;
                                        }
                                        else if (uVar20 < 0x78) {
                                          uVar51 = 2;
                                        }
                                        else if (uVar20 < 0x7c) {
                                          uVar51 = 3;
                                        }
                                        else {
                                          uVar51 = 4;
                                        }
                                        if ((uVar31 < uVar19 + uVar51) || (CARRY4(uVar19,uVar51)))
                                        goto LAB_10102d98;
                                        if (uVar20 < 10) {
                                          uVar52 = (uVar35 & 0xe) * 0x80 +
                                                   (uint)*(byte *)(iVar41 + uVar19);
                                          uVar33 = uVar35 & 1;
                                          if ((bVar5 & 1) == 0) {
                                            uVar52 = -uVar52;
                                          }
                                          else {
                                            uVar33 = 0;
                                          }
LAB_10102f38:
                                          if (iVar45 < 1) {
LAB_10103182:
                                            if ((iVar45 != 0) &&
                                               ((int)uVar33 < -0x80000000 - iVar45))
                                            goto LAB_10102d98;
                                          }
                                        }
                                        else {
                                          if (uVar20 < 0x14) {
                                            uVar52 = uVar35 & 1;
                                            uVar33 = ((uVar20 - 10) * 0x80 & 0x700) +
                                                     (uint)*(byte *)(iVar41 + uVar19);
                                            if ((bVar5 & 1) != 0) {
                                              uVar52 = 0;
                                              goto LAB_101032c8;
                                            }
                                            uVar33 = -uVar33;
                                            goto LAB_10102f38;
                                          }
                                          if (uVar20 < 0x54) {
                                            uVar52 = (uVar20 - 0x14 & 0x30) +
                                                     (uint)(*(byte *)(iVar41 + uVar19) >> 4);
                                            uVar33 = uVar52 + 1;
                                            uVar20 = (uVar20 - 0x14) * 4 & 0x30 |
                                                     *(byte *)(iVar41 + uVar19) & 0xf;
                                            if ((bVar5 & 1) == 0) {
                                              uVar33 = ~uVar52;
                                            }
joined_r0x101034c6:
                                            uVar52 = uVar20 + 1;
                                            if (-1 < (int)(uVar35 << 0x1e)) {
                                              uVar52 = ~uVar20;
                                            }
                                          }
                                          else {
                                            if (uVar20 < 0x78) {
                                              uVar52 = (uint)*(byte *)(iVar41 + uVar19) +
                                                       ((uVar20 - 0x54) / 0xc) * 0x100;
                                              uVar33 = uVar52 + 1;
                                              if ((bVar5 & 1) == 0) {
                                                uVar33 = ~uVar52;
                                              }
                                              uVar20 = (uint)*(byte *)(iVar41 + uVar19 + 1) +
                                                       ((int)((uVar20 - 0x54) % 0xc) >> 2) * 0x100;
                                              goto joined_r0x101034c6;
                                            }
                                            iVar50 = iVar41 + uVar19;
                                            if (uVar20 < 0x7c) {
                                              uVar33 = ((int)(uint)*(byte *)(iVar50 + 1) >> 4) +
                                                       (uint)*(byte *)(iVar41 + uVar19) * 0x10;
                                              if (-1 < (int)(uVar35 << 0x1f)) {
                                                uVar33 = -uVar33;
                                              }
                                              uVar52 = (uint)*(byte *)(iVar50 + 2) +
                                                       (*(byte *)(iVar50 + 1) & 0xf) * 0x100;
                                              if (uVar20 >> 1 == 0x3c) {
LAB_10103554:
                                                uVar52 = -uVar52;
                                              }
                                            }
                                            else {
                                              uVar33 = (uint)*(byte *)(iVar50 + 1) +
                                                       (uint)*(byte *)(iVar41 + uVar19) * 0x100;
                                              if (-1 < (int)(uVar35 << 0x1f)) {
                                                uVar33 = -uVar33;
                                              }
                                              uVar52 = (uint)*(byte *)(iVar50 + 3) +
                                                       (uint)*(byte *)(iVar50 + 2) * 0x100;
                                              if (uVar20 >> 1 == 0x3e) goto LAB_10103554;
                                            }
                                          }
LAB_101032c8:
                                          if (iVar45 < 1) goto LAB_10103182;
                                          if (0x7fffffff - iVar45 < (int)uVar33) goto LAB_10102d98;
                                        }
                                        iVar45 = iVar45 + uVar33;
                                        if (iVar16 < 1) {
                                          if ((iVar16 != 0) && ((int)uVar52 < -0x80000000 - iVar16))
                                          goto LAB_10102d98;
                                        }
                                        else if (0x7fffffff - iVar16 < (int)uVar52)
                                        goto LAB_10102d98;
                                        iVar16 = iVar16 + uVar52;
                                        *piVar37 = iVar45;
                                        piVar37[1] = iVar16;
                                        *(char *)(piVar37 + 2) = (char)((~uVar35 & 0xff) >> 7);
                                        piVar37 = piVar37 + 3;
                                        uVar19 = uVar19 + uVar51;
                                        local_1c8 = local_1c8 + 1;
                                      }
                                      piVar9[7] = piVar9[7] + uVar42;
                                      piVar9[10] = piVar9[10] + uVar19;
                                      local_184 = (int *)FUN_100fad58(piVar12);
                                      if ((local_184 == (int *)0x0) &&
                                         (local_184 = (int *)FUN_100ffdd8(piVar12,local_12c),
                                         local_184 == (int *)0x0)) {
                                        iVar41 = FUN_100fadac(piVar12);
                                        piVar9[10] = iVar41;
                                        if (uVar42 < 0x8000000) {
                                          uVar31 = ((uint)local_12c[0] & 0xffff) + (uVar30 + 6) * 2
                                                   + uVar42 * 5;
                                          if ((uVar31 <= local_1ec) ||
                                             (piVar14 = (int *)FUN_100fb280(uVar44,1,local_1ec,
                                                                            uVar31,piVar14,
                                                                            &local_184),
                                             local_1ec = uVar31, local_184 == (int *)0x0)) {
                                            *(char *)piVar14 = (char)(uVar30 >> 8);
                                            *(char *)((int)piVar14 + 1) = (char)uVar30;
                                            if (uVar34 == 0) {
                                              if (uVar42 == 0) {
                                                iVar41 = 0;
                                                iVar16 = 0;
                                                iVar45 = 0;
                                                local_1f0 = 0;
                                              }
                                              else {
                                                uVar34 = 1;
                                                iVar41 = *local_218;
                                                iVar16 = local_218[1];
                                                iVar45 = iVar16;
                                                piVar37 = local_218;
                                                local_1f0 = iVar41;
                                                while (piVar15 = piVar37 + 3, uVar42 != uVar34) {
                                                  iVar48 = *piVar15;
                                                  iVar50 = piVar37[4];
                                                  uVar34 = uVar34 + 1;
                                                  if (iVar48 <= (int)local_1f0) {
                                                    local_1f0 = iVar48;
                                                  }
                                                  if (iVar41 < iVar48) {
                                                    iVar41 = iVar48;
                                                  }
                                                  if (iVar50 <= iVar16) {
                                                    iVar16 = iVar50;
                                                  }
                                                  piVar37 = piVar15;
                                                  if (iVar45 < iVar50) {
                                                    iVar45 = iVar50;
                                                  }
                                                }
                                              }
                                              *(char *)((int)piVar14 + 5) = (char)iVar16;
                                              *(char *)(piVar14 + 1) = (char)((uint)iVar16 >> 8);
                                              *(char *)((int)piVar14 + 2) = (char)(local_1f0 >> 8);
                                              local_1e8 = (undefined2)local_1f0;
                                              *(char *)((int)piVar14 + 3) = (char)local_1f0;
                                              *(char *)((int)piVar14 + 7) = (char)iVar41;
                                              *(char *)((int)piVar14 + 6) =
                                                   (char)((uint)iVar41 >> 8);
                                              *(char *)((int)piVar14 + 9) = (char)iVar45;
                                              *(char *)(piVar14 + 2) = (char)((uint)iVar45 >> 8);
                                            }
                                            else {
                                              local_184 = (int *)FUN_100fad58(piVar12,piVar9[0x10]);
                                              if ((((local_184 != (int *)0x0) ||
                                                   (local_1e8 = FUN_100fb070(piVar12,&local_184),
                                                   local_184 != (int *)0x0)) ||
                                                  (local_184 = (int *)FUN_100fad58(piVar12,piVar9[
                                                  0x10]), local_184 != (int *)0x0)) ||
                                                 (local_184 = (int *)FUN_100fadb0(piVar12,(
                                                  undefined1 *)((int)piVar14 + 2),8),
                                                 local_184 != (int *)0x0)) goto LAB_10102d98;
                                              piVar9[0x10] = piVar9[0x10] + 8;
                                            }
                                            iVar41 = *local_204 - 1;
                                            puVar17 = (undefined1 *)((int)piVar14 + 10);
                                            puVar25 = local_204;
                                            while( true ) {
                                              puVar25 = puVar25 + 1;
                                              *puVar17 = (char)((uint)iVar41 >> 8);
                                              puVar17[1] = (char)iVar41;
                                              if (local_204 + uVar30 == puVar25) break;
                                              iVar41 = iVar41 + (uint)*puVar25;
                                              puVar17 = puVar17 + 2;
                                              if (0xffff < iVar41) goto LAB_10102d98;
                                            }
                                            puVar17[3] = (char)local_12c[0];
                                            puVar17[2] = (char)((uint)local_12c[0] >> 8);
                                            local_184 = (int *)FUN_100fad58(piVar12,piVar9[0x13]);
                                            if ((local_184 == (int *)0x0) &&
                                               (local_184 = (int *)FUN_100fadb0(piVar12,puVar17 + 4,
                                                                                (uint)local_12c[0] &
                                                                                0xffff),
                                               local_184 == (int *)0x0)) {
                                              piVar9[0x13] = piVar9[0x13] +
                                                             ((uint)local_12c[0] & 0xffff);
                                              uVar31 = (uVar30 + 6) * 2 +
                                                       ((uint)local_12c[0] & 0xffff);
                                              uVar34 = 0;
                                              cVar46 = '\0';
                                              local_1f0 = 0;
                                              iVar41 = 0;
                                              iVar16 = 0;
                                              bVar5 = 0xff;
                                              for (piVar37 = local_218;
                                                  local_218 + uVar42 * 3 != piVar37;
                                                  piVar37 = piVar37 + 3) {
                                                iVar45 = *piVar37;
                                                bVar53 = (char)piVar37[2] != '\0';
                                                iVar50 = piVar37[1];
                                                iVar16 = iVar45 - iVar16;
                                                iVar41 = iVar50 - iVar41;
                                                if (iVar16 == 0) {
                                                  bVar53 = bVar53 | 0x10;
                                                }
                                                else if (iVar16 + 0xffU < 0x1ff) {
                                                  uVar34 = uVar34 + 1;
                                                  if (iVar16 < 1) {
                                                    bVar18 = 2;
                                                  }
                                                  else {
                                                    bVar18 = 0x12;
                                                  }
                                                  bVar53 = bVar53 | bVar18;
                                                }
                                                else {
                                                  uVar34 = uVar34 + 2;
                                                }
                                                if (iVar41 == 0) {
                                                  bVar53 = bVar53 | 0x20;
                                                }
                                                else if (iVar41 + 0xffU < 0x1ff) {
                                                  if (iVar41 < 1) {
                                                    bVar18 = 4;
                                                  }
                                                  else {
                                                    bVar18 = 0x24;
                                                  }
                                                  bVar53 = bVar53 | bVar18;
                                                  local_1f0 = local_1f0 + 1;
                                                }
                                                else {
                                                  local_1f0 = local_1f0 + 2;
                                                }
                                                if (bVar5 == bVar53) {
                                                  if (cVar46 == -1) {
LAB_10103460:
                                                    if (uVar31 < local_1ec) {
                                                      *(char *)((int)piVar14 + uVar31) = cVar46;
                                                      uVar31 = uVar31 + 1;
                                                      goto LAB_1010346c;
                                                    }
                                                    goto LAB_10102d98;
                                                  }
                                                  cVar46 = cVar46 + '\x01';
                                                  *(byte *)((int)piVar14 + (uVar31 - 1)) =
                                                       *(byte *)((int)piVar14 + (uVar31 - 1)) | 8;
                                                }
                                                else {
                                                  if (cVar46 != '\0') goto LAB_10103460;
LAB_1010346c:
                                                  if (local_1ec <= uVar31) goto LAB_10102d98;
                                                  cVar46 = '\0';
                                                  *(byte *)((int)piVar14 + uVar31) = bVar53;
                                                  uVar31 = uVar31 + 1;
                                                }
                                                iVar41 = iVar50;
                                                iVar16 = iVar45;
                                                bVar5 = bVar53;
                                              }
                                              if (cVar46 != '\0') {
                                                if (local_1ec <= uVar31) goto LAB_10102d98;
                                                *(char *)((int)piVar14 + uVar31) = cVar46;
                                                uVar31 = uVar31 + 1;
                                              }
                                              if (((!CARRY4(uVar34,local_1f0)) &&
                                                  (!CARRY4(uVar34 + local_1f0,uVar31))) &&
                                                 (uVar34 + local_1f0 + uVar31 <= local_1ec)) {
                                                iVar41 = uVar34 + uVar31;
                                                iVar45 = 0;
                                                iVar16 = 0;
                                                for (piVar15 = local_218; piVar37 != piVar15;
                                                    piVar15 = piVar15 + 3) {
                                                  iVar50 = *piVar15;
                                                  iVar48 = piVar15[1];
                                                  iVar45 = iVar48 - iVar45;
                                                  iVar16 = iVar50 - iVar16;
                                                  if (iVar16 != 0) {
                                                    if (iVar16 + 0xffU < 0x1ff) {
                                                      if (iVar16 < 0) {
                                                        iVar16 = -iVar16;
                                                      }
                                                      *(char *)((int)piVar14 + uVar31) =
                                                           (char)iVar16;
                                                      uVar31 = uVar31 + 1;
                                                    }
                                                    else {
                                                      *(char *)((int)piVar14 + uVar31) =
                                                           (char)((uint)iVar16 >> 8);
                                                      *(char *)((int)piVar14 + uVar31 + 1) =
                                                           (char)iVar16;
                                                      uVar31 = uVar31 + 2;
                                                    }
                                                  }
                                                  if (iVar45 != 0) {
                                                    if (iVar45 + 0xffU < 0x1ff) {
                                                      if (iVar45 < 0) {
                                                        iVar45 = -iVar45;
                                                      }
                                                      *(char *)((int)piVar14 + iVar41) =
                                                           (char)iVar45;
                                                      iVar41 = iVar41 + 1;
                                                    }
                                                    else {
                                                      *(char *)((int)piVar14 + iVar41) =
                                                           (char)((uint)iVar45 >> 8);
                                                      *(char *)((int)piVar14 + iVar41 + 1) =
                                                           (char)iVar45;
                                                      iVar41 = iVar41 + 2;
                                                    }
                                                  }
                                                  iVar45 = iVar48;
                                                  iVar16 = iVar50;
                                                }
                                                FUN_100fb5cc(uVar44,local_218);
                                                FUN_100fb5cc(uVar44,local_204);
                                                goto LAB_10102ce4;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_10102d98;
                                  }
                                }
                                local_218 = (int *)0x0;
                              }
                              else {
                                local_218 = piVar37;
                              }
                            }
                            else {
                            }
                            goto LAB_10102d98;
                          }
                          if (uVar34 != 0) goto LAB_10102c4c;
                          iVar41 = 0;
                          local_1e8 = 0;
                        }
LAB_10102ce4:
                        *(int *)((int)local_208 + (int)local_1f4 * 4) =
                             (int)local_17c - (int)local_214;
                        piVar15 = (int *)FUN_10100f5c(&local_180,&local_194,&local_17c,piVar14,
                                                      iVar41,uVar44);
                        piVar37 = local_17c;
                        if (piVar15 != (int *)0x0) goto LAB_10102d92;
                        local_174._0_3_ = (undefined3)*DAT_10102f64;
                        local_218 = local_180;
                        if ((int *)0xfffffffc < local_17c) goto LAB_10102d92;
                        piVar32 = (int *)((uint)((int)local_17c + 3) & 0xfffffffc);
                        iVar16 = (int)piVar32 - (int)local_17c;
                        if ((iVar16 != 0) &&
                           ((local_12c[0] = piVar15, (int *)0x1e00000 < piVar32 ||
                            (((piVar15 = local_194, local_194 < piVar32 &&
                              (local_218 = (int *)FUN_100fb280(uVar44,1,local_194,piVar32,local_180,
                                                               local_12c), piVar15 = piVar32,
                              local_12c[0] != (int *)0x0)) ||
                             (local_194 = piVar15,
                             FUN_1011ea40((undefined1 *)((int)local_218 + (int)piVar37),&local_174,
                                          iVar16), piVar37 = piVar32, local_12c[0] != (int *)0x0))))
                           )) goto LAB_10102d92;
                        local_180 = local_218;
                        local_17c = piVar37;
                        iVar41 = FUN_100fdb7c(piVar14,iVar41);
                        local_238 = (int *)((int)local_238 + iVar41);
                        if (uVar30 != 0) {
                          *(undefined2 *)((int)local_234 + (int)local_1f4 * 2) = local_1e8;
                        }
                      }
                      iVar39 = (int)local_17c - *(int *)(local_1e4 + 0x1c);
                      *(int *)(local_1e4 + 8) = iVar39;
                      *(int **)(local_1f8 + 0x1c) = local_17c;
                      iVar38 = (int)puVar22 * iVar38;
                      *(int *)((int)local_208 + (int)local_200 * 4) = iVar39;
                      local_12c[0] = local_17c;
                      local_174 = local_180;
                      local_178 = 0;
                      puVar17 = (undefined1 *)FUN_100fb280(uVar44,1,0,iVar38,0,&local_178);
                      if (local_178 == 0) {
                        puVar24 = (undefined1 *)0x0;
                        puVar28 = puVar17;
                        do {
                          iVar39 = *(int *)((int)local_208 + (int)puVar24 * 4);
                          if (iVar43 == 0) {
                            uVar6 = (undefined1)((uint)(iVar39 << 0xf) >> 0x18);
                            puVar49 = puVar28 + 2;
                            uVar29 = (undefined1)((uint)(iVar39 << 0x17) >> 0x18);
                          }
                          else {
                            puVar28[3] = (char)iVar39;
                            puVar28[2] = (char)((uint)iVar39 >> 8);
                            puVar49 = puVar28 + 4;
                            uVar6 = (undefined1)((uint)iVar39 >> 0x18);
                            uVar29 = (undefined1)((uint)iVar39 >> 0x10);
                          }
                          puVar28[1] = uVar29;
                          puVar24 = puVar24 + 1;
                          *puVar28 = uVar6;
                          puVar28 = puVar49;
                        } while (puVar24 < puVar22);
                        local_1bc = (int *)FUN_100fdb7c(puVar17,iVar38);
                        iVar39 = FUN_10100f5c(&local_174,&local_194,local_12c,puVar17,iVar38,uVar44)
                        ;
                        if (iVar39 != 0) {
                          if (local_178 == 0) {
                            local_178 = 8;
                          }
                          goto LAB_1010372a;
                        }
                        local_180 = local_174;
                        local_17c = local_12c[0];
                        FUN_100fb5cc(uVar44,puVar17);
                      }
                      else {
LAB_1010372a:
                        FUN_100fb5cc(uVar44,puVar17);
                      }
                      piVar37 = local_17c;
                      if (local_178 != 0) {
LAB_10102d92:
                        local_238 = piVar14;
                        local_218 = (int *)0x0;
                        local_204 = (ushort *)0x0;
                        piVar14 = local_238;
LAB_10102d98:
                        local_238 = piVar14;
                        if (local_184 == (int *)0x0) goto LAB_10102c52;
                        goto LAB_10102aa4;
                      }
                      *(int *)(local_1f8 + 8) = (int)local_17c - *(int *)(local_1f8 + 0x1c);
                      local_18c = local_180;
                      FUN_100fb5cc(uVar44,piVar9);
                      FUN_100fb5cc(uVar44,local_208);
                      FUN_100fb5cc(uVar44,0);
                      FUN_100fb5cc(uVar44,piVar14);
                      FUN_100fb5cc(uVar44,0);
                    }
                    else {
LAB_10102c46:
                      local_238 = (int *)0x0;
                      local_208 = (int *)0x0;
                      piVar13 = (int *)0x0;
                      piVar14 = local_238;
LAB_10102c4c:
                      local_238 = piVar14;
                      local_218 = (int *)0x0;
                      local_204 = (ushort *)0x0;
LAB_10102c52:
                      local_184 = (int *)&NMI;
LAB_10102aa4:
                      local_18c = local_180;
                      FUN_100fb5cc(uVar44,piVar9);
                      FUN_100fb5cc(uVar44,local_208);
                      FUN_100fb5cc(uVar44,local_204);
                      FUN_100fb5cc(uVar44,local_238);
                      FUN_100fb5cc(uVar44,local_218);
                      piVar37 = local_214;
                      local_238 = piVar13;
                    }
                    if (local_184 == (int *)0x0) {
                      local_208 = (int *)0x1;
                      piVar13 = local_238;
                      piVar9 = local_214;
                      local_20c = local_200;
                      goto LAB_101023c0;
                    }
                  }
                  else {
                    piVar37 = local_214;
                    piVar13 = local_1bc;
                    if (iVar47 == DAT_10102848) goto LAB_101023c0;
                    if (iVar47 == DAT_1010284c) {
                      if (local_208 == (int *)0x0) {
                        local_12c[0] = local_208;
                        piVar9 = local_22c;
                        do {
                          piVar37 = piVar9 + 1;
                          iVar39 = *piVar9;
                          piVar13 = local_22c;
                          if (*(int *)(iVar39 + 4) == DAT_10102850) goto LAB_10102604;
                          piVar9 = piVar37;
                        } while (piVar37 != piVar26);
                        iVar39 = 0;
LAB_10102604:
                        do {
                          piVar9 = piVar13 + 1;
                          iVar43 = *piVar13;
                          if (*(int *)(iVar43 + 4) == DAT_10102854) goto LAB_10102724;
                          piVar13 = piVar9;
                          if (piVar9 == piVar26) goto LAB_10102506;
                        } while( true );
                      }
                      goto LAB_10102644;
                    }
                  }
                  goto LAB_10102506;
                }
                if (iVar47 != DAT_101024d4) goto LAB_1010237e;
                if (uVar30 < 0xc) goto LAB_1010250a;
                *(undefined4 *)((int)piVar11 + iVar43 + 8) = 0;
              }
LAB_1010237e:
              piVar13 = (int *)FUN_100fdb7c((undefined1 *)((int)piVar11 + iVar43),uVar30);
              piVar37 = (int *)(uVar30 + (int)local_214);
              local_12c[0] = (int *)0x0;
              if (((piVar37 < (int *)0x1e00001) &&
                  ((piVar14 = local_18c, piVar9 = local_194, piVar37 <= local_194 ||
                   (piVar14 = (int *)FUN_100fb280(uVar44,1,local_194,piVar37,local_18c,local_12c),
                   piVar9 = piVar37, local_12c[0] == (int *)0x0)))) &&
                 (local_194 = piVar9,
                 FUN_1011ea40((undefined1 *)((int)piVar14 + (int)local_214),
                              (undefined1 *)((int)piVar11 + iVar43),uVar30), piVar9 = local_214,
                 local_18c = piVar14, local_12c[0] == (int *)0x0)) goto LAB_101023c0;
              goto LAB_10102506;
            }
          }
          else {
            piVar12 = (int *)0x0;
            local_234 = (int *)0x0;
          }
          goto LAB_10102514;
        }
        local_198 = (int *)&NMI;
      }
      local_234 = (int *)0x0;
      goto LAB_10101c8a;
    }
    if (uVar34 < uVar31) goto LAB_10101efe;
    piVar9 = (int *)0x6;
  }
LAB_10101c82:
  local_198 = piVar9;
  piVar9 = (int *)0x0;
  local_240 = (int *)0x0;
  piVar11 = piVar9;
  local_234 = piVar9;
LAB_10101c8a:
  FUN_100fb5cc(uVar44,pbVar8);
  FUN_100fb5cc(uVar44,local_22c);
  FUN_100fb5cc(uVar44,piVar11);
  FUN_100fb5cc(uVar44,local_234);
  if (local_130 != 0) {
    if (local_138[0] != 0) {
      iVar47 = 0;
      iVar39 = local_130;
      do {
        FUN_100fb5cc(uVar44,*(undefined4 *)(iVar39 + 8));
        iVar47 = iVar47 + 1;
        *(undefined4 *)(iVar39 + 8) = 0;
        iVar39 = iVar39 + 0xc;
      } while (iVar47 < (int)(uint)local_138[0]);
    }
    FUN_100fb5cc(uVar44,local_130);
    local_130 = 0;
  }
  if (local_198 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_100fb5cc(uVar44,piVar9);
  if (local_240 == (int *)0x0) {
    return local_198;
  }
  FUN_100fad4c(local_240);
  FUN_100fb5cc(uVar44,local_240);
  return local_198;
code_r0x10101dbc:
  if (iVar39 == 5) {
LAB_10101dc0:
    piVar21 = (int *)&NMI;
LAB_10101dc6:
    local_234 = (int *)0x0;
    piVar9 = (int *)0x0;
    piVar11 = (int *)0x0;
    local_240 = (int *)0x0;
    local_198 = piVar21;
    goto LAB_10101c8a;
  }
  goto LAB_10101d94;
  while( true ) {
    iVar47 = *piVar9;
    piVar9 = piVar9 + 1;
    if (*(int *)(iVar47 + 4) == DAT_10102b28) break;
LAB_101028ba:
    if (piVar9 == local_1d0) goto LAB_10102506;
  }
  if (*(uint *)(iVar47 + 8) < 0xc) {
LAB_10102506:
    if (local_190 == (int *)0x0) {
LAB_1010250a:
      local_190 = (int *)&NMI;
    }
  }
  else {
    iVar39 = *(int *)(iVar47 + 0x1c);
    iVar47 = DAT_10102b2c - (int)local_1cc;
    *(char *)((int)local_18c + iVar39 + 8) = (char)((uint)iVar47 >> 0x18);
    *(char *)((int)local_18c + iVar39 + 10) = (char)((uint)iVar47 >> 8);
    local_134 = local_214;
    *(char *)((int)local_18c + iVar39 + 0xb) = (char)iVar47;
    *(char *)((int)local_18c + iVar39 + 9) = (char)((uint)iVar47 >> 0x10);
  }
LAB_10102514:
  piVar9 = local_18c;
  FUN_100fb5cc(uVar44,pbVar40);
  FUN_100fad4c(piVar12);
  FUN_100fb5cc(uVar44,piVar12);
  local_198 = local_190;
  if ((local_190 == (int *)0x0) &&
     ((local_194 <= local_134 ||
      (piVar9 = (int *)FUN_100fb280(uVar44,1,local_194,local_134,piVar9,&local_198),
      local_198 == (int *)0x0)))) {
    FUN_100fad3c(local_240,piVar9,local_134);
    iVar47 = *(int *)(param_1 + 0x1c);
    uVar34 = *param_2;
    local_240[6] = DAT_10102840;
    local_240[7] = iVar47;
    FUN_100f90c4(*param_3,(uVar34 & 0x7ff) >> 10);
    uVar30 = *param_2;
    uVar34 = *param_4;
    *param_3 = local_240;
    *param_2 = uVar30 & 0xfffffbff;
    if ((int)uVar34 < 0) {
      uVar34 = 0xffffffff;
    }
    else {
      uVar34 = 0;
    }
    *param_4 = uVar34;
  }
  goto LAB_10101c8a;
LAB_10102724:
  if ((iVar39 == 0) || (local_1f8 == 0)) goto LAB_10102506;
  local_12c[0] = (int *)FUN_100fad58(piVar12,*(undefined4 *)(iVar39 + 0x14));
  if ((local_12c[0] == (int *)0x0) &&
     (local_12c[0] = (int *)FUN_100fad7c(piVar12,8), local_12c[0] == (int *)0x0)) {
    local_20c = (int *)FUN_100fb070(piVar12,local_12c);
    if (local_12c[0] != (int *)0x0) goto LAB_10102506;
    local_12c[0] = (int *)FUN_100fad58(piVar12,*(undefined4 *)(iVar43 + 0x14));
    if ((local_12c[0] != (int *)0x0) ||
       (local_12c[0] = (int *)FUN_100fad7c(piVar12,0x32), local_12c[0] != (int *)0x0))
    goto LAB_1010263c;
    iVar39 = FUN_100fb070(piVar12,local_12c);
    if (local_12c[0] != (int *)0x0) goto LAB_10102506;
    if (iVar39 == 0) {
      iVar43 = 2;
    }
    else {
      iVar43 = 4;
    }
    local_234 = (int *)FUN_100fb280(uVar44,2,0,local_20c,0,local_12c);
    if (local_12c[0] != (int *)0x0) goto LAB_10102506;
    iVar41 = *(int *)(local_1f8 + 0x14);
    for (iVar38 = 0; iVar38 < (int)local_20c; iVar38 = iVar38 + 1) {
      local_12c[0] = (int *)FUN_100fad58(piVar12,iVar41);
      if (local_12c[0] != (int *)0x0) goto LAB_10102506;
      iVar41 = iVar41 + iVar43;
      if (iVar39 == 0) {
        iVar16 = FUN_100fb070();
        if (local_12c[0] != (int *)0x0) goto LAB_10102506;
        iVar16 = iVar16 << 1;
      }
      else {
        iVar16 = FUN_100fb0bc(piVar12,local_12c);
        if (local_12c[0] != (int *)0x0) goto LAB_10102506;
      }
      local_12c[0] = (int *)FUN_100fad58(piVar12,*(int *)(local_1e4 + 0x14) + iVar16);
      if ((local_12c[0] != (int *)0x0) ||
         (local_12c[0] = (int *)FUN_100fad7c(piVar12,2), local_12c[0] != (int *)0x0))
      goto LAB_1010263c;
      uVar7 = FUN_100fb070(piVar12,local_12c);
      *(undefined2 *)((int)local_234 + iVar38 * 2) = uVar7;
      if (local_12c[0] != (int *)0x0) goto LAB_10102506;
    }
  }
  else {
LAB_1010263c:
    if (local_12c[0] != (int *)0x0) goto LAB_10102506;
  }
LAB_10102644:
  piVar9 = local_18c;
  local_218 = local_18c;
  local_174 = (int *)0x0;
  bVar5 = FUN_100fb024(piVar12,&local_174);
  if (((local_174 == (int *)0x0) && ((bVar5 & 0xfc) == 0)) && (bVar5 != 0)) {
    piVar14 = (int *)0x0;
    local_238 = piVar14;
    piVar13 = piVar14;
    if (local_20c < local_1fc) {
      piVar15 = (int *)0x0;
    }
    else if (local_1fc == (int *)0x0) {
      local_238 = local_1fc;
      piVar14 = (int *)0x0;
      piVar13 = (int *)0x0;
      piVar15 = (int *)0x0;
    }
    else {
      piVar15 = (int *)FUN_100fb280(uVar44,2,0,local_1fc,0,&local_174);
      if (local_174 == (int *)0x0) {
        local_238 = (int *)FUN_100fb280(uVar44,2,0,local_20c,0,&local_174);
        iVar39 = 0;
        if (local_174 == (int *)0x0) {
          do {
            uVar7 = FUN_100fb070(piVar12,&local_174);
            if (local_174 != (int *)0x0) goto LAB_1010286a;
            *(undefined2 *)((int)piVar15 + iVar39 * 2) = uVar7;
            iVar39 = iVar39 + 1;
          } while (iVar39 < (int)local_1fc);
          iVar39 = 0;
          do {
            if ((bVar5 & 1) == 0) {
              uVar7 = FUN_100fb070(piVar12,&local_174);
              if (local_174 != (int *)0x0) goto LAB_1010286a;
            }
            else {
              uVar7 = *(undefined2 *)((int)local_234 + iVar39 * 2);
            }
            *(undefined2 *)((int)local_238 + iVar39 * 2) = uVar7;
            iVar39 = iVar39 + 1;
          } while (iVar39 < (int)local_1fc);
          for (piVar13 = local_1fc; (int)piVar13 < (int)local_20c;
              piVar13 = (int *)((int)piVar13 + 1)) {
            if ((bVar5 & 2) == 0) {
              uVar7 = FUN_100fb070(piVar12,&local_174);
              if (local_174 != (int *)0x0) {
                piVar14 = (int *)0x0;
                piVar13 = (int *)0x0;
                goto LAB_1010286e;
              }
            }
            else {
              uVar7 = *(undefined2 *)((int)local_234 + (int)piVar13 * 2);
            }
            *(undefined2 *)((int)local_238 + (int)piVar13 * 2) = uVar7;
          }
          iVar39 = (int)((int)local_1fc + (int)local_20c) * 2;
          piVar14 = (int *)FUN_100fb280(uVar44,1,0,iVar39,0,&local_174);
          piVar13 = (int *)0x0;
          if (local_174 == (int *)0x0) {
            puVar23 = (undefined2 *)((int)local_238 + -2);
            piVar13 = piVar14;
            for (iVar43 = 0; iVar43 < (int)local_20c; iVar43 = iVar43 + 1) {
              piVar37 = piVar13;
              if (iVar43 < (int)local_1fc) {
                piVar37 = (int *)((int)piVar13 + 2);
                *(char *)piVar13 = (char)((ushort)*(undefined2 *)((int)piVar15 + iVar43 * 2) >> 8);
                *(char *)((int)piVar13 + 1) = (char)*(undefined2 *)((int)piVar15 + iVar43 * 2);
              }
              puVar23 = puVar23 + 1;
              piVar13 = (int *)((int)piVar37 + 2);
              *(char *)piVar37 = (char)((ushort)*puVar23 >> 8);
              *(char *)((int)piVar37 + 1) = (char)*puVar23;
            }
            piVar13 = (int *)FUN_100fdb7c(piVar14,iVar39);
            piVar37 = (int *)(iVar39 + (int)local_214);
            local_12c[0] = (int *)0x0;
            if (((piVar37 < (int *)0x1e00001) &&
                ((piVar32 = local_194, piVar37 <= local_194 ||
                 (local_218 = (int *)FUN_100fb280(uVar44,1,local_194,piVar37,piVar9,local_12c),
                 piVar32 = piVar37, local_12c[0] == (int *)0x0)))) &&
               (local_194 = piVar32,
               FUN_1011ea40((undefined1 *)((int)local_218 + (int)local_214),piVar14,iVar39),
               local_12c[0] == (int *)0x0)) {
              local_18c = local_218;
              FUN_100fb5cc(uVar44,piVar15);
              FUN_100fb5cc(uVar44,local_238);
              FUN_100fb5cc(uVar44,piVar14);
              goto joined_r0x10102894;
            }
          }
        }
        else {
LAB_1010286a:
          piVar14 = (int *)0x0;
          piVar13 = (int *)0x0;
        }
      }
    }
  }
  else {
    piVar14 = (int *)0x0;
    piVar13 = piVar14;
    piVar15 = piVar14;
    local_238 = piVar14;
  }
LAB_1010286e:
  FUN_100fb5cc(uVar44,piVar15);
  FUN_100fb5cc(uVar44,local_238);
  FUN_100fb5cc(uVar44,piVar14);
  piVar37 = local_214;
  if (local_174 == (int *)0x0) {
    local_174 = (int *)&NMI;
  }
joined_r0x10102894:
  piVar9 = local_214;
  if (local_174 != (int *)0x0) goto LAB_10102506;
LAB_101023c0:
  local_214 = piVar9;
  pbVar40[3] = (byte)iVar47;
  *pbVar40 = (byte)((uint)iVar47 >> 0x18);
  pbVar40[0xb] = (byte)local_214;
  pbVar40[0xf] = (byte)iVar36;
  pbVar40[5] = (byte)((uint)piVar13 >> 0x10);
  pbVar40[10] = (byte)((uint)local_214 >> 8);
  pbVar40[1] = (byte)((uint)iVar47 >> 0x10);
  pbVar40[2] = (byte)((uint)iVar47 >> 8);
  pbVar40[6] = (byte)((uint)piVar13 >> 8);
  pbVar40[4] = (byte)((uint)piVar13 >> 0x18);
  pbVar40[8] = (byte)((uint)local_214 >> 0x18);
  pbVar40[9] = (byte)((uint)local_214 >> 0x10);
  pbVar40[0xc] = (byte)((uint)iVar36 >> 0x18);
  pbVar40[0xd] = (byte)((uint)iVar36 >> 0x10);
  pbVar40[0xe] = (byte)((uint)iVar36 >> 8);
  pbVar40[7] = (byte)piVar13;
  FUN_10100f5c(&local_18c,&local_194,&local_188,pbVar40,0x10,uVar44);
  iVar47 = 0;
  pbVar27 = pbVar40;
  do {
    pbVar2 = pbVar27 + 1;
    bVar5 = *pbVar27;
    pbVar1 = pbVar27 + 3;
    pbVar3 = pbVar27 + 2;
    pbVar27 = pbVar27 + 4;
    iVar47 = iVar47 + ((uint)*pbVar2 << 0x10 | (uint)bVar5 << 0x18 | (uint)*pbVar1 |
                      (uint)*pbVar3 << 8);
  } while (pbVar27 != pbVar40 + 0x10);
  local_1cc = (undefined1 *)((int)piVar13 + (int)(local_1cc + iVar47));
  local_174._0_3_ = (undefined3)*DAT_101024d8;
  if ((int *)0xfffffffc < piVar37) goto LAB_10102506;
  piVar13 = (int *)((uint)((int)piVar37 + 3) & 0xfffffffc);
  piVar9 = local_18c;
  if ((((int)piVar13 - (int)piVar37 != 0) &&
      (((local_12c[0] = (int *)0x0, (int *)0x1e00000 < piVar13 ||
        ((piVar14 = local_194, local_194 < piVar13 &&
         (piVar9 = (int *)FUN_100fb280(uVar44,1,local_194,piVar13,local_18c,local_12c),
         piVar14 = piVar13, local_12c[0] != (int *)0x0)))) ||
       (local_194 = piVar14,
       FUN_1011ea40((undefined1 *)((int)piVar9 + (int)piVar37),&local_174,
                    (int)piVar13 - (int)piVar37), piVar37 = piVar13, local_12c[0] != (int *)0x0))))
     || (piVar13 = (int *)(iVar36 + (int)local_214), local_214 = piVar37, local_1d0 = local_1d0 + 1,
        local_18c = piVar9, piVar37 < piVar13)) goto LAB_10102506;
  goto LAB_10102316;
}

