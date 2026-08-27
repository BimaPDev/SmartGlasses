/* FUN_2c50f920 @ 0x2c50f920 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c50f920(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  short *psVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  int iStack_1dc;
  int iStack_1d4;
  int iStack_1c4;
  short sStack_1c0;
  short sStack_1be;
  short sStack_1bc;
  ushort uStack_1ba;
  short sStack_1b8;
  short sStack_1b6;
  undefined1 auStack_1b4 [8];
  undefined1 auStack_1ac [8];
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  short sStack_19c;
  ushort uStack_19a;
  short sStack_198;
  short sStack_196;
  undefined1 auStack_194 [3];
  undefined1 uStack_191;
  undefined4 uStack_190;
  undefined1 auStack_13c [264];
  int iStack_34;
  
  uVar7 = FUN_2c602110(_LAB_2c50f964);
  if (uVar7 == 1) {
    iVar8 = FUN_2c602408(param_2);
    uVar7 = FUN_2c602400(param_2);
    if (iVar8 == 0x15) {
      iStack_34 = *_LAB_2c50f478;
      iVar8 = FUN_2c602400();
      iVar3 = FUN_2c602608(param_2);
      FUN_2c60747c(iVar8,&sStack_1bc);
      iVar4 = FUN_2c62a6b4(auStack_1b4,&sStack_1bc,*(undefined4 *)(iVar3 + 8));
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar11 = *(undefined4 *)(iVar3 + 8);
        iStack_1c4 = 0;
        FUN_2c62c0d8(auStack_13c,iVar8 + 0x40,0x108);
LAB_2c50f246:
        iVar4 = FUN_2c50f11c(auStack_13c,&iStack_1c4);
        if (iVar4 != 0) {
          iStack_1d4 = 0x5c;
          iStack_1dc = 0;
          do {
            iVar4 = iStack_1c4;
            iVar12 = iStack_1dc * 0x94 + iStack_1c4;
            if (*(char *)(iVar12 + 0x90) != '\0') {
              uStack_1a4 = *(undefined2 *)(iVar12 + 0x84);
              uStack_1a2 = *(undefined2 *)(iVar12 + 0x86);
              uStack_1a0 = *(undefined2 *)(iVar12 + 0x88);
              uStack_19e = *(undefined2 *)(iVar12 + 0x8a);
              if (*(short *)(iVar12 + 0x8e) != 0) {
                FUN_2c62a690(&uStack_1a4,0);
              }
              if (*(int *)(iVar8 + 0x27c) != 0) {
                FUN_2c62a690(&uStack_1a4,0,(int)(short)*(int *)(iVar8 + 0x27c));
              }
              iVar12 = FUN_2c62a6b4(auStack_1ac,auStack_1b4,&uStack_1a4);
              if (iVar12 != 0) {
                *(undefined1 **)(iVar3 + 8) = auStack_1ac;
                iVar12 = iStack_1dc * 0x94 + iVar4;
                if ('\0' < *(char *)(iVar12 + 0x90)) {
                  iVar13 = 0;
                  cVar9 = '\0';
                  do {
                    iVar15 = *(int *)(iVar4 + (iStack_1dc * 0x25 + iVar13) * 4);
                    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c62c82c(3,_LAB_2c50f480,0x756,_LAB_2c50f488,_LAB_2c50f484,_DAT_2c50f47c);
                    }
                    sStack_19c = *(short *)(iVar15 + 0x18e);
                    uStack_19a = *(ushort *)(iVar15 + 400);
                    sStack_198 = *(short *)(iVar15 + 0x192);
                    sStack_196 = *(short *)(iVar15 + 0x194);
                    sStack_1be = (short)*(undefined4 *)(iVar8 + 0x27c) + *(short *)(iVar12 + 0x8e) +
                                 *(short *)(iVar15 + 0x18a);
                    FUN_2c62a690(&sStack_19c,0);
                    FUN_2c62a690(&sStack_19c,0,(int)*(short *)(iVar8 + 0x27c));
                    if (*(short *)(iVar12 + 0x8c) != 0) {
                      if (*(int *)(iVar8 + 0x27c) == 0) {
                        cVar10 = *(char *)(iVar12 + 0x90);
                      }
                      else {
                        cVar10 = *(char *)(iVar12 + 0x90);
                        if (cVar10 <= *(char *)(iVar12 + 0x91)) goto LAB_2c50f39e;
                      }
                      if (('\x01' < cVar10) && (iVar13 != (char)(cVar10 + -1))) {
                        FUN_2c62a690(&sStack_19c,0);
                        sStack_1be = sStack_1be + *(short *)(iVar12 + 0x8c);
                      }
                    }
LAB_2c50f39e:
                    iVar13 = FUN_2c62a6b4(&uStack_1a4,*(undefined4 *)(iVar3 + 8),&sStack_19c);
                    if ((iVar13 != 0) && (uVar7 = *(uint *)(iVar15 + 4), uVar7 != 0)) {
                      uVar14 = 0;
                      piVar17 = (int *)(iVar15 + 8);
                      iVar13 = *piVar17;
LAB_2c50f3ca:
                      if ((iVar13 == 0x20) || (iVar5 = FUN_2c50f0bc(iVar13), iVar5 != 0)) {
                        uVar14 = uVar14 + 1;
                        if (uVar14 != uVar7) goto code_r0x2c50f42c;
                      }
                      else {
                        sVar2 = *(short *)(iVar15 + (uVar14 + 0x84) * 2);
                        psVar16 = (short *)(iVar15 + (uVar14 + 0x85) * 2);
                        piVar17 = (int *)(iVar15 + (uVar14 + 3) * 4);
                        sVar1 = sVar2;
                        while( true ) {
                          uVar14 = uVar14 + 1;
                          sStack_1c0 = (sVar1 + sStack_1bc) - sVar2;
                          func_0x2c613140(iVar3,iVar4 + iStack_1d4,&sStack_1c0,iVar13);
                          if (*(uint *)(iVar15 + 4) <= uVar14) break;
                          iVar13 = *piVar17;
                          sVar1 = *psVar16;
                          psVar16 = psVar16 + 1;
                          piVar17 = piVar17 + 1;
                        }
                      }
                    }
                    cVar9 = cVar9 + '\x01';
                    iVar13 = (int)cVar9;
                  } while (iVar13 < *(char *)(iVar12 + 0x90));
                }
              }
            }
            iStack_1d4 = iStack_1d4 + 0x94;
            if (iStack_1dc != 0) goto LAB_2c50f246;
            iStack_1dc = 1;
          } while( true );
        }
        *(undefined4 *)(iVar3 + 8) = uVar11;
        if (*(char *)(iVar8 + 0x308) != '\0') {
          uVar7 = (uint)uStack_1ba;
          iVar12 = (int)(short)((sStack_1b6 + 1) - uStack_1ba);
          iVar4 = (*(int *)(iVar8 + 0x278) - *(int *)(iVar8 + 0x274)) - iVar12;
          if (iVar4 < 1) goto LAB_2c50f20e;
          if (*(int *)(iVar8 + 0x27c) < iVar4) {
            fVar18 = (float)VectorSignedToFloat(*(int *)(iVar8 + 0x27c),(byte)(in_fpscr >> 0x16) & 3
                                               );
            fVar19 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
            fVar18 = fVar18 / fVar19;
          }
          else {
            fVar18 = 1.0;
          }
          sStack_196 = sStack_1b6;
          uStack_19a = sStack_1b6 - 0x30;
          fVar19 = (float)VectorSignedToFloat(iVar12 + -0x30,(byte)(in_fpscr >> 0x16) & 3);
          sStack_198 = sStack_1b8;
          sStack_19c = sStack_1b8 + -3;
          if ((int)(short)uStack_19a - (int)(fVar19 * fVar18) < (int)(short)uStack_1ba) {
            sStack_196 = uStack_1ba + 0x30;
            uStack_19a = uStack_1ba;
          }
          else {
            FUN_2c62a690(&sStack_19c,0,(int)(short)-(short)(int)(fVar19 * fVar18));
          }
          FUN_2c61314c(auStack_194);
          uStack_191 = 0x66;
          uStack_190 = 0xff00ff00;
          FUN_2c61319c(iVar3,auStack_194,&sStack_19c);
        }
        for (puVar6 = (undefined4 *)FUN_2c62ca10(iVar8 + 0x30); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)FUN_2c62ca20(iVar8 + 0x30,puVar6)) {
          if (*(char *)(puVar6 + 3) == '\x01') {
            (*(code *)puVar6[5])(iVar8,*puVar6,iVar3,puVar6 + 1);
          }
        }
        puVar6 = *(undefined4 **)(iVar8 + 0x3c);
        uVar7 = 0;
        if (puVar6 != (undefined4 *)0x0) {
          uStack_1a4 = *(undefined2 *)(puVar6 + 1);
          uStack_1a2 = *(undefined2 *)((int)puVar6 + 6);
          uStack_1a0 = *(undefined2 *)(puVar6 + 2);
          uStack_19e = *(undefined2 *)((int)puVar6 + 10);
          if (*(short *)((int)puVar6 + 0x1a) != 0) {
            FUN_2c62a690(&uStack_1a4,0);
          }
          if (*(int *)(iVar8 + 0x27c) != 0) {
            FUN_2c62a690(&uStack_1a4,0,(int)(short)*(int *)(iVar8 + 0x27c));
          }
          iVar4 = FUN_2c62a6b4(&sStack_19c,*(undefined4 *)(iVar3 + 8),&uStack_1a4);
          uVar7 = 0;
          if (iVar4 != 0) {
            uVar7 = (*(code *)puVar6[5])(iVar8,*puVar6,iVar3,&uStack_1a4);
          }
        }
      }
LAB_2c50f20e:
      if (*_LAB_2c50f478 == iStack_34) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    if ((iVar8 == 0x2a) || (iVar8 == 0x29)) {
      FUN_2c607df0();
      sVar1 = FUN_2c6033b4(uVar7,0,1);
      sVar2 = FUN_2c6033b4(uVar7,0,4);
      if ((sVar1 != 0x27d1) && (sVar2 != 0x27d1)) {
        return 0;
      }
      *(byte *)(uVar7 + 0x22) = *(byte *)(uVar7 + 0x22) | 1;
      iVar8 = FUN_2c604178(uVar7);
      *(byte *)(iVar8 + 0x22) = *(byte *)(iVar8 + 0x22) | 2;
      iVar8 = FUN_2c604188();
      if (*(int *)(iVar8 + 4) != 0) {
        FUN_2c62be4c();
        return 1;
      }
      return 1;
    }
  }
  return uVar7;
code_r0x2c50f42c:
  piVar17 = piVar17 + 1;
  iVar13 = *piVar17;
  goto LAB_2c50f3ca;
}

