/* FUN_2c616854 @ 0x2c616854 */

void FUN_2c616854(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  short local_170;
  short local_15c;
  short local_15a;
  short local_158;
  short local_156;
  undefined1 auStack_154 [8];
  ushort local_14c;
  ushort local_14a;
  short local_148;
  short local_146;
  undefined1 auStack_144 [10];
  undefined1 local_13a;
  undefined4 local_138 [3];
  undefined1 auStack_12c [4];
  undefined4 local_128;
  undefined4 local_124;
  ushort *local_120;
  undefined1 *local_11c;
  undefined4 *local_114;
  short *local_108;
  short *psStack_104;
  undefined4 local_f8;
  undefined2 local_e4;
  undefined1 local_e1;
  undefined1 auStack_8c [4];
  undefined4 local_88;
  int local_34;
  
  iVar13 = param_1 + 0x30;
  local_34 = *DAT_2c616acc;
  iVar5 = FUN_2c62ca4c(iVar13,param_2,param_3,0);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_2c62a6b4(auStack_154,*(undefined4 *)(param_2 + 8),param_1 + 0x14), iVar5 != 0)) {
    uVar9 = *(undefined4 *)(param_2 + 8);
    *(undefined1 **)(param_2 + 8) = auStack_154;
    FUN_2c6120a0(auStack_144);
    FUN_2c600968(param_1,0x70000,auStack_144);
    FUN_2c61314c(&local_e4);
    local_e1 = local_13a;
    local_e4 = 0x7fff;
    sVar4 = FUN_2c6033b4(param_1,0x70000,1);
    iVar5 = (int)sVar4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 >> 1;
    sVar4 = FUN_2c6033b4(param_1,0x70000,1);
    iVar6 = (int)sVar4;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 >> 1;
    FUN_2c600b9c(auStack_12c,param_2);
    local_11c = auStack_8c;
    local_f8 = 0x70000;
    local_128 = DAT_2c616ad0;
    local_124 = 5;
    local_114 = local_138;
    puVar7 = (ushort *)FUN_2c62ca18(iVar13);
    if (puVar7 != (ushort *)0x0) {
      do {
        FUN_2c62c0d8(local_138,auStack_144,0xc);
        FUN_2c62c0d8(auStack_8c,&local_e4,0x58);
        local_138[0] = *(undefined4 *)(puVar7 + 4);
        uVar12 = *(byte *)((int)puVar7 + 0x11) & 1;
        local_108 = &local_15c;
        psStack_104 = &local_158;
        local_88 = local_138[0];
        if ((*(byte *)((int)puVar7 + 0x11) & 1) == 0) {
          uVar2 = puVar7[2];
          if (uVar2 != 0x7fff) {
            uVar11 = uVar12;
            if (uVar2 < *(ushort *)(param_1 + 0x82)) {
              FUN_2c61669c(param_1,*(undefined4 *)(puVar7 + 6),uVar2,&local_14c);
              uVar12 = local_14c;
              uVar11 = local_14a;
            }
            goto LAB_2c616942;
          }
        }
        else {
          uVar12 = *puVar7;
          uVar11 = puVar7[1];
LAB_2c616942:
          sVar4 = uVar11 + *(short *)(param_1 + 0x16);
          sVar3 = uVar12 + *(short *)(param_1 + 0x14);
          puVar8 = (ushort *)(uint)(iVar5 != 0 && iVar6 != 0);
          local_120 = puVar8;
          if (iVar5 != 0 && iVar6 != 0) {
            local_170 = (short)iVar6;
            local_14c = sVar3 - (short)iVar5;
            local_148 = sVar3 + (short)iVar5;
            local_14a = sVar4 - local_170;
            local_146 = sVar4 + local_170;
            local_120 = &local_14c;
          }
          bVar1 = (byte)puVar7[8];
          uVar10 = (uint)bVar1;
          if ((bVar1 & 3) != 0) {
            local_15c = *(short *)(param_1 + 0x14);
            if ((bVar1 & 1) == 0) {
              local_15c = sVar3;
            }
            local_158 = sVar3;
            if ((int)(uVar10 << 0x1e) < 0) {
              local_158 = *(short *)(param_1 + 0x18);
            }
            local_15a = sVar4;
            local_156 = sVar4;
            FUN_2c602340(param_1,0x1a,auStack_12c);
            FUN_2c6120f4(param_2,local_138,&local_15c,&local_158);
            if (puVar8 != (ushort *)0x0) {
              FUN_2c61319c(param_2,auStack_8c,&local_14c);
            }
            FUN_2c602340(param_1,0x1b,auStack_12c);
            uVar10 = (uint)(byte)puVar7[8];
          }
          if ((uVar10 & 0xc) != 0) {
            local_15a = sVar4;
            if ((int)(uVar10 << 0x1d) < 0) {
              local_15a = *(short *)(param_1 + 0x16);
            }
            if ((int)(uVar10 << 0x1c) < 0) {
              sVar4 = *(short *)(param_1 + 0x1a);
            }
            local_15c = sVar3;
            local_158 = sVar3;
            local_156 = sVar4;
            FUN_2c602340(param_1,0x1a,auStack_12c);
            FUN_2c6120f4(param_2,local_138,&local_15c,&local_158);
            if (puVar8 != (ushort *)0x0) {
              FUN_2c61319c(param_2,auStack_8c,&local_14c);
            }
            FUN_2c602340(param_1,0x1b,auStack_12c);
          }
        }
        puVar7 = (ushort *)FUN_2c62ca28(iVar13,puVar7);
      } while (puVar7 != (ushort *)0x0);
    }
    *(undefined4 *)(param_2 + 8) = uVar9;
  }
  if (*DAT_2c616acc != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

