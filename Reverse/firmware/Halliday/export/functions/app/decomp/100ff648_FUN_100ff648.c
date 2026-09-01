/* FUN_100ff648 @ 0x100ff648 */

uint FUN_100ff648(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  short sVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  bool bVar25;
  uint uVar26;
  uint local_6c;
  undefined1 *local_68;
  int local_50;
  int local_4c [2];
  undefined2 local_44;
  undefined2 local_42;
  undefined1 local_40 [16];
  int local_30;
  uint local_2c;
  
  iVar24 = *(int *)(param_2 + 0x21c);
  if (param_4 < 1) {
    bVar3 = false;
    bVar4 = bVar3;
  }
  else {
    iVar17 = 0;
    bVar4 = false;
    bVar25 = false;
    do {
      while (bVar3 = bVar25, iVar13 = *(int *)(param_5 + iVar17 * 8), iVar13 == DAT_100ff8b0) {
        iVar17 = iVar17 + 1;
        bVar3 = true;
        bVar25 = true;
        if (param_4 == iVar17) goto LAB_100ff68a;
      }
      iVar17 = iVar17 + 1;
      if (iVar13 == DAT_100ff8cc) {
        bVar4 = true;
      }
      bVar25 = bVar3;
    } while (param_4 != iVar17);
  }
LAB_100ff68a:
  piVar23 = *(int **)(param_2 + 0x9c);
  piVar14 = piVar23 + (uint)*(ushort *)(param_2 + 0x98) * 4;
  piVar22 = piVar23;
  if (piVar23 < piVar14) {
    do {
      if ((*piVar22 == DAT_100ff8b4) && (piVar22[3] != 0)) goto LAB_100ff6b6;
      piVar22 = piVar22 + 4;
      piVar19 = piVar23;
    } while (piVar22 < piVar14);
    do {
      while (*piVar19 == DAT_100ff8c4) {
        if (piVar19[3] != 0) goto LAB_100ff6b6;
        piVar19 = piVar19 + 4;
        if (piVar14 <= piVar19) goto LAB_100ff892;
      }
      piVar19 = piVar19 + 4;
    } while (piVar19 < piVar14);
LAB_100ff892:
    do {
      if ((*piVar23 == DAT_100ff8c8) && (piVar23[3] != 0)) goto LAB_100ff6b6;
      piVar23 = piVar23 + 4;
    } while (piVar23 < piVar14);
  }
  iVar17 = (**(code **)(param_2 + 0x204))(param_2,DAT_100ffdb0,param_1,0);
LAB_100ff6cc:
  if ((*(code **)(iVar24 + 0x44) == (code *)0x0) ||
     (iVar13 = (**(code **)(iVar24 + 0x44))(param_2,param_1), iVar13 != 0)) {
    bVar25 = false;
    bVar5 = false;
    goto LAB_100ff6e6;
  }
  if (iVar17 == 0) {
    bVar25 = true;
    bVar5 = false;
    goto LAB_100ff6e6;
  }
  bVar25 = true;
  bVar5 = false;
LAB_100ff6f6:
  iVar17 = (**(code **)(param_2 + 0x204))(param_2,DAT_100ff8bc,param_1,0);
  iVar13 = (**(code **)(param_2 + 0x204))(param_2,DAT_100ff8c0,param_1,0);
  if (iVar17 == 0) {
    bVar5 = false;
  }
  else if (iVar13 == 0) {
    bVar5 = false;
  }
  if (0x3ff0 < (ushort)(*(short *)(param_2 + 0xb2) - 0x10U)) {
    return 8;
  }
  (**(code **)(iVar24 + 0x24))(param_2,param_1);
  (**(code **)(iVar24 + 0x20))(param_2,param_1);
  (**(code **)(iVar24 + 0x30))(param_2,param_1);
  (**(code **)(iVar24 + 0x2c))(param_2,param_1);
  if (!bVar25) {
    uVar11 = (**(code **)(iVar24 + 0x1c))(param_2,param_1,0);
    if (uVar11 == 0) {
      uVar11 = (**(code **)(iVar24 + 0x5c))(param_2,param_1,0);
      if ((uVar11 & 0xff) == 0x8e) {
        return 0x93;
      }
      if (uVar11 != 0) {
        return uVar11;
      }
    }
    else {
      if ((uVar11 & 0xff) != 0x8e) {
        return uVar11;
      }
      if (*(int *)(param_2 + 0x94) != 0x74727565) {
        return 0x8f;
      }
      bVar5 = false;
    }
    uVar11 = (**(code **)(iVar24 + 0x1c))(param_2,param_1,1);
    if ((uVar11 == 0) && (uVar11 = (**(code **)(iVar24 + 0x5c))(param_2,param_1,1), uVar11 == 0)) {
      *(undefined1 *)(param_2 + 0x124) = 1;
    }
    else if ((uVar11 & 0xff) != 0x8e) {
      return uVar11;
    }
    iVar17 = (**(code **)(iVar24 + 0x28))(param_2,param_1);
    if (iVar17 != 0) {
      *(undefined2 *)(param_2 + 0x174) = 0xffff;
    }
  }
  if (*(code **)(iVar24 + 0x60) != (code *)0x0) {
    (**(code **)(iVar24 + 0x60))(param_2,param_1);
  }
  if (*(code **)(iVar24 + 0x70) != (code *)0x0) {
    (**(code **)(iVar24 + 0x70))(param_2,param_1);
    (**(code **)(iVar24 + 0x74))(param_2,param_1);
  }
  (**(code **)(iVar24 + 0x40))(param_2,param_1);
  (**(code **)(iVar24 + 0x3c))(param_2,param_1);
  (**(code **)(iVar24 + 0x38))(param_2,param_1);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x108);
  if ((*(short *)(param_2 + 0x174) == -1) ||
     (-1 < (int)((uint)*(ushort *)(param_2 + 0x1b4) << 0x17))) {
    uVar11 = FUN_100fecc8(param_2,0x15);
    if (uVar11 != 0) {
      return uVar11;
    }
    if (*(int *)(param_2 + 0x14) == 0) {
      if (!bVar3) {
        uVar11 = FUN_100fecc8(param_2,0x10);
        if (uVar11 != 0) {
          return uVar11;
        }
        if (*(int *)(param_2 + 0x14) != 0) goto LAB_100ff8e8;
      }
      uVar11 = FUN_100fecc8(param_2,1,param_2 + 0x14);
      if (uVar11 != 0) {
        return uVar11;
      }
    }
LAB_100ff8e8:
    iVar24 = param_2 + 0x18;
    uVar11 = FUN_100fecc8(param_2,0x16,iVar24);
    if (uVar11 != 0) {
      return uVar11;
    }
    if (*(int *)(param_2 + 0x18) != 0) goto LAB_100ff902;
    if (!bVar4) {
      uVar11 = FUN_100fecc8(param_2,0x11,iVar24);
      if (uVar11 != 0) {
        return uVar11;
      }
      if (*(int *)(param_2 + 0x18) != 0) goto LAB_100ff902;
    }
    uVar11 = FUN_100fecc8(param_2,2,iVar24);
  }
  else {
    if (bVar3) {
LAB_100ff83a:
      uVar11 = FUN_100fecc8(param_2,1,param_2 + 0x14);
      if (uVar11 != 0) {
        return uVar11;
      }
    }
    else {
      uVar11 = FUN_100fecc8(param_2,0x10);
      if (uVar11 != 0) {
        return uVar11;
      }
      if (*(int *)(param_2 + 0x14) == 0) goto LAB_100ff83a;
    }
    if ((!bVar4) && (uVar11 = FUN_100fecc8(param_2,0x11,param_2 + 0x18), uVar11 != 0)) {
      return uVar11;
    }
    if (*(int *)(param_2 + 0x18) != 0) goto LAB_100ff902;
    uVar11 = FUN_100fecc8(param_2,2,param_2 + 0x18);
  }
  if (uVar11 != 0) {
    return uVar11;
  }
LAB_100ff902:
  uVar11 = *(uint *)(param_2 + 8);
  if ((*(byte *)(param_2 + 0x304) - 2 < 2) || (*(int *)(param_2 + 0x330) != 0)) {
    uVar11 = uVar11 | 0x4000;
  }
  if (bVar5) {
    uVar11 = uVar11 | 1;
  }
  if (*(int *)(param_2 + 0x1e8) == 0) {
    uVar11 = uVar11 | 0x18;
  }
  else {
    uVar11 = uVar11 | 0x1c;
  }
  if (*(char *)(param_2 + 0x124) != '\0') {
    uVar11 = uVar11 | 0x20;
  }
  if (*(int *)(param_2 + 0x31c) != 0) {
    uVar11 = uVar11 | 0x40;
  }
  *(uint *)(param_2 + 8) = uVar11;
  if ((bVar5) && (*(short *)(param_2 + 0x174) != -1)) {
    uVar15 = (uint)*(ushort *)(param_2 + 0x1b4);
    if ((int)(uVar15 << 0x16) < 0) {
      uVar26 = 1;
    }
    else {
      uVar26 = uVar15 & 1;
    }
    if ((int)(uVar15 << 0x1a) < 0) {
      uVar26 = uVar26 | 2;
    }
  }
  else {
    if ((*(ushort *)(param_2 + 0xcc) & 1) == 0) {
      uVar15 = 1;
      uVar26 = 0;
    }
    else {
      uVar15 = 3;
      uVar26 = 2;
    }
    if ((*(ushort *)(param_2 + 0xcc) & 2) != 0) {
      uVar26 = uVar15;
    }
  }
  iVar24 = *(int *)(param_2 + 0x1fc);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar26;
  piVar22 = DAT_100ffdbc;
  if ((iVar24 != 0) && (3 < *(uint *)(param_2 + 0x200))) {
    puVar21 = (undefined1 *)(*(uint *)(param_2 + 0x200) + iVar24);
    local_68 = (undefined1 *)(iVar24 + 4);
    local_6c = (uint)CONCAT11(*(undefined1 *)(iVar24 + 2),*(undefined1 *)(iVar24 + 3));
    if (local_6c != 0) {
      do {
        if (puVar21 < local_68 + 8) break;
        local_44 = CONCAT11(*local_68,local_68[1]);
        local_4c[1] = 0;
        local_42 = CONCAT11(local_68[2],local_68[3]);
        uVar11 = (uint)(byte)local_68[5] << 0x10 | (uint)(byte)local_68[4] << 0x18 |
                 (uint)(byte)local_68[7] | (uint)(byte)local_68[6] << 8;
        if ((uVar11 != 0) && (uVar11 <= *(int *)(param_2 + 0x200) - 2U)) {
          puVar20 = (undefined1 *)(uVar11 + iVar24);
          iVar17 = *piVar22;
          piVar14 = piVar22;
          while (iVar17 != 0) {
            iVar17 = *piVar14;
            if (*(uint *)(iVar17 + 0x28) == (uint)CONCAT11(*puVar20,puVar20[1])) {
              local_4c[0] = param_2;
              FUN_100f8ff0(local_40,puVar20,puVar21,0);
              local_2c = (uint)*(ushort *)(param_2 + 0x108);
              uVar12 = (**(code **)(iVar17 + 0x2c))(puVar20,local_40);
              if ((local_30 == 0) &&
                 (iVar17 = FUN_100fb334(iVar17,puVar20,local_4c,&local_50), iVar17 == 0)) {
                *(undefined4 *)(local_50 + 0x14) = uVar12;
              }
              break;
            }
            piVar14 = piVar14 + 1;
            iVar17 = *piVar14;
          }
        }
        local_6c = local_6c - 1;
        local_68 = local_68 + 8;
      } while (local_6c != 0);
      uVar11 = *(uint *)(param_2 + 8);
    }
  }
  uVar10 = DAT_100ffdd4;
  uVar9 = DAT_100ffdd0;
  uVar8 = DAT_100ffdcc;
  uVar7 = DAT_100ffdc8;
  uVar6 = DAT_100ffdc4;
  uVar12 = DAT_100ffdc0;
  if (0 < *(int *)(param_2 + 0x24)) {
    piVar22 = (int *)(*(int *)(param_2 + 0x28) + -4);
    piVar14 = piVar22 + *(int *)(param_2 + 0x24);
    do {
      while( true ) {
        piVar22 = piVar22 + 1;
        iVar24 = *piVar22;
        uVar1 = *(ushort *)(iVar24 + 8);
        sVar18 = *(short *)(iVar24 + 10);
        if ((uVar1 & 0xfffd) != 0) break;
LAB_100ffb38:
        *(undefined4 *)(iVar24 + 4) = uVar12;
        if (piVar14 == piVar22) goto LAB_100ffb40;
      }
      if (uVar1 == 1) {
        uVar16 = uVar10;
        if (sVar18 != 0) {
          uVar16 = 0;
        }
      }
      else if (uVar1 == 3) {
        uVar16 = uVar6;
        if (sVar18 != 0) {
          if ((sVar18 == 10) || (sVar18 == 1)) goto LAB_100ffb38;
          uVar16 = uVar7;
          if (((sVar18 != 2) &&
              (((uVar16 = uVar8, sVar18 != 3 && (uVar16 = DAT_100ffdb8, sVar18 != 4)) &&
               (uVar16 = DAT_100ffdb4, sVar18 != 5)))) && (uVar16 = uVar9, sVar18 != 6)) {
            uVar16 = 0;
          }
        }
      }
      else {
        uVar16 = 0;
      }
      *(undefined4 *)(iVar24 + 4) = uVar16;
    } while (piVar14 != piVar22);
  }
LAB_100ffb40:
  if ((uVar11 & 3) == 0) {
    *(uint *)(param_2 + 8) = uVar11 | 1;
  }
  else if ((uVar11 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 0x38) = (int)*(short *)(param_2 + 0xc6);
  *(int *)(param_2 + 0x34) = (int)*(short *)(param_2 + 0xc4);
  *(int *)(param_2 + 0x3c) = (int)*(short *)(param_2 + 200);
  *(int *)(param_2 + 0x40) = (int)*(short *)(param_2 + 0xca);
  *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(param_2 + 0xb2);
  if (*(short *)(param_2 + 0x174) == -1) {
    sVar18 = (*(short *)(param_2 + 0xdc) + *(short *)(param_2 + 0xe0)) - *(short *)(param_2 + 0xde);
    *(short *)(param_2 + 0x4a) = sVar18;
    *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(param_2 + 0xdc);
  }
  else if ((int)((uint)*(ushort *)(param_2 + 0x1b4) << 0x18) < 0) {
    sVar18 = (*(short *)(param_2 + 0x1ba) + *(short *)(param_2 + 0x1be)) -
             *(short *)(param_2 + 0x1bc);
    *(short *)(param_2 + 0x4a) = sVar18;
    *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(param_2 + 0x1ba);
  }
  else {
    sVar18 = (*(short *)(param_2 + 0xe0) + *(short *)(param_2 + 0xdc)) - *(short *)(param_2 + 0xde);
    *(short *)(param_2 + 0x4a) = sVar18;
    *(undefined4 *)(param_2 + 0x46) = *(undefined4 *)(param_2 + 0xdc);
    if (*(short *)(param_2 + 0xdc) == 0 && *(short *)(param_2 + 0xde) == 0) {
      sVar18 = *(short *)(param_2 + 0x1ba);
      sVar2 = *(short *)(param_2 + 0x1bc);
      if ((sVar18 == 0) && (sVar2 == 0)) {
        *(short *)(param_2 + 0x46) = *(short *)(param_2 + 0x1c0);
        sVar18 = *(short *)(param_2 + 0x1c0) + *(short *)(param_2 + 0x1c2);
        *(short *)(param_2 + 0x4a) = sVar18;
        *(short *)(param_2 + 0x48) = -*(short *)(param_2 + 0x1c2);
      }
      else {
        *(short *)(param_2 + 0x46) = sVar18;
        sVar18 = (sVar18 + *(short *)(param_2 + 0x1be)) - sVar2;
        *(short *)(param_2 + 0x48) = sVar2;
        *(short *)(param_2 + 0x4a) = sVar18;
      }
    }
  }
  *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(param_2 + 0xe2);
  if (*(char *)(param_2 + 0x124) != '\0') {
    sVar18 = *(short *)(param_2 + 0x132);
  }
  *(short *)(param_2 + 0x4e) = sVar18;
  *(short *)(param_2 + 0x52) = *(short *)(param_2 + 0x1e6);
  *(short *)(param_2 + 0x50) = *(short *)(param_2 + 0x1e4) - *(short *)(param_2 + 0x1e6) / 2;
  return 0;
LAB_100ff6b6:
  iVar13 = (**(code **)(param_2 + 0x204))(param_2,DAT_100ff8b8,param_1,0);
  iVar17 = 0;
  if (iVar13 == 0) goto LAB_100ff6cc;
  bVar25 = false;
  bVar5 = true;
LAB_100ff6e6:
  uVar11 = (**(code **)(iVar24 + 0x18))(param_2,param_1);
  if (uVar11 != 0) {
    return uVar11;
  }
  goto LAB_100ff6f6;
}

