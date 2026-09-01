/* FUN_1010459c @ 0x1010459c */

uint FUN_1010459c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_164;
  uint local_160;
  int local_154;
  int local_150;
  undefined1 auStack_d4 [12];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  int local_80;
  int iStack_7c;
  code *local_78;
  undefined4 local_74;
  char acStack_70 [60];
  int local_34;
  
  if (param_1 == 0) {
    return 6;
  }
  uVar14 = param_2[2] & 1;
  if (uVar14 == 0) {
    return 0x13;
  }
  psVar11 = (short *)param_2[1];
  if (psVar11 == (short *)0x0) {
    return 0x14;
  }
  if ((psVar11[1] != 0) && (0 < *psVar11)) {
    if (*(int *)(psVar11 + 6) == 0) {
      return 0x14;
    }
    if (*(int *)(psVar11 + 2) == 0) {
      return 0x14;
    }
    if ((int)psVar11[1] != *(short *)(*(int *)(psVar11 + 6) + (*psVar11 + 0x7fffffff) * 2) + 1) {
      return 0x14;
    }
    local_94 = *(undefined4 *)psVar11;
    uStack_90 = *(undefined4 *)(psVar11 + 2);
    uStack_8c = *(undefined4 *)(psVar11 + 4);
    uStack_88 = *(undefined4 *)(psVar11 + 6);
    local_84 = *(int *)(psVar11 + 8);
    piVar5 = (int *)*param_2;
    if ((param_2[2] & 2) == 0) {
      if (piVar5 == (int *)0x0) {
        return 6;
      }
      local_c4 = piVar5[1];
      if (local_c4 == 0) {
        return 0;
      }
      local_164 = *piVar5;
      if (local_164 == 0) {
        return 0;
      }
      local_80 = piVar5[3];
      if (local_80 == 0) {
        return 6;
      }
      iStack_7c = piVar5[2];
      if (-1 < iStack_7c) {
        local_80 = iStack_7c * (local_164 + -1) + local_80;
      }
      local_150 = 0;
      local_78 = (code *)0x0;
      local_74 = 0;
      local_c8 = 0;
      local_34 = -1;
    }
    else {
      local_78 = (code *)param_2[3];
      if (local_78 == (code *)0x0) {
        return 0;
      }
      local_74 = param_2[7];
      local_c8 = param_2[8];
      local_c4 = param_2[10];
      local_164 = param_2[0xb];
      local_150 = param_2[9];
      local_34 = 0;
    }
    if ((local_c8 < local_c4) && (local_150 < local_164)) {
      local_160 = local_164 - local_150;
      local_ac = *DAT_10104898;
      if (local_ac == 0) {
        return 0xffffffff;
      }
      if (0x80 < local_160) {
        local_160 = ((local_160 - 1) + (local_160 + 0x7f >> 7)) / (local_160 + 0x7f >> 7);
      }
      iVar6 = (local_160 + 4) * 4;
      uVar7 = iVar6 - 1;
      local_a8 = (uVar7 & 0xfffffff0) + local_ac;
      iStack_a4 = 0x400 - (uVar7 >> 4);
      uVar7 = 0;
LAB_101046e4:
      iVar8 = local_150 + local_160;
      local_154 = local_164;
      if (iVar8 <= local_164) {
        local_154 = iVar8;
      }
      piVar5 = &local_154;
      iVar12 = local_150;
      iVar9 = local_154;
      do {
        FUN_1011ea48(local_ac,0,iVar6 + -0x10);
        local_a0 = 0;
        local_b0 = 1;
        local_c0 = iVar12;
        local_bc = iVar9;
        if (uVar7 == 0) {
          iVar3 = FUN_100fa228(&local_94,DAT_1010489c,auStack_d4);
        }
        else {
          FUN_100fb694();
          iVar3 = FUN_100fa228(&local_94,DAT_1010489c,auStack_d4);
          FUN_100fb698();
        }
        if (local_b0 == 0) {
          FUN_10103f90(auStack_d4);
        }
        if (iVar3 == 0) {
          iVar12 = local_c0;
          if (local_c0 < local_bc) {
            do {
              piVar10 = *(int **)(local_ac + (iVar12 - local_c0) * 4);
              if (piVar10 != (int *)0x0) {
                iVar13 = 0;
                iVar3 = *piVar10;
LAB_1010478e:
                iVar1 = local_34;
                iVar13 = iVar13 + piVar10[1] * 0x200;
                if ((iVar13 - piVar10[2] == 0) || (iVar3 < local_c8)) {
LAB_101047a0:
                  piVar10 = (int *)piVar10[3];
                }
                else {
                  uVar7 = iVar13 - piVar10[2] >> 9;
                  if (local_84 << 0x1e < 0) {
                    cVar4 = (char)uVar7;
                    if ((int)(uVar7 << 0x17) < 0) {
                      cVar4 = -1 - cVar4;
                    }
                  }
                  else {
                    if ((int)uVar7 < (int)~uVar7) {
                      uVar7 = ~uVar7;
                    }
                    if (0xfe < (int)uVar7) {
                      uVar7 = 0xff;
                    }
                    cVar4 = (char)uVar7;
                  }
                  if (local_34 < 0) {
                    *(char *)(local_80 + (iVar3 - iStack_7c * iVar12)) = cVar4;
                    iVar3 = *piVar10;
                    goto LAB_101047a0;
                  }
                  local_34 = local_34 + 1;
                  *(short *)(acStack_70 + iVar1 * 6) = (short)iVar3;
                  acStack_70[(iVar1 * 3 + 2) * 2] = cVar4;
                  iVar2 = local_34;
                  (acStack_70 + (iVar1 * 3 + 1) * 2)[0] = '\x01';
                  (acStack_70 + (iVar1 * 3 + 1) * 2)[1] = '\0';
                  if (iVar2 != 10) goto LAB_101047a0;
                  (*local_78)(iVar12,10,acStack_70,local_74);
                  local_34 = 0;
                  iVar3 = *piVar10;
                  piVar10 = (int *)piVar10[3];
                }
                iVar1 = iVar3 + 1;
                if (piVar10 != (int *)0x0) {
                  iVar3 = *piVar10;
                  if ((iVar13 != 0) && (iVar1 < iVar3)) {
                    FUN_10104468(auStack_d4,iVar1,iVar12,iVar13,iVar3 - iVar1);
                    iVar3 = *piVar10;
                  }
                  goto LAB_1010478e;
                }
                if (iVar13 != 0) {
                  FUN_10104468(auStack_d4,iVar1,iVar12,iVar13,local_c4 - iVar1);
                }
              }
              if (local_34 < 1) {
                if (local_bc <= iVar12 + 1) break;
              }
              else {
                (*local_78)(iVar12,local_34,acStack_70,local_74);
                local_34 = 0;
                if (local_bc <= iVar12 + 1) break;
              }
              iVar12 = iVar12 + 1;
            } while( true );
          }
          piVar5 = piVar5 + -1;
        }
        else {
          if (iVar3 != 0x40) {
            return uVar14;
          }
          iVar9 = iVar9 - iVar12 >> 1;
          if (iVar9 == 0) {
            return uVar14;
          }
          piVar5[1] = iVar9 + iVar12;
          piVar5[2] = iVar12;
          piVar5 = piVar5 + 1;
          iVar9 = iVar12;
        }
        uVar7 = uVar14;
        if (piVar5 < &local_154) goto LAB_10104880;
        iVar12 = iVar9;
        iVar9 = *piVar5;
      } while( true );
    }
  }
  return 0;
LAB_10104880:
  local_150 = iVar8;
  if (local_164 <= iVar8) {
    return 0;
  }
  goto LAB_101046e4;
}

