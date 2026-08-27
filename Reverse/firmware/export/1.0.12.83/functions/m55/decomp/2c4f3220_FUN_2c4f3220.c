/* FUN_2c4f3220 @ 0x2c4f3220 */

uint FUN_2c4f3220(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 ushort param_6,ushort param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint local_90;
  int local_8c;
  uint *local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64 [3];
  int *local_58;
  uint local_54 [5];
  byte local_3d;
  int local_34;
  
  uVar12 = (uint)param_6;
  uVar13 = (uint)param_7;
  local_34 = *DAT_2c4f3478;
  iVar10 = uVar13 - uVar12;
  local_6c = *param_2;
  local_68 = param_2[1];
  if (1 < iVar10) {
    uVar7 = uVar13;
    do {
      local_84 = 0;
      uVar13 = FUN_2c4f1588(param_1,param_5,0,0xffffffff,param_3,param_4,DAT_2c4f3480,0,uVar12,uVar7
                            ,(int)(short)-param_6,DAT_2c4f347c,&local_84);
      if (uVar13 != 0) goto LAB_2c4f33aa;
      if (iVar10 < 0xff) {
        iVar3 = *(int *)(param_1 + 0x68);
        uVar13 = *(uint *)(iVar3 + 0x48);
        uVar2 = *(uint *)(iVar3 + 0x1c) - 0x24;
        if (uVar13 == 0) {
          uVar13 = *(uint *)(iVar3 + 0x1c);
        }
        uVar11 = *(uint *)(iVar3 + 0x18);
        uVar11 = uVar11 * (((uVar13 >> 1) + (uVar11 - 1)) / uVar11);
        if (uVar2 <= uVar11) {
          uVar11 = uVar2;
        }
        uVar13 = uVar7;
        if (local_84 <= uVar11) break;
      }
      uVar13 = uVar12 + (iVar10 >> 1) & 0xffff;
      uVar2 = FUN_2c4f41fc(param_1,param_2,param_3,param_4,param_5,uVar13,uVar7);
      if (uVar2 != 0) {
        if ((uVar2 != 0xffffffe4) ||
           (uVar13 = uVar7, *(int *)(*(int *)(param_1 + 0x68) + 0x1c) - 0x24U < local_84))
        goto LAB_2c4f3366;
        break;
      }
      iVar10 = uVar13 - uVar12;
      uVar7 = uVar13;
    } while (1 < iVar10);
  }
  uVar7 = param_2[2] + 1;
  param_2[2] = uVar7;
  iVar10 = *(int *)(param_1 + 0x68);
  if ((0 < *(int *)(iVar10 + 0x24)) &&
     (uVar2 = *(int *)(iVar10 + 0x24) + 1U | 1, uVar7 == uVar2 * (uVar7 / uVar2))) {
    if ((*param_2 != 0) && ((1 < (uint)param_2[1] && (*param_2 != 1)))) {
      bVar1 = false;
      goto LAB_2c4f3442;
    }
    local_84 = 0;
    uVar2 = FUN_2c4f2448(param_1,DAT_2c4f3484,&local_84);
    if (uVar2 == 0) {
      uVar2 = local_84;
    }
    if ((int)uVar2 < 0) {
LAB_2c4f3366:
      if (*DAT_2c4f3478 != local_34) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return uVar2;
    }
    iVar10 = *(int *)(param_1 + 0x68);
    if (uVar2 < *(uint *)(iVar10 + 0x20) >> 1) {
      uVar2 = FUN_2c4f41fc(param_1,param_2,param_3,param_4,param_5,uVar12,uVar13);
      if (uVar2 != 0 && uVar2 != 0xffffffe4) goto LAB_2c4f3366;
      iVar3 = 0;
      iVar10 = *(int *)(param_1 + 0x68);
      if (uVar2 == 0) {
        uVar13 = uVar12;
      }
      goto LAB_2c4f3336;
    }
  }
  iVar3 = 0;
LAB_2c4f3336:
  do {
    local_84 = param_2[1];
    local_80 = 0;
    local_74 = 0;
    local_7c = 0xffffffff;
    uStack_78 = 0xffffffff;
    iVar8 = *(int *)(iVar10 + 0x48);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar10 + 0x1c);
    }
    local_70 = iVar8 - 8;
    uVar2 = (**(code **)(iVar10 + 0xc))();
    if (uVar2 == 0) {
      uVar2 = FUN_2c4f1344(param_1,&local_84,param_2 + 2,4);
      if (((uVar2 == 0) &&
          (local_8c = param_1, local_88 = &local_84,
          uVar2 = FUN_2c4f1588(param_1,param_5,0,0xffffffff,param_3,param_4,DAT_2c4f379c,0,uVar12,
                               uVar13,(int)(short)-param_6,DAT_2c4f3798,&local_8c), uVar2 == 0)) &&
         ((param_2[6] == -1 ||
          ((param_2[7] == -1 ||
           (uVar2 = FUN_2c4f148c(param_1,&local_84,
                                 DAT_2c4f37a0 | (*(byte *)((int)param_2 + 0x17) + 0x600) * 0x100000,
                                 param_2 + 6), uVar2 == 0)))))) {
        local_54[0] = 0;
        local_54[1] = 0;
        local_54[2] = 0;
        if (iVar3 == 0) {
          local_54[0] = *(uint *)(param_1 + 0x3c);
          local_54[1] = *(uint *)(param_1 + 0x40);
          local_54[2] = *(uint *)(param_1 + 0x44);
          puVar4 = local_54;
          puVar5 = (uint *)(param_1 + 0x30);
          do {
            puVar6 = puVar5 + 1;
            *puVar4 = *puVar4 ^ *puVar5;
            puVar4 = puVar4 + 1;
            puVar5 = puVar6;
          } while (puVar6 != (uint *)(param_1 + 0x3c));
        }
        local_54[1] = local_54[1] ^ *(uint *)(param_1 + 0x4c);
        local_54[2] = local_54[2] ^ *(uint *)(param_1 + 0x50);
        local_54[0] = DAT_2c4f37a4 & (local_54[0] ^ *(uint *)(param_1 + 0x48));
        uVar2 = FUN_2c4f23d8(param_1,param_2,local_54);
        if (uVar2 != 0) goto LAB_2c4f3366;
        uVar7 = local_7c;
        if ((local_54[1] != 0 || local_54[0] != 0) || local_54[2] != 0) {
          if (local_70 < local_80 + 0x10U) {
            uVar2 = 0xffffffe4;
            goto LAB_2c4f3366;
          }
          uVar7 = DAT_2c4f37b0;
          uVar2 = DAT_2c4f37b0 ^ local_7c;
          local_90 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
          uVar2 = FUN_2c4f1344(param_1,&local_84,&local_90,4);
          if ((uVar2 != 0) || (uVar2 = FUN_2c4f1344(param_1,&local_84,local_54,0xc), uVar2 != 0))
          goto LAB_2c4f3360;
        }
        local_7c = uVar7;
        uVar2 = FUN_2c4f190c(param_1,&local_84);
        if (uVar2 == 0) {
          iVar10 = *param_2;
          *(ushort *)(param_2 + 5) = (short)uVar13 - param_6;
          *param_2 = param_2[1];
          param_2[1] = iVar10;
          param_2[3] = local_80;
          param_2[4] = local_7c;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          if (iVar3 == 0) {
            *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
            *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
            *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
          }
          else {
            if (((local_6c == *(int *)(param_1 + 0x20)) ||
                (local_68 == *(int *)(param_1 + 0x24) || local_6c == *(int *)(param_1 + 0x24))) ||
               (*(int *)(param_1 + 0x20) == local_68)) {
              *(int *)(param_1 + 0x20) = *param_2;
              *(int *)(param_1 + 0x24) = param_2[1];
            }
            for (piVar9 = *(int **)(param_1 + 0x28); piVar9 != (int *)0x0; piVar9 = (int *)*piVar9)
            {
              if (((local_6c == piVar9[2]) || (local_6c == piVar9[3] || local_68 == piVar9[3])) ||
                 (piVar9[2] == local_68)) {
                piVar9[2] = *param_2;
                piVar9[3] = param_2[1];
              }
              if ((*(char *)((int)piVar9 + 6) == '\x02') &&
                 (((local_6c == piVar9[0xb] || (local_68 == piVar9[0xc] || local_6c == piVar9[0xc]))
                  || (local_68 == piVar9[0xb])))) {
                piVar9[0xb] = *param_2;
                piVar9[0xc] = param_2[1];
              }
            }
            uVar13 = FUN_2c4f20fc(param_1,&local_6c,local_54);
            if ((int)uVar13 < 0) {
              if (uVar13 == 0xfffffffe) goto LAB_2c4f3396;
            }
            else {
              if (uVar13 != 0xfffffffe) {
                uVar12 = *(int *)(param_1 + 0x30) + 1;
                uVar7 = uVar12 & 0x7fffffff | (uint)((uVar12 & 0x3ff) != 0) << 0x1f;
                *(uint *)(param_1 + 0x30) = uVar7;
                local_64[0] = 0;
                if ((uVar12 & 0x70000000) != 0) {
                  if (((*(uint *)(param_1 + 0x34) == local_54[0]) ||
                      (*(uint *)(param_1 + 0x38) == local_54[1] ||
                       *(uint *)(param_1 + 0x34) == local_54[1])) ||
                     (local_54[0] == *(uint *)(param_1 + 0x38))) {
                    uVar12 = (uVar12 & 0xfffff) >> 10;
                    *(uint *)(param_1 + 0x30) = DAT_2c4f37a8 & uVar7;
                    local_64[0] = 0;
                    *(undefined4 *)(param_1 + 0x34) = 0;
                    *(undefined4 *)(param_1 + 0x38) = 0;
                    if (uVar12 < (uVar13 & 0xfffff) >> 10) {
                      uVar13 = uVar13 - 0x400;
                    }
                    else if (uVar12 == 0x3ff) goto LAB_2c4f374c;
                    local_64[0] = DAT_2c4f37ac | uVar12 << 10;
                  }
                  else {
                    local_64[0] = 0;
                  }
                }
LAB_2c4f374c:
                local_64[1] = 0;
                local_64[2] = uVar13;
                local_58 = param_2;
                uVar13 = FUN_2c4f384c(param_1,local_54,local_64,2);
                if (uVar13 != 0) goto LAB_2c4f33aa;
                uVar13 = *(int *)(param_1 + 0x30) - 1;
                *(uint *)(param_1 + 0x30) =
                     uVar13 & 0x7fffffff | (uint)((uVar13 & 0x3ff) != 0) << 0x1f;
              }
LAB_2c4f3396:
              uVar13 = FUN_2c4f219c(param_1,&local_6c,local_54);
              if (uVar13 == 0) {
                uVar13 = *(uint *)(param_1 + 0x30);
                if (((uVar13 >> 0x14 & 0x700) == 0) ||
                   (((*(uint *)(param_1 + 0x34) != local_54[0] &&
                     (*(uint *)(param_1 + 0x34) != local_54[1] &&
                      *(uint *)(param_1 + 0x38) != local_54[1])) &&
                    (local_54[0] != *(uint *)(param_1 + 0x38))))) {
LAB_2c4f3836:
                  local_64[0] = 0;
                }
                else {
                  uVar12 = (uVar13 & 0xfffff) >> 10;
                  *(uint *)(param_1 + 0x30) = DAT_2c4f3840 & uVar13;
                  *(undefined4 *)(param_1 + 0x34) = 0;
                  *(undefined4 *)(param_1 + 0x38) = 0;
                  if (uVar12 == 0x3ff) goto LAB_2c4f3836;
                  local_64[0] = DAT_2c4f3844 | uVar12 << 10;
                }
                local_64[2] = DAT_2c4f3848 | (local_3d + 0x600) * 0x100000;
                local_64[1] = 0;
                local_58 = param_2;
                uVar2 = FUN_2c4f384c(param_1,local_54,local_64,2);
                goto LAB_2c4f3366;
              }
              if (uVar13 == 0xfffffffe) goto LAB_2c4f3366;
            }
LAB_2c4f33aa:
            uVar2 = uVar13;
          }
          goto LAB_2c4f3366;
        }
      }
    }
LAB_2c4f3360:
    if (uVar2 != 0xffffffac) goto LAB_2c4f3366;
    bVar1 = true;
LAB_2c4f3442:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = *param_2;
    iVar10 = param_2[1];
    if (iVar3 == 0) {
LAB_2c4f3460:
      FUN_2c66ac44(DAT_2c4f3490,DAT_2c4f348c,0x704,iVar10,DAT_2c4f3488);
      uVar2 = 0xffffffe4;
      goto LAB_2c4f3366;
    }
    bVar15 = iVar3 != 1;
    iVar8 = 1;
    if (bVar15) {
      iVar8 = iVar10;
    }
    bVar14 = iVar8 != 0;
    bVar16 = iVar10 != 1;
    if (bVar14 && (bVar15 && bVar16)) {
      iVar3 = 1;
    }
    if (!bVar14 || (!bVar15 || !bVar16)) {
      iVar3 = 0;
    }
    if (!bVar14 || (!bVar15 || !bVar16)) goto LAB_2c4f3460;
    uVar2 = FUN_2c4f25f0(param_1,param_2 + 1);
    if ((uVar2 != 0) && ((uVar2 != 0xffffffe4 || (bVar1)))) goto LAB_2c4f3366;
    iVar10 = *(int *)(param_1 + 0x68);
  } while( true );
}

