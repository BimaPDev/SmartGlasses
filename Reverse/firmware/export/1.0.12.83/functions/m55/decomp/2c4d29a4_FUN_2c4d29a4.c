/* FUN_2c4d29a4 @ 0x2c4d29a4 */

int FUN_2c4d29a4(byte *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar17;
  ulonglong uVar16;
  int local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined1 auStack_9c [104];
  int local_34;
  
  uVar8 = *(uint *)(param_1 + 0x334);
  local_34 = *DAT_2c4d2c80;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = uVar8 & 0x20;
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
  }
  pbVar13 = param_1 + 0x44;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  iVar1 = FUN_2c4d76a8(pbVar13);
  if (iVar1 < 1) {
    iVar1 = 0x101;
    *(uint *)(param_1 + 0x314) = local_ac;
joined_r0x2c4d3232:
    if (local_a0 == 0) {
      *param_2 = local_a8;
    }
    else {
LAB_2c4d30ae:
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 0x20;
LAB_2c4d30ba:
      *param_2 = local_a8;
      if (iVar1 == 0x102) {
LAB_2c4d30c6:
        iVar1 = 0x102;
        *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffffe;
      }
    }
    if (*DAT_2c4d32b0 == local_34) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  local_a4 = 0;
  if ((*(uint *)(param_1 + 0x334) & 10) != 0) {
    local_a4 = 1 - (*(uint *)(param_1 + 0x334) & 1);
  }
  if (*param_1 == 2) {
    iVar15 = 0xc;
    local_d8 = 0xfff;
    local_dc = 0xfff;
  }
  else if (*param_1 == 10) {
    iVar15 = 0xb;
    local_dc = 0x2b7;
    local_d8 = 0x7ff;
  }
  else {
    iVar15 = 0;
    local_dc = 0;
    local_d8 = 0;
  }
  uVar16 = CONCAT44(param_1 + 0x3c,uVar8) & 0xffffffff00000015;
  iVar1 = 0;
  local_c8 = 0;
  local_d0 = -1;
  local_c4 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_bc = 0;
  local_b8 = 0;
LAB_2c4d2a50:
  iVar14 = iVar1;
  if (*(int *)(param_1 + 0x60) == 0) goto LAB_2c4d2d46;
LAB_2c4d2a5c:
  local_e0 = local_a8;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
  }
  do {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    uVar2 = FUN_2c4d76a8(pbVar13);
    iVar14 = *(int *)(param_1 + 0x318);
    uVar17 = (undefined4)(uVar16 >> 0x20);
    uVar8 = local_ac;
    if (iVar14 != 0) {
      local_a8 = 0;
      if (iVar1 == 0) {
LAB_2c4d2c98:
        uVar8 = local_ac;
        iVar1 = FUN_2c4d1e60(param_1,uVar17,iVar15,(int)uVar16,&local_ac,&local_a4,&local_b0,
                             &local_a0,&local_a8);
        if ((iVar1 - 0x200U & 0xffff) < 6) {
          uVar8 = uVar2 & 7;
          uVar4 = *(uint *)(param_1 + 0x40);
          if (-1 < (int)-uVar2) {
            uVar8 = -(-uVar2 & 7);
          }
          uVar8 = (8 - local_a8) + uVar8;
          if ((int)uVar8 < 0) {
            uVar6 = uVar4 - uVar8;
            uVar2 = *(uint *)(param_1 + 0x60);
            if (uVar6 < 0x20) {
              if (uVar2 == 0) {
                *(uint *)(param_1 + 0x40) = uVar6;
                FUN_2c4d766c(pbVar13,uVar6);
                param_1[0x3c] = 0;
                param_1[0x3d] = 0;
                param_1[0x3e] = 0;
                param_1[0x3f] = 0;
                param_1[0x40] = 0;
                param_1[0x41] = 0;
                param_1[0x42] = 0;
                param_1[0x43] = 0;
                goto LAB_2c4d3228;
              }
LAB_2c4d338a:
              if (uVar4 != 0) {
                FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar4);
                uVar2 = *(uint *)(param_1 + 0x60);
              }
            }
            else {
              if (uVar2 != 0) goto LAB_2c4d338a;
              FUN_2c4d766c(pbVar13);
              uVar2 = *(uint *)(param_1 + 0x60);
            }
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d766c(pbVar13,-uVar8,uVar2 & 0xff);
          }
          else {
            if (uVar8 < uVar4) {
              if (*(int *)(param_1 + 0x60) == 0) {
                *(uint *)(param_1 + 0x40) = uVar4 - uVar8;
                goto LAB_2c4d3228;
              }
LAB_2c4d3208:
              FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar4);
              uVar2 = *(uint *)(param_1 + 0x60);
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x60);
              if (uVar2 == 0) {
                FUN_2c4d766c(pbVar13);
                uVar2 = *(uint *)(param_1 + 0x60);
              }
              else if (uVar4 != 0) goto LAB_2c4d3208;
            }
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d768c(pbVar13,uVar8,uVar2 & 0xff);
          }
LAB_2c4d3228:
          *(uint *)(param_1 + 0x314) = local_ac;
          goto joined_r0x2c4d3232;
        }
        if (iVar1 == 0) {
          if (DAT_2c4d2f8c < local_a8 + local_b0) goto LAB_2c4d2cdc;
          if ((int)(uVar2 - local_a8) < local_b0) goto LAB_2c4d2a8e;
          goto LAB_2c4d2d58;
        }
        if (iVar1 != 0x101) goto LAB_2c4d2e9e;
LAB_2c4d2a8e:
        iVar1 = 0x101;
        param_1[0x318] = 0;
        param_1[0x319] = 0;
        param_1[0x31a] = 0;
        param_1[0x31b] = 0;
LAB_2c4d2a98:
        if (local_d0 == -1) {
          if (iVar1 == 0x101) goto LAB_2c4d2bcc;
LAB_2c4d30fc:
          param_1[0x330] = 0;
          param_1[0x331] = 0;
          param_1[0x332] = 0;
          param_1[0x333] = 0;
          if (local_d4 == 0) {
            *(uint *)(param_1 + 0x314) = local_ac;
            if (iVar1 == 0) {
              uVar2 = *(uint *)(param_1 + 0x334);
              goto LAB_2c4d314c;
            }
LAB_2c4d3470:
            if (local_a0 != 0) goto LAB_2c4d30ae;
            goto LAB_2c4d30ba;
          }
LAB_2c4d310a:
          iVar15 = *(int *)(param_1 + 0x40);
LAB_2c4d310c:
          uVar4 = *(uint *)(param_1 + 0x60);
          uVar2 = local_c8 + uVar8 + iVar15;
          if (uVar2 < 0x20) {
            if (uVar4 != 0) {
LAB_2c4d311c:
              if (iVar15 != 0) {
                FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),iVar15);
                uVar4 = *(uint *)(param_1 + 0x60);
              }
              goto LAB_2c4d3122;
            }
            *(uint *)(param_1 + 0x40) = uVar2;
            FUN_2c4d766c(pbVar13);
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
            if (uVar4 != 0) goto LAB_2c4d311c;
            FUN_2c4d766c(pbVar13,iVar15);
            uVar4 = *(uint *)(param_1 + 0x60);
LAB_2c4d3122:
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d766c(pbVar13,local_c8 + uVar8,uVar4 & 0xff);
          }
          if (iVar1 == 0) goto LAB_2c4d2e82;
          *(int *)(param_1 + 0x318) = iVar14;
          *(uint *)(param_1 + 0x314) = uVar8;
          local_a8 = local_e0;
          uVar2 = *(uint *)(param_1 + 0x334);
          local_ac = uVar8;
        }
        else {
LAB_2c4d2aa0:
          if (*(int *)(param_1 + 0x60) == 0) {
            FUN_2c4d766c(pbVar13,*(undefined4 *)(param_1 + 0x40));
          }
          else if (*(int *)(param_1 + 0x40) != 0) {
            FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          iVar1 = FUN_2c4d76a8(pbVar13);
          uVar2 = iVar1 - local_d0;
          if ((int)uVar2 < 0) {
            iVar15 = *(int *)(param_1 + 0x40);
            uVar6 = *(uint *)(param_1 + 0x60);
            uVar4 = (local_d0 + iVar15) - iVar1;
            if (uVar4 < 0x20) {
              if (uVar6 == 0) {
                *(uint *)(param_1 + 0x40) = uVar4;
                FUN_2c4d766c(pbVar13,uVar4);
                param_1[0x3c] = 0;
                param_1[0x3d] = 0;
                param_1[0x3e] = 0;
                param_1[0x3f] = 0;
                param_1[0x40] = 0;
                param_1[0x41] = 0;
                param_1[0x42] = 0;
                param_1[0x43] = 0;
                goto LAB_2c4d2af0;
              }
LAB_2c4d31b8:
              if (iVar15 != 0) {
                FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),iVar15);
                uVar6 = *(uint *)(param_1 + 0x60);
              }
            }
            else {
              if (uVar6 != 0) goto LAB_2c4d31b8;
              FUN_2c4d766c(pbVar13);
              uVar6 = *(uint *)(param_1 + 0x60);
            }
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d766c(pbVar13,-uVar2,uVar6 & 0xff);
          }
          else {
            uVar4 = *(uint *)(param_1 + 0x40);
            if (uVar2 < uVar4) {
              if (*(int *)(param_1 + 0x60) == 0) {
                *(uint *)(param_1 + 0x40) = (local_d0 + uVar4) - iVar1;
                goto LAB_2c4d2af0;
              }
LAB_2c4d2ad4:
              FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar4);
              uVar6 = *(uint *)(param_1 + 0x60);
            }
            else {
              uVar6 = *(uint *)(param_1 + 0x60);
              if (uVar6 == 0) {
                FUN_2c4d766c(pbVar13);
                uVar6 = *(uint *)(param_1 + 0x60);
              }
              else if (uVar4 != 0) goto LAB_2c4d2ad4;
            }
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d768c(pbVar13,uVar2,uVar6 & 0xff);
          }
LAB_2c4d2af0:
          FUN_2c674668(param_1 + 0x6c,auStack_9c,0x68);
          *(undefined4 *)(param_1 + 0x318) = local_bc;
          *(undefined4 *)(param_1 + 0x30c) = local_b8;
          local_ac = local_c4;
          local_a8 = local_cc;
          uVar2 = *(uint *)(param_1 + 0x334);
          if ((uVar2 & 0x15) == 0) {
            local_d4 = 0;
            goto LAB_2c4d2b1e;
          }
          *(uint *)(param_1 + 0x314) = local_c4;
          param_1[0x330] = 0;
          param_1[0x331] = 0;
          param_1[0x332] = 0;
          param_1[0x333] = 0;
        }
      }
      else {
LAB_2c4d2e9e:
        if (iVar1 == 0x102) goto LAB_2c4d2cdc;
LAB_2c4d2d58:
        if (local_a4 != 0) {
          uVar2 = local_ac;
          if ((*(uint *)(param_1 + 0x334) & 10) == 8) {
            if (iVar1 != 0) goto LAB_2c4d2fa6;
            if (local_d0 != -1) goto LAB_2c4d2ddc;
            if (*(int *)(param_1 + 0x60) == 0) {
              FUN_2c4d766c(pbVar13,*(undefined4 *)(param_1 + 0x40));
            }
            else if (*(int *)(param_1 + 0x40) != 0) {
              FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
            }
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            local_d0 = FUN_2c4d76a8(pbVar13);
            uVar2 = local_ac;
            local_bc = *(undefined4 *)(param_1 + 0x318);
            local_b8 = *(undefined4 *)(param_1 + 0x30c);
            local_c4 = local_ac;
            local_cc = local_a8;
            FUN_2c674668(auStack_9c,param_1 + 0x6c,0x68);
            if (local_d0 != -1) goto LAB_2c4d2ddc;
            goto LAB_2c4d2df2;
          }
          goto joined_r0x2c4d2d6c;
        }
LAB_2c4d2e52:
        if (local_d0 == -1) {
          if (((*(uint *)(param_1 + 0x334) & 0x15) != 0) || (iVar1 != 0)) goto LAB_2c4d30fc;
LAB_2c4d2b1e:
          iVar1 = FUN_2c4d2908(param_1);
          if (*(int *)(param_1 + 0x60) == 0) {
            FUN_2c4d766c(pbVar13,*(undefined4 *)(param_1 + 0x40));
          }
          else if (*(int *)(param_1 + 0x40) != 0) {
            FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          iVar15 = FUN_2c4d76a8(pbVar13);
          if ((*(int *)(param_1 + 0x31c) == 0) || (*(int *)(param_1 + 0x32c) == 0))
          goto LAB_2c4d2e74;
          iVar10 = *(int *)(param_1 + 0x1c8);
          iVar12 = *(int *)(param_1 + 0x1cc);
          if ((iVar12 == 0) || (iVar10 == 0)) {
            iVar7 = *(int *)(param_1 + 0x330);
          }
          else {
            iVar11 = (*(int *)(param_1 + 0x31c) * iVar12 + iVar10 + -1) / iVar10;
            uVar2 = *param_1 - 1 & 0xff;
            iVar7 = *(int *)(param_1 + 0x330);
            iVar10 = ((iVar10 * *(int *)(param_1 + 0x32c) + iVar12 * 1000 + -1) / (iVar12 * 1000) -
                     iVar7) + -1;
            if ((uVar2 < 10) && ((1 << uVar2 & 0x263U) != 0)) {
              iVar1 = iVar11 * iVar10 + iVar1 + 0x1f;
              if (DAT_2c4d2c84 < iVar1) {
LAB_2c4d33f0:
                param_1[0x330] = 0;
                param_1[0x331] = 0;
                param_1[0x332] = 0;
                param_1[0x333] = 0;
                if (local_d4 == 0) {
                  iVar1 = 0x102;
                  *(uint *)(param_1 + 0x314) = local_ac;
                  goto LAB_2c4d3470;
                }
                iVar1 = 0x102;
                goto LAB_2c4d310a;
              }
            }
            else {
              iVar1 = iVar11 * iVar10 + iVar1;
              if (DAT_2c4d3498 < iVar1) goto LAB_2c4d33f0;
            }
            if (iVar1 <= iVar15 - local_b0) goto LAB_2c4d2e74;
          }
          *(int *)(param_1 + 0x330) = iVar7 + 1;
LAB_2c4d2bcc:
          iVar1 = local_a8;
          iVar15 = *(int *)(param_1 + 0x40);
          uVar2 = local_a8 + iVar15;
          if (uVar2 < 0x20) {
            iVar10 = *(int *)(param_1 + 0x60);
            if (iVar10 != 0) {
LAB_2c4d2be2:
              uVar5 = (undefined1)iVar10;
              if (iVar15 != 0) {
                FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),iVar15);
                uVar5 = (undefined1)*(undefined4 *)(param_1 + 0x60);
              }
              goto LAB_2c4d2be8;
            }
            *(uint *)(param_1 + 0x40) = uVar2;
            FUN_2c4d766c(pbVar13,uVar2,0);
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            iVar15 = 0;
          }
          else {
            iVar10 = *(int *)(param_1 + 0x60);
            if (iVar10 != 0) goto LAB_2c4d2be2;
            FUN_2c4d766c(pbVar13);
            uVar5 = (undefined1)*(undefined4 *)(param_1 + 0x60);
LAB_2c4d2be8:
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d766c(pbVar13,iVar1,uVar5);
            iVar15 = *(int *)(param_1 + 0x40);
          }
          local_a8 = 0;
          if (local_d4 != 0) {
            iVar1 = 0x101;
            goto LAB_2c4d310c;
          }
          *(uint *)(param_1 + 0x314) = local_ac;
          if (*(int *)(param_1 + 0x60) == 0) {
            FUN_2c4d766c(pbVar13,iVar15,0);
          }
          else if (iVar15 != 0) {
            FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),iVar15);
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          uVar8 = FUN_2c4d76a8(pbVar13);
          if (uVar8 < DAT_2c4d2c84 -
                      (uint)((ulonglong)DAT_2c4d2c88 *
                             (ulonglong)
                             (uint)(*(int *)(param_1 + 0x32c) * *(int *)(param_1 + 0x31c)) >> 0x26))
          {
            iVar1 = 0x101;
            goto joined_r0x2c4d3232;
          }
          uVar8 = *(uint *)(param_1 + 0x40);
          if (uVar8 < 9) {
            uVar2 = *(uint *)(param_1 + 0x60);
            if (uVar2 == 0) {
              FUN_2c4d766c(pbVar13);
              uVar2 = *(uint *)(param_1 + 0x60);
            }
            else if (uVar8 != 0) goto LAB_2c4d3272;
LAB_2c4d327e:
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            FUN_2c4d768c(pbVar13,8,uVar2 & 0xff);
          }
          else {
            if (*(int *)(param_1 + 0x60) != 0) {
LAB_2c4d3272:
              FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar8);
              uVar2 = *(uint *)(param_1 + 0x60);
              goto LAB_2c4d327e;
            }
            *(uint *)(param_1 + 0x40) = uVar8 - 8;
          }
          if (local_a0 == 0) {
            *param_2 = local_a8;
          }
          else {
            *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 0x20;
            *param_2 = local_a8;
          }
          goto LAB_2c4d30c6;
        }
        if ((local_a0 != 0) || (iVar1 != 0)) goto LAB_2c4d2aa0;
        if ((*(uint *)(param_1 + 0x334) & 0x15) == 0) goto LAB_2c4d2b1e;
LAB_2c4d2e74:
        iVar1 = 0;
        param_1[0x330] = 0;
        param_1[0x331] = 0;
        param_1[0x332] = 0;
        param_1[0x333] = 0;
        if (local_d4 != 0) goto LAB_2c4d310a;
LAB_2c4d2e82:
        *(uint *)(param_1 + 0x314) = local_ac;
        uVar2 = *(uint *)(param_1 + 0x334);
      }
LAB_2c4d314c:
      iVar1 = 0;
      *(uint *)(param_1 + 0x334) = uVar2 | 1;
      goto joined_r0x2c4d3232;
    }
    if ((int)(uVar2 - iVar15) < 8) {
      local_a8 = 0;
      goto LAB_2c4d2a8e;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    uVar4 = iVar15 - iVar1;
    uVar8 = 0;
    if ((int)uVar4 < 1) {
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    else {
      if (uVar4 != 0x20) {
        uVar8 = *(int *)(param_1 + 0x3c) << (uVar4 & 0xff);
      }
      uVar4 = FUN_2c4d74d4(pbVar13);
      *(uint *)(param_1 + 0x3c) = uVar4;
      iVar1 = *(int *)(param_1 + 0x40) + 0x20;
    }
    iVar14 = DAT_2c4d2f90;
    uVar6 = iVar1 - iVar15;
    *(uint *)(param_1 + 0x40) = uVar6;
    uVar8 = (uVar4 >> (uVar6 & 0xff) | uVar8) & *(uint *)(iVar14 + iVar15 * 4);
    if (-1 < *(int *)(param_1 + 0x334) << 0x1f) {
      if (local_dc != uVar8) {
        iVar1 = (uVar2 - 8) - iVar15;
        uVar4 = *(uint *)(DAT_2c4d32ac + 0x20);
        do {
          uVar2 = 8 - uVar6;
          if ((int)uVar2 < 1) {
            uVar3 = *(uint *)(param_1 + 0x3c);
            uVar9 = 0;
          }
          else {
            if (uVar2 == 0x20) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(int *)(param_1 + 0x3c) << (uVar2 & 0xff);
            }
            uVar3 = FUN_2c4d74d4(pbVar13);
            *(uint *)(param_1 + 0x3c) = uVar3;
            uVar6 = *(int *)(param_1 + 0x40) + 0x20;
          }
          uVar6 = uVar6 - 8;
          *(uint *)(param_1 + 0x40) = uVar6;
          uVar2 = iVar15 + iVar1;
          uVar8 = (uVar3 >> (uVar6 & 0xff) | uVar9) & uVar4 | local_d8 & uVar8 << 8;
          if (iVar1 < 8) goto LAB_2c4d2ee6;
          iVar1 = iVar1 + -8;
        } while (local_dc != uVar8);
      }
LAB_2c4d2f7e:
      iVar14 = *(int *)(param_1 + 0x318);
      local_a8 = iVar15;
      goto LAB_2c4d2c98;
    }
LAB_2c4d2ee6:
    if (local_dc == uVar8) goto LAB_2c4d2f7e;
    iVar14 = *(int *)(param_1 + 0x318);
    uVar8 = local_ac;
    local_a8 = iVar15;
LAB_2c4d2cdc:
    uVar4 = uVar2 & 7;
    uVar6 = *(uint *)(param_1 + 0x40);
    param_1[0x318] = 0;
    param_1[0x319] = 0;
    param_1[0x31a] = 0;
    param_1[0x31b] = 0;
    if (-1 < (int)-uVar2) {
      uVar4 = -(-uVar2 & 7);
    }
    uVar4 = (8 - local_a8) + uVar4;
    if ((int)uVar4 < 0) {
      uVar9 = uVar6 - uVar4;
      uVar2 = *(uint *)(param_1 + 0x60);
      if (uVar9 < 0x20) {
        if (uVar2 == 0) {
          *(uint *)(param_1 + 0x40) = uVar9;
          FUN_2c4d766c(pbVar13,uVar9);
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          goto LAB_2c4d2d22;
        }
LAB_2c4d2f0a:
        if (uVar6 != 0) {
          FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar6);
          uVar2 = *(uint *)(param_1 + 0x60);
        }
      }
      else {
        if (uVar2 != 0) goto LAB_2c4d2f0a;
        FUN_2c4d766c(pbVar13);
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      FUN_2c4d766c(pbVar13,-uVar4,uVar2 & 0xff);
    }
    else {
      if (uVar4 < uVar6) {
        if (*(int *)(param_1 + 0x60) == 0) {
          *(uint *)(param_1 + 0x40) = uVar6 - uVar4;
          goto LAB_2c4d2d22;
        }
LAB_2c4d2d08:
        FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar6);
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x60);
        if (uVar2 == 0) {
          FUN_2c4d766c(pbVar13);
          uVar2 = *(uint *)(param_1 + 0x60);
        }
        else if (uVar6 != 0) goto LAB_2c4d2d08;
      }
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      FUN_2c4d768c(pbVar13,uVar4,uVar2 & 0xff);
    }
LAB_2c4d2d22:
    local_a8 = 0;
    if (local_a4 == 0) {
LAB_2c4d2d2c:
      if (*(int *)(param_1 + 0x334) << 0x1f < 0) {
        iVar1 = 0x102;
        goto LAB_2c4d2a98;
      }
    }
    else if ((*(uint *)(param_1 + 0x334) & 10) == 8) {
      iVar1 = 0x102;
LAB_2c4d2fa6:
      if (local_d0 == -1) {
        uVar16 = CONCAT44(uVar17,1);
        uVar2 = local_ac;
joined_r0x2c4d2d6c:
        local_ac = uVar2;
        if (iVar1 == 0) {
          uVar4 = *(uint *)(param_1 + 0x40);
          iVar10 = *(int *)(param_1 + 0x60);
          if (uVar4 <= uVar2) goto LAB_2c4d2d7a;
LAB_2c4d2dfa:
          if (iVar10 != 0) goto LAB_2c4d2f34;
          iVar10 = uVar4 - uVar2;
          *(int *)(param_1 + 0x40) = iVar10;
LAB_2c4d2e0a:
          FUN_2c4d766c(pbVar13,iVar10,0);
LAB_2c4d2e12:
          local_d4 = local_d4 + 1;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          local_c8 = FUN_2c4d76a8(pbVar13);
          FUN_2c4d2320(param_1);
          if (*(int *)(param_1 + 0x60) == 0) {
            FUN_2c4d766c(pbVar13,*(undefined4 *)(param_1 + 0x40));
          }
          else if (*(int *)(param_1 + 0x40) != 0) {
            FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
          }
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3e] = 0;
          param_1[0x3f] = 0;
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          iVar10 = FUN_2c4d76a8(pbVar13);
          local_c8 = local_c8 - iVar10;
          if (local_a4 == 0) {
            if (iVar1 != 0x102) goto LAB_2c4d2e52;
            goto LAB_2c4d2d2c;
          }
        }
        goto LAB_2c4d2a50;
      }
LAB_2c4d2ddc:
      if ((local_a0 == 0) && (uVar2 = local_ac, iVar1 == 0)) {
LAB_2c4d2df2:
        uVar16 = CONCAT44(uVar17,1);
        uVar4 = *(uint *)(param_1 + 0x40);
        iVar10 = *(int *)(param_1 + 0x60);
        if (uVar2 < uVar4) goto LAB_2c4d2dfa;
LAB_2c4d2d7a:
        if (iVar10 == 0) {
          FUN_2c4d766c(pbVar13);
          uVar5 = (undefined1)*(undefined4 *)(param_1 + 0x60);
        }
        else {
LAB_2c4d2f34:
          uVar5 = (undefined1)iVar10;
          if (uVar4 != 0) {
            FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c),uVar4);
            uVar5 = (undefined1)*(undefined4 *)(param_1 + 0x60);
          }
        }
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        FUN_2c4d768c(pbVar13,uVar2,uVar5);
        if (*(int *)(param_1 + 0x60) == 0) {
          iVar10 = *(int *)(param_1 + 0x40);
          goto LAB_2c4d2e0a;
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_2c4d7598(pbVar13,*(undefined4 *)(param_1 + 0x3c));
        }
        goto LAB_2c4d2e12;
      }
      if (iVar1 != 0x102) goto LAB_2c4d2aa0;
      param_1[0x330] = 0;
      param_1[0x331] = 0;
      param_1[0x332] = 0;
      param_1[0x333] = 0;
      local_a0 = 0;
      *(uint *)(param_1 + 0x314) = local_ac;
      *param_2 = local_a8;
      goto LAB_2c4d30c6;
    }
    iVar1 = 0x102;
    iVar14 = 0x102;
    if (*(int *)(param_1 + 0x60) != 0) goto LAB_2c4d2a5c;
LAB_2c4d2d46:
    local_e0 = local_a8;
    FUN_2c4d766c(pbVar13,*(undefined4 *)(param_1 + 0x40));
    iVar1 = iVar14;
  } while( true );
}

