/* FUN_2c4ff234 @ 0x2c4ff234 */

void FUN_2c4ff234(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_68;
  uint local_60;
  uint local_58;
  int local_54;
  int local_4c;
  int local_3c;
  int local_38 [2];
  byte local_30;
  int local_2c;
  
  local_2c = *DAT_2c4ff510;
  piVar5 = (int *)FUN_2c4fe3e8();
  uVar6 = LAB_2c4ff514;
  sVar3 = *(short *)(*piVar5 + 8);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(int *)(param_1 + 0x90) = (int)sVar3;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0x70) = (int)sVar3;
  FUN_2c62e838(param_1,uVar6);
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x10001;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar10 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = 0;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    while (iVar10 != 0) {
      iVar11 = *(int *)(iVar10 + 4);
      FUN_2c62bea8(iVar10);
      iVar10 = iVar11;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 0x38) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = 0;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    while (iVar10 != 0) {
      iVar11 = *(int *)(iVar10 + 4);
      FUN_2c62bea8(iVar10);
      iVar10 = iVar11;
    }
    FUN_2c62bea8(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if ((param_2 != 0) && (iVar10 = FUN_2c66c4ec(param_2), puVar7 = DAT_2c4ff518, iVar10 != 0)) {
    iVar10 = 0;
    local_38[0] = 0;
    do {
      if (*(char *)(param_2 + local_38[0]) == '\0') {
        iVar11 = iVar10 << 2;
        goto LAB_2c4ff308;
      }
      iVar10 = iVar10 + 1;
      (*(code *)*puVar7)(param_2,local_38);
    } while (iVar10 != 0x32000);
    iVar11 = 0xc8000;
LAB_2c4ff308:
    local_3c = iVar10;
    uVar6 = lv_mem_alloc(iVar11);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    *(int *)(param_1 + 0x30) = local_3c;
    FUN_2c4fe26c(param_2,uVar6,&local_3c);
    uVar12 = *(uint *)(param_1 + 0x30);
    iVar10 = FUN_2c607404(param_1);
    if (iVar10 < 0x150) {
      iVar10 = 0x150;
    }
    puVar7 = (undefined4 *)FUN_2c4fe3e8(param_1);
    local_54 = FUN_2c4fe870(param_1,0);
    iVar11 = FUN_2c4fe930(param_1,0);
    if (uVar12 == 0) {
      iVar10 = -1;
    }
    else {
      uVar14 = 0;
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      uVar18 = 0;
LAB_2c4ff368:
      uVar17 = uVar14 + 1;
      uVar13 = *(uint *)(*(int *)(param_1 + 0x28) + uVar14 * 4);
      if (uVar17 < uVar12) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x28) + uVar14 * 4 + 4);
      }
      else {
        iVar9 = 0;
      }
      sVar3 = FUN_2c6298c0(*puVar7,uVar13,iVar9);
      if (uVar13 == 0xc || uVar13 == 0x20) {
        uVar15 = 1;
        bVar1 = uVar13 == 0xd;
        if ((uVar13 != 10) && (!bVar1)) {
          uVar19 = 0;
          uVar16 = 0;
          uVar2 = 0;
          goto LAB_2c4ff42c;
        }
LAB_2c4ff4c4:
        if ((iVar9 == 10) && (bVar1)) {
          uVar17 = uVar14 + 2;
          if (*(short *)(iVar11 + 0x16) != 0) goto LAB_2c4ff4da;
LAB_2c4ff3c2:
          uVar16 = 0;
          *(uint *)(iVar11 + 0xc) = uVar17;
          *(uint *)(iVar11 + 0x10) = uVar17;
          uVar14 = uVar17;
          uVar19 = uVar16;
          local_60 = uVar16;
          local_58 = uVar16;
        }
        else {
LAB_2c4ff3b8:
          if (*(short *)(iVar11 + 0x16) == 0) goto LAB_2c4ff3c2;
LAB_2c4ff4da:
          uVar19 = 0;
          FUN_2c4fec8c(*(undefined4 *)(param_1 + 0x44));
          uVar14 = uVar17;
          if ((int)(char)((int)((uint)*(byte *)(local_54 + 0x18) << 0x1c) >> 0x1c) ==
              (uint)*(byte *)(param_1 + 0x114)) {
            FUN_2c4fecec(*(undefined4 *)(param_1 + 0x44),uVar17 - 1);
            local_60 = 0;
            local_58 = 0;
            goto LAB_2c4ff6e4;
          }
          uVar16 = 1;
          local_60 = 0;
          local_58 = 0;
        }
joined_r0x2c4ff3d2:
        if (uVar14 < uVar12) goto LAB_2c4ff3d4;
      }
      else {
        uVar15 = 0;
        if (uVar13 == 0xd) {
          bVar1 = true;
          goto LAB_2c4ff4c4;
        }
        uVar19 = uVar15;
        uVar16 = uVar15;
        uVar2 = uVar15;
        if (uVar13 - 9 < 3) {
          if (uVar13 != 10) goto LAB_2c4ff42c;
          goto LAB_2c4ff3b8;
        }
        iVar8 = FUN_2c4fe2d8(uVar13);
        if (iVar8 == 0) {
          local_30 = (byte)local_60 | (byte)(uVar18 << 4);
          uVar2 = uVar14;
          if (local_60 == 0) {
            local_60 = 1;
            uVar16 = local_60;
            if ((uVar13 & 0xffffffdf) - 0x41 < 0x1a) {
              uVar19 = 1;
            }
            else {
              uVar19 = 0;
            }
          }
          else {
            uVar16 = local_60;
            if (((uVar13 & 0xffffffdf) - 0x41 < 0x1a) && (uVar19 = 1, uVar2 = local_58, uVar18 == 0)
               ) {
              uVar2 = uVar14;
            }
          }
        }
LAB_2c4ff42c:
        local_58 = uVar2;
        local_60 = uVar16;
        if (sVar3 + local_68 < (int)(short)iVar10) {
          if ((((iVar9 == 0) || (uVar16 = FUN_2c4fe2d8(iVar9), uVar16 == 0)) ||
              (sVar4 = FUN_2c6298c0(*puVar7,iVar9,0), uVar14 == 0)) ||
             ((int)sVar4 + sVar3 + local_68 + (int)*(short *)((int)puVar7 + 0x1a) <=
              (int)(short)iVar10)) {
            if ((uVar15 == 0) && ((uVar13 & 0xfffffffd) != 9)) {
              *(undefined2 *)(iVar11 + 0x16) = 1;
            }
            uVar16 = 0;
            local_68 = (int)(short)(sVar3 + (short)local_68 + *(short *)((int)puVar7 + 0x1a));
            uVar14 = uVar17;
          }
          else {
            local_30 = (byte)local_60 | (byte)(uVar19 << 4);
            if ((local_60 != 0) && ((uVar19 != 0 || ((iVar9 != 0x20 && (4 < iVar9 - 9U)))))) {
              uVar19 = 0;
              local_60 = 0;
              if (*(uint *)(iVar11 + 0xc) != local_58) {
                uVar14 = local_58;
              }
              local_58 = 0;
            }
            iVar9 = uVar14 - 1;
            FUN_2c4fec8c(*(undefined4 *)(param_1 + 0x44));
            if ((int)(char)((int)((uint)*(byte *)(local_54 + 0x18) << 0x1c) >> 0x1c) ==
                (uint)*(byte *)(param_1 + 0x114)) goto LAB_2c4ff6f8;
          }
          goto joined_r0x2c4ff3d2;
        }
        if (*(short *)(iVar11 + 0x16) == 0) {
          *(uint *)(iVar11 + 0xc) = uVar14;
          *(uint *)(iVar11 + 0x10) = uVar14;
          if (uVar15 == 0) {
            uVar16 = 0;
            uVar14 = uVar17;
            if ((uVar13 & 0xfffffffd) != 9) {
              *(undefined2 *)(iVar11 + 0x16) = 1;
            }
          }
          else {
            uVar16 = 0;
            uVar14 = uVar17;
          }
          goto joined_r0x2c4ff3d2;
        }
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c4ff720,0x402,DAT_2c4ff728,DAT_2c4ff724,DAT_2c4ff71c);
        }
        local_30 = (byte)local_60 | (byte)(uVar19 << 4);
        if ((local_60 == 0) ||
           ((uVar19 == 0 &&
            (((iVar9 == 0x20 || (iVar9 - 9U < 5)) || (iVar9 = FUN_2c4fe2d8(iVar9), iVar9 == 0))))))
        {
          iVar9 = FUN_2c4fe2d8(uVar13);
          if (iVar9 == 0) {
            iVar9 = uVar14 - 1;
          }
          else if (uVar14 == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = uVar14 - 2;
            uVar14 = uVar14 - 1;
          }
        }
        else {
          uVar19 = 0;
          local_60 = 0;
          if (*(uint *)(iVar11 + 0xc) != local_58) {
            uVar14 = local_58;
          }
          local_58 = 0;
          iVar9 = uVar14 - 1;
        }
        FUN_2c4fec8c(*(undefined4 *)(param_1 + 0x44));
        if ((int)(char)((int)((uint)*(byte *)(local_54 + 0x18) << 0x1c) >> 0x1c) !=
            (uint)*(byte *)(param_1 + 0x114)) {
          uVar16 = 1;
          goto joined_r0x2c4ff3d2;
        }
LAB_2c4ff6f8:
        FUN_2c4fecec(*(undefined4 *)(param_1 + 0x44),iVar9);
LAB_2c4ff6e4:
        if (uVar14 < uVar12) {
          local_54 = FUN_2c4fe870(param_1,uVar14);
          goto LAB_2c4ff3da;
        }
      }
      iVar10 = uVar14 - 1;
    }
    FUN_2c4fec8c(*(undefined4 *)(param_1 + 0x44));
    FUN_2c4fecec(*(undefined4 *)(param_1 + 0x44),iVar10);
    iVar10 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    *(int *)(param_1 + 0x48) = iVar10;
    *(int *)(param_1 + 0x4c) = iVar10;
    local_4c = param_3;
    if (param_3 == 0x7fff) {
      local_4c = (int)((uint)*(ushort *)(*(int *)(param_1 + 0x44) + 0x18) << 0x10) >> 0x14;
    }
    if ((int)((uint)*(ushort *)(iVar10 + 0x18) << 0x10) >> 0x14 == local_4c) {
      FUN_2c4fe394(param_1);
    }
    else {
      FUN_2c4ff14c(param_1,local_4c,0);
    }
  }
  FUN_2c607df0(param_1);
  if (*DAT_2c4ff510 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
LAB_2c4ff3d4:
  uVar18 = uVar19;
  if (uVar16 != 0) {
LAB_2c4ff3da:
    iVar11 = FUN_2c4fe930(param_1,uVar14);
    local_68 = 0;
    uVar18 = uVar19;
  }
  goto LAB_2c4ff368;
}

