/* FUN_10103738 @ 0x10103738 */

uint * FUN_10103738(int param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  undefined1 uVar25;
  bool bVar26;
  uint *local_84;
  uint *local_80;
  uint *local_78;
  uint local_6c;
  int local_68;
  uint *local_64;
  uint *local_60;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  uint local_54;
  ushort local_50;
  uint local_4c;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  
  iVar17 = param_2[0x18];
  piVar23 = (int *)param_2[0x87];
  local_68 = 0;
  local_6c = param_3;
  if (piVar23 == (int *)0x0) {
    piVar23 = (int *)FUN_100f9dd4(*(undefined4 *)(iVar17 + 4),DAT_10103a54);
    if (piVar23 == (int *)0x0) {
      return (uint *)&DAT_0000000b;
    }
    iVar20 = *piVar23;
    iVar17 = param_2[0x18];
    param_2[0x87] = (int)piVar23;
    param_2[0x81] = iVar20;
  }
  iVar2 = FUN_100f9e18(iVar17,DAT_10103a48,1);
  iVar20 = DAT_10103a5c;
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  iVar17 = DAT_10103a58;
  param_2[0x88] = iVar2;
  param_2[0x23] = 0;
  do {
    uVar4 = FUN_100fadac(param_1);
    iVar2 = FUN_100fb0bc(param_1,&local_64);
    uVar19 = DAT_10103d1c;
    if (local_64 != (uint *)0x0) {
      return local_64;
    }
    if (iVar2 == iVar20) {
      local_64 = (uint *)FUN_100fad58(param_1,uVar4);
      if (local_64 != (uint *)0x0) {
        return local_64;
      }
      uVar19 = *(undefined4 *)(param_1 + 0x1c);
      local_60 = local_64;
      local_60 = (uint *)FUN_100fb104(param_1,DAT_10103a50,auStack_5c);
      if (local_60 != (uint *)0x0) {
        return local_60;
      }
      if ((((local_58 == iVar20) || (local_58 == iVar17)) || (local_54 != *(uint *)(param_1 + 4)))
         || (((uVar9 = (uint)local_50, uVar9 == 0 || (local_54 <= uVar9 * 0x14 + 0x2c)) ||
             ((uVar9 = uVar9 * 0x10 + 0xc, local_4c <= uVar9 || ((local_4c & 3) != 0)))))) {
LAB_1010391a:
        return (uint *)&NMI;
      }
      if (local_44 == 0) {
        if (local_3c != 0 || local_40 != 0) goto LAB_1010391a;
      }
      else if ((local_40 != 0) && (local_3c == 0)) goto LAB_1010391a;
      if ((local_38 == 0) && (local_34 != 0)) goto LAB_1010391a;
      puVar5 = (undefined1 *)FUN_100fb248(uVar19,uVar9,&local_60);
      local_84 = local_60;
      if (local_60 == (uint *)0x0) {
        iVar2 = FUN_100fb248(uVar19,0x28,&local_60);
        if (local_60 == (uint *)0x0) {
          uVar12 = (uint)local_50;
          uVar9 = uVar12;
          uVar7 = 0;
          if (uVar12 == 0) {
            uVar16 = 0xff;
            uVar25 = 8;
            iVar24 = 8;
            local_84._0_1_ = 0xff;
            uVar1 = 0;
          }
          else {
            do {
              uVar22 = uVar7;
              uVar9 = uVar9 >> 1;
              uVar7 = uVar22 + 1;
            } while (uVar9 != 0);
            local_84._0_1_ = (undefined1)(uVar22 >> 8);
            iVar24 = 0x10 << (uVar22 & 0xff);
            uVar1 = (undefined1)((uint)iVar24 >> 8);
            uVar25 = (undefined1)iVar24;
            uVar16 = (undefined1)uVar22;
          }
          iVar24 = uVar12 * 0x10 - iVar24;
          *puVar5 = local_58._3_1_;
          puVar5[1] = (char)((uint)local_58 >> 0x10);
          puVar5[2] = (char)((uint)local_58 >> 8);
          puVar5[3] = (char)local_58;
          puVar5[4] = (char)(local_50 >> 8);
          puVar5[0xb] = (char)iVar24;
          puVar5[10] = (char)((uint)iVar24 >> 8);
          puVar5[5] = (char)local_50;
          puVar5[8] = local_84._0_1_;
          puVar5[6] = uVar1;
          puVar5[7] = uVar25;
          puVar5[9] = uVar16;
          local_80 = (uint *)FUN_100fb280(uVar19,0x18,0,local_50,0,&local_60);
          if (local_60 == (uint *)0x0) {
            local_84 = (uint *)FUN_100fb280(uVar19,4,0,local_50,0,&local_60);
            if ((local_60 == (uint *)0x0) &&
               (local_60 = (uint *)FUN_100faf14(param_1,(uint)local_50 * 0x14),
               local_60 == (uint *)0x0)) {
              if (local_50 != 0) {
                puVar3 = local_84 + -1;
                iVar24 = 0;
                puVar21 = local_80;
                uVar9 = 0;
                do {
                  uVar7 = FUN_100fb00c(param_1);
                  *puVar21 = uVar7;
                  uVar7 = FUN_100fb00c(param_1);
                  puVar21[1] = uVar7;
                  uVar7 = FUN_100fb00c(param_1);
                  puVar21[2] = uVar7;
                  uVar7 = FUN_100fb00c(param_1);
                  puVar21[3] = uVar7;
                  uVar7 = FUN_100fb00c(param_1);
                  uVar12 = *puVar21;
                  iVar24 = iVar24 + 1;
                  puVar21[4] = uVar7;
                  if (uVar12 <= uVar9) {
                    FUN_100fafbc(param_1);
                    local_60 = (uint *)&NMI;
                    goto LAB_10103a66;
                  }
                  puVar3 = puVar3 + 1;
                  *puVar3 = (uint)puVar21;
                  puVar21 = puVar21 + 6;
                  uVar9 = uVar12;
                } while (iVar24 < (int)(uint)local_50);
              }
              FUN_100fafbc(param_1);
              FUN_100f615c(local_84,local_50,4,DAT_10103d20);
              uVar9 = (uint)local_50;
              uVar7 = uVar9 * 0x14 + 0x2c;
              uVar12 = uVar9 * 0x10 + 0xc;
              if (uVar9 != 0) {
                puVar3 = local_84 + -1;
                uVar22 = 0;
                do {
                  puVar3 = puVar3 + 1;
                  uVar13 = *puVar3;
                  uVar22 = uVar22 + 1;
                  if (*(uint *)(uVar13 + 4) != uVar7) {
LAB_10103cb0:
                    local_60 = (uint *)&NMI;
                    goto LAB_10103a66;
                  }
                  uVar10 = *(uint *)(uVar13 + 8);
                  if ((local_54 < uVar10) ||
                     (bVar26 = local_54 - uVar10 < uVar7, uVar7 = uVar7 + (uVar10 + 3 & 0xfffffffc),
                     bVar26)) goto LAB_10103cb0;
                  uVar8 = *(uint *)(uVar13 + 0xc);
                  if ((local_4c < uVar8) || ((local_4c - uVar8 < uVar12 || (uVar8 < uVar10))))
                  goto LAB_10103cb0;
                  *(uint *)(uVar13 + 0x14) = uVar12;
                  uVar12 = uVar12 + (uVar8 + 3 & 0xfffffffc);
                } while (uVar9 != uVar22);
              }
              if ((((local_44 == 0) ||
                   ((local_44 == uVar7 && (uVar7 = uVar7 + local_40, uVar7 <= local_54)))) &&
                  ((local_38 == 0 ||
                   ((local_38 == (uVar7 + 3 & 0xfffffffc) &&
                    (uVar7 = local_34 + local_38, uVar7 <= local_54)))))) &&
                 ((local_4c == uVar12 && (local_54 == uVar7)))) {
                puVar5 = (undefined1 *)
                         FUN_100fb280(uVar19,1,uVar9 * 0x10 + 0xc,uVar12,puVar5,&local_60);
                local_78 = local_60;
                if (local_60 == (uint *)0x0) {
                  puVar14 = puVar5 + 0x1c;
                  puVar3 = local_80;
                  for (; (int)local_78 < (int)(uint)local_50; local_78 = (uint *)((int)local_78 + 1)
                      ) {
                    puVar14[-0x10] = *(undefined1 *)((int)puVar3 + 3);
                    puVar14[-0xf] = (char)*(undefined2 *)((int)puVar3 + 2);
                    puVar14[-0xe] = (char)(*puVar3 >> 8);
                    puVar14[-0xd] = (char)*puVar3;
                    puVar14[-0xc] = *(undefined1 *)((int)puVar3 + 0x13);
                    puVar14[-0xb] = (char)*(undefined2 *)((int)puVar3 + 0x12);
                    puVar14[-10] = (char)(puVar3[4] >> 8);
                    puVar14[-9] = (char)puVar3[4];
                    puVar14[-8] = *(undefined1 *)((int)puVar3 + 0x17);
                    puVar14[-7] = (char)*(undefined2 *)((int)puVar3 + 0x16);
                    puVar14[-6] = (char)(puVar3[5] >> 8);
                    puVar14[-5] = (char)puVar3[5];
                    puVar14[-4] = *(undefined1 *)((int)puVar3 + 0xf);
                    puVar14[-3] = (char)*(undefined2 *)((int)puVar3 + 0xe);
                    puVar14[-2] = (char)(puVar3[3] >> 8);
                    puVar14[-1] = (char)puVar3[3];
                    local_60 = (uint *)FUN_100fad58(param_1,puVar3[1]);
                    if ((local_60 != (uint *)0x0) ||
                       (local_60 = (uint *)FUN_100faf14(param_1,puVar3[2]), local_60 != (uint *)0x0)
                       ) goto LAB_10103a66;
                    if (puVar3[2] != puVar3[3]) {
                      local_60 = (uint *)&DAT_00000007;
                      FUN_100fafbc(param_1);
                      goto LAB_10103a66;
                    }
                    FUN_1011ea40(puVar5 + puVar3[5],*(undefined4 *)(param_1 + 0x20));
                    FUN_100fafbc(param_1);
                    if ((puVar3[5] + puVar3[3] & 3) != 0) {
                      puVar18 = puVar5 + ((puVar3[5] + puVar3[3]) - 1);
                      do {
                        puVar15 = puVar18 + (2 - (int)puVar5);
                        puVar18 = puVar18 + 1;
                        *puVar18 = 0;
                      } while (((uint)puVar15 & 3) != 0);
                    }
                    puVar14 = puVar14 + 0x10;
                    puVar3 = puVar3 + 6;
                  }
                  FUN_100fad3c(iVar2,puVar5,local_4c);
                  uVar9 = param_2[2];
                  uVar4 = *(undefined4 *)(param_1 + 0x1c);
                  iVar24 = param_2[0x1a];
                  *(undefined4 *)(iVar2 + 0x18) = DAT_10103e8c;
                  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
                  FUN_100f90c4(iVar24,(uVar9 & 0x7ff) >> 10);
                  param_2[0x1a] = iVar2;
                  param_2[2] = param_2[2] & 0xfffffbff;
                }
              }
              else {
                local_60 = (uint *)&NMI;
              }
            }
          }
          else {
            local_84 = (uint *)0x0;
          }
        }
        else {
          local_80 = local_84;
        }
      }
      else {
        iVar2 = 0;
        local_84 = (uint *)0x0;
        local_80 = (uint *)0x0;
      }
LAB_10103a66:
      FUN_100fb5cc(uVar19,local_80);
      FUN_100fb5cc(uVar19,local_84);
      puVar3 = local_60;
      if (local_60 != (uint *)0x0) {
        FUN_100fb5cc(uVar19,puVar5);
        FUN_100fad4c(iVar2);
        FUN_100fb5cc(uVar19,iVar2);
        puVar3 = local_60;
        goto joined_r0x101037b8;
      }
    }
    else {
      if (iVar2 != DAT_10103a4c) {
        if (iVar2 != 0x10000) {
          if (iVar2 == DAT_10103a58) {
            param_2[0x21] = iVar2;
            local_64 = (uint *)FUN_100fb104(param_1,uVar19,param_2 + 0x21);
            if (local_64 != (uint *)0x0) {
              return local_64;
            }
            uVar9 = param_2[0x23];
            if (uVar9 == 0) goto LAB_1010391a;
            if (*(uint *)(param_1 + 4) >> 5 < uVar9) {
              return (uint *)&DAT_0000000a;
            }
            iVar17 = FUN_100fb280(uVar11,4,0,uVar9,0,&local_64);
            param_2[0x24] = iVar17;
            if (local_64 != (uint *)0x0) {
              return local_64;
            }
            puVar3 = (uint *)FUN_100faf14(param_1,param_2[0x23] << 2);
            if (puVar3 != (uint *)0x0) {
              return puVar3;
            }
            iVar17 = 0;
            local_64 = (uint *)0x0;
            if (0 < param_2[0x23]) {
              do {
                iVar20 = param_2[0x24];
                uVar11 = FUN_100fb00c(param_1);
                *(undefined4 *)(iVar20 + iVar17 * 4) = uVar11;
                iVar17 = iVar17 + 1;
              } while (iVar17 < param_2[0x23]);
            }
            FUN_100fafbc(param_1);
            if (local_64 != (uint *)0x0) {
              return local_64;
            }
LAB_101039d0:
            uVar9 = (local_6c ^ (int)local_6c >> 0x1f) - ((int)local_6c >> 0x1f) & 0xffff;
            if ((int)local_6c < 0) {
              uVar9 = uVar9 - 1;
              if (param_2[0x23] <= (int)uVar9) {
                iVar17 = 0;
                goto LAB_101039ea;
              }
            }
            else if (param_2[0x23] <= (int)uVar9) {
              return (uint *)0x6;
            }
            iVar17 = uVar9 << 2;
LAB_101039ea:
            iVar20 = param_2[0x1a];
            puVar3 = (uint *)FUN_100fad58(iVar20,*(undefined4 *)(param_2[0x24] + iVar17));
            if (puVar3 != (uint *)0x0) {
              return puVar3;
            }
            puVar3 = (uint *)(*(code *)piVar23[0x16])(param_2,iVar20);
            if (puVar3 != (uint *)0x0) {
              return puVar3;
            }
            if (local_68 == 0) {
              local_68 = param_2[0x23];
            }
            *param_2 = local_68;
            param_2[1] = local_6c;
            return (uint *)0x0;
          }
          if (((((iVar2 != DAT_10103a58 + -0x25200f17) && (iVar2 != DAT_10103a58 + -0x1ee01)) &&
               (iVar2 != DAT_10103a58 + 0x50ccb)) &&
              ((iVar2 != DAT_10103a58 + 0x30f6fefe && (iVar2 != DAT_10103a58 + 0x30f8100e)))) &&
             (iVar2 != 0x20000)) {
            return (uint *)0x2;
          }
        }
        param_2[0x22] = 0x10000;
        iVar17 = DAT_10103a58;
        param_2[0x23] = 1;
        param_2[0x21] = iVar17;
        puVar6 = (undefined4 *)FUN_100fb248(uVar11,4,&local_64);
        param_2[0x24] = (int)puVar6;
        if (local_64 != (uint *)0x0) {
          return local_64;
        }
        *puVar6 = uVar4;
        goto LAB_101039d0;
      }
      local_64 = (uint *)FUN_100fad58(param_1,uVar4);
      if (local_64 != (uint *)0x0) {
        return local_64;
      }
      puVar3 = (uint *)FUN_10101aec(param_1,param_2 + 2,param_2 + 0x1a,&local_6c,&local_68);
joined_r0x101037b8:
      if (puVar3 != (uint *)0x0) {
        return puVar3;
      }
    }
    local_64 = puVar3;
    param_1 = param_2[0x1a];
  } while( true );
}

