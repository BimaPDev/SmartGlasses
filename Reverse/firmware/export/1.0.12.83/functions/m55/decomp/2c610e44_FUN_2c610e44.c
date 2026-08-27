/* FUN_2c610e44 @ 0x2c610e44 */

void FUN_2c610e44(int param_1,undefined4 *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  ushort uVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  undefined1 *local_188;
  int local_184;
  int local_180;
  short local_17c;
  short local_178;
  short local_170;
  short local_16e;
  short local_16c;
  short local_16a;
  short local_168;
  short local_166;
  short local_164;
  short local_162;
  short *local_160 [2];
  undefined4 local_158;
  int local_154;
  undefined1 local_150;
  short *local_14c;
  undefined1 local_148;
  undefined1 auStack_144 [44];
  undefined1 auStack_118 [44];
  short local_ec;
  short local_ea;
  short local_e8;
  short local_e6;
  undefined4 local_c0;
  short local_bc;
  short local_ba;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0;
  short *local_ac;
  undefined1 local_a8;
  undefined2 local_94;
  undefined1 local_91;
  undefined4 local_90;
  int local_3c;
  
  local_3c = *DAT_2c611124;
  uVar11 = (uint)*(short *)(param_2 + 1);
  if ((uVar11 == 0) || (*(byte *)((int)param_2 + 10) < 3)) goto LAB_2c6111a8;
  sVar16 = *param_3;
  sVar9 = *param_4;
  sVar1 = param_3[1];
  if (sVar16 == sVar9) {
    sVar2 = param_4[1];
    if (sVar1 == sVar2) goto LAB_2c6111a8;
  }
  else {
    sVar2 = param_4[1];
  }
  if ((int)uVar11 < 0) {
    uVar11 = uVar11 + 1;
  }
  local_16e = (short)((uVar11 << 0xf) >> 0x10);
  if (sVar9 < sVar16) {
    local_170 = sVar9 - local_16e;
  }
  else {
    local_170 = sVar16 - local_16e;
  }
  local_16a = (short)((uVar11 & 0x1ffff) >> 1);
  if (sVar16 < sVar9) {
    local_16c = local_16e + sVar9;
  }
  else {
    local_16c = local_16a + sVar16;
  }
  if (sVar1 < sVar2) {
    local_16e = sVar1 - local_16e;
  }
  else {
    local_16e = sVar2 - local_16e;
  }
  if (sVar2 < sVar1) {
    sVar2 = sVar1;
  }
  local_16a = local_16a + sVar2;
  iVar4 = FUN_2c62a6b4(&local_170,&local_170,*(undefined4 *)(param_1 + 8));
  if (iVar4 == 0) goto LAB_2c6111a8;
  uVar12 = *(undefined4 *)(param_1 + 8);
  *(short **)(param_1 + 8) = &local_170;
  sVar16 = param_3[1];
  iVar17 = (int)sVar16;
  sVar9 = param_4[1];
  iVar4 = (int)sVar9;
  if (iVar17 == iVar4) {
    sVar9 = *param_3;
    local_e8 = *param_4;
    sVar1 = (short)(*(short *)(param_2 + 1) + -1 >> 1);
    local_e6 = sVar16 + sVar1;
    local_ea = sVar16 - (((ushort)(*(short *)(param_2 + 1) + -1) & 1) + sVar1);
    local_ec = sVar9;
    if (local_e8 <= sVar9) {
      local_ec = local_e8;
      local_e8 = sVar9;
    }
    local_e8 = local_e8 + -1;
    local_188 = (undefined1 *)FUN_2c62a6b4(&local_ec,&local_ec,&local_170);
    if (local_188 != (undefined1 *)0x0) {
      if ((*(short *)(param_2 + 2) == 0) || (*(short *)((int)param_2 + 6) == 0)) {
        iVar4 = FUN_2c613fa8(&local_ec);
        if (iVar4 == 0) {
LAB_2c61151a:
          FUN_2c62c3b0(&local_c0,0x1c);
          local_b8 = *param_2;
          local_a8 = *(undefined1 *)((int)param_2 + 10);
          local_c0 = &local_ec;
          FUN_2c60d588(param_1,&local_c0);
          goto LAB_2c611198;
        }
        local_188 = (undefined1 *)0x0;
      }
      else {
        FUN_2c613fa8(&local_ec);
      }
      FUN_2c62c3b0(&local_c0,0x1c);
      local_b8 = *param_2;
      local_a8 = *(undefined1 *)((int)param_2 + 10);
      iVar17 = (int)local_e6;
      local_e6 = local_ea;
      iVar4 = (int)(short)((local_e8 + 1) - local_ec);
      if (local_188 == (undefined1 *)0x0) {
        local_184 = (int)local_188;
      }
      else {
        iVar22 = (int)*(short *)(param_2 + 2) + (int)*(short *)((int)param_2 + 6);
        local_184 = (int)(short)(local_ec - (short)iVar22 * (short)((int)local_ec / iVar22));
      }
      local_c0 = &local_ec;
      iVar21 = FUN_2c62bf1c(iVar4);
      local_ac = &local_ec;
      local_b4 = iVar21;
      for (iVar22 = (int)local_ea; iVar22 <= iVar17; iVar22 = iVar22 + 1) {
        FUN_2c62c484(iVar21,iVar4);
        iVar18 = FUN_2c613e90(iVar21,(int)local_ec,(int)(short)iVar22,iVar4);
        local_b0 = (undefined1)iVar18;
        if ((iVar18 != 0) && (local_188 != (undefined1 *)0x0)) {
          if (0 < iVar4) {
            iVar7 = 0;
            iVar18 = local_184;
            do {
              sVar16 = *(short *)((int)param_2 + 6);
              sVar9 = (short)iVar7;
              if (sVar16 < iVar18) {
                if (iVar18 < (int)sVar16 + (int)*(short *)(param_2 + 2)) {
                  *(undefined1 *)(iVar21 + iVar7) = 0;
                  iVar18 = (int)(short)((short)iVar18 + 1);
                }
                else {
                  iVar18 = 1;
                }
              }
              else {
                sVar9 = (sVar9 + sVar16) - (short)iVar18;
                iVar18 = (int)(short)(sVar16 + 1);
              }
              iVar7 = (int)(short)(sVar9 + 1);
            } while (iVar7 < iVar4);
          }
          local_b0 = 2;
        }
        FUN_2c60d588(param_1,&local_c0);
        local_ea = local_ea + 1;
        local_e6 = local_e6 + 1;
      }
      FUN_2c62c040(iVar21);
    }
  }
  else {
    sVar1 = *param_3;
    iVar21 = (int)sVar1;
    iVar22 = (int)*param_4;
    if (iVar21 == iVar22) {
      local_e6 = sVar16;
      if (iVar17 < iVar4) {
        local_e6 = sVar9;
      }
      local_e6 = local_e6 + -1;
      local_ea = sVar16;
      if (iVar4 <= iVar17) {
        local_ea = sVar9;
      }
      sVar16 = (short)(*(short *)(param_2 + 1) + -1 >> 1);
      local_e8 = sVar1 + sVar16;
      local_ec = sVar1 - (((ushort)(*(short *)(param_2 + 1) + -1) & 1) + sVar16);
      iVar4 = FUN_2c62a6b4(&local_ec,&local_ec,&local_170);
      if (iVar4 != 0) {
        if ((*(short *)(param_2 + 2) == 0) || (*(short *)((int)param_2 + 6) == 0)) {
          iVar4 = FUN_2c613fa8(&local_ec);
          if (iVar4 == 0) goto LAB_2c61151a;
          iVar4 = 0;
        }
        else {
          FUN_2c613fa8(&local_ec);
        }
        FUN_2c62c3b0(&local_c0,0x1c);
        iVar22 = (int)local_e6;
        local_b8 = *param_2;
        iVar21 = (int)(short)((local_e8 + 1) - local_ec);
        local_a8 = *(undefined1 *)((int)param_2 + 10);
        local_e6 = local_ea;
        local_c0 = &local_ec;
        iVar17 = FUN_2c62bf1c(iVar21);
        if (iVar4 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)*(short *)(param_2 + 2) + (int)*(short *)((int)param_2 + 6);
          iVar18 = (int)(short)(local_ea - (short)iVar18 * (short)((int)local_ea / iVar18));
        }
        local_ac = &local_ec;
        local_b4 = iVar17;
        for (iVar7 = (int)local_ea; iVar7 <= iVar22; iVar7 = iVar7 + 1) {
          FUN_2c62c484(iVar17,iVar21);
          iVar8 = FUN_2c613e90(iVar17,(int)local_ec,(int)(short)iVar7,iVar21);
          local_b0 = (undefined1)iVar8;
          if (iVar4 != 0) {
            if (iVar8 != 0) {
              if (*(short *)((int)param_2 + 6) < iVar18) {
                local_b0 = 0;
              }
              if ((int)*(short *)(param_2 + 2) + (int)*(short *)((int)param_2 + 6) <= iVar18) {
                iVar18 = 1;
                goto LAB_2c6112ba;
              }
            }
            iVar18 = (int)(short)((short)iVar18 + 1);
          }
LAB_2c6112ba:
          FUN_2c60d588(param_1,&local_c0);
          local_ea = local_ea + 1;
          local_e6 = local_e6 + 1;
        }
        FUN_2c62c040(iVar17);
      }
    }
    else {
      iVar18 = iVar17;
      iVar7 = iVar21;
      if (iVar4 <= iVar17) {
        iVar18 = iVar4;
        iVar4 = iVar17;
        iVar7 = iVar22;
        iVar22 = iVar21;
      }
      uVar13 = iVar22 - iVar7;
      uVar11 = iVar4 - iVar18;
      uVar10 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
      uVar14 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
      if ((int)uVar14 < (int)uVar10) {
        uVar15 = (uVar14 * 0x20) / uVar10;
      }
      else {
        uVar15 = (uVar10 * 0x20) / uVar14;
      }
      uVar15 = (int)*(short *)(param_2 + 1) * (int)(short)(ushort)*(byte *)(DAT_2c611128 + uVar15) +
               0x3f;
      sVar9 = (short)iVar22;
      local_164 = (short)((uVar15 & 0x7fffff) >> 7);
      sVar16 = (short)iVar7;
      if (iVar7 < iVar22) {
        local_168 = sVar16 - local_164;
      }
      else {
        local_168 = sVar9 - local_164;
      }
      iVar17 = iVar4;
      if (iVar4 < iVar18) {
        iVar17 = iVar18;
      }
      local_162 = local_164 + (short)iVar17;
      sVar1 = sVar9;
      if (iVar22 < iVar7) {
        sVar1 = sVar16;
      }
      local_164 = local_164 + sVar1;
      sVar2 = (short)iVar4;
      local_166 = (short)(uVar15 * 0x200 >> 0x10);
      sVar1 = (short)iVar18;
      if (iVar18 < iVar4) {
        local_166 = sVar1 - local_166;
      }
      else {
        local_166 = sVar2 - local_166;
      }
      iVar17 = FUN_2c62a6b4(&local_168,&local_168,&local_170);
      if (iVar17 != 0) {
        sVar3 = (short)(uVar15 >> 8);
        local_17c = ((ushort)((int)uVar15 >> 7) & 1) + sVar3;
        if ((int)uVar14 < (int)uVar10) {
          if ((int)uVar13 < 1) {
            FUN_2c614004(auStack_144,iVar7,(int)(short)(local_17c + sVar1),iVar22,
                         (int)(short)(local_17c + sVar2),0);
            local_17c = -sVar3;
          }
          else {
            FUN_2c614004(auStack_144,iVar7,(int)(short)(sVar1 - sVar3),iVar22,
                         (int)(short)(sVar2 - sVar3),0);
          }
          FUN_2c614004(auStack_118,iVar7,(int)(short)(local_17c + sVar1),iVar22,
                       (int)(short)(sVar2 + local_17c),1);
        }
        else {
          FUN_2c614004(auStack_144,(int)(short)(local_17c + sVar16),iVar18,
                       (int)(short)(local_17c + sVar9),iVar4,0);
          FUN_2c614004(auStack_118,(int)(short)(sVar16 - sVar3),iVar18,(int)(short)(sVar9 - sVar3),
                       iVar4,1);
        }
        local_188 = auStack_144;
        uVar5 = FUN_2c613e5c(local_188,0);
        uVar6 = FUN_2c613e5c(auStack_118,0);
        bVar20 = *(byte *)((int)param_2 + 0xb) & 0x10;
        if ((*(byte *)((int)param_2 + 0xb) & 0x10) == 0) {
          local_180._0_2_ = (short)uVar13;
          local_178 = (short)uVar11;
          FUN_2c614004(&local_ec,iVar7,iVar18,(int)(short)(sVar16 - local_178),
                       (int)(short)((short)local_180 + sVar1),3);
          FUN_2c614004(&local_c0,iVar22,iVar4,(int)(short)(sVar9 - local_178),
                       (int)(short)((short)local_180 + sVar2),2);
          local_184 = FUN_2c613e5c(&local_ec,bVar20);
          local_180 = FUN_2c613e5c(&local_c0,bVar20);
        }
        else {
          local_184 = -1;
          local_180 = -1;
        }
        iVar4 = (int)(short)((local_164 + 1) - local_168);
        FUN_2c601b5c();
        uVar11 = FUN_2c62a47c();
        uVar10 = FUN_2c62a64c(&local_168);
        if (uVar10 < uVar11) {
          uVar11 = FUN_2c62a64c(&local_168);
        }
        iVar17 = FUN_2c62bf1c(uVar11);
        iVar21 = (int)local_162;
        local_162 = local_166;
        FUN_2c62c484(iVar17,uVar11);
        FUN_2c62c3b0(local_160,0x1c);
        local_158 = *param_2;
        iVar22 = (int)local_166;
        local_160[0] = &local_168;
        local_148 = *(undefined1 *)((int)param_2 + 10);
        local_154 = iVar17;
        local_14c = local_160[0];
        if (iVar22 <= iVar21) {
          iVar18 = 0;
          do {
            iVar7 = FUN_2c613e90(iVar17 + iVar18,(int)local_168,(int)(short)iVar22,iVar4);
            local_150 = (undefined1)iVar7;
            if (iVar7 == 0) {
              FUN_2c62c3b0(iVar17 + iVar18,iVar4);
              if ((uint)(iVar18 + iVar4 * 2) < uVar11) goto LAB_2c6110be;
LAB_2c6110f8:
              iVar18 = 0;
              local_150 = 2;
              FUN_2c60d588(param_1,local_160);
              local_166 = local_162 + 1;
              local_162 = local_166;
              FUN_2c62c484(iVar17,uVar11);
            }
            else {
              if (uVar11 <= (uint)(iVar18 + iVar4 * 2)) goto LAB_2c6110f8;
LAB_2c6110be:
              iVar18 = iVar18 + iVar4;
              local_162 = local_162 + 1;
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 <= iVar21);
          iVar22 = (int)local_166;
        }
        if (local_162 != iVar22) {
          local_162 = local_162 + -1;
          local_150 = 2;
          FUN_2c60d588(param_1,local_160);
        }
        FUN_2c62c040(iVar17);
        FUN_2c613f44(local_188);
        FUN_2c613f44(auStack_118);
        if (local_184 != -1) {
          FUN_2c613f44(&local_ec);
        }
        if (local_180 != -1) {
          FUN_2c613f44(&local_c0);
        }
        FUN_2c613ee4(uVar5);
        FUN_2c613ee4(uVar6);
        FUN_2c613ee4(local_184);
        FUN_2c613ee4(local_180);
      }
    }
  }
LAB_2c611198:
  if ((*(byte *)((int)param_2 + 0xb) & 0xc) != 0) {
    FUN_2c61314c(&local_94);
    local_90 = *param_2;
    sVar16 = (short)*(ushort *)(param_2 + 1) >> 1;
    local_94 = 0x7fff;
    local_91 = *(undefined1 *)((int)param_2 + 10);
    uVar19 = ~*(ushort *)(param_2 + 1) & 1;
    uVar11 = (uint)*(byte *)((int)param_2 + 0xb);
    if ((int)(uVar11 << 0x1d) < 0) {
      local_bc = (*param_3 + sVar16) - uVar19;
      local_c0 = (short *)CONCAT22(param_3[1] - sVar16,*param_3 - sVar16);
      local_ba = (sVar16 + param_3[1]) - uVar19;
      FUN_2c61319c(param_1,&local_94,&local_c0);
      uVar11 = (uint)*(byte *)((int)param_2 + 0xb);
    }
    if ((int)(uVar11 << 0x1c) < 0) {
      local_bc = (*param_4 + sVar16) - uVar19;
      local_ba = (sVar16 + param_4[1]) - uVar19;
      local_c0 = (short *)CONCAT22(param_4[1] - sVar16,*param_4 - sVar16);
      FUN_2c61319c(param_1,&local_94,&local_c0);
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar12;
LAB_2c6111a8:
  if (*DAT_2c6114cc != local_3c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

