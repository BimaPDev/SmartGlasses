/* FUN_140b97dc @ 0x140b97dc */

/* WARNING: Removing unreachable block (ram,0x140b9886) */
/* WARNING: Removing unreachable block (ram,0x140b9c6c) */
/* WARNING: Removing unreachable block (ram,0x140b988e) */
/* WARNING: Removing unreachable block (ram,0x140b9c82) */

void FUN_140b97dc(int param_1,undefined4 *param_2,int param_3)

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
  
  local_2c = *DAT_140b9ac0;
  if (param_2[9] == 1) {
    if (param_2[1] != 0) {
      FUN_140e5168(param_2 + 2,*param_2,param_2[1],0);
    }
    *param_2 = 0;
    param_2[1] = 0;
    iVar11 = FUN_140e52b8(param_2 + 2);
    iVar3 = param_1 + param_3 * 0x10;
    *(int *)(iVar3 + 8) = iVar11 - *(int *)(iVar3 + 0xc);
  }
  else {
    iVar11 = *(int *)(param_1 + param_3 * 0x10 + 0xc);
    if (param_2[9] == 0) {
      FUN_140e5408(param_2 + 2,param_2[1]);
    }
    else if (param_2[1] != 0) {
      FUN_140e5168(param_2 + 2,*param_2);
    }
    local_6c = param_3 * 0x10;
    *param_2 = 0;
    param_2[1] = 0;
    iVar3 = FUN_140e52b8(param_2 + 2);
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
    FUN_140e5408(&uStack_50,param_2[1],0);
    iVar3 = FUN_140e52b8(&uStack_50);
    iVar4 = *(int *)(param_1 + local_6c + 0xc);
    iVar13 = iVar3 - iVar4;
    if (iVar13 < 0) {
      uVar5 = iVar4 - iVar3;
      if (uVar5 < 0x20) {
        if (local_34 == 0) goto LAB_140b9ba2;
      }
      else if (local_34 == 0) {
        FUN_140e5408(&uStack_50,0,0);
      }
      local_54 = 0;
      FUN_140e5408(&uStack_50,uVar5,local_34 & 0xff);
    }
    else {
      if (local_34 == 0) {
        FUN_140e5408(&uStack_50);
      }
      local_54 = 0;
      FUN_140e5108(&uStack_50,iVar13,local_34 & 0xff);
    }
  }
  else {
    FUN_140e5898(&uStack_50,param_2[6],param_2[7],param_2[2]);
    iVar3 = *(int *)(param_1 + local_6c + 0xc);
    local_34 = 0;
    if (iVar3 < 0) {
      uVar5 = -iVar3;
      if (uVar5 < 0x1f || iVar3 == -0x1f) {
LAB_140b9ba2:
        local_54 = local_34;
        FUN_140e5408(&uStack_50,uVar5,local_34);
      }
      else {
        FUN_140e5408(&uStack_50,0,0);
        local_54 = 0;
        FUN_140e5408(&uStack_50,uVar5,local_34 & 0xff);
      }
    }
    else {
      FUN_140e5408(&uStack_50,0,0);
      local_54 = 0;
      FUN_140e5108(&uStack_50,iVar3,local_34 & 0xff);
    }
  }
  uVar8 = *(uint *)(iVar11 + 4);
  uVar5 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  if ((int)uVar8 < 1) {
    uVar8 = uVar5 & 0xfffffff8;
    local_68 = uVar5;
  }
  else {
    local_68 = *(uint *)(param_1 + local_6c + 8);
    uVar8 = local_68 & 0xfffffff8;
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5 & 0xfffffff8;
      local_68 = uVar5;
    }
  }
  iVar11 = *(int *)(param_1 + 0x30);
  uVar6 = local_68 & 7;
  local_58 = local_54;
  if (iVar11 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x36);
    uVar1 = *(ushort *)(param_1 + 0x34);
    if (0 < (int)uVar8) {
      uVar9 = 0;
      do {
        if (local_54 == 0) {
          local_58 = FUN_140e5948(&uStack_50);
          local_54 = 0x1f;
          uVar7 = local_58 >> 0x1f;
        }
        else {
          local_54 = local_54 - 1;
          uVar7 = local_58 >> (local_54 & 0xff) & 1;
        }
        uVar10 = (uint)uVar1;
        if (((uVar2 & uVar12) != 0) == uVar7) {
          uVar10 = 0;
        }
        uVar9 = uVar9 + 1;
        uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar10;
      } while (uVar9 != uVar8);
    }
  }
  else {
    if (0 < (int)local_68 >> 5) {
      iVar3 = 0;
      uVar9 = *(uint *)(DAT_140b9ac4 + 0x80);
      do {
        uVar7 = 0x20 - local_54;
        if ((int)uVar7 < 1) {
          uVar7 = 0;
          local_54 = local_54 - 0x20;
        }
        else {
          if (uVar7 == 0x20) {
            uVar7 = 0;
          }
          else {
            uVar7 = local_58 << (uVar7 & 0xff);
          }
          local_58 = FUN_140e5948(&uStack_50);
        }
        uVar7 = (local_58 >> (local_54 & 0xff) | uVar7) & uVar9;
        iVar3 = iVar3 + 1;
        uVar12 = (uint)*(ushort *)(iVar11 + (uVar7 >> 0x18 ^ uVar12 >> 8) * 2) ^ uVar12 << 8;
        uVar12 = (uint)*(ushort *)(iVar11 + (((uVar12 & 0xffff) >> 8 ^ uVar7 >> 0x10) & 0xff) * 2) ^
                 (uVar12 & 0xffff) << 8;
        uVar12 = (uint)*(ushort *)(iVar11 + (((uVar7 ^ uVar12) & 0xffff) >> 8) * 2) ^
                 (uVar12 & 0xffff) << 8;
        uVar12 = ((uint)*(ushort *)(iVar11 + ((uVar7 ^ uVar12 >> 8) & 0xff) * 2) ^
                 (uVar12 & 0xffff) << 8) & 0xffff;
      } while (iVar3 != (int)local_68 >> 5);
    }
    local_68 = local_68 & 0x18;
    if (local_68 != 0) {
      uVar9 = local_68 - local_54;
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      else {
        if (uVar9 == 0x20) {
          uVar9 = 0;
        }
        else {
          uVar9 = local_58 << (uVar9 & 0xff);
        }
        local_58 = FUN_140e5948(&uStack_50);
        local_54 = local_54 + 0x20;
      }
      local_54 = local_54 - local_68;
      uVar7 = local_68 - 8;
      if (-1 < (int)uVar7) {
        do {
          uVar10 = uVar7 & 0xff;
          uVar7 = uVar7 - 8;
          uVar12 = ((uint)*(ushort *)
                           (iVar11 + ((((local_58 >> (local_54 & 0xff) | uVar9) &
                                       *(uint *)(DAT_140b9c94 + local_68 * 4)) >> uVar10 ^
                                      uVar12 >> 8) & 0xff) * 2) ^ uVar12 << 8) & 0xffff;
        } while (uVar7 != 0xfffffff8);
      }
    }
  }
  uVar5 = uVar5 - uVar8;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar2 = *(ushort *)(param_1 + 0x36);
    uVar8 = 0;
    do {
      if (local_54 == 0) {
        local_58 = FUN_140e5948(&uStack_50);
        local_54 = 0x1f;
        uVar9 = local_58 >> 0x1f;
      }
      else {
        local_54 = local_54 - 1;
        uVar9 = local_58 >> (local_54 & 0xff) & 1;
      }
      uVar7 = (uint)uVar1;
      if (((uVar2 & uVar12) != 0) == uVar9) {
        uVar7 = 0;
      }
      uVar8 = uVar8 + 1;
      uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar7;
    } while (uVar6 != uVar8);
    uVar5 = uVar5 - uVar6;
  }
  if (uVar5 != 0) {
    if ((*(int *)(param_1 + 0x30) == 0) || ((int)uVar5 < 9)) {
      uVar1 = *(ushort *)(param_1 + 0x36);
      uVar2 = *(ushort *)(param_1 + 0x34);
      if ((int)uVar5 < 1) goto LAB_140b9a10;
    }
    else {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        uVar12 = ((uint)*(ushort *)(*(int *)(param_1 + 0x30) + (uVar12 >> 8) * 2) ^ uVar12 << 8) &
                 0xffff;
      } while ((int)uVar5 >> 3 != iVar11);
      uVar5 = uVar5 & 7;
      if (uVar5 == 0) goto LAB_140b9a10;
      uVar1 = *(ushort *)(param_1 + 0x36);
      uVar2 = *(ushort *)(param_1 + 0x34);
    }
    uVar8 = 0;
    do {
      uVar6 = 0;
      if ((uVar1 & uVar12) != 0) {
        uVar6 = (uint)uVar2;
      }
      uVar8 = uVar8 + 1;
      uVar12 = (uVar12 & 0x7fff) << 1 ^ uVar6;
    } while (uVar8 != uVar5);
  }
LAB_140b9a10:
  *(short *)(param_1 + 0x44) = (short)uVar12;
  *(undefined1 *)(param_1 + local_6c) = 0;
  uVar5 = *(int *)(param_1 + 0x40) + 1;
  uVar12 = (uint)((ulonglong)DAT_140b9ac8 * (ulonglong)uVar5 >> 0x20);
  *(uint *)(param_1 + 0x40) = uVar5 - ((uVar12 & 0xfffffffe) + (uVar12 >> 1));
  if (*DAT_140b9ac0 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

