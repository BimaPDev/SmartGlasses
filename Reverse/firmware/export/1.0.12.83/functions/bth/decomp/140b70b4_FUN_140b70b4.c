/* FUN_140b70b4 @ 0x140b70b4 */

int FUN_140b70b4(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  int iVar23;
  byte *pbVar24;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60 [11];
  int local_34;
  
  uVar18 = *(uint *)(param_1 + 0x2f8);
  local_34 = *DAT_140b7244;
  local_70 = 0;
  local_6c = 0;
  local_74 = 0;
  local_64 = uVar18 & 0x20;
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_140e5408(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_140e5168(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
  }
  pbVar21 = param_1 + 0x44;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  iVar4 = FUN_140e52b8(pbVar21);
  if (0 < iVar4) {
    local_68 = 0;
    if ((*(uint *)(param_1 + 0x2f8) & 10) != 0) {
      local_68 = 1 - (*(uint *)(param_1 + 0x2f8) & 1);
    }
    if (*param_1 == 10) {
      iVar4 = 0xb;
      local_a4 = 0x2b7;
      local_a0 = 0x7ff;
    }
    else {
      iVar4 = 0;
      local_a4 = 0;
      local_a0 = 0;
    }
    local_98 = -1;
    iVar19 = 0;
    local_84 = 0;
    local_80 = 0;
    local_94 = 0;
    local_88 = 0;
    local_9c = 0;
    local_90 = 0;
    uVar18 = uVar18 & 0x15;
LAB_140b714e:
    do {
      iVar10 = *(int *)(param_1 + 0x60);
      iVar2 = local_6c;
      while( true ) {
        local_6c = iVar2;
        if (iVar10 == 0) {
          FUN_140e5408(pbVar21,*(undefined4 *)(param_1 + 0x40));
        }
        else if (*(int *)(param_1 + 0x40) != 0) {
          FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
        }
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        uVar5 = FUN_140e52b8(pbVar21);
        iVar10 = *(int *)(param_1 + 0x2dc);
        if (iVar10 != 0) break;
        if ((int)(uVar5 - iVar4) < 8) {
          local_ac = local_70;
          local_6c = 0;
          goto LAB_140b718c;
        }
        iVar19 = *(int *)(param_1 + 0x40);
        uVar14 = iVar4 - iVar19;
        uVar11 = 0;
        if ((int)uVar14 < 1) {
          uVar14 = *(uint *)(param_1 + 0x3c);
        }
        else {
          if (uVar14 != 0x20) {
            uVar11 = *(int *)(param_1 + 0x3c) << (uVar14 & 0xff);
          }
          uVar14 = FUN_140e5948(pbVar21);
          *(uint *)(param_1 + 0x3c) = uVar14;
          iVar19 = *(int *)(param_1 + 0x40) + 0x20;
        }
        uVar17 = iVar19 - iVar4;
        uVar11 = (uVar14 >> (uVar17 & 0xff) | uVar11) & *(uint *)(DAT_140b7670 + iVar4 * 4);
        *(uint *)(param_1 + 0x40) = uVar17;
        if (-1 < *(int *)(param_1 + 0x2f8) << 0x1f) {
          if (local_a4 != uVar11) {
            uVar14 = *(uint *)(DAT_140b7974 + 0x20);
            iVar19 = (uVar5 - 8) - iVar4;
            do {
              uVar5 = 8 - uVar17;
              if ((int)uVar5 < 1) {
                uVar5 = 0;
                uVar6 = *(uint *)(param_1 + 0x3c);
              }
              else {
                if (uVar5 == 0x20) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = *(int *)(param_1 + 0x3c) << (uVar5 & 0xff);
                }
                uVar6 = FUN_140e5948(pbVar21);
                *(uint *)(param_1 + 0x3c) = uVar6;
                uVar17 = *(int *)(param_1 + 0x40) + 0x20;
              }
              uVar17 = uVar17 - 8;
              uVar11 = (uVar6 >> (uVar17 & 0xff) | uVar5) & uVar14 | local_a0 & uVar11 << 8;
              *(uint *)(param_1 + 0x40) = uVar17;
              uVar5 = iVar4 + iVar19;
              if (iVar19 < 8) goto LAB_140b75c2;
              iVar19 = iVar19 + -8;
            } while (local_a4 != uVar11);
          }
LAB_140b768e:
          iVar10 = *(int *)(param_1 + 0x2dc);
          local_6c = iVar4;
          goto LAB_140b7402;
        }
LAB_140b75c2:
        if (local_a4 == uVar11) goto LAB_140b768e;
        local_ac = local_70;
        iVar10 = *(int *)(param_1 + 0x2dc);
        local_6c = iVar4;
LAB_140b7440:
        uVar11 = uVar5 & 7;
        if (-1 < (int)-uVar5) {
          uVar11 = -(-uVar5 & 7);
        }
        uVar11 = (8 - local_6c) + uVar11;
        uVar5 = *(uint *)(param_1 + 0x40);
        param_1[0x2dc] = 0;
        param_1[0x2dd] = 0;
        param_1[0x2de] = 0;
        param_1[0x2df] = 0;
        if ((int)uVar11 < 0) {
          uVar17 = uVar5 - uVar11;
          uVar14 = *(uint *)(param_1 + 0x60);
          if (uVar17 < 0x20) {
            if (uVar14 == 0) {
              *(uint *)(param_1 + 0x40) = uVar17;
              FUN_140e5408(pbVar21,uVar17);
              param_1[0x3c] = 0;
              param_1[0x3d] = 0;
              param_1[0x3e] = 0;
              param_1[0x3f] = 0;
              param_1[0x40] = 0;
              param_1[0x41] = 0;
              param_1[0x42] = 0;
              param_1[0x43] = 0;
              goto LAB_140b748c;
            }
LAB_140b760a:
            if (uVar5 != 0) {
              FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar5);
              uVar14 = *(uint *)(param_1 + 0x60);
            }
          }
          else {
            if (uVar14 != 0) goto LAB_140b760a;
            FUN_140e5408(pbVar21);
            uVar14 = *(uint *)(param_1 + 0x60);
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          FUN_140e5408(pbVar21,-uVar11,uVar14 & 0xff);
        }
        else {
          if (uVar11 < uVar5) {
            if (*(int *)(param_1 + 0x60) == 0) {
              *(uint *)(param_1 + 0x40) = uVar5 - uVar11;
              goto LAB_140b748c;
            }
LAB_140b7472:
            FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar5);
            uVar14 = *(uint *)(param_1 + 0x60);
          }
          else {
            uVar14 = *(uint *)(param_1 + 0x60);
            if (uVar14 == 0) {
              FUN_140e5408(pbVar21);
              uVar14 = *(uint *)(param_1 + 0x60);
            }
            else if (uVar5 != 0) goto LAB_140b7472;
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          FUN_140e5108(pbVar21,uVar11,uVar14 & 0xff);
        }
LAB_140b748c:
        local_6c = 0;
        if (local_68 == 0) {
          if (*(int *)(param_1 + 0x2f8) << 0x1f < 0) {
            iVar19 = 0x102;
            goto LAB_140b7196;
          }
        }
        else if ((*(uint *)(param_1 + 0x2f8) & 10) == 8) goto code_r0x140b75e6;
        iVar10 = *(int *)(param_1 + 0x60);
        iVar19 = 0x102;
        iVar2 = local_6c;
      }
      local_6c = 0;
      local_ac = local_70;
      if (iVar19 == 0) {
LAB_140b7402:
        local_ac = local_70;
        iVar19 = FUN_140e5578(param_1,param_1 + 0x3c,uVar18,&local_70,&local_68,&local_74,&local_64,
                              &local_6c);
        if (5 < (iVar19 - 0x200U & 0xffff)) {
          if (iVar19 == 0) {
            if (DAT_140b766c < local_6c + local_74) goto LAB_140b7440;
            if ((int)(uVar5 - local_6c) < local_74) goto LAB_140b718c;
            goto LAB_140b74c4;
          }
          if (iVar19 != 0x101) goto LAB_140b754c;
LAB_140b718c:
          iVar19 = 0x101;
          param_1[0x2dc] = 0;
          param_1[0x2dd] = 0;
          param_1[0x2de] = 0;
          param_1[0x2df] = 0;
          goto LAB_140b7196;
        }
        uVar18 = uVar5 & 7;
        if (-1 < (int)-uVar5) {
          uVar18 = -(-uVar5 & 7);
        }
        uVar5 = *(uint *)(param_1 + 0x40);
        uVar18 = (8 - local_6c) + uVar18;
        if ((int)uVar18 < 0) {
          uVar14 = uVar5 - uVar18;
          uVar11 = *(uint *)(param_1 + 0x60);
          if (uVar14 < 0x20) {
            if (uVar11 == 0) {
              *(uint *)(param_1 + 0x40) = uVar14;
              FUN_140e5408(pbVar21,uVar14);
              param_1[0x3c] = 0;
              param_1[0x3d] = 0;
              param_1[0x3e] = 0;
              param_1[0x3f] = 0;
              param_1[0x40] = 0;
              param_1[0x41] = 0;
              param_1[0x42] = 0;
              param_1[0x43] = 0;
              goto LAB_140b79d4;
            }
LAB_140b7ad0:
            if (uVar5 != 0) {
              FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar5);
              uVar11 = *(uint *)(param_1 + 0x60);
            }
          }
          else {
            if (uVar11 != 0) goto LAB_140b7ad0;
            FUN_140e5408(pbVar21);
            uVar11 = *(uint *)(param_1 + 0x60);
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          FUN_140e5408(pbVar21,-uVar18,uVar11 & 0xff);
        }
        else {
          if (uVar18 < uVar5) {
            if (*(int *)(param_1 + 0x60) == 0) {
              *(uint *)(param_1 + 0x40) = uVar5 - uVar18;
              goto LAB_140b79d4;
            }
LAB_140b79b4:
            FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar5);
            uVar11 = *(uint *)(param_1 + 0x60);
          }
          else {
            uVar11 = *(uint *)(param_1 + 0x60);
            if (uVar11 == 0) {
              FUN_140e5408(pbVar21);
              uVar11 = *(uint *)(param_1 + 0x60);
            }
            else if (uVar5 != 0) goto LAB_140b79b4;
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          FUN_140e5108(pbVar21,uVar18,uVar11 & 0xff);
        }
LAB_140b79d4:
        *(uint *)(param_1 + 0x2d8) = local_70;
        goto joined_r0x140b79de;
      }
LAB_140b754c:
      if (iVar19 == 0x102) goto LAB_140b7440;
LAB_140b74c4:
      if (local_68 == 0) goto LAB_140b7196;
      if ((*(uint *)(param_1 + 0x2f8) & 10) != 8) {
        if (iVar19 == 0) goto LAB_140b74e2;
        goto LAB_140b714e;
      }
      if (iVar19 != 0) goto LAB_140b75ea;
      if (local_98 != -1) goto LAB_140b7560;
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_140e5408(pbVar21,*(undefined4 *)(param_1 + 0x40),0);
      }
      else if (*(int *)(param_1 + 0x40) != 0) {
        FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
      }
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      local_98 = FUN_140e52b8(pbVar21);
      local_84 = *(undefined4 *)(param_1 + 0x2dc);
      local_80 = *(undefined4 *)(param_1 + 0x2d0);
      local_88 = local_70;
      local_90 = local_6c;
      puVar3 = local_60;
      pbVar24 = param_1 + 0x6c;
      do {
        pbVar20 = pbVar24;
        puVar22 = puVar3;
        uVar7 = *(undefined4 *)(pbVar20 + 4);
        uVar12 = *(undefined4 *)(pbVar20 + 8);
        uVar15 = *(undefined4 *)(pbVar20 + 0xc);
        pbVar24 = pbVar20 + 0x10;
        *puVar22 = *(undefined4 *)pbVar20;
        puVar22[1] = uVar7;
        puVar22[2] = uVar12;
        puVar22[3] = uVar15;
        puVar3 = puVar22 + 4;
      } while (pbVar24 != param_1 + 0x8c);
      uVar7 = *(undefined4 *)(pbVar20 + 0x14);
      uVar12 = *(undefined4 *)(pbVar20 + 0x18);
      puVar22[4] = *(undefined4 *)pbVar24;
      puVar22[5] = uVar7;
      puVar22[6] = uVar12;
      if (local_98 != -1) {
LAB_140b7560:
        if (local_64 == 0) {
          uVar11 = *(uint *)(param_1 + 0x40);
          uVar5 = 1;
          uVar18 = 1;
          iVar8 = *(int *)(param_1 + 0x60);
          if (uVar11 <= local_70) goto LAB_140b7578;
          goto LAB_140b74ea;
        }
        goto LAB_140b7250;
      }
      uVar18 = 1;
LAB_140b74e2:
      uVar11 = *(uint *)(param_1 + 0x40);
      iVar8 = *(int *)(param_1 + 0x60);
      uVar5 = uVar18;
      if (local_70 < uVar11) {
LAB_140b74ea:
        uVar18 = uVar5;
        if (iVar8 != 0) {
LAB_140b7634:
          uVar14 = local_70;
          uVar9 = (undefined1)iVar8;
          uVar5 = uVar18;
          if (uVar11 != 0) {
            FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar11);
            uVar9 = (undefined1)*(undefined4 *)(param_1 + 0x60);
          }
          goto LAB_140b763a;
        }
        iVar8 = uVar11 - local_70;
        *(int *)(param_1 + 0x40) = iVar8;
LAB_140b74fc:
        FUN_140e5408(pbVar21,iVar8,0);
      }
      else {
LAB_140b7578:
        uVar14 = local_70;
        if (iVar8 != 0) goto LAB_140b7634;
        FUN_140e5408(pbVar21);
        uVar9 = (undefined1)*(undefined4 *)(param_1 + 0x60);
        uVar5 = uVar18;
LAB_140b763a:
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        FUN_140e5108(pbVar21,uVar14,uVar9);
        if (*(int *)(param_1 + 0x60) == 0) {
          iVar8 = *(int *)(param_1 + 0x40);
          goto LAB_140b74fc;
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
        }
      }
      local_9c = local_9c + 1;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      local_94 = FUN_140e52b8(pbVar21);
      FUN_140e52e8(param_1);
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_140e5408(pbVar21,*(undefined4 *)(param_1 + 0x40));
      }
      else if (*(int *)(param_1 + 0x40) != 0) {
        FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
      }
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      iVar8 = FUN_140e52b8(pbVar21);
      local_94 = local_94 - iVar8;
      uVar18 = uVar5;
      if (local_68 == 0) {
LAB_140b7196:
        if (local_98 != -1) {
          if ((local_64 != 0) || (iVar19 != 0)) goto LAB_140b7250;
          if ((*(uint *)(param_1 + 0x2f8) & 0x15) == 0) goto LAB_140b72f6;
          goto LAB_140b71b4;
        }
        uVar18 = *(uint *)(param_1 + 0x2f8);
        if (((uVar18 & 0x15) == 0) && (iVar19 == 0)) goto LAB_140b72f6;
        if (iVar19 == 0x101) goto LAB_140b73b6;
        param_1[0x2f4] = 0;
        param_1[0x2f5] = 0;
        param_1[0x2f6] = 0;
        param_1[0x2f7] = 0;
        if (local_9c != 0) goto LAB_140b71c2;
        *(uint *)(param_1 + 0x2d8) = local_70;
        if (iVar19 != 0) goto LAB_140b78ca;
        goto LAB_140b720e;
      }
    } while( true );
  }
  *(uint *)(param_1 + 0x2d8) = local_70;
LAB_140b777e:
  iVar19 = 0x101;
joined_r0x140b79de:
  if (local_64 == 0) {
    *param_2 = local_6c;
    goto LAB_140b77ae;
  }
LAB_140b7786:
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 0x20;
LAB_140b7792:
  *param_2 = local_6c;
  if (iVar19 != 0x102) goto LAB_140b77ae;
LAB_140b779e:
  iVar19 = 0x102;
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfffffffe;
LAB_140b77ae:
  if (*DAT_140b7978 == local_34) {
    return iVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
code_r0x140b75e6:
  iVar19 = 0x102;
LAB_140b75ea:
  if (local_98 != -1) {
    if (iVar19 != 0x102) goto LAB_140b7250;
    param_1[0x2f4] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
    local_64 = 0;
    *(uint *)(param_1 + 0x2d8) = local_70;
    *param_2 = local_6c;
    goto LAB_140b779e;
  }
  uVar18 = 1;
  goto LAB_140b714e;
LAB_140b7250:
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_140e5408(pbVar21,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  iVar4 = FUN_140e52b8(pbVar21);
  uVar18 = iVar4 - local_98;
  if ((int)uVar18 < 0) {
    iVar19 = *(int *)(param_1 + 0x40);
    uVar11 = *(uint *)(param_1 + 0x60);
    uVar5 = (local_98 + iVar19) - iVar4;
    if (uVar5 < 0x20) {
      if (uVar11 == 0) {
        *(uint *)(param_1 + 0x40) = uVar5;
        FUN_140e5408(pbVar21,uVar5);
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        goto LAB_140b72a0;
      }
LAB_140b795a:
      if (iVar19 != 0) {
        FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),iVar19);
        uVar11 = *(uint *)(param_1 + 0x60);
      }
    }
    else {
      if (uVar11 != 0) goto LAB_140b795a;
      FUN_140e5408(pbVar21);
      uVar11 = *(uint *)(param_1 + 0x60);
    }
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    FUN_140e5408(pbVar21,-uVar18,uVar11 & 0xff);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x40);
    if (uVar18 < uVar5) {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(uint *)(param_1 + 0x40) = (local_98 + uVar5) - iVar4;
        goto LAB_140b72a0;
      }
LAB_140b7284:
      FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar5);
      uVar11 = *(uint *)(param_1 + 0x60);
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x60);
      if (uVar11 == 0) {
        FUN_140e5408(pbVar21);
        uVar11 = *(uint *)(param_1 + 0x60);
      }
      else if (uVar5 != 0) goto LAB_140b7284;
    }
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    FUN_140e5108(pbVar21,uVar18,uVar11 & 0xff);
  }
LAB_140b72a0:
  pbVar24 = param_1 + 0x6c;
  puVar3 = local_60;
  do {
    puVar22 = puVar3;
    pbVar20 = pbVar24;
    uVar7 = puVar22[1];
    uVar12 = puVar22[2];
    uVar15 = puVar22[3];
    *(undefined4 *)pbVar20 = *puVar22;
    *(undefined4 *)(pbVar20 + 4) = uVar7;
    *(undefined4 *)(pbVar20 + 8) = uVar12;
    *(undefined4 *)(pbVar20 + 0xc) = uVar15;
    pbVar24 = pbVar20 + 0x10;
    puVar3 = puVar22 + 4;
  } while (puVar22 + 4 != local_60 + 8);
  uVar7 = puVar22[4];
  uVar12 = puVar22[5];
  *(undefined4 *)(pbVar20 + 0x18) = puVar22[6];
  *(undefined4 *)(pbVar20 + 0x10) = uVar7;
  *(undefined4 *)(pbVar20 + 0x14) = uVar12;
  *(undefined4 *)(param_1 + 0x2dc) = local_84;
  *(undefined4 *)(param_1 + 0x2d0) = local_80;
  local_70 = local_88;
  local_6c = local_90;
  uVar18 = *(uint *)(param_1 + 0x2f8);
  if ((uVar18 & 0x15) != 0) {
    *(uint *)(param_1 + 0x2d8) = local_88;
    param_1[0x2f4] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
LAB_140b720e:
    *(uint *)(param_1 + 0x2f8) = uVar18 | 1;
    iVar19 = 0;
    goto joined_r0x140b79de;
  }
  local_9c = 0;
LAB_140b72f6:
  bVar1 = *param_1;
  if ((char)bVar1 < '\b') {
    if ((char)bVar1 < '\x06') goto LAB_140b7306;
LAB_140b78da:
    iVar4 = *(int *)(param_1 + 0x70);
    if (iVar4 == 0xff) {
      iVar4 = -1;
    }
  }
  else {
    if (bVar1 == 10) goto LAB_140b78da;
LAB_140b7306:
    iVar4 = -1;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_140e5408(pbVar21,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c));
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  iVar19 = FUN_140e52b8(pbVar21);
  if ((*(int *)(param_1 + 0x2e0) == 0) || (*(int *)(param_1 + 0x2f0) == 0)) {
LAB_140b71b4:
    iVar19 = 0;
    param_1[0x2f4] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
    if (local_9c != 0) {
LAB_140b71c2:
      iVar4 = *(int *)(param_1 + 0x40);
LAB_140b71c4:
      uVar18 = local_94 + local_ac + iVar4;
      uVar5 = *(uint *)(param_1 + 0x60);
      if (uVar18 < 0x20) {
        if (uVar5 != 0) {
LAB_140b71dc:
          if (iVar4 != 0) {
            FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),iVar4);
            uVar5 = *(uint *)(param_1 + 0x60);
          }
          goto LAB_140b71e2;
        }
        *(uint *)(param_1 + 0x40) = uVar18;
        FUN_140e5408(pbVar21);
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
      }
      else {
        if (uVar5 != 0) goto LAB_140b71dc;
        FUN_140e5408(pbVar21,iVar4);
        uVar5 = *(uint *)(param_1 + 0x60);
LAB_140b71e2:
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        FUN_140e5408(pbVar21,local_94 + local_ac,uVar5 & 0xff);
      }
      if (iVar19 != 0) {
        *(int *)(param_1 + 0x2dc) = iVar10;
        local_70 = local_ac;
        *(uint *)(param_1 + 0x2d8) = local_ac;
        uVar18 = *(uint *)(param_1 + 0x2f8);
        local_6c = iVar2;
        goto LAB_140b720e;
      }
    }
    *(uint *)(param_1 + 0x2d8) = local_70;
    uVar18 = *(uint *)(param_1 + 0x2f8);
    goto LAB_140b720e;
  }
  iVar8 = *(int *)(param_1 + 400);
  if ((iVar8 != 0) && (iVar23 = *(int *)(param_1 + 0x18c), iVar23 != 0)) {
    iVar16 = *(int *)(param_1 + 0x2f4);
    uVar18 = *param_1 - 1 & 0xff;
    iVar13 = (*(int *)(param_1 + 0x2e0) * iVar8 + iVar23 + -1) / iVar23;
    iVar8 = ((iVar23 * *(int *)(param_1 + 0x2f0) + iVar8 * 1000 + -1) / (iVar8 * 1000) - iVar16) +
            -1;
    if ((uVar18 < 10) && ((1 << uVar18 & 0x263U) != 0)) {
      iVar4 = iVar13 * iVar8 + iVar4 + 0x1f;
      if (iVar4 <= DAT_140b766c) {
LAB_140b73a6:
        if (iVar4 <= iVar19 - local_74) goto LAB_140b71b4;
        goto LAB_140b73b0;
      }
    }
    else {
      iVar4 = iVar13 * iVar8 + iVar4;
      if (iVar4 <= DAT_140b7c0c) goto LAB_140b73a6;
    }
    param_1[0x2f4] = 0;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
    iVar19 = 0x102;
    if (local_9c != 0) goto LAB_140b71c2;
    iVar19 = 0x102;
    *(uint *)(param_1 + 0x2d8) = local_70;
LAB_140b78ca:
    if (local_64 != 0) goto LAB_140b7786;
    goto LAB_140b7792;
  }
  iVar16 = *(int *)(param_1 + 0x2f4);
LAB_140b73b0:
  *(int *)(param_1 + 0x2f4) = iVar16 + 1;
LAB_140b73b6:
  iVar4 = local_6c;
  iVar19 = *(int *)(param_1 + 0x40);
  uVar18 = local_6c + iVar19;
  if (uVar18 < 0x20) {
    iVar8 = *(int *)(param_1 + 0x60);
    if (iVar8 != 0) {
LAB_140b73cc:
      uVar9 = (undefined1)iVar8;
      if (iVar19 != 0) {
        FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),iVar19);
        uVar9 = (undefined1)*(undefined4 *)(param_1 + 0x60);
      }
      goto LAB_140b73d2;
    }
    *(uint *)(param_1 + 0x40) = uVar18;
    FUN_140e5408(pbVar21,uVar18,0);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    iVar4 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x60);
    if (iVar8 != 0) goto LAB_140b73cc;
    FUN_140e5408(pbVar21);
    uVar9 = (undefined1)*(undefined4 *)(param_1 + 0x60);
LAB_140b73d2:
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    FUN_140e5408(pbVar21,iVar4,uVar9);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  local_6c = 0;
  if (local_9c != 0) {
    iVar19 = 0x101;
    goto LAB_140b71c4;
  }
  *(uint *)(param_1 + 0x2d8) = local_70;
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_140e5408(pbVar21,iVar4,0);
  }
  else if (iVar4 != 0) {
    FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),iVar4);
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar18 = FUN_140e52b8(pbVar21);
  if (uVar18 < DAT_140b7980 -
               (uint)((ulonglong)DAT_140b797c *
                      (ulonglong)(uint)(*(int *)(param_1 + 0x2f0) * *(int *)(param_1 + 0x2e0)) >>
                     0x26)) goto LAB_140b777e;
  uVar18 = *(uint *)(param_1 + 0x40);
  if (uVar18 < 9) {
    uVar5 = *(uint *)(param_1 + 0x60);
    if (uVar5 == 0) {
      FUN_140e5408(pbVar21);
      uVar5 = *(uint *)(param_1 + 0x60);
    }
    else if (uVar18 != 0) goto LAB_140b7b44;
LAB_140b7b50:
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    FUN_140e5108(pbVar21,8,uVar5 & 0xff);
  }
  else {
    if (*(int *)(param_1 + 0x60) != 0) {
LAB_140b7b44:
      FUN_140e5168(pbVar21,*(undefined4 *)(param_1 + 0x3c),uVar18);
      uVar5 = *(uint *)(param_1 + 0x60);
      goto LAB_140b7b50;
    }
    *(uint *)(param_1 + 0x40) = uVar18 - 8;
  }
  if (local_64 == 0) {
    *param_2 = local_6c;
  }
  else {
    *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) | 0x20;
    *param_2 = local_6c;
  }
  goto LAB_140b779e;
}

