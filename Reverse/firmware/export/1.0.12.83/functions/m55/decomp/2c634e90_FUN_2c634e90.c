/* FUN_2c634e90 @ 0x2c634e90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c634e90(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  ushort uVar20;
  short sStack_190;
  short sStack_18e;
  short sStack_18c;
  short sStack_18a;
  short sStack_188;
  short sStack_184;
  short sStack_182;
  short sStack_180;
  short sStack_17e;
  undefined4 auStack_17c [6];
  short sStack_164;
  short sStack_162;
  byte bStack_159;
  undefined1 auStack_154 [40];
  undefined1 auStack_12c [4];
  undefined4 uStack_128;
  undefined4 uStack_124;
  short *psStack_120;
  undefined1 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined1 auStack_e4 [59];
  byte bStack_a9;
  undefined1 auStack_8c [88];
  int iStack_34;
  
  iStack_34 = *_LAB_2c635188;
  iVar9 = FUN_2c602400();
  if (*(short *)(iVar9 + 0x30) != 0) {
    uVar10 = FUN_2c602608(param_1);
    *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) | 4;
    FUN_2c607338(iVar9,&sStack_18c);
    uVar1 = *(ushort *)(iVar9 + 0x20);
    uVar15 = (uint)uVar1;
    *(uint *)(iVar9 + 0x20) = _LAB_2c63518c & *(uint *)(iVar9 + 0x20) | 0x40000;
    FUN_2c61314c(auStack_8c);
    FUN_2c6129e4(auStack_154);
    FUN_2c6004cc(iVar9,0x50000,auStack_8c);
    FUN_2c6007ec(iVar9,0x50000,auStack_154);
    *(ushort *)(iVar9 + 0x20) = uVar1;
    *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) & 0xfb;
    sVar5 = FUN_2c6033b4(iVar9,0,0x10);
    sVar6 = FUN_2c6033b4(iVar9,0,0x11);
    sVar7 = FUN_2c6033b4(iVar9,0,0x12);
    sVar8 = FUN_2c6033b4(iVar9,0,0x13);
    FUN_2c600b9c(auStack_12c,uVar10);
    puStack_11c = auStack_e4;
    uStack_f8 = 0x50000;
    uVar20 = *(ushort *)(iVar9 + 0x30);
    uStack_128 = _LAB_2c635190;
    uStack_124 = 0;
    puStack_118 = auStack_17c;
    if (uVar20 != 0) {
      uVar19 = 0;
      uVar16 = 0;
      do {
        while( true ) {
          pcVar14 = *(char **)(*(int *)(iVar9 + 0x24) + uVar16 * 4);
          if ((*pcVar14 != '\n') || (pcVar14[1] != '\0')) break;
          uVar16 = uVar16 + 1 & 0xffff;
        }
        uVar18 = (uint)uVar19;
        uVar13 = (uint)*(ushort *)(*(int *)(iVar9 + 0x2c) + uVar18 * 2);
        if (-1 < (int)(uVar13 << 0x1c)) {
          uVar17 = (uVar13 & 0xff) >> 7;
          if ((int)(uVar13 << 0x1a) < 0) {
            uVar17 = uVar17 | 0x80;
          }
          else if (*(ushort *)(iVar9 + 0x34) == uVar19) {
            if ((uVar1 & 0x20) != 0) {
              uVar17 = uVar17 | 0x20;
            }
            if ((int)(uVar15 << 0x1e) < 0) {
              uVar17 = uVar17 | 2;
            }
            if ((int)(uVar15 << 0x1d) < 0) {
              uVar17 = uVar17 | 4;
            }
            if ((int)(uVar15 << 0x1c) < 0) {
              uVar17 = uVar17 | 8;
            }
          }
          iVar11 = *(int *)(iVar9 + 0x28) + uVar18 * 8;
          sStack_184 = *(short *)(*(int *)(iVar9 + 0x28) + uVar18 * 8) + sStack_18c;
          sStack_182 = *(short *)(iVar11 + 2) + sStack_18a;
          sStack_180 = sStack_18c + *(short *)(iVar11 + 4);
          sStack_17e = sStack_18a + *(short *)(iVar11 + 6);
          if (uVar17 == 0) {
            FUN_2c62c0d8(auStack_e4,auStack_8c,0x58);
            FUN_2c62c0d8(auStack_17c,auStack_154,0x28);
          }
          else {
            *(short *)(iVar9 + 0x20) = (short)uVar17;
            *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) | 4;
            FUN_2c61314c(auStack_e4);
            FUN_2c6129e4(auStack_17c);
            FUN_2c6004cc(iVar9,0x50000,auStack_e4);
            FUN_2c6007ec(iVar9,0x50000,auStack_17c);
            *(ushort *)(iVar9 + 0x20) = uVar1;
            *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) & 0xfb;
          }
          psStack_120 = &sStack_184;
          if ((*(ushort *)(*(int *)(iVar9 + 0x2c) + uVar18 * 2) & 0x1000) == 0) {
            bStack_159 = bStack_159 & 0xfe;
          }
          else {
            bStack_159 = bStack_159 | 1;
          }
          uStack_f4 = uVar18;
          FUN_2c602340(iVar9,0x1a,auStack_12c);
          sVar3 = sStack_182;
          if ((int)((uint)bStack_a9 << 0x1a) < 0) {
            bVar4 = bStack_a9 & 0xc1;
            bStack_a9 = bVar4 | 0x1e;
            if ((int)sStack_184 == (int)*(short *)(iVar9 + 0x14) + (int)sVar7) {
              bStack_a9 = bVar4 | 0x16;
            }
            if ((int)sStack_180 == (int)*(short *)(iVar9 + 0x18) - (int)sVar8) {
              bStack_a9 = bStack_a9 & 0xc1 | (byte)(((bStack_a9 & 0x3f) >> 1 & 0x17) << 1);
            }
            if ((int)sStack_182 == (int)*(short *)(iVar9 + 0x16) + (int)sVar5) {
              bStack_a9 = bStack_a9 & 0xc1 | (byte)(((bStack_a9 & 0x3f) >> 1 & 0x1d) << 1);
            }
            if ((int)sStack_17e == (int)*(short *)(iVar9 + 0x1a) - (int)sVar6) {
              bStack_a9 = bStack_a9 & 0xc1 | (byte)(((bStack_a9 & 0x3f) >> 1 & 0x1e) << 1);
            }
          }
          sVar2 = sStack_17e + 1;
          if (((uVar17 & 0x20) != 0) &&
             ((int)((uint)*(ushort *)(*(int *)(iVar9 + 0x2c) + uVar18 * 2) << 0x16) < 0)) {
            sStack_182 = sStack_182 * 2 - sVar2;
          }
          FUN_2c61319c(uVar10,auStack_e4,&sStack_184);
          uVar12 = *(undefined4 *)(*(int *)(iVar9 + 0x24) + uVar16 * 4);
          FUN_2c62b954(&sStack_190,uVar12,auStack_17c[0],(int)sStack_162,(int)sStack_164,
                       (int)(short)((sStack_188 + 1) - sStack_18c),bStack_159);
          iVar11 = (int)(short)((sStack_180 + 1) - sStack_184) - (int)sStack_190;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          sStack_184 = sStack_184 + (short)(iVar11 >> 1);
          sStack_180 = sStack_184 + sStack_190;
          iVar11 = (int)(short)((sStack_17e + 1) - sStack_182) - (int)sStack_18e;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          sStack_182 = sStack_182 + (short)(iVar11 >> 1);
          sStack_17e = sStack_18e + sStack_182;
          if (((uVar17 & 0x20) != 0) &&
             ((int)((uint)*(ushort *)(*(int *)(iVar9 + 0x2c) + uVar18 * 2) << 0x16) < 0)) {
            iVar11 = (int)(short)(sVar2 - sVar3);
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
            }
            sVar3 = (short)((uint)(iVar11 << 0xf) >> 0x10);
            sStack_182 = sStack_182 - sVar3;
            sStack_17e = sStack_17e - sVar3;
          }
          FUN_2c612a20(uVar10,auStack_17c,&sStack_184,uVar12,0);
          FUN_2c602340(iVar9,0x1b,auStack_12c);
          uVar20 = *(ushort *)(iVar9 + 0x30);
        }
        uVar19 = uVar19 + 1;
        uVar16 = uVar16 + 1 & 0xffff;
      } while (uVar19 < uVar20);
    }
    *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) & 0xfb;
  }
  if (*_LAB_2c635188 == iStack_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

