/* FUN_2c619014 @ 0x2c619014 */

/* WARNING: Possible PIC construction at 0x2c619002: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c619006) */
/* WARNING: Removing unreachable block (ram,0x2c62bea8) */
/* WARNING: Removing unreachable block (ram,0x2c62beae) */
/* WARNING: Removing unreachable block (ram,0x2c62beb4) */
/* WARNING: Removing unreachable block (ram,0x2c62beb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c619014(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  uint unaff_r4;
  uint uVar17;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int iVar18;
  undefined4 unaff_r9;
  int iVar19;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar20;
  undefined4 unaff_lr;
  undefined4 *puVar21;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_2c606abc(param_2,4);
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) & 0xfe00;
  FUN_2c6072bc(param_2,5,0,0);
  FUN_2c602454(param_2,_LAB_2c61906c,0x1c,0);
  func_0x2c606e8c(param_2,0,0);
  FUN_2c635da8(param_2,*(undefined4 *)(_LAB_2c619070 + (uint)*(byte *)(param_2 + 0x3c) * 4));
  puVar20 = &uStack_10;
  uVar16 = *(byte *)(param_2 + 0x3d) & 1;
  if ((*(byte *)(param_2 + 0x3d) & 1) == 0) {
    iVar9 = lv_mem_alloc((uint)*(ushort *)(param_2 + 0x30) << 1);
    FUN_2c62c0d8(iVar9,*(undefined4 *)(_LAB_2c619010 + (uint)*(byte *)(param_2 + 0x3c) * 4),
                 (uint)*(ushort *)(param_2 + 0x30) << 1);
    uVar13 = uVar16;
    if (*(short *)(param_2 + 0x30) != 0) {
      do {
        uVar7 = uVar13 + 1;
        *(ushort *)(iVar9 + (uVar13 & 0xffff) * 2) =
             *(ushort *)(iVar9 + (uVar13 & 0xffff) * 2) & 0xfdff;
        uVar13 = uVar7;
      } while ((uVar7 & 0xffff) < (uint)*(ushort *)(param_2 + 0x30));
    }
    unaff_lr = 0x2c619007;
    unaff_r5 = param_2;
    unaff_r6 = iVar9;
  }
  else {
    iVar9 = *(int *)(_LAB_2c619010 + (uint)*(byte *)(param_2 + 0x3c) * 4);
    uVar16 = unaff_r4;
    puVar20 = (undefined4 *)register0x00000054;
  }
  puVar21 = puVar20 + -1;
  *puVar21 = unaff_lr;
  puVar20[-2] = uVar16;
  FUN_2c62c0d8(*(undefined4 *)(param_2 + 0x2c),iVar9,(uint)*(ushort *)(param_2 + 0x30) << 1);
  puVar10 = *(undefined4 **)(param_2 + 0x24);
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  uVar16 = puVar20[-2];
  *puVar21 = *puVar21;
  puVar20[-2] = unaff_r11;
  puVar20[-3] = unaff_r10;
  puVar20[-4] = unaff_r9;
  puVar20[-5] = unaff_r8;
  puVar20[-6] = unaff_r7;
  puVar20[-7] = unaff_r6;
  puVar20[-8] = unaff_r5;
  puVar20[-9] = uVar16;
  *(undefined2 *)(param_2 + 0x32) = 1;
  pcVar11 = (char *)*puVar10;
  if (pcVar11 == (char *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar13 = 0;
    uVar16 = 0;
    do {
      while( true ) {
        if (*pcVar11 == '\0') goto LAB_2c63541c;
        if ((*pcVar11 == '\n') && (pcVar11[1] == '\0')) break;
        uVar16 = uVar16 + 1 & 0xffff;
        uVar13 = uVar13 + 1 & 0xffff;
        pcVar11 = (char *)puVar10[uVar13];
        if (pcVar11 == (char *)0x0) goto LAB_2c63541c;
      }
      uVar13 = uVar13 + 1 & 0xffff;
      *(short *)(param_2 + 0x32) = *(short *)(param_2 + 0x32) + 1;
      pcVar11 = (char *)puVar10[uVar13];
    } while (pcVar11 != (char *)0x0);
  }
LAB_2c63541c:
  if (*(ushort *)(param_2 + 0x30) != uVar16) {
    if (*(int *)(param_2 + 0x28) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(param_2 + 0x2c) = 0;
    }
    uVar5 = lv_mem_alloc(uVar16 << 3);
    *(undefined4 *)(param_2 + 0x28) = uVar5;
    iVar9 = lv_mem_alloc(uVar16 << 1);
    *(int *)(param_2 + 0x2c) = iVar9;
    if ((*(int *)(param_2 + 0x28) == 0) || (uVar13 = uVar16 << 1, iVar9 == 0)) {
      uVar16 = 0;
      uVar13 = uVar16;
    }
    FUN_2c62c3b0(iVar9,uVar13);
    *(short *)(param_2 + 0x30) = (short)uVar16;
  }
  *(undefined4 **)(param_2 + 0x24) = puVar10;
  bVar2 = FUN_2c6033b4(param_2,0,0x16);
  puVar20[-0x19] = (uint)bVar2;
  uVar5 = FUN_2c6033b4(param_2,0,0x12);
  puVar20[-0xc] = uVar5;
  uVar13 = FUN_2c6033b4(param_2,0,0x10);
  uVar3 = FUN_2c6033b4(param_2,0,0x14);
  uVar5 = FUN_2c6033b4(param_2,0,0x15);
  puVar20[-0xe] = uVar5;
  uVar6 = FUN_2c607404(param_2);
  puVar20[-0xd] = uVar6;
  sVar4 = FUN_2c607440(param_2);
  uVar15 = *(ushort *)(param_2 + 0x32);
  uVar16 = (uint)uVar15;
  puVar20[-0xb] = (int)(short)uVar5;
  puVar20[-0x13] = (int)(short)(sVar4 - (uVar15 - 1) * uVar3);
  if (uVar16 == 0) {
LAB_2c635650:
    FUN_2c600bac(param_2);
    FUN_2c607df0(param_2);
    return;
  }
  uVar7 = 0;
  pcVar11 = (char *)*puVar10;
  puVar20[-0x12] = (uint)uVar3;
  puVar20[-0x15] = 0;
  puVar20[-0x18] = uVar13 & 0xffff;
  puVar20[-0x17] = 1;
  do {
    if (pcVar11 == (char *)0x0) {
LAB_2c635548:
      puVar10 = puVar10 + 1;
      puVar20[-0x16] = puVar20[-0x13] + uVar7;
    }
    else {
      uVar17 = 0;
      uVar13 = 0;
      do {
        iVar9 = uVar13 + puVar20[-0x15];
        if (((*pcVar11 == '\n') && (pcVar11[1] == '\0')) || (*pcVar11 == '\0')) break;
        uVar13 = uVar13 + 1 & 0xffff;
        uVar15 = *(ushort *)(*(int *)(param_2 + 0x2c) + iVar9 * 2);
        pcVar11 = (char *)puVar10[uVar13];
        if ((uVar15 & 7) == 0) {
          uVar15 = (short)uVar17 + 1;
        }
        else {
          uVar15 = (short)uVar17 + (uVar15 & 7);
        }
        uVar17 = (uint)uVar15;
      } while (pcVar11 != (char *)0x0);
      if (uVar13 == 0) goto LAB_2c635548;
      puVar20[-0x16] = puVar20[-0x13] + uVar7;
      puVar20[-0x11] = (int)(short)((short)(uVar7 / uVar16) + (short)puVar20[-0x18]);
      puVar20[-0x14] = (uint)*(ushort *)(puVar20 + -0xd);
      uVar14 = (uint)(short)(*(ushort *)(puVar20 + -0xd) -
                            ((short)uVar13 + -1) * (short)puVar20[-0xe]);
      puVar20[-0x1c] = uVar14 & ~((int)uVar14 >> 0x1f);
      puVar20[-0x1d] =
           (int)(short)((short)puVar20[-0x18] + -1 + (short)((puVar20[-0x13] + uVar7) / uVar16));
      iVar9 = 0;
      if (uVar13 != 0) {
        uVar7 = 0;
        iVar18 = puVar20[-0x15] << 1;
        iVar9 = puVar20[-0x15] + uVar13;
        puVar20[-0x1a] = (uint)*(ushort *)(puVar20 + -0xb);
        iVar19 = 0;
        sVar4 = *(short *)(puVar20 + -0xc);
        uVar16 = 0;
        puVar20[-0x15] = iVar9;
        puVar20[-0x10] = uVar13;
        puVar20[-0xf] = puVar10;
        uVar5 = puVar20[-0x11];
        puVar20[-0x1b] = iVar9 * 2;
        do {
          uVar15 = *(ushort *)(*(int *)(param_2 + 0x2c) + iVar18);
          if ((uVar15 & 7) == 0) {
            iVar19 = iVar19 + 1;
          }
          else {
            iVar19 = iVar19 + (uVar15 & 7);
          }
          uVar13 = uVar16 / uVar17;
          uVar16 = puVar20[-0x1c] * iVar19;
          sVar1 = (short)uVar13 + (short)uVar7;
          sVar12 = (short)uVar7 + -1 + (short)(uVar16 / uVar17);
          sVar8 = sVar1;
          if (puVar20[-0x19] == 1) {
            sVar8 = (short)puVar20[-0x14] - sVar12;
            sVar12 = (short)puVar20[-0x14] - sVar1;
          }
          puVar20[-0x20] = puVar20[-0x1d];
          iVar9 = iVar18 * 4;
          iVar18 = iVar18 + 2;
          FUN_2c62a624(*(int *)(param_2 + 0x28) + iVar9,(int)(short)(sVar8 + sVar4),uVar5,
                       (int)(short)(sVar12 + sVar4));
          uVar7 = uVar7 + puVar20[-0x1a] & 0xffff;
        } while (iVar18 != puVar20[-0x1b]);
        uVar16 = (uint)*(ushort *)(param_2 + 0x32);
        iVar9 = puVar20[-0x10];
        puVar10 = (undefined4 *)puVar20[-0xf];
      }
      puVar10 = puVar10 + iVar9 + 1;
    }
    uVar7 = puVar20[-0x16];
    puVar20[-0x18] = puVar20[-0x18] + puVar20[-0x12] & 0xffff;
    if (uVar16 <= (uint)puVar20[-0x17]) goto LAB_2c635650;
    pcVar11 = (char *)*puVar10;
    puVar20[-0x17] = puVar20[-0x17] + 1;
  } while( true );
}

