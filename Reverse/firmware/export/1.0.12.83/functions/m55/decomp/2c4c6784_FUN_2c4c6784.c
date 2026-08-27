/* FUN_2c4c6784 @ 0x2c4c6784 */

void FUN_2c4c6784(uint param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 unaff_lr;
  float fVar26;
  undefined4 *local_2c;
  
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) != 0) {
      if (*DAT_2c4c6a60 == 0) goto LAB_2c4c67aa;
      cVar1 = *(char *)(DAT_2c4c6a74 + 0x3fb);
      cVar2 = *(char *)(DAT_2c4c6a74 + 0x54f);
      goto LAB_2c4c6a50;
    }
LAB_2c4c67c4:
    uVar16 = 0;
  }
  else {
    if (*DAT_2c4c6a5c == 0) {
LAB_2c4c67aa:
      FUN_2c6741e8(0x42,DAT_2c4c6a68,DAT_2c4c6a64,param_1);
      return;
    }
    if ((param_1 & 2) == 0) {
      FUN_2c4b674c(1,(int)*(char *)(DAT_2c4c6df8 + 0x153),(int)*(char *)(DAT_2c4c6df8 + 0x2a7));
      goto LAB_2c4c67c4;
    }
    if (*DAT_2c4c6a60 == 0) goto LAB_2c4c67aa;
    cVar1 = *(char *)(DAT_2c4c6df8 + 0x3fb);
    cVar2 = *(char *)(DAT_2c4c6df8 + 0x54f);
    FUN_2c4b674c(1,(int)*(char *)(DAT_2c4c6df8 + 0x153),(int)*(char *)(DAT_2c4c6df8 + 0x2a7));
LAB_2c4c6a50:
    uVar16 = param_1 & 2;
    FUN_2c4b674c(2,(int)cVar1,(int)cVar2);
  }
  iVar18 = DAT_2c4c6a74;
  piVar4 = DAT_2c4c6a6c;
  if (*DAT_2c4c6a6c << 0x1f < 0) {
    if (*(short *)(DAT_2c4c6a74 + 0x140) == 0) {
      if (*DAT_2c4c6a7c == 1) {
        *(uint *)(DAT_2c4c6a8c + 0x250) = *(uint *)(DAT_2c4c6a8c + 0x250) | 0x40;
      }
      else {
        *(uint *)(DAT_2c4c6a8c + 0x248) = *(uint *)(DAT_2c4c6a8c + 0x248) | 0x40;
      }
LAB_2c4c69ae:
      sVar15 = *(short *)(iVar18 + 1000);
      uVar13 = DAT_2c4c6a78;
    }
    else {
      uVar13 = DAT_2c4c6de0;
      if (*(float *)(DAT_2c4c6a74 + 0x144) <= 0.0) {
        fVar26 = (float)FUN_2c49ab84();
        uVar13 = (int)(fVar26 * DAT_2c4c7130) & 0x7fffff;
      }
      uVar6 = DAT_2c4c6dec;
      iVar17 = DAT_2c4c6de8;
      if (*DAT_2c4c6de4 == 1) {
        *(uint *)(DAT_2c4c6de8 + 0x25c) = *(uint *)(DAT_2c4c6de8 + 0x25c) & 0xffbfffff;
        *(uint *)(iVar17 + 0x324) = uVar6 & *(uint *)(iVar17 + 0x324) | uVar13;
        FUN_2c673b08();
        uVar14 = DAT_2c4c6df0;
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x400000;
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x148),uVar14);
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x14c),DAT_2c4c6df4);
        *(uint *)(iVar17 + 0x250) = *(uint *)(iVar17 + 0x250) & 0xffffffbf;
        goto LAB_2c4c69ae;
      }
      *(uint *)(DAT_2c4c6de8 + 0x25c) = *(uint *)(DAT_2c4c6de8 + 0x25c) & 0xffefffff;
      *(uint *)(iVar17 + 0x31c) = uVar6 & *(uint *)(iVar17 + 0x31c) | uVar13;
      FUN_2c673b08(1);
      uVar14 = DAT_2c4c6df0;
      *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x100000;
      FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x148),uVar14);
      FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x14c),DAT_2c4c6df4);
      *(uint *)(iVar17 + 0x248) = *(uint *)(iVar17 + 0x248) & 0xffffffbf;
      sVar15 = *(short *)(iVar18 + 1000);
      uVar13 = DAT_2c4c6a78;
    }
    DAT_2c4c6a78 = uVar13;
    if (sVar15 == 0) {
      *(uint *)(DAT_2c4c6de8 + 0x680) = *(uint *)(DAT_2c4c6de8 + 0x680) | 0x40;
    }
    else {
      if (*(float *)(iVar18 + 0x3ec) <= 0.0) {
        fVar26 = (float)FUN_2c49ab84();
        uVar13 = (int)(fVar26 * DAT_2c4c7130) & 0x7fffff;
      }
      iVar17 = DAT_2c4c6a8c;
      uVar6 = DAT_2c4c6a80;
      *(uint *)(DAT_2c4c6a8c + 0x25c) = *(uint *)(DAT_2c4c6a8c + 0x25c) & 0xfeffffff;
      *(uint *)(iVar17 + 0x32c) = uVar6 & *(uint *)(iVar17 + 0x32c) | uVar13;
      FUN_2c673b08(1);
      uVar14 = DAT_2c4c6ab0;
      *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x1000000;
      FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x3f0),uVar14);
      FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x3f4),DAT_2c4c6ab4);
      *(uint *)(iVar17 + 0x680) = *(uint *)(iVar17 + 0x680) & 0xffffffbf;
    }
  }
  iVar18 = DAT_2c4c6a74;
  piVar5 = DAT_2c4c6a70;
  if ((*DAT_2c4c6a70 == 1) || (*piVar4 << 0x1e < 0)) {
    if (*(short *)(DAT_2c4c6a74 + 0x294) == 0) {
      if (*DAT_2c4c6a7c != 1) {
        *(uint *)(DAT_2c4c6a8c + 0x250) = *(uint *)(DAT_2c4c6a8c + 0x250) | 0x40;
        iVar18 = *piVar4;
        uVar13 = DAT_2c4c6a78;
        goto joined_r0x2c4c6a36;
      }
      *(uint *)(DAT_2c4c6a8c + 0x248) = *(uint *)(DAT_2c4c6a8c + 0x248) | 0x40;
    }
    else {
      uVar13 = DAT_2c4c6a78;
      if (*(float *)(DAT_2c4c6a74 + 0x298) <= 0.0) {
        fVar26 = (float)FUN_2c49ab84();
        uVar13 = (int)(fVar26 * DAT_2c4c6dfc) & 0x7fffff;
      }
      iVar17 = DAT_2c4c6a8c;
      uVar6 = DAT_2c4c6a80;
      if (*DAT_2c4c6a7c == 1) {
        *(uint *)(DAT_2c4c6a8c + 0x25c) = *(uint *)(DAT_2c4c6a8c + 0x25c) & 0xffefffff;
        *(uint *)(iVar17 + 0x31c) = uVar6 & *(uint *)(iVar17 + 0x31c) | uVar13;
        FUN_2c673b08();
        piVar7 = DAT_2c4c6e08;
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x100000;
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x29c),piVar7);
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x2a0),DAT_2c4c6e10);
        *(uint *)(iVar17 + 0x248) = *(uint *)(iVar17 + 0x248) & 0xffffffbf;
      }
      else {
        *(uint *)(DAT_2c4c6a8c + 0x25c) = *(uint *)(DAT_2c4c6a8c + 0x25c) & 0xffbfffff;
        *(uint *)(iVar17 + 0x324) = uVar6 & *(uint *)(iVar17 + 0x324) | uVar13;
        FUN_2c673b08(1);
        uVar14 = DAT_2c4c6a84;
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x400000;
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x29c),uVar14);
        FUN_2c4c5f9c(*(undefined4 *)(iVar18 + 0x2a0),DAT_2c4c6a88);
        *(uint *)(iVar17 + 0x250) = *(uint *)(iVar17 + 0x250) & 0xffffffbf;
      }
    }
  }
  iVar18 = *piVar4;
  uVar13 = DAT_2c4c6a78;
joined_r0x2c4c6a36:
  DAT_2c4c6a78 = uVar13;
  if (iVar18 << 0x1e < 0) {
    if (*(short *)(DAT_2c4c6a74 + 0x53c) == 0) {
      *(uint *)(DAT_2c4c6de8 + 0x688) = *(uint *)(DAT_2c4c6de8 + 0x688) | 0x40;
    }
    else {
      if (*(float *)(DAT_2c4c6a74 + 0x540) <= 0.0) {
        fVar26 = (float)FUN_2c49ab84();
        uVar13 = (int)(fVar26 * DAT_2c4c7130) & 0x7fffff;
      }
      puVar24 = DAT_2c4c6ab8;
      iVar18 = DAT_2c4c6a8c;
      uVar6 = DAT_2c4c6a80;
      *(uint *)(DAT_2c4c6a8c + 0x25c) = *(uint *)(DAT_2c4c6a8c + 0x25c) & 0xfbffffff;
      *(uint *)(iVar18 + 0x334) = uVar6 & *(uint *)(iVar18 + 0x334) | uVar13;
      FUN_2c673b08(1);
      uVar14 = DAT_2c4c6a90;
      *(uint *)(iVar18 + 0x25c) = *(uint *)(iVar18 + 0x25c) | 0x4000000;
      FUN_2c4c5f9c(*puVar24,uVar14);
      FUN_2c4c5f9c(puVar24[1],DAT_2c4c6a94);
      *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) & 0xffffffbf;
    }
  }
  if ((param_1 & 1) == 0) {
    if (uVar16 == 0) {
      return;
    }
    FUN_2c6741e8(0x41,DAT_2c4c6e28,DAT_2c4c6e24);
    puVar24 = DAT_2c4c7188;
    if (*piVar4 << 0x1f < 0) {
      FUN_2c4c5efc(DAT_2c4c7188,DAT_2c4c7154);
      puVar25 = DAT_2c4c7ae0;
      puVar19 = DAT_2c4c718c;
      sVar15 = *(short *)(puVar24 + 1);
      if (sVar15 == 1) {
        *DAT_2c4c7ae0 = *puVar24;
      }
      else {
        *DAT_2c4c718c = 0x200;
        puVar25 = puVar19;
      }
      iVar17 = DAT_2c4c747c;
      iVar18 = DAT_2c4c713c;
      piVar5 = DAT_2c4c7138;
      if (*DAT_2c4c7158 == 0) {
        *DAT_2c4c7138 = 0;
        iVar11 = DAT_2c4c717c;
        iVar17 = DAT_2c4c7178;
        if (0x28 < *(uint *)(iVar18 + 0x2c4)) {
          iVar21 = 0;
          do {
            uVar16 = iVar17 * iVar21 + iVar11;
            if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7124) {
              FUN_2c6741e8(0x42,DAT_2c4c715c,DAT_2c4c7128,*(undefined4 *)(iVar18 + 0x2c4));
              iVar21 = *piVar5;
            }
            iVar21 = iVar21 + 1;
            *piVar5 = iVar21;
          } while (0x28 < *(uint *)(iVar18 + 0x2c4));
          sVar15 = *(short *)(puVar24 + 1);
        }
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x680) = *(uint *)(DAT_2c4c747c + 0x680) & 0xfffffffb;
        if (sVar15 == 0) {
          *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) & 0xfffffff7;
        }
        else {
          *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) | 8;
        }
        uVar9 = DAT_2c4c7488;
        uVar14 = DAT_2c4c7484;
        puVar19 = DAT_2c4c7480;
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x680) =
             (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
             *(uint *)(DAT_2c4c747c + 0x680) & 0xfffff07f;
        FUN_2c4c6710(uVar9,uVar14);
        puVar24 = DAT_2c4c7490;
        iVar17 = DAT_2c4c748c;
        *(undefined4 *)(DAT_2c4c748c + 0x18) = -puVar19[4];
        *(undefined4 *)(iVar17 + 0x1c) = -puVar19[5];
        iVar11 = puVar24[4];
        iVar21 = puVar24[5];
        *(undefined4 *)(iVar17 + 0x28) = *puVar19;
        *(undefined4 *)(iVar17 + 0x20) = puVar19[1];
        *(undefined4 *)(iVar17 + 0x24) = puVar19[2];
        *(int *)(iVar17 + 0x2c) = -iVar11;
        *(int *)(iVar17 + 0x30) = -iVar21;
        uVar14 = puVar24[1];
        *(undefined4 *)(iVar17 + 0x3c) = *puVar24;
        *(undefined4 *)(iVar17 + 0x34) = uVar14;
        *(undefined4 *)(iVar17 + 0x38) = puVar24[2];
        puVar24 = DAT_2c4c7494;
        *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) | 4;
        *puVar24 = 1;
      }
      else {
        iVar21 = 0;
        *DAT_2c4c7138 = 0;
        iVar11 = DAT_2c4c74c8;
        iVar18 = DAT_2c4c74c4;
        if (0x28 < *(uint *)(iVar17 + 0x2c0)) {
          do {
            uVar16 = iVar18 * iVar21 + iVar11;
            if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c77b4) {
              FUN_2c6741e8(0x42,DAT_2c4c77bc,DAT_2c4c77b8,*(undefined4 *)(iVar17 + 0x2c0));
              iVar21 = *piVar5;
            }
            iVar21 = iVar21 + 1;
            *piVar5 = iVar21;
          } while (0x28 < *(uint *)(iVar17 + 0x2c0));
          sVar15 = *(short *)(puVar24 + 1);
        }
        iVar18 = DAT_2c4c77c0;
        *(uint *)(DAT_2c4c77c0 + 0x680) = *(uint *)(DAT_2c4c77c0 + 0x680) & 0xfffffffd;
        if (sVar15 == 0) {
          *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) & 0xfffffff7;
        }
        else {
          *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) | 8;
        }
        uVar9 = DAT_2c4c77cc;
        uVar14 = DAT_2c4c77c8;
        puVar19 = DAT_2c4c77c4;
        iVar18 = DAT_2c4c77c0;
        *(uint *)(DAT_2c4c77c0 + 0x680) =
             (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
             *(uint *)(DAT_2c4c77c0 + 0x680) & 0xfffff07f;
        FUN_2c4c6710(uVar9,uVar14);
        puVar24 = DAT_2c4c77d4;
        iVar17 = DAT_2c4c77d0;
        *(undefined4 *)(DAT_2c4c77d0 + 0x18) = -puVar19[4];
        *(undefined4 *)(iVar17 + 0x1c) = -puVar19[5];
        iVar11 = puVar24[4];
        iVar21 = puVar24[5];
        *(undefined4 *)(iVar17 + 0x28) = *puVar19;
        *(undefined4 *)(iVar17 + 0x20) = puVar19[1];
        *(undefined4 *)(iVar17 + 0x24) = puVar19[2];
        *(int *)(iVar17 + 0x2c) = -iVar11;
        *(int *)(iVar17 + 0x30) = -iVar21;
        uVar14 = puVar24[1];
        *(undefined4 *)(iVar17 + 0x3c) = *puVar24;
        *(undefined4 *)(iVar17 + 0x34) = uVar14;
        *(undefined4 *)(iVar17 + 0x38) = puVar24[2];
        puVar24 = DAT_2c4c77d8;
        *(uint *)(iVar18 + 0x680) = *(uint *)(iVar18 + 0x680) | 2;
        *puVar24 = 0;
      }
      *DAT_2c4c7498 = *puVar25;
      puVar24 = DAT_2c4c749c;
      iVar18 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar18 = getBasePriority();
      }
      if (iVar18 != 0x40) {
        *DAT_2c4c749c = 0x2c4c7266;
        puVar24[1] = unaff_lr;
      }
      iVar17 = DAT_2c4c747c;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x40);
      }
      *(uint *)(DAT_2c4c747c + 0x25c) = *(uint *)(DAT_2c4c747c + 0x25c) & 0xfffffeff;
      FUN_2c673b08(1);
      *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x100;
      if (iVar18 == 0) {
        *DAT_2c4c749c = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar18);
      }
      *puVar25 = 0x200;
    }
    puVar24 = DAT_2c4c7148;
    if (*piVar4 << 0x1e < 0) {
      FUN_2c4c5efc(DAT_2c4c7148,DAT_2c4c714c);
      puVar25 = DAT_2c4c7ae4;
      puVar19 = DAT_2c4c7180;
      sVar15 = *(short *)(puVar24 + 1);
      if (sVar15 == 1) {
        *DAT_2c4c7ae4 = *puVar24;
      }
      else {
        *DAT_2c4c7180 = 0x200;
        puVar25 = puVar19;
      }
      iVar17 = DAT_2c4c747c;
      piVar5 = DAT_2c4c7184;
      iVar18 = DAT_2c4c713c;
      piVar4 = DAT_2c4c7138;
      if (*DAT_2c4c7184 == 0) {
        *DAT_2c4c7138 = 0;
        iVar11 = DAT_2c4c717c;
        iVar17 = DAT_2c4c7178;
        if (0x28 < *(uint *)(iVar18 + 0x2d4)) {
          iVar21 = 0;
          do {
            uVar16 = iVar17 * iVar21 + iVar11;
            if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7124) {
              FUN_2c6741e8(0x42,DAT_2c4c7150,DAT_2c4c7128,*(undefined4 *)(iVar18 + 0x2d4));
              iVar21 = *piVar4;
            }
            iVar21 = iVar21 + 1;
            *piVar4 = iVar21;
          } while (0x28 < *(uint *)(iVar18 + 0x2d4));
          sVar15 = *(short *)(puVar24 + 1);
        }
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x688) = *(uint *)(DAT_2c4c747c + 0x688) & 0xfffffffb;
        if (sVar15 == 0) {
          *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) & 0xfffffff7;
        }
        else {
          *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) | 8;
        }
        uVar9 = DAT_2c4c74a4;
        uVar14 = DAT_2c4c74a0;
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x688) =
             (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
             *(uint *)(DAT_2c4c747c + 0x688) & 0xfffff07f;
        FUN_2c4c6710(uVar9,uVar14);
        puVar19 = DAT_2c4c74b0;
        iVar17 = DAT_2c4c74ac;
        puVar24 = DAT_2c4c74a8;
        *(undefined4 *)(DAT_2c4c74ac + 0x18) = -DAT_2c4c74a8[4];
        *(undefined4 *)(iVar17 + 0x1c) = -puVar24[5];
        iVar11 = puVar19[4];
        iVar21 = puVar19[5];
        *(undefined4 *)(iVar17 + 0x28) = *puVar24;
        *(undefined4 *)(iVar17 + 0x20) = puVar24[1];
        *(undefined4 *)(iVar17 + 0x24) = puVar24[2];
        *(int *)(iVar17 + 0x2c) = -iVar11;
        *(int *)(iVar17 + 0x30) = -iVar21;
        uVar14 = puVar19[1];
        *(undefined4 *)(iVar17 + 0x3c) = *puVar19;
        *(undefined4 *)(iVar17 + 0x34) = uVar14;
        *(undefined4 *)(iVar17 + 0x38) = puVar19[2];
        *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) | 4;
        *piVar5 = 1;
      }
      else {
        iVar21 = 0;
        *DAT_2c4c7138 = 0;
        iVar11 = DAT_2c4c74c8;
        iVar18 = DAT_2c4c74c4;
        if (0x28 < *(uint *)(iVar17 + 0x2d0)) {
          do {
            uVar16 = iVar18 * iVar21 + iVar11;
            if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7470) {
              FUN_2c6741e8(0x42,DAT_2c4c74b8,DAT_2c4c7474,*(undefined4 *)(iVar17 + 0x2d0));
              iVar21 = *piVar4;
            }
            iVar21 = iVar21 + 1;
            *piVar4 = iVar21;
          } while (0x28 < *(uint *)(iVar17 + 0x2d0));
          sVar15 = *(short *)(puVar24 + 1);
        }
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x688) = *(uint *)(DAT_2c4c747c + 0x688) & 0xfffffffd;
        if (sVar15 == 0) {
          *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) & 0xfffffff7;
        }
        else {
          *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) | 8;
        }
        uVar9 = DAT_2c4c74bc;
        uVar14 = DAT_2c4c74a0;
        iVar18 = DAT_2c4c747c;
        *(uint *)(DAT_2c4c747c + 0x688) =
             (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
             *(uint *)(DAT_2c4c747c + 0x688) & 0xfffff07f;
        FUN_2c4c6710(uVar9,uVar14);
        iVar17 = DAT_2c4c74c0;
        puVar19 = DAT_2c4c74b0;
        puVar24 = DAT_2c4c74a8;
        *(undefined4 *)(DAT_2c4c74c0 + 0x18) = -DAT_2c4c74a8[4];
        *(undefined4 *)(iVar17 + 0x1c) = -puVar24[5];
        iVar11 = puVar19[4];
        iVar21 = puVar19[5];
        *(undefined4 *)(iVar17 + 0x28) = *puVar24;
        *(undefined4 *)(iVar17 + 0x20) = puVar24[1];
        *(undefined4 *)(iVar17 + 0x24) = puVar24[2];
        *(int *)(iVar17 + 0x2c) = -iVar11;
        *(int *)(iVar17 + 0x30) = -iVar21;
        uVar14 = puVar19[1];
        *(undefined4 *)(iVar17 + 0x3c) = *puVar19;
        *(undefined4 *)(iVar17 + 0x34) = uVar14;
        *(undefined4 *)(iVar17 + 0x38) = puVar19[2];
        *(uint *)(iVar18 + 0x688) = *(uint *)(iVar18 + 0x688) | 2;
        *piVar5 = 0;
      }
      *DAT_2c4c74b4 = *puVar25;
      puVar24 = DAT_2c4c749c;
      iVar18 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar18 = getBasePriority();
      }
      if (iVar18 != 0x40) {
        *DAT_2c4c749c = 0x2c4c7346;
        puVar24[1] = unaff_lr;
      }
      iVar17 = DAT_2c4c747c;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x40);
      }
      *(uint *)(DAT_2c4c747c + 0x25c) = *(uint *)(DAT_2c4c747c + 0x25c) & 0xffffefff;
      FUN_2c673b08(1);
      *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x1000;
      if (iVar18 == 0) {
        *DAT_2c4c749c = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar18);
      }
      *puVar25 = 0x200;
    }
    puVar24 = DAT_2c4c6e2c;
    FUN_2c4c26a8(*DAT_2c4c6e2c);
    puVar19 = DAT_2c4c6e30;
  }
  else {
    FUN_2c6741e8(0x41,DAT_2c4c6a98,DAT_2c4c6a64);
    puVar24 = DAT_2c4c6e40;
    if (*piVar4 << 0x1f < 0) {
      FUN_2c4c5efc(DAT_2c4c6e40,DAT_2c4c6df8);
      sVar15 = *(short *)(puVar24 + 1);
      if (sVar15 == 1) {
        local_2c = DAT_2c4c7144;
        *DAT_2c4c7144 = *puVar24;
      }
      else {
        local_2c = DAT_2c4c6e34;
        *DAT_2c4c6e34 = 0x200;
      }
      iVar17 = DAT_2c4c713c;
      piVar8 = DAT_2c4c7138;
      piVar22 = DAT_2c4c7134;
      piVar23 = DAT_2c4c6e3c;
      iVar18 = DAT_2c4c6de8;
      piVar7 = DAT_2c4c6de4;
      if (*DAT_2c4c6e38 == 0) {
        iVar12 = *DAT_2c4c6de4;
        *DAT_2c4c6e3c = 0;
        iVar10 = DAT_2c4c7adc;
        iVar21 = DAT_2c4c7ad8;
        iVar11 = DAT_2c4c6e48;
        iVar17 = DAT_2c4c6e44;
        if (iVar12 == 1) {
          if (0x28 < *(uint *)(iVar18 + 0x2b4)) {
            iVar17 = 0;
            do {
              uVar16 = iVar21 * iVar17 + iVar10;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7ac4) {
                FUN_2c6741e8(0x42,DAT_2c4c7ad0,DAT_2c4c7ac8,*(undefined4 *)(iVar18 + 0x2b4));
                iVar17 = *piVar23;
              }
              iVar17 = iVar17 + 1;
              *piVar23 = iVar17;
            } while (0x28 < *(uint *)(iVar18 + 0x2b4));
          }
          iVar18 = DAT_2c4c7ac0;
          sVar15 = *(short *)(puVar24 + 1);
          *(uint *)(DAT_2c4c7ac0 + 0x250) = *(uint *)(DAT_2c4c7ac0 + 0x250) & 0xfffffffb;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) | 8;
          }
          *(uint *)(DAT_2c4c7ac0 + 0x250) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c7ac0 + 0x250) & 0xfffff07f;
        }
        else {
          if (0x28 < *(uint *)(iVar18 + 0x2a4)) {
            iVar21 = 0;
            do {
              uVar16 = iVar17 * iVar21 + iVar11;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7124) {
                FUN_2c6741e8(0x42,DAT_2c4c712c,DAT_2c4c7128,*(undefined4 *)(iVar18 + 0x2a4));
                iVar21 = *piVar23;
              }
              iVar21 = iVar21 + 1;
              *piVar23 = iVar21;
            } while (0x28 < *(uint *)(iVar18 + 0x2a4));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c77c0;
          *(uint *)(DAT_2c4c77c0 + 0x248) = *(uint *)(DAT_2c4c77c0 + 0x248) & 0xfffffffb;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) | 8;
          }
          *(uint *)(DAT_2c4c77c0 + 0x248) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c77c0 + 0x248) & 0xfffff07f;
        }
        FUN_2c4c6710(*DAT_2c4c77dc,DAT_2c4c77e0);
        piVar23 = DAT_2c4c77e4;
        iVar17 = *piVar7;
        piVar22 = (int *)*DAT_2c4c77e8;
        *piVar22 = -DAT_2c4c77e4[4];
        piVar22[1] = -piVar23[5];
        piVar22[4] = *piVar23;
        piVar22[2] = piVar23[1];
        piVar22[3] = piVar23[2];
        piVar7 = DAT_2c4c77ec;
        piVar22[5] = -DAT_2c4c77ec[4];
        piVar22[6] = -piVar7[5];
        piVar22[9] = *piVar7;
        iVar18 = piVar7[2];
        piVar22[7] = piVar7[1];
        piVar22[8] = iVar18;
        if (iVar17 == 1) {
          *(uint *)(DAT_2c4c77c0 + 0x250) = *(uint *)(DAT_2c4c77c0 + 0x250) | 4;
        }
        else {
          *(uint *)(DAT_2c4c77c0 + 0x248) = *(uint *)(DAT_2c4c77c0 + 0x248) | 4;
        }
        *DAT_2c4c77f0 = 1;
      }
      else {
        iVar18 = 0;
        iVar20 = *DAT_2c4c7134;
        *DAT_2c4c7138 = 0;
        iVar12 = DAT_2c4c7adc;
        iVar10 = DAT_2c4c7ad8;
        iVar21 = DAT_2c4c717c;
        iVar11 = DAT_2c4c7178;
        if (iVar20 == 1) {
          uVar16 = *(uint *)(iVar17 + 0x2b0);
          iVar11 = DAT_2c4c7ac0;
          while (DAT_2c4c7ac0 = iVar11, 0x28 < uVar16) {
            uVar16 = iVar10 * iVar18 + iVar12;
            if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7ac4) {
              FUN_2c6741e8(0x42,DAT_2c4c7ad4,DAT_2c4c7ac8,*(undefined4 *)(iVar17 + 0x2b0));
              iVar18 = *piVar8;
            }
            iVar18 = iVar18 + 1;
            *piVar8 = iVar18;
            iVar11 = DAT_2c4c7ac0;
            uVar16 = *(uint *)(iVar17 + 0x2b0);
          }
          sVar15 = *(short *)(puVar24 + 1);
          *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) & 0xfffffffd;
          if (sVar15 == 0) {
            *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar11 + 0x250) = *(uint *)(iVar11 + 0x250) | 8;
          }
          *(uint *)(DAT_2c4c7ac0 + 0x250) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c7ac0 + 0x250) & 0xfffff07f;
        }
        else {
          if (0x28 < *(uint *)(iVar17 + 0x2a0)) {
            do {
              uVar16 = iVar11 * iVar18 + iVar21;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7470) {
                FUN_2c6741e8(0x42,DAT_2c4c7478,DAT_2c4c7474,*(undefined4 *)(iVar17 + 0x2a0));
                iVar18 = *piVar8;
              }
              iVar18 = iVar18 + 1;
              *piVar8 = iVar18;
            } while (0x28 < *(uint *)(iVar17 + 0x2a0));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c77c0;
          *(uint *)(DAT_2c4c77c0 + 0x248) = *(uint *)(DAT_2c4c77c0 + 0x248) & 0xfffffffd;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) | 8;
          }
          *(uint *)(DAT_2c4c77c0 + 0x248) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c77c0 + 0x248) & 0xfffff07f;
        }
        FUN_2c4c6710(*DAT_2c4c77fc,DAT_2c4c77e0);
        piVar7 = DAT_2c4c77e4;
        iVar17 = *piVar22;
        piVar23 = (int *)*DAT_2c4c7800;
        *piVar23 = -DAT_2c4c77e4[4];
        piVar23[1] = -piVar7[5];
        piVar23[4] = *piVar7;
        piVar23[2] = piVar7[1];
        piVar23[3] = piVar7[2];
        piVar7 = DAT_2c4c77ec;
        piVar23[5] = -DAT_2c4c77ec[4];
        piVar23[6] = -piVar7[5];
        piVar23[9] = *piVar7;
        iVar18 = piVar7[2];
        piVar23[7] = piVar7[1];
        piVar23[8] = iVar18;
        if (iVar17 == 1) {
          *(uint *)(DAT_2c4c77c0 + 0x250) = *(uint *)(DAT_2c4c77c0 + 0x250) | 2;
        }
        else {
          *(uint *)(DAT_2c4c77c0 + 0x248) = *(uint *)(DAT_2c4c77c0 + 0x248) | 2;
        }
        *DAT_2c4c77f0 = 0;
      }
      *DAT_2c4c77f4 = *local_2c;
      puVar24 = DAT_2c4c77f8;
      if (iVar17 == 1) {
        iVar18 = 0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          iVar18 = getBasePriority();
        }
        if (iVar18 != 0x40) {
          *DAT_2c4c77f8 = 0x2c4c769e;
          puVar24[1] = unaff_lr;
        }
        iVar17 = DAT_2c4c77c0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(0x40);
        }
        *(uint *)(DAT_2c4c77c0 + 0x25c) = *(uint *)(DAT_2c4c77c0 + 0x25c) & 0xffffffef;
        FUN_2c673b08(1);
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x10;
      }
      else {
        iVar18 = 0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          iVar18 = getBasePriority();
        }
        if (iVar18 != 0x40) {
          *DAT_2c4c77f8 = 0x2c4c7648;
          puVar24[1] = unaff_lr;
        }
        iVar17 = DAT_2c4c77c0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(0x40);
        }
        *(uint *)(DAT_2c4c77c0 + 0x25c) = *(uint *)(DAT_2c4c77c0 + 0x25c) & 0xfffffffe;
        FUN_2c673b08(1);
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 1;
      }
      if (iVar18 == 0) {
        *DAT_2c4c77f8 = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar18);
      }
      *local_2c = 0x200;
    }
    puVar24 = DAT_2c4c6a9c;
    if ((*piVar5 == 1) || (*piVar4 << 0x1e < 0)) {
      FUN_2c4c5efc(DAT_2c4c6a9c,DAT_2c4c6aa0);
      puVar25 = DAT_2c4c7190;
      puVar19 = DAT_2c4c6abc;
      sVar15 = *(short *)(puVar24 + 1);
      if (sVar15 == 1) {
        *DAT_2c4c7190 = *puVar24;
      }
      else {
        *DAT_2c4c6abc = 0x200;
        puVar25 = puVar19;
      }
      iVar17 = DAT_2c4c713c;
      piVar22 = DAT_2c4c7138;
      piVar23 = DAT_2c4c7134;
      piVar7 = DAT_2c4c6ac0;
      piVar5 = DAT_2c4c6aa4;
      iVar18 = DAT_2c4c6a8c;
      piVar4 = DAT_2c4c6a7c;
      if (*DAT_2c4c6ac0 == 0) {
        iVar12 = *DAT_2c4c6a7c;
        *DAT_2c4c6aa4 = 0;
        iVar10 = DAT_2c4c7adc;
        iVar21 = DAT_2c4c7ad8;
        iVar11 = DAT_2c4c6ac8;
        iVar17 = DAT_2c4c6ac4;
        if (iVar12 == 1) {
          if (0x28 < *(uint *)(iVar18 + 0x2a4)) {
            iVar17 = 0;
            do {
              uVar16 = iVar21 * iVar17 + iVar10;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7ac4) {
                FUN_2c6741e8(0x42,DAT_2c4c7acc,DAT_2c4c7ac8,*(undefined4 *)(iVar18 + 0x2a4));
                iVar17 = *piVar5;
              }
              iVar17 = iVar17 + 1;
              *piVar5 = iVar17;
            } while (0x28 < *(uint *)(iVar18 + 0x2a4));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c7ac0;
          *(uint *)(DAT_2c4c7ac0 + 0x248) = *(uint *)(DAT_2c4c7ac0 + 0x248) & 0xfffffffb;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) | 8;
          }
          *(uint *)(DAT_2c4c7ac0 + 0x248) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c7ac0 + 0x248) & 0xfffff07f;
        }
        else {
          if (0x28 < *(uint *)(iVar18 + 0x2b4)) {
            iVar21 = 0;
            do {
              uVar16 = iVar17 * iVar21 + iVar11;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c6aa8) {
                FUN_2c6741e8(0x42,DAT_2c4c6aac,DAT_2c4c6a64,*(undefined4 *)(iVar18 + 0x2b4));
                iVar21 = *piVar5;
              }
              iVar21 = iVar21 + 1;
              *piVar5 = iVar21;
            } while (0x28 < *(uint *)(iVar18 + 0x2b4));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c713c;
          *(uint *)(DAT_2c4c713c + 0x250) = *(uint *)(DAT_2c4c713c + 0x250) & 0xfffffffb;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) | 8;
          }
          *(uint *)(DAT_2c4c713c + 0x250) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c713c + 0x250) & 0xfffff07f;
        }
        FUN_2c4c6710(*DAT_2c4c7164,DAT_2c4c7168);
        piVar23 = DAT_2c4c7174;
        piVar5 = DAT_2c4c716c;
        piVar22 = (int *)*DAT_2c4c7170;
        *piVar22 = -DAT_2c4c716c[4];
        iVar17 = *piVar4;
        piVar22[1] = -piVar5[5];
        piVar22[4] = *piVar5;
        piVar22[2] = piVar5[1];
        piVar22[3] = piVar5[2];
        piVar22[5] = -piVar23[4];
        piVar22[6] = -piVar23[5];
        piVar22[9] = *piVar23;
        iVar18 = piVar23[2];
        piVar22[7] = piVar23[1];
        piVar22[8] = iVar18;
        if (iVar17 == 1) {
          *(uint *)(DAT_2c4c713c + 0x248) = *(uint *)(DAT_2c4c713c + 0x248) | 4;
        }
        else {
          *(uint *)(DAT_2c4c713c + 0x250) = *(uint *)(DAT_2c4c713c + 0x250) | 4;
        }
        *piVar7 = 1;
      }
      else {
        iVar20 = 0;
        iVar12 = *DAT_2c4c7134;
        *DAT_2c4c7138 = 0;
        iVar10 = DAT_2c4c780c;
        iVar21 = DAT_2c4c7808;
        iVar11 = DAT_2c4c717c;
        iVar18 = DAT_2c4c7178;
        if (iVar12 == 1) {
          if (0x28 < *(uint *)(iVar17 + 0x2a0)) {
            do {
              uVar16 = iVar21 * iVar20 + iVar10;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c77b4) {
                FUN_2c6741e8(0x42,DAT_2c4c7804,DAT_2c4c77b8,*(undefined4 *)(iVar17 + 0x2a0));
                iVar20 = *piVar22;
              }
              iVar20 = iVar20 + 1;
              *piVar22 = iVar20;
            } while (0x28 < *(uint *)(iVar17 + 0x2a0));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c7ac0;
          *(uint *)(DAT_2c4c7ac0 + 0x248) = *(uint *)(DAT_2c4c7ac0 + 0x248) & 0xfffffffd;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x248) = *(uint *)(iVar18 + 0x248) | 8;
          }
          *(uint *)(DAT_2c4c7ac0 + 0x248) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c7ac0 + 0x248) & 0xfffff07f;
        }
        else {
          if (0x28 < *(uint *)(iVar17 + 0x2b0)) {
            do {
              uVar16 = iVar18 * iVar20 + iVar11;
              if ((uVar16 >> 4 | uVar16 * 0x10000000) <= DAT_2c4c7124) {
                FUN_2c6741e8(0x42,DAT_2c4c7140,DAT_2c4c7128,*(undefined4 *)(iVar17 + 0x2b0));
                iVar20 = *piVar22;
              }
              iVar20 = iVar20 + 1;
              *piVar22 = iVar20;
            } while (0x28 < *(uint *)(iVar17 + 0x2b0));
            sVar15 = *(short *)(puVar24 + 1);
          }
          iVar18 = DAT_2c4c6de8;
          *(uint *)(DAT_2c4c6de8 + 0x250) = *(uint *)(DAT_2c4c6de8 + 0x250) & 0xfffffffd;
          if (sVar15 == 0) {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) & 0xfffffff7;
          }
          else {
            *(uint *)(iVar18 + 0x250) = *(uint *)(iVar18 + 0x250) | 8;
          }
          *(uint *)(DAT_2c4c6de8 + 0x250) =
               (*(ushort *)((int)puVar24 + 6) & 0x1f) << 7 |
               *(uint *)(DAT_2c4c6de8 + 0x250) & 0xfffff07f;
        }
        FUN_2c4c6710(*DAT_2c4c6e00,DAT_2c4c6e04);
        piVar5 = DAT_2c4c6e10;
        piVar4 = DAT_2c4c6e08;
        piVar22 = (int *)*DAT_2c4c6e0c;
        *piVar22 = -DAT_2c4c6e08[4];
        iVar17 = *piVar23;
        piVar22[1] = -piVar4[5];
        piVar22[4] = *piVar4;
        piVar22[2] = piVar4[1];
        piVar22[3] = piVar4[2];
        piVar22[5] = -piVar5[4];
        piVar22[6] = -piVar5[5];
        piVar22[9] = *piVar5;
        iVar18 = piVar5[2];
        piVar22[7] = piVar5[1];
        piVar22[8] = iVar18;
        if (iVar17 == 1) {
          *(uint *)(DAT_2c4c6de8 + 0x248) = *(uint *)(DAT_2c4c6de8 + 0x248) | 2;
        }
        else {
          *(uint *)(DAT_2c4c6de8 + 0x250) = *(uint *)(DAT_2c4c6de8 + 0x250) | 2;
        }
        *piVar7 = 0;
      }
      *DAT_2c4c6e14 = *puVar25;
      puVar19 = DAT_2c4c7160;
      puVar24 = DAT_2c4c6e18;
      if (iVar17 == 1) {
        iVar18 = 0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          iVar18 = getBasePriority();
        }
        if (iVar18 != 0x40) {
          *DAT_2c4c7160 = 0x2c4c7024;
          puVar19[1] = unaff_lr;
        }
        iVar17 = DAT_2c4c713c;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(0x40);
        }
        *(uint *)(DAT_2c4c713c + 0x25c) = *(uint *)(DAT_2c4c713c + 0x25c) & 0xfffffffe;
        FUN_2c673b08(1);
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 1;
      }
      else {
        iVar18 = 0;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          iVar18 = getBasePriority();
        }
        if (iVar18 != 0x40) {
          *DAT_2c4c6e18 = 0x2c4c6c5a;
          puVar24[1] = unaff_lr;
        }
        iVar17 = DAT_2c4c6de8;
        bVar3 = (bool)isCurrentModePrivileged();
        if (bVar3) {
          setBasePriority(0x40);
        }
        *(uint *)(DAT_2c4c6de8 + 0x25c) = *(uint *)(DAT_2c4c6de8 + 0x25c) & 0xffffffef;
        FUN_2c673b08(1);
        *(uint *)(iVar17 + 0x25c) = *(uint *)(iVar17 + 0x25c) | 0x10;
      }
      if (iVar18 == 0) {
        *DAT_2c4c6e18 = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar18);
      }
      *puVar25 = 0x200;
    }
    puVar24 = DAT_2c4c6e1c;
    FUN_2c4c26a8(*DAT_2c4c6e1c);
    puVar19 = DAT_2c4c6e20;
  }
  FUN_2c4c261c(*puVar24,*puVar19);
  return;
}

