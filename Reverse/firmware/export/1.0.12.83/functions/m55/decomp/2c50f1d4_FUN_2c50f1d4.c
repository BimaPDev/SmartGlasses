/* FUN_2c50f1d4 @ 0x2c50f1d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50f1d4(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  uint uVar16;
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
  short sStack_1ba;
  short sStack_1b8;
  short sStack_1b6;
  undefined1 auStack_1b4 [8];
  undefined1 auStack_1ac [8];
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  short sStack_19c;
  short sStack_19a;
  short sStack_198;
  short sStack_196;
  undefined1 auStack_194 [3];
  undefined1 uStack_191;
  undefined4 uStack_190;
  undefined1 auStack_13c [264];
  int iStack_34;
  
  iStack_34 = *_LAB_2c50f478;
  iVar3 = FUN_2c602400();
  iVar4 = FUN_2c602608(param_1);
  FUN_2c60747c(iVar3,&sStack_1bc);
  iVar5 = FUN_2c62a6b4(auStack_1b4,&sStack_1bc,*(undefined4 *)(iVar4 + 8));
  if (iVar5 != 0) {
    uVar10 = *(undefined4 *)(iVar4 + 8);
    iStack_1c4 = 0;
    FUN_2c62c0d8(auStack_13c,iVar3 + 0x40,0x108);
LAB_2c50f246:
    iVar5 = FUN_2c50f11c(auStack_13c,&iStack_1c4);
    if (iVar5 != 0) {
      iStack_1d4 = 0x5c;
      iStack_1dc = 0;
      do {
        iVar5 = iStack_1c4;
        iVar11 = iStack_1dc * 0x94 + iStack_1c4;
        if (*(char *)(iVar11 + 0x90) != '\0') {
          uStack_1a4 = *(undefined2 *)(iVar11 + 0x84);
          uStack_1a2 = *(undefined2 *)(iVar11 + 0x86);
          uStack_1a0 = *(undefined2 *)(iVar11 + 0x88);
          uStack_19e = *(undefined2 *)(iVar11 + 0x8a);
          if (*(short *)(iVar11 + 0x8e) != 0) {
            FUN_2c62a690(&uStack_1a4,0);
          }
          if (*(int *)(iVar3 + 0x27c) != 0) {
            FUN_2c62a690(&uStack_1a4,0,(int)(short)*(int *)(iVar3 + 0x27c));
          }
          iVar11 = FUN_2c62a6b4(auStack_1ac,auStack_1b4,&uStack_1a4);
          if (iVar11 != 0) {
            *(undefined1 **)(iVar4 + 8) = auStack_1ac;
            iVar11 = iStack_1dc * 0x94 + iVar5;
            if ('\0' < *(char *)(iVar11 + 0x90)) {
              iVar12 = 0;
              cVar8 = '\0';
              do {
                iVar14 = *(int *)(iVar5 + (iStack_1dc * 0x25 + iVar12) * 4);
                if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c62c82c(3,_LAB_2c50f480,0x756,_LAB_2c50f488,_LAB_2c50f484,_DAT_2c50f47c);
                }
                sStack_19c = *(short *)(iVar14 + 0x18e);
                sStack_19a = *(short *)(iVar14 + 400);
                sStack_198 = *(short *)(iVar14 + 0x192);
                sStack_196 = *(short *)(iVar14 + 0x194);
                sStack_1be = (short)*(undefined4 *)(iVar3 + 0x27c) + *(short *)(iVar11 + 0x8e) +
                             *(short *)(iVar14 + 0x18a);
                FUN_2c62a690(&sStack_19c,0);
                FUN_2c62a690(&sStack_19c,0,(int)*(short *)(iVar3 + 0x27c));
                if (*(short *)(iVar11 + 0x8c) != 0) {
                  if (*(int *)(iVar3 + 0x27c) == 0) {
                    cVar9 = *(char *)(iVar11 + 0x90);
                  }
                  else {
                    cVar9 = *(char *)(iVar11 + 0x90);
                    if (cVar9 <= *(char *)(iVar11 + 0x91)) goto LAB_2c50f39e;
                  }
                  if (('\x01' < cVar9) && (iVar12 != (char)(cVar9 + -1))) {
                    FUN_2c62a690(&sStack_19c,0);
                    sStack_1be = sStack_1be + *(short *)(iVar11 + 0x8c);
                  }
                }
LAB_2c50f39e:
                iVar12 = FUN_2c62a6b4(&uStack_1a4,*(undefined4 *)(iVar4 + 8),&sStack_19c);
                if ((iVar12 != 0) && (uVar16 = *(uint *)(iVar14 + 4), uVar16 != 0)) {
                  uVar13 = 0;
                  piVar17 = (int *)(iVar14 + 8);
                  iVar12 = *piVar17;
LAB_2c50f3ca:
                  if ((iVar12 == 0x20) || (iVar6 = FUN_2c50f0bc(iVar12), iVar6 != 0)) {
                    uVar13 = uVar13 + 1;
                    if (uVar13 != uVar16) goto code_r0x2c50f42c;
                  }
                  else {
                    sVar2 = *(short *)(iVar14 + (uVar13 + 0x84) * 2);
                    psVar15 = (short *)(iVar14 + (uVar13 + 0x85) * 2);
                    piVar17 = (int *)(iVar14 + (uVar13 + 3) * 4);
                    sVar1 = sVar2;
                    while( true ) {
                      uVar13 = uVar13 + 1;
                      sStack_1c0 = (sVar1 + sStack_1bc) - sVar2;
                      func_0x2c613140(iVar4,iVar5 + iStack_1d4,&sStack_1c0,iVar12);
                      if (*(uint *)(iVar14 + 4) <= uVar13) break;
                      iVar12 = *piVar17;
                      sVar1 = *psVar15;
                      psVar15 = psVar15 + 1;
                      piVar17 = piVar17 + 1;
                    }
                  }
                }
                cVar8 = cVar8 + '\x01';
                iVar12 = (int)cVar8;
              } while (iVar12 < *(char *)(iVar11 + 0x90));
            }
          }
        }
        iStack_1d4 = iStack_1d4 + 0x94;
        if (iStack_1dc != 0) goto LAB_2c50f246;
        iStack_1dc = 1;
      } while( true );
    }
    *(undefined4 *)(iVar4 + 8) = uVar10;
    if (*(char *)(iVar3 + 0x308) != '\0') {
      iVar11 = (int)(short)((sStack_1b6 + 1) - sStack_1ba);
      iVar5 = (*(int *)(iVar3 + 0x278) - *(int *)(iVar3 + 0x274)) - iVar11;
      if (iVar5 < 1) goto LAB_2c50f20e;
      if (*(int *)(iVar3 + 0x27c) < iVar5) {
        fVar18 = (float)VectorSignedToFloat(*(int *)(iVar3 + 0x27c),(byte)(in_fpscr >> 0x16) & 3);
        fVar19 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
        fVar18 = fVar18 / fVar19;
      }
      else {
        fVar18 = 1.0;
      }
      sStack_196 = sStack_1b6;
      sStack_19a = sStack_1b6 + -0x30;
      fVar19 = (float)VectorSignedToFloat(iVar11 + -0x30,(byte)(in_fpscr >> 0x16) & 3);
      sStack_198 = sStack_1b8;
      sStack_19c = sStack_1b8 + -3;
      if ((int)sStack_19a - (int)(fVar19 * fVar18) < (int)sStack_1ba) {
        sStack_196 = sStack_1ba + 0x30;
        sStack_19a = sStack_1ba;
      }
      else {
        FUN_2c62a690(&sStack_19c,0,(int)(short)-(short)(int)(fVar19 * fVar18));
      }
      FUN_2c61314c(auStack_194);
      uStack_191 = 0x66;
      uStack_190 = 0xff00ff00;
      FUN_2c61319c(iVar4,auStack_194,&sStack_19c);
    }
    for (puVar7 = (undefined4 *)FUN_2c62ca10(iVar3 + 0x30); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)FUN_2c62ca20(iVar3 + 0x30,puVar7)) {
      if (*(char *)(puVar7 + 3) == '\x01') {
        (*(code *)puVar7[5])(iVar3,*puVar7,iVar4,puVar7 + 1);
      }
    }
    puVar7 = *(undefined4 **)(iVar3 + 0x3c);
    if (puVar7 != (undefined4 *)0x0) {
      uStack_1a4 = *(undefined2 *)(puVar7 + 1);
      uStack_1a2 = *(undefined2 *)((int)puVar7 + 6);
      uStack_1a0 = *(undefined2 *)(puVar7 + 2);
      uStack_19e = *(undefined2 *)((int)puVar7 + 10);
      if (*(short *)((int)puVar7 + 0x1a) != 0) {
        FUN_2c62a690(&uStack_1a4,0);
      }
      if (*(int *)(iVar3 + 0x27c) != 0) {
        FUN_2c62a690(&uStack_1a4,0,(int)(short)*(int *)(iVar3 + 0x27c));
      }
      iVar5 = FUN_2c62a6b4(&sStack_19c,*(undefined4 *)(iVar4 + 8),&uStack_1a4);
      if (iVar5 != 0) {
        (*(code *)puVar7[5])(iVar3,*puVar7,iVar4,&uStack_1a4);
      }
    }
  }
LAB_2c50f20e:
  if (*_LAB_2c50f478 == iStack_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
code_r0x2c50f42c:
  piVar17 = piVar17 + 1;
  iVar12 = *piVar17;
  goto LAB_2c50f3ca;
}

