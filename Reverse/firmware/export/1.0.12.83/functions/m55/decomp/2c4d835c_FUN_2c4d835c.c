/* FUN_2c4d835c @ 0x2c4d835c */

/* WARNING: Removing unreachable block (ram,0x2c4d8406) */
/* WARNING: Removing unreachable block (ram,0x2c4d87fa) */
/* WARNING: Removing unreachable block (ram,0x2c4d840e) */
/* WARNING: Removing unreachable block (ram,0x2c4d8820) */

void FUN_2c4d835c(int param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_6c;
  uint local_68;
  uint local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = *DAT_2c4d864c;
  if (param_2[9] == 1) {
    if (param_2[1] != 0) {
      FUN_2c4d7598(param_2 + 2,*param_2,param_2[1],0);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar11 = FUN_2c4d76a8(param_2 + 2);
    iVar3 = param_1 + param_3 * 0x10;
    *(int *)(iVar3 + 8) = iVar11 - *(int *)(iVar3 + 0xc);
  }
  else {
    iVar11 = *(int *)(param_1 + param_3 * 0x10 + 0xc);
    if (param_2[9] == 0) {
      FUN_2c4d766c(param_2 + 2,param_2[1]);
    }
    else if (param_2[1] != 0) {
      FUN_2c4d7598(param_2 + 2,*param_2);
    }
    local_6c = param_3 * 0x10;
    *param_2 = 0;
    param_2[1] = 0;
    iVar3 = FUN_2c4d76a8(param_2 + 2);
    *(int *)(param_1 + local_6c + 8) = iVar11 - iVar3;
  }
  local_6c = param_3 * 0x10;
  iVar11 = param_1 + local_6c;
  if (*(int *)(iVar11 + 4) == 0) {
    *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(iVar11 + 8);
  }
  uVar12 = (uint)*(ushort *)(param_1 + 0x44);
  if (param_2[9] == 0) {
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    local_38 = param_2[8];
    local_34 = param_2[9];
    uStack_30 = param_2[10];
    FUN_2c4d766c(&uStack_50,param_2[1],0);
    iVar3 = FUN_2c4d76a8(&uStack_50);
    local_54 = local_34;
    iVar4 = *(int *)(param_1 + local_6c + 0xc);
    iVar13 = iVar3 - iVar4;
    if (iVar13 < 0) {
      uVar6 = iVar4 - iVar3;
      if (uVar6 < 0x20) {
        if (local_34 == 0) {
          FUN_2c4d766c(&uStack_50,uVar6,0);
          goto LAB_2c4d846a;
        }
      }
      else if (local_34 == 0) {
        FUN_2c4d766c(&uStack_50,0,0);
      }
      local_54 = 0;
      FUN_2c4d766c(&uStack_50,uVar6,local_34 & 0xff);
    }
    else {
      if (local_34 == 0) {
        FUN_2c4d766c(&uStack_50);
      }
      local_54 = 0;
      FUN_2c4d768c(&uStack_50,iVar13,local_34 & 0xff);
    }
  }
  else {
    FUN_2c4d74ac(&uStack_50,param_2[6],param_2[7],param_2[2]);
    local_34 = 0;
    iVar3 = *(int *)(param_1 + local_6c + 0xc);
    if (iVar3 < 0) {
      uVar6 = -iVar3;
      if (uVar6 < 0x1f || iVar3 == -0x1f) {
        FUN_2c4d766c(&uStack_50,uVar6,0);
        local_54 = 0;
      }
      else {
        FUN_2c4d766c(&uStack_50,0,0);
        local_54 = 0;
        FUN_2c4d766c(&uStack_50,uVar6,local_34 & 0xff);
      }
    }
    else {
      FUN_2c4d766c(&uStack_50,0,0);
      local_54 = 0;
      FUN_2c4d768c(&uStack_50,iVar3,local_34 & 0xff);
    }
  }
LAB_2c4d846a:
  uVar9 = *(uint *)(iVar11 + 4);
  uVar6 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  if ((int)uVar9 < 1) {
    uVar9 = uVar6 & 0xfffffff8;
    local_68 = uVar6;
  }
  else {
    local_68 = *(uint *)(param_1 + local_6c + 8);
    uVar9 = local_68 & 0xfffffff8;
    if ((int)uVar6 <= (int)uVar9) {
      uVar9 = uVar6 & 0xfffffff8;
      local_68 = uVar6;
    }
  }
  iVar11 = *(int *)(param_1 + 0x30);
  uVar7 = local_68 & 7;
  local_58 = local_54;
  if (iVar11 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x36);
    uVar1 = *(ushort *)(param_1 + 0x34);
    if (0 < (int)uVar9) {
      uVar8 = 0;
      do {
        if (local_54 == 0) {
          local_58 = FUN_2c4d74d4(&uStack_50);
          local_54 = 0x1f;
          uVar5 = local_58 >> 0x1f;
        }
        else {
          local_54 = local_54 - 1;
          uVar5 = local_58 >> (local_54 & 0xff) & 1;
        }
        uVar8 = uVar8 + 1;
        uVar10 = (uint)uVar1;
        if (((uVar12 & uVar2) != 0) == uVar5) {
          uVar10 = 0;
        }
        uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar10;
      } while (uVar8 != uVar9);
    }
  }
  else {
    if (0 < (int)local_68 >> 5) {
      iVar3 = 0;
      uVar8 = *(uint *)(DAT_2c4d8650 + 0x80);
      do {
        uVar5 = 0x20 - local_54;
        if ((int)uVar5 < 1) {
          local_54 = local_54 - 0x20;
          uVar5 = 0;
        }
        else {
          if (uVar5 == 0x20) {
            uVar5 = 0;
          }
          else {
            uVar5 = local_58 << (uVar5 & 0xff);
          }
          local_58 = FUN_2c4d74d4(&uStack_50);
        }
        iVar3 = iVar3 + 1;
        uVar5 = (local_58 >> (local_54 & 0xff) | uVar5) & uVar8;
        uVar12 = (uint)*(ushort *)(iVar11 + (uVar5 >> 0x18 ^ uVar12 >> 8) * 2) ^ uVar12 << 8;
        uVar12 = (uint)*(ushort *)(iVar11 + (((uVar12 & 0xffff) >> 8 ^ uVar5 >> 0x10) & 0xff) * 2) ^
                 (uVar12 & 0xffff) << 8;
        uVar12 = (uint)*(ushort *)(iVar11 + (((uVar5 ^ uVar12) & 0xffff) >> 8) * 2) ^
                 (uVar12 & 0xffff) << 8;
        uVar12 = ((uint)*(ushort *)(iVar11 + ((uVar5 ^ uVar12 >> 8) & 0xff) * 2) ^
                 (uVar12 & 0xffff) << 8) & 0xffff;
      } while (iVar3 != (int)local_68 >> 5);
    }
    local_68 = local_68 & 0x18;
    if (local_68 != 0) {
      uVar8 = local_68 - local_54;
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        if (uVar8 == 0x20) {
          uVar8 = 0;
        }
        else {
          uVar8 = local_58 << (uVar8 & 0xff);
        }
        local_58 = FUN_2c4d74d4(&uStack_50);
        local_54 = local_54 + 0x20;
      }
      local_54 = local_54 - local_68;
      uVar5 = local_68 - 8;
      if (-1 < (int)uVar5) {
        do {
          uVar10 = uVar5 & 0xff;
          uVar5 = uVar5 - 8;
          uVar12 = ((uint)*(ushort *)
                           (iVar11 + ((((local_58 >> (local_54 & 0xff) | uVar8) &
                                       *(uint *)(DAT_2c4d8834 + local_68 * 4)) >> uVar10 ^
                                      uVar12 >> 8) & 0xff) * 2) ^ uVar12 << 8) & 0xffff;
        } while (uVar5 != 0xfffffff8);
      }
    }
  }
  uVar6 = uVar6 - uVar9;
  if (uVar7 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar9 = 0;
    uVar2 = *(ushort *)(param_1 + 0x36);
    do {
      if (local_54 == 0) {
        local_58 = FUN_2c4d74d4(&uStack_50);
        local_54 = 0x1f;
        uVar8 = local_58 >> 0x1f;
      }
      else {
        local_54 = local_54 - 1;
        uVar8 = local_58 >> (local_54 & 0xff) & 1;
      }
      uVar9 = uVar9 + 1;
      uVar5 = (uint)uVar1;
      if (((uVar2 & uVar12) != 0) == uVar8) {
        uVar5 = 0;
      }
      uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar5;
    } while (uVar7 != uVar9);
    uVar6 = uVar6 - uVar7;
  }
  if (uVar6 != 0) {
    if ((*(int *)(param_1 + 0x30) == 0) || ((int)uVar6 < 9)) {
      uVar1 = *(ushort *)(param_1 + 0x36);
      uVar2 = *(ushort *)(param_1 + 0x34);
      if ((int)uVar6 < 1) goto LAB_2c4d8596;
    }
    else {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        uVar12 = ((uint)*(ushort *)(*(int *)(param_1 + 0x30) + (uVar12 >> 8) * 2) ^ uVar12 << 8) &
                 0xffff;
      } while ((int)uVar6 >> 3 != iVar11);
      uVar6 = uVar6 & 7;
      if (uVar6 == 0) goto LAB_2c4d8596;
      uVar1 = *(ushort *)(param_1 + 0x36);
      uVar2 = *(ushort *)(param_1 + 0x34);
    }
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      uVar7 = 0;
      if ((uVar12 & uVar1) != 0) {
        uVar7 = (uint)uVar2;
      }
      uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar7;
    } while (uVar9 != uVar6);
  }
LAB_2c4d8596:
  *(short *)(param_1 + 0x44) = (short)uVar12;
  *(undefined1 *)(param_1 + local_6c) = 0;
  uVar6 = *(int *)(param_1 + 0x40) + 1;
  uVar12 = (uint)((ulonglong)DAT_2c4d8654 * (ulonglong)uVar6 >> 0x20);
  *(uint *)(param_1 + 0x40) = uVar6 - ((uVar12 & 0xfffffffe) + (uVar12 >> 1));
  if (*DAT_2c4d864c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

