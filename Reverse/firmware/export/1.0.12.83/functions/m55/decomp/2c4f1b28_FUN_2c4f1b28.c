/* FUN_2c4f1b28 @ 0x2c4f1b28 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_2c4f1b28(int param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,ushort *param_6,
                 code *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_80;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44 [4];
  int local_34;
  
  local_34 = *DAT_2c4f1e10;
  iVar6 = *(int *)(param_1 + 0x68);
  if ((*(uint *)(iVar6 + 0x20) <= *param_3) ||
     (uVar10 = param_3[1], *(uint *)(iVar6 + 0x20) <= uVar10)) {
    local_80 = 0xffffffac;
    uVar10 = local_80;
    goto LAB_2c4f1df2;
  }
  local_44[0] = 0;
  local_44[1] = 0;
  if (3 < *(uint *)(iVar6 + 0x1c)) {
    uVar10 = FUN_2c4f0eb4(param_1,0,param_1,4,*param_3,0,local_44,4);
    if ((uVar10 != 0xffffffac) && (uVar10 != 0)) goto LAB_2c4f1df2;
    iVar6 = *(int *)(param_1 + 0x68);
    uVar10 = param_3[1];
  }
  if ((uVar10 < *(uint *)(iVar6 + 0x20)) && (3 < *(uint *)(iVar6 + 0x1c))) {
    uVar10 = FUN_2c4f0eb4(param_1,0,param_1,4,uVar10,0,local_44 + 1,4);
    if (uVar10 == 0) {
      uVar7 = (uint)(0 < (int)(local_44[1] - local_44[0]));
      goto LAB_2c4f1bce;
    }
    if (uVar10 != 0xffffffac) goto LAB_2c4f1df2;
  }
  uVar7 = 0;
LAB_2c4f1bce:
  *param_2 = param_3[uVar7];
  uVar10 = param_3[uVar7 ^ 1];
  param_2[2] = local_44[uVar7];
  param_2[1] = uVar10;
  param_2[3] = 0;
  local_70 = 2;
  local_78 = 0xffffffff;
  do {
    local_44[2] = *DAT_2c4f1e14;
    local_44[3] = DAT_2c4f1e14[1];
    local_54 = FUN_2c4f4b08(0xffffffff,param_2 + 2,4);
    uVar10 = *param_2;
    uVar8 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
    if (uVar10 < *(uint *)(*(int *)(param_1 + 0x68) + 0x20)) {
      local_60 = 0;
      local_80 = local_78;
      local_74 = 0;
      uVar11 = 0xffffffff;
      uVar13 = 4;
      while (uVar2 = uVar13 + 4, uVar2 <= uVar8) {
        uVar10 = FUN_2c4f0eb4(param_1,0,param_1,uVar8,uVar10,uVar13,&local_50,4);
        if (uVar10 != 0) {
joined_r0x2c4f20e2:
          if (uVar10 != 0xffffffac) goto LAB_2c4f1df2;
          break;
        }
        local_54 = FUN_2c4f4b08(local_54,&local_50,4);
        uVar14 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8
                 | local_50 >> 0x18) ^ uVar11;
        local_50 = uVar14;
        if ((int)uVar14 < 0) {
          if ((uVar11 >> 0x14 & 0x700) == 0x500) {
            uVar10 = *(uint *)(*(int *)(param_1 + 0x68) + 0x18);
            uVar8 = param_2[3];
            if (uVar8 != uVar10 * (uVar8 / uVar10)) goto LAB_2c4f1ff6;
            uVar4 = 1;
          }
          else {
            uVar8 = param_2[3];
LAB_2c4f1ff6:
            uVar4 = 0;
          }
          *(undefined1 *)((int)param_2 + 0x16) = uVar4;
          goto LAB_2c4f1db4;
        }
        iVar6 = *(int *)(param_1 + 0x68);
        uVar10 = uVar14;
        if ((int)(uVar14 << 0x16) >> 0x16 == -1) {
          uVar10 = uVar14 + 1;
        }
        iVar3 = (uVar10 & 0x3ff) + 4;
        uVar9 = iVar3 + uVar13;
        uVar8 = *(uint *)(iVar6 + 0x1c);
        if (uVar8 < uVar9) {
LAB_2c4f1fdc:
          uVar8 = param_2[3];
          *(undefined1 *)((int)param_2 + 0x16) = 0;
          goto LAB_2c4f1db4;
        }
        uVar12 = uVar14 >> 0x14;
        uVar11 = uVar12 & 0x700;
        if (uVar11 == 0x500) {
          if ((*(uint *)(iVar6 + 0x20) <= *param_2) || (uVar8 < uVar13 + 8)) break;
          uVar10 = FUN_2c4f0eb4(param_1,0,param_1,uVar8,*param_2,uVar2,&local_4c,4);
          if (uVar10 != 0) goto joined_r0x2c4f20e2;
          if (local_4c != local_54) break;
          uVar8 = uVar14 ^ (local_50 >> 0x14) << 0x1f;
          uVar1 = FUN_2c4f4b08(*(undefined4 *)(param_1 + 0x2c),&local_54,4);
          *(undefined4 *)(param_1 + 0x2c) = uVar1;
          *(short *)(param_2 + 5) = (short)local_74;
          uVar10 = uVar8;
          if ((int)(uVar14 << 0x16) >> 0x16 == -1) {
            uVar10 = uVar8 + 1;
          }
          param_2[4] = uVar8;
          *(char *)((int)param_2 + 0x17) = (char)local_60;
          uVar11 = local_50;
          if ((int)(local_50 << 0x16) >> 0x16 == -1) {
            uVar11 = local_50 + 1;
          }
          param_2[3] = (uVar11 & 0x3ff) + 4 + uVar13;
          uVar9 = uVar2 + (uVar10 & 0x3ff);
          uVar10 = *param_2;
          param_2[6] = local_44[2];
          param_2[7] = local_44[3];
          local_54 = 0xffffffff;
          local_80 = local_78;
          uVar14 = uVar8;
        }
        else {
          if (iVar3 == 4) {
            uVar10 = *param_2;
          }
          else {
            uVar11 = uVar2;
            while( true ) {
              uVar10 = *param_2;
              if ((*(uint *)(iVar6 + 0x20) <= uVar10) || (uVar8 < uVar11 + 1)) goto LAB_2c4f1f4a;
              uVar10 = FUN_2c4f0eb4(param_1,0,param_1,uVar8,uVar10,uVar11,&local_4c,1);
              if (uVar10 != 0) break;
              local_54 = FUN_2c4f4b08(local_54,&local_4c,1);
              uVar10 = local_50;
              if ((int)(local_50 << 0x16) >> 0x16 == -1) {
                uVar10 = local_50 + 1;
              }
              if ((uVar10 & 0x3ff) + 4 <= uVar11 + (1 - uVar13)) {
                uVar12 = local_50 >> 0x14;
                uVar10 = *param_2;
                uVar11 = uVar12 & 0x700;
                goto LAB_2c4f1d46;
              }
              iVar6 = *(int *)(param_1 + 0x68);
              uVar8 = *(uint *)(iVar6 + 0x1c);
              uVar11 = uVar11 + 1;
            }
            if (uVar10 != 0xffffffac) goto LAB_2c4f1df2;
            uVar10 = *param_2;
LAB_2c4f1f4a:
            uVar12 = local_50 >> 0x14;
            uVar11 = uVar12 & 0x700;
            *(undefined1 *)((int)param_2 + 0x16) = 0;
          }
LAB_2c4f1d46:
          if (uVar11 == 0) {
            uVar8 = (local_50 & 0xfffff) >> 10;
            if (local_74 <= uVar8) {
              local_74 = uVar8 + 1;
            }
          }
          else if (uVar11 == 0x400) {
            local_74 = local_74 + (int)(char)uVar12 & 0xffff;
            if ((local_78 & 0xffc00 | 0x4ff00000) == local_50) {
              local_78 = local_78 | 0x80000000;
            }
            else if ((local_78 != 0xffffffff) &&
                    ((local_50 & 0xfffff) >> 10 <= (local_78 & 0xfffff) >> 10)) {
              local_78 = local_78 + (char)uVar12 * 0x400;
            }
          }
          else if (uVar11 == 0x600) {
            local_60 = uVar12 & 1;
            uVar8 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
            if (((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= uVar10) || (uVar8 < uVar13 + 0xc))
               || (iVar6 = FUN_2c4f0eb4(param_1,0,param_1,uVar8,uVar10,uVar2,local_44 + 2,8),
                  iVar6 == -0x54)) break;
            uVar10 = *param_2;
          }
          if (((param_5 ^ local_50) & param_4) == 0) {
            local_4c = uVar10;
            local_48 = uVar2;
            uVar10 = (*param_7)(param_8,local_50,&local_4c);
            if ((int)uVar10 < 0) {
              if (uVar10 == 0xffffffac) goto LAB_2c4f1fdc;
              goto LAB_2c4f1df2;
            }
            uVar8 = local_50;
            if (uVar10 != 0) {
              if (((local_78 ^ local_50) & DAT_2c4f1e18) == 0) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = local_78;
                if ((uVar10 == 2) && ((local_50 & 0xfffff) >> 10 <= (local_78 & 0xfffff) >> 10)) {
                  uVar8 = local_50 | 0x80000000;
                }
              }
            }
            local_78 = uVar8;
            uVar10 = *param_2;
          }
        }
        uVar8 = *(uint *)(*(int *)(param_1 + 0x68) + 0x1c);
        uVar11 = uVar14;
        uVar13 = uVar9;
        if (*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= uVar10) break;
      }
    }
    else {
      local_80 = local_78;
    }
    *(undefined1 *)((int)param_2 + 0x16) = 0;
    uVar8 = param_2[3];
LAB_2c4f1db4:
    if (uVar8 != 0) {
      if ((*(uint *)(param_1 + 0x3c) >> 0x14 & 0x700) == 0) {
LAB_2c4f204c:
        uVar10 = local_80;
        if (param_6 != (ushort *)0x0) {
LAB_2c4f2050:
          local_80 = uVar10;
          uVar10 = (local_80 & 0xfffff) >> 10;
          uVar5 = (ushort)uVar10;
          if ((ushort)param_2[5] <= uVar10) {
            uVar5 = (ushort)param_2[5];
          }
          *param_6 = uVar5;
        }
        uVar10 = local_80;
        if (-1 < (int)local_80) goto LAB_2c4f1df2;
        uVar10 = (local_80 & 0xfffff) >> 10;
      }
      else {
        if (((*(uint *)(param_1 + 0x40) != *param_2) &&
            (*(uint *)(param_1 + 0x40) != param_2[1] && *(uint *)(param_1 + 0x44) != param_2[1])) &&
           (*param_2 != *(uint *)(param_1 + 0x44))) goto LAB_2c4f204c;
        uVar8 = (*(uint *)(param_1 + 0x3c) & 0xfffff) >> 10;
        uVar10 = 0x3ff;
        uVar7 = (local_80 & 0xfffff) >> 10;
        if (uVar7 == uVar8) {
          uVar10 = local_80 | 0x80000000;
          if (param_6 == (ushort *)0x0) {
            uVar10 = (local_80 & 0xfffff) >> 10;
            goto LAB_2c4f2070;
          }
          goto LAB_2c4f2050;
        }
        if (local_80 != 0xffffffff) {
          if (uVar8 < uVar7) {
            local_80 = local_80 - 0x400;
          }
          goto LAB_2c4f204c;
        }
        if (param_6 == (ushort *)0x0) {
          uVar10 = 0x3ff;
        }
        else {
          uVar5 = 0x3ff;
          if ((ushort)param_2[5] < 0x400) {
            uVar5 = (ushort)param_2[5];
          }
          *param_6 = uVar5;
        }
      }
LAB_2c4f2070:
      if (uVar10 < (ushort)param_2[5]) {
        uVar10 = 0xfffffffe;
      }
      else {
        uVar10 = 0;
      }
      goto LAB_2c4f1df2;
    }
    param_2[2] = local_44[uVar7 ^ 1];
    uVar10 = *param_2;
    uVar8 = param_2[1];
    *param_2 = uVar8;
    param_2[1] = uVar10;
    if (local_70 == 1) break;
    local_78 = local_80;
    local_70 = 1;
  } while( true );
  local_80 = 0xffffffac;
  FUN_2c66ac44(DAT_2c4f1e24,DAT_2c4f1e20,0x42f,uVar8,uVar10,DAT_2c4f1e1c);
  uVar10 = local_80;
LAB_2c4f1df2:
  local_80 = uVar10;
  if (*DAT_2c4f1e10 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return local_80;
}

