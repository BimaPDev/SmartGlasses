/* FUN_100c164c @ 0x100c164c */

byte * FUN_100c164c(int param_1,int *param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  ushort uVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  uint local_40;
  int local_3c;
  
  uVar5 = 0x2c;
  pcVar14 = *(char **)(*(int *)((uint)*(byte *)(param_1 + 6) * 0x2c + DAT_100c1924 + 0x24) + 4);
  if (*pcVar14 == '\0') {
    puVar7 = *(undefined4 **)(pcVar14 + 4);
    *(undefined4 **)(pcVar14 + 8) = puVar7;
    *puVar7 = 0;
    uVar1 = *(undefined2 *)(pcVar14 + 2);
    *(undefined2 *)puVar7 = uVar1;
    *(byte *)((int)puVar7 + 3) = (byte)uVar1 ^ (byte)((ushort)uVar1 >> 8) ^ 0x5a;
    *pcVar14 = '\x01';
  }
  puVar4 = PTR_s_ASSERTION_FAIL___s_____s__d_100c1958;
  puVar3 = PTR_s_WEST_TOPDIR_framework_bluetooth__100c1954;
  uVar18 = *param_2 + 8;
  uVar19 = uVar18 & 0xfffc;
  local_40 = param_3;
  local_3c = param_4;
  do {
    uVar23 = CONCAT44(param_2,uVar5);
    uVar5 = 0;
    bVar22 = (bool)isCurrentModePrivileged();
    if (bVar22) {
      uVar5 = getBasePriority();
    }
    bVar22 = (bool)isCurrentModePrivileged();
    if ((bVar22) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x20 < uVar15)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar12 = *(uint **)(pcVar14 + 8);
    uVar21 = 0;
    puVar13 = puVar12;
    do {
      bVar11 = *(byte *)((int)puVar13 + 3);
      bVar10 = (byte)*puVar13 ^ *(byte *)((int)puVar13 + 2) ^ *(byte *)((int)puVar13 + 1) ^ 0x5a;
      if (bVar11 != bVar10) {
        FUN_10119dc2(puVar4,PTR_s_____uint8_t____sInfo___3_________100c1928,puVar3,0x575,uVar23);
        FUN_10119dc2(PTR_DAT_100c192c);
        uVar23 = FUN_1011a1f0(puVar3,0x575,bVar11,bVar10);
      }
      uVar21 = uVar21 + 1;
      if (100 < uVar21) {
        FUN_10119dc2(PTR_s_pool_malloc_len__d__p__d_100c1930,uVar19,*(undefined4 *)(pcVar14 + 4),
                     *(undefined2 *)(pcVar14 + 2));
        uVar23 = FUN_10119dc2(PTR_s_Start_pos__p_curr__p_flag_0x_x_l_100c1934,puVar12,puVar13,
                              *(byte *)((int)puVar13 + 2),(ushort)*puVar13);
      }
      uVar15 = (uint)(ushort)*puVar13;
      if ((*(byte *)((int)puVar13 + 2) & 1) != 0) {
        uVar2 = *(ushort *)(pcVar14 + 2);
        puVar16 = (uint *)(uVar15 + (int)puVar13);
        puVar13 = (uint *)(*(int *)(pcVar14 + 4) + (uint)uVar2);
        if (puVar13 < puVar16) {
          FUN_10119dc2(puVar4,PTR_s_sPos_<__(data_pool_>data_pool___d_100c1938,puVar3,0x581,uVar23);
          FUN_10119dc2(PTR_DAT_100c192c);
          uVar23 = FUN_1011a1f0(puVar3,0x581,(uint)uVar2,puVar13);
        }
        if (puVar16 == (uint *)((uint)*(ushort *)(pcVar14 + 2) + (int)*(uint **)(pcVar14 + 4))) {
          puVar16 = *(uint **)(pcVar14 + 4);
        }
        puVar13 = puVar16;
        if (100 < uVar21) {
          uVar8 = *(undefined4 *)(pcVar14 + 8);
          puVar6 = PTR_s_debug1__p__p__d_100c193c;
LAB_100c1768:
          uVar23 = FUN_10119dc2(puVar6,puVar16,uVar8,0);
          puVar13 = puVar16;
        }
        goto LAB_100c176c;
      }
      if (uVar19 <= uVar15) {
        pbVar9 = (byte *)((int)puVar13 + uVar19);
        if (uVar19 < uVar15) {
          *(uint *)((int)puVar13 + uVar19) = *(byte *)((int)puVar13 + 2) & 1;
          iVar17 = (ushort)*puVar13 - uVar19;
          *(short *)((int)puVar13 + uVar19) = (short)iVar17;
          pbVar9[3] = (byte)iVar17 ^ (byte)((uint)iVar17 >> 8) ^ 0x5a;
        }
        if (pbVar9 == *(byte **)(pcVar14 + 4) + *(ushort *)(pcVar14 + 2)) {
          pbVar9 = *(byte **)(pcVar14 + 4);
        }
        *(byte **)(pcVar14 + 8) = pbVar9;
        bVar11 = *(byte *)((int)puVar13 + 2) | 1;
        *(byte *)((int)puVar13 + 2) = bVar11;
        *(ushort *)puVar13 = (ushort)uVar18 & 0xfffc;
        *(byte *)((int)puVar13 + 3) = bVar11 ^ (byte)uVar18 & 0xfc ^ (byte)(uVar19 >> 8) ^ 0x5a;
        puVar16 = puVar13;
        break;
      }
      uVar2 = *(ushort *)(pcVar14 + 2);
      puVar20 = (uint *)((int)puVar13 + uVar15);
      puVar16 = (uint *)(*(int *)(pcVar14 + 4) + (uint)uVar2);
      if (puVar16 < puVar20) {
        FUN_10119dc2(puVar4,PTR_s_nPos_<__(data_pool_>data_pool___d_100c1940,puVar3,0x593,uVar23);
        FUN_10119dc2(PTR_DAT_100c192c);
        uVar23 = FUN_1011a1f0(puVar3,0x593,(uint)uVar2,puVar16);
      }
      uVar8 = (undefined4)uVar23;
      puVar16 = *(uint **)(pcVar14 + 4);
      if (puVar20 == (uint *)((uint)*(ushort *)(pcVar14 + 2) + (int)puVar16)) {
        puVar13 = puVar16;
        if (100 < uVar21) {
          uVar8 = *(undefined4 *)(pcVar14 + 8);
          puVar6 = PTR_s_debug2__p__p__d_100c1944;
          goto LAB_100c1768;
        }
LAB_100c176c:
        bVar22 = false;
      }
      else {
        bVar11 = *(byte *)((int)puVar20 + 3);
        bVar10 = (byte)*puVar20 ^ *(byte *)((int)puVar20 + 2) ^ *(byte *)((int)puVar20 + 1) ^ 0x5a;
        if (bVar11 != bVar10) {
          FUN_10119dc2(puVar4,PTR_s_____uint8_t____nInfo___3_________100c1948,puVar3,0x59f,uVar23);
          FUN_10119dc2(PTR_DAT_100c192c);
          uVar8 = FUN_1011a1f0(puVar3,0x59f,bVar11,bVar10);
        }
        bVar11 = *(byte *)((int)puVar20 + 2);
        uVar23 = (ulonglong)CONCAT14(bVar11,uVar8) & 0x1ffffffff;
        if ((bVar11 & 1) != 0) {
          puVar13 = puVar20;
          if (100 < uVar21) {
            uVar23 = FUN_10119dc2(PTR_s_debug3__p__p__d_100c194c,puVar20,
                                  *(undefined4 *)(pcVar14 + 8),0);
          }
          goto LAB_100c176c;
        }
        uVar23 = (ulonglong)CONCAT14(bVar11,(uint)*(byte *)((int)puVar13 + 2)) & 0x1ffffffff;
        iVar17 = (uint)(ushort)*puVar13 + (uint)(ushort)*puVar20;
        *(ushort *)puVar13 = (ushort)iVar17;
        *(byte *)((int)puVar13 + 3) =
             (byte)iVar17 ^ *(byte *)((int)puVar13 + 2) ^ (byte)((uint)iVar17 >> 8) ^ 0x5a;
        *puVar20 = bVar11 & 1;
        if (puVar20 == *(uint **)(pcVar14 + 8)) {
          *(uint **)(pcVar14 + 8) = puVar13;
        }
        if (100 < uVar21) {
          uVar23 = FUN_10119dc2(PTR_s_debug4__p__p__d_100c1950,puVar13,*(undefined4 *)(pcVar14 + 8),
                                1);
        }
        bVar22 = true;
      }
    } while ((*(uint **)(pcVar14 + 8) != puVar13) || (puVar16 = (uint *)0x0, bVar22));
    bVar22 = (bool)isCurrentModePrivileged();
    if (bVar22) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    if ((puVar16 != (uint *)0x0) && (puVar16 != (uint *)0xfffffffc)) {
      *(byte *)(puVar16 + 1) = 1;
      return (byte *)((int)puVar16 + 5);
    }
    if (param_3 == 0 && param_4 == 0) {
      return (byte *)0x0;
    }
    if (param_4 == -1 && param_3 == 0xffffffff) {
      uVar24 = FUN_101153fc(5,0);
      param_2 = (int *)((ulonglong)uVar24 >> 0x20);
      uVar5 = (undefined4)uVar24;
    }
    else {
      if (local_40 == 0 && local_3c == 0) {
        return (byte *)0x0;
      }
      iVar17 = local_3c;
      uVar15 = local_40;
      if ((int)(uint)(local_40 < 6) <= local_3c) {
        uVar15 = 5;
        iVar17 = 0;
      }
      uVar24 = FUN_101153fc(uVar15,iVar17);
      param_2 = (int *)((ulonglong)uVar24 >> 0x20);
      uVar5 = (undefined4)uVar24;
      bVar22 = local_40 < uVar15;
      local_40 = local_40 - uVar15;
      local_3c = (local_3c - iVar17) - (uint)bVar22;
    }
  } while( true );
}

