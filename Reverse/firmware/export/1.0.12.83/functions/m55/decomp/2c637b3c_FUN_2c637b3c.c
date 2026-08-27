/* FUN_2c637b3c @ 0x2c637b3c */

void FUN_2c637b3c(uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r2;
  uint extraout_r2_00;
  byte bVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  undefined1 auStack_90 [4];
  uint local_8c;
  uint local_88;
  int local_84;
  short local_80;
  short local_7e;
  undefined4 local_7c;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  uint local_70;
  undefined4 local_6c;
  int local_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_30;
  byte local_2e;
  int local_2c;
  
  local_2c = *DAT_2c637e6c;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_2c60747c(param_1,&local_78,0);
  sVar10 = (local_74 + 1) - local_78;
  iVar11 = FUN_2c6033b4(param_1,0,0x57);
  sVar5 = FUN_2c6033b4(param_1,0,0x59);
  iVar18 = (int)sVar5;
  sVar6 = FUN_2c6033b4(param_1,0,0x58);
  uVar20 = (*(byte *)(param_1 + 0x52) & 0x1f) >> 4;
  if ((int)((uint)*(byte *)(param_1 + 0x52) << 0x1a) < 0) {
    uVar20 = uVar20 | 2;
  }
  sVar7 = FUN_2c6033b4(param_1,0,1);
  if ((sVar7 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1d))) {
    uVar20 = uVar20 | 4;
  }
  FUN_2c62b954(&local_80,*(undefined4 *)(param_1 + 0x24),iVar11,(int)sVar6,iVar18,(int)sVar10,uVar20
              );
  FUN_2c607588(param_1);
  puVar21 = DAT_2c638198;
  bVar13 = *(byte *)(param_1 + 0x52) & 7;
  if (bVar13 == 3) {
    uVar9 = FUN_2c6033b4(param_1,0,0x65);
    uVar1 = (ulonglong)extraout_r2;
    uVar20 = (uint)uVar9;
    uVar12 = extraout_r1;
    if (uVar20 == 0) {
      FUN_2c604188(param_1);
      uVar22 = FUN_2c62a4c4();
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar1 = (longlong)DAT_2c63818c * (longlong)(int)uVar22;
      uVar20 = (int)(uVar1 >> 0x20) - ((int)uVar22 >> 0x1f) & 0xffff;
    }
    FUN_2c62e7b4(&local_70,uVar12,(int)uVar1);
    local_3c = 300;
    local_34 = 300;
    local_30 = 0xffff;
    iVar18 = (int)(short)((local_74 + 1) - local_78);
    if (iVar18 < local_80) {
      local_48 = iVar18 - local_80;
      local_6c = DAT_2c637e80;
      local_50 = 0;
      uStack_4c = 0;
      local_70 = param_1;
      iVar11 = FUN_2c62e994(param_1);
      if (iVar11 == 0) {
        if (0 < local_44) {
          local_2e = local_2e & 0xfe;
          local_40 = 0;
        }
      }
      else {
        iVar18 = *(int *)(iVar11 + 0x30);
        if ((iVar18 < local_44) &&
           (local_2e = local_2e & 0xfe, local_40 = iVar18,
           (int)((uint)*(byte *)(iVar11 + 0x42) << 0x1e) < 0)) {
          iVar11 = local_50;
          local_50 = local_48;
          local_2e = local_2e | 2;
          local_48 = iVar11;
        }
      }
      local_44 = FUN_2c62e9d4(uVar20,local_50,local_48);
      local_38 = local_44;
      FUN_2c62e8ec(&local_70);
    }
    else {
      local_70 = param_1;
      FUN_2c62e838(param_1,DAT_2c638184);
      *(undefined2 *)(param_1 + 0x4e) = 0;
      iVar18 = (int)(short)((local_72 + 1) - local_76);
      if (iVar18 < local_7e) {
        local_48 = (iVar18 - local_7e) - (int)*(short *)(iVar11 + 8);
        local_6c = DAT_2c638188;
        local_50 = 0;
        uStack_4c = 0;
        iVar18 = FUN_2c62e994(param_1);
        iVar11 = local_48;
        if (iVar18 == 0) {
          if (0 < local_44) {
            local_2e = local_2e & 0xfe;
            local_40 = 0;
          }
        }
        else {
          iVar19 = *(int *)(iVar18 + 0x30);
          if ((iVar19 < local_44) &&
             (local_2e = local_2e & 0xfe, local_40 = iVar19,
             (int)((uint)*(byte *)(iVar18 + 0x42) << 0x1e) < 0)) {
            local_2e = local_2e | 2;
            local_48 = local_50;
            local_50 = iVar11;
          }
        }
        local_44 = FUN_2c62e9d4(uVar20,local_50,local_48);
        local_38 = local_44;
        FUN_2c62e8ec(&local_70);
        goto LAB_2c637c04;
      }
    }
  }
  else {
    if (bVar13 != 4) {
      if (bVar13 != 1) {
        if (bVar13 != 2) goto LAB_2c637c04;
        if (((local_7e <= (short)((local_72 + 1) - local_76)) ||
            (local_7e <= *(short *)(iVar11 + 8))) ||
           (uVar20 = (*(code *)*DAT_2c638198)(*(undefined4 *)(param_1 + 0x24)), uVar20 < 4)) {
          *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
          goto LAB_2c637c04;
        }
        sVar10 = FUN_2c6298c0(iVar11,0x2e);
        local_88 = (uint)(short)((sVar10 + sVar6) * -3 + ((local_74 + 1) - local_78));
        if ((int)local_88 < 1) goto LAB_2c637c04;
        iVar18 = (*(code *)*puVar21)(*(undefined4 *)(param_1 + 0x24));
        local_84 = lv_mem_alloc(iVar18 << 2);
        puVar21 = DAT_2c638190;
        local_7c = 0;
        if (iVar18 == 0) {
          iVar19 = -2;
          uVar12 = *(undefined4 *)(local_84 + -4);
          uVar20 = FUN_2c6298c0(iVar11,uVar12,0);
LAB_2c6380a2:
          uVar2 = local_88;
          puVar21 = (undefined4 *)(local_84 + (iVar19 + 1) * 4);
          local_8c = param_1;
          do {
            puVar21 = puVar21 + -1;
            uVar14 = *puVar21;
            iVar18 = FUN_2c6298c0(iVar11,uVar14,uVar12);
            uVar20 = uVar20 + iVar18 + sVar6;
            param_1 = local_8c;
            if (uVar2 == uVar20) goto LAB_2c6380e0;
            if (uVar2 < uVar20) {
              iVar19 = iVar19 + 1;
              goto LAB_2c6380e0;
            }
            iVar19 = iVar19 + -1;
            uVar12 = uVar14;
          } while (iVar19 != 0);
        }
        else {
          puVar17 = (undefined4 *)(local_84 + -4);
          iVar4 = 0;
          do {
            iVar19 = iVar4;
            uVar12 = (*(code *)*puVar21)(*(undefined4 *)(param_1 + 0x24),&local_7c);
            puVar17 = puVar17 + 1;
            *puVar17 = uVar12;
            iVar4 = iVar19 + 1;
          } while (iVar18 != iVar19 + 1);
          uVar12 = *(undefined4 *)(local_84 + iVar19 * 4);
          uVar20 = FUN_2c6298c0(iVar11,uVar12,0);
          iVar19 = iVar19 + -1;
          if (iVar19 != 0) goto LAB_2c6380a2;
        }
        iVar19 = 0;
LAB_2c6380e0:
        FUN_2c62bea8(local_84);
        uVar12 = *(undefined4 *)(param_1 + 0x24);
        uVar20 = FUN_2c66c4ec(uVar12);
        local_70 = (*(code *)*DAT_2c638194)(uVar12,iVar19);
        puVar21 = DAT_2c63819c;
        if (uVar20 < local_70 + 3) {
          do {
            (*(code *)*puVar21)(*(undefined4 *)(param_1 + 0x24),&local_70);
          } while (uVar20 < local_70 + 3);
        }
        uVar12 = FUN_2c637ab8(*(undefined4 *)(param_1 + 0x24));
        uVar12 = FUN_2c62bebc(*(undefined4 *)(param_1 + 0x28),uVar12);
        *(undefined4 *)(param_1 + 0x28) = uVar12;
        FUN_2c6435c4(uVar12,*(undefined4 *)(param_1 + 0x24));
        uVar20 = local_70;
        puVar15 = *(undefined1 **)(param_1 + 0x24);
        iVar11 = FUN_2c66c4ec(puVar15);
        uVar12 = FUN_2c6435c4(auStack_90 + -(iVar11 + 7U & 0xfffffff8),puVar15 + uVar20);
        *puVar15 = 0x2e;
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 1) = 0x2e;
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 2) = 0x2e;
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 3) = 0;
        FUN_2c66b5ec(*(undefined4 *)(param_1 + 0x24),uVar12);
        *(undefined4 *)(param_1 + 0x34) = 0xfffffffe;
        goto LAB_2c637c04;
      }
      if (((local_7e <= (short)((local_72 + 1) - local_76)) || (local_7e <= *(short *)(iVar11 + 8)))
         || (uVar20 = (*(code *)*DAT_2c637e70)(*(undefined4 *)(param_1 + 0x24)), uVar20 < 4)) {
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        FUN_2c60710c(param_1,0x27d1);
        goto LAB_2c637c04;
      }
      if ((*(char *)(param_1 + 0x4c) != -1) &&
         ((int)local_7e <= (int)*(char *)(param_1 + 0x4c) * (*(short *)(iVar11 + 8) + iVar18))) {
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
        FUN_2c60710c(param_1);
        goto LAB_2c637c04;
      }
      sVar8 = FUN_2c6298c0(iVar11,0x2e);
      local_76 = (local_72 + 1) - local_76;
      sVar10 = *(short *)(iVar11 + 8);
      iVar18 = iVar18 + sVar10;
      sVar7 = local_76 - (short)iVar18 * (short)((int)local_76 / iVar18);
      if ((int)sVar7 < (int)sVar10) {
        sVar10 = -sVar5;
      }
      local_7c = CONCAT22((local_76 + sVar10) - sVar7,
                          (sVar8 + sVar6) * -3 + ((local_74 + 1) - local_78));
      iVar11 = FUN_2c637598(param_1,&local_7c);
      uVar12 = *(undefined4 *)(param_1 + 0x24);
      uVar20 = FUN_2c66c4ec(uVar12);
      local_88 = (*(code *)*DAT_2c637e74)(uVar12,iVar11);
      puVar17 = DAT_2c637e88;
      local_84 = iVar11;
      puVar21 = DAT_2c637e78;
      while (uVar2 = local_88 + 3, DAT_2c637e78 = puVar21, local_70 = local_88, uVar20 < uVar2) {
        (*(code *)*puVar17)(*(undefined4 *)(param_1 + 0x24),&local_70);
        local_84 = local_84 + -1;
        local_88 = local_70;
        puVar21 = DAT_2c637e78;
      }
      uVar16 = 0;
      iVar11 = 4;
      do {
        iVar18 = (*(code *)*DAT_2c637e7c)(local_70 + *(int *)(param_1 + 0x24));
        uVar16 = iVar18 + uVar16 & 0xff;
        (*(code *)*puVar21)(*(undefined4 *)(param_1 + 0x24),&local_70);
        iVar18 = local_84;
        uVar3 = local_88;
        if (3 < uVar16) {
          iVar11 = *(int *)(param_1 + 0x24) + local_88;
          if ((-1 < (int)((uint)*(byte *)(param_1 + 0x52) << 0x19)) ||
             (*(int *)(param_1 + 0x2c) == 0)) goto LAB_2c637d74;
          goto LAB_2c637d70;
        }
      } while ((local_70 <= uVar20) && (iVar11 = iVar11 + -1, iVar11 != 0));
      bVar13 = *(byte *)(param_1 + 0x52);
      iVar11 = *(int *)(param_1 + 0x24) + local_88;
      if ((bVar13 & 0x40) == 0) {
        *(uint *)(param_1 + 0x2c) = bVar13 & 0x40;
        *(byte *)(param_1 + 0x52) = bVar13 & 0xbf;
LAB_2c6382b8:
        FUN_2c62c0d8(param_1 + 0x2c,iVar11,uVar16);
      }
      else {
        if (*(int *)(param_1 + 0x2c) == 0) {
          *(byte *)(param_1 + 0x52) = bVar13 & 0xbf;
          goto LAB_2c6382b8;
        }
LAB_2c637d70:
        FUN_2c62bea8();
LAB_2c637d74:
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xbf;
        if (uVar16 < 5) goto LAB_2c6382b8;
        iVar19 = lv_mem_alloc(uVar16 + 1);
        *(int *)(param_1 + 0x2c) = iVar19;
        if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c638358,0x559,DAT_2c638354,DAT_2c638350);
        }
        FUN_2c62c0d8(iVar19,iVar11,uVar16);
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar16) = 0;
        *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) | 0x40;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x24) + uVar3) = 0x2e;
      *(undefined1 *)(*(int *)(param_1 + 0x24) + uVar3 + 1) = 0x2e;
      *(undefined1 *)(*(int *)(param_1 + 0x24) + uVar3 + 2) = 0x2e;
      *(undefined1 *)(*(int *)(param_1 + 0x24) + uVar2) = 0;
      *(int *)(param_1 + 0x30) = iVar18 + 3;
      goto LAB_2c637c04;
    }
    iVar18 = FUN_2c6033b4(param_1,0,99);
    uVar9 = FUN_2c6033b4(param_1,0,0x65);
    uVar1 = (ulonglong)extraout_r2_00;
    uVar20 = (uint)uVar9;
    uVar12 = extraout_r1_00;
    if (uVar20 == 0) {
      FUN_2c604188(param_1);
      uVar22 = FUN_2c62a4c4();
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar1 = (longlong)DAT_2c63834c * (longlong)(int)uVar22;
      uVar20 = (int)(uVar1 >> 0x20) - ((int)uVar22 >> 0x1f) & 0xffff;
    }
    FUN_2c62e7b4(&local_70,uVar12,(int)uVar1);
    uVar12 = DAT_2c638184;
    local_30 = 0xffff;
    if ((short)((local_74 + 1) - local_78) < local_80) {
      local_70 = param_1;
      iVar11 = FUN_2c6298c0(iVar11,0x20);
      local_6c = uVar12;
      local_48 = iVar11 * -3 - (int)local_80;
      local_50 = 0;
      uStack_4c = 0;
      local_44 = FUN_2c62e9d4(uVar20);
      iVar19 = FUN_2c62e994(param_1,uVar12);
      iVar11 = 0;
      if (iVar19 != 0) {
        iVar11 = *(int *)(iVar19 + 0x30);
      }
      if (iVar18 == 0) {
        if (iVar11 < local_44) {
          local_2e = local_2e & 0xfe;
          local_40 = iVar11;
        }
      }
      else {
        local_34 = *(undefined4 *)(iVar18 + 0x3c);
        local_40 = *(int *)(iVar18 + 0x30);
      }
      FUN_2c62e8ec(&local_70);
    }
    else {
      local_70 = param_1;
      FUN_2c62e838(param_1,DAT_2c638344);
      *(undefined2 *)(param_1 + 0x4e) = 0;
      uVar12 = DAT_2c638348;
      if ((int)(short)((local_72 + 1) - local_76) < (int)local_7e) {
        local_48 = -(int)*(short *)(iVar11 + 8) - (int)local_7e;
        local_6c = DAT_2c638348;
        local_50 = 0;
        uStack_4c = 0;
        local_44 = FUN_2c62e9d4(uVar20);
        iVar19 = FUN_2c62e994(param_1,uVar12);
        iVar11 = 0;
        if (iVar19 != 0) {
          iVar11 = *(int *)(iVar19 + 0x30);
        }
        if (iVar18 == 0) {
          if (iVar11 < local_44) {
            local_2e = local_2e & 0xfe;
            local_40 = iVar11;
          }
        }
        else {
          local_34 = *(undefined4 *)(iVar18 + 0x3c);
          local_40 = *(int *)(iVar18 + 0x30);
        }
        FUN_2c62e8ec(&local_70);
        goto LAB_2c637c04;
      }
    }
  }
  FUN_2c62e838(param_1,DAT_2c637e84);
  *(undefined2 *)(param_1 + 0x50) = 0;
LAB_2c637c04:
  FUN_2c607df0(param_1);
  if (*DAT_2c637e6c != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

