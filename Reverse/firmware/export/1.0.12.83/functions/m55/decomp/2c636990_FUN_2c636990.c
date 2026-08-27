/* FUN_2c636990 @ 0x2c636990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c636990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  short *psVar15;
  byte bVar16;
  short sVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  short sStack_e6;
  undefined1 auStack_e4 [4];
  short asStack_e0 [4];
  short sStack_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_c4;
  short sStack_c2;
  undefined4 uStack_c0;
  uint uStack_bc;
  short *psStack_b8;
  undefined1 *puStack_b4;
  short *psStack_a4;
  undefined1 *puStack_a0;
  uint uStack_90;
  short sStack_88;
  undefined1 auStack_7c [88];
  int iStack_24;
  
  uVar7 = _LAB_2c636c08;
  iStack_24 = *DAT_2c636c0c;
  iVar8 = FUN_2c602110(_LAB_2c636c08,param_2,param_3,0);
  if (iVar8 == 1) {
    iVar8 = FUN_2c602408(param_2);
    iVar9 = FUN_2c602400(param_2);
    iVar10 = FUN_2c602400(param_2);
    if (iVar8 == 2) {
      iVar8 = FUN_2c5ff4d8();
      if ((iVar8 != 0) && (iVar12 = FUN_2c5ff4e4(), iVar12 == 1)) {
        FUN_2c5ff5cc(iVar8,&sStack_d8);
        FUN_2c6363e0(iVar9,&sStack_c4,asStack_e0);
        sStack_d8 = sStack_d8 - sStack_c4;
        sStack_d6 = sStack_d6 - sStack_c2;
        if (-1 < (int)((uint)*(byte *)(iVar10 + 0x34) << 0x1f)) {
          sVar3 = FUN_2c6033b4(iVar9,0x20000,0x50);
          asStack_e0[0] = asStack_e0[0] - sVar3;
          iVar8 = FUN_2c606b94(iVar9,0x10000);
          if (iVar8 == 0) {
            iVar8 = (int)asStack_e0[0];
            if (iVar8 < 0) {
              iVar8 = iVar8 + 3;
            }
            if ((int)sVar3 <= iVar8 >> 2) {
              sVar3 = (short)(iVar8 >> 2);
            }
          }
          asStack_e0[0] = asStack_e0[0] - sVar3;
          iVar8 = (int)asStack_e0[0];
          if (iVar8 < 1) {
            iVar8 = 1;
            asStack_e0[0] = 1;
          }
          else {
            iVar8 = iVar8 * iVar8;
          }
          if (iVar8 < (int)sStack_d8 * (int)sStack_d8 + (int)sStack_d6 * (int)sStack_d6) {
            *(byte *)(iVar10 + 0x34) = *(byte *)(iVar10 + 0x34) | 1;
            uVar7 = FUN_2c629df4();
            *(undefined4 *)(iVar10 + 0x38) = uVar7;
          }
          if (-1 < (int)((uint)*(byte *)(iVar10 + 0x34) << 0x1f)) goto LAB_2c6369ae;
        }
        if (sStack_d6 != 0 || sStack_d8 != 0) {
          uVar19 = *(ushort *)(iVar10 + 0x2c);
          if (uVar19 < *(ushort *)(iVar10 + 0x2a)) {
            uVar19 = uVar19 + 0x168;
          }
          sVar4 = func_0x2c62e3c0();
          sVar3 = *(short *)(iVar10 + 0x2a);
          sVar4 = sVar4 - (*(short *)(iVar10 + 0x24) + sVar3);
          iVar8 = (int)sVar4;
          if (iVar8 < 0) {
            sVar4 = sVar4 + 0x168;
            iVar8 = (int)sVar4;
          }
          sVar5 = *(short *)(iVar10 + 0x3c);
          sVar6 = sVar3 - sVar5;
          iVar12 = (int)(short)(uVar19 - sVar3);
          sVar4 = sVar4 + sVar6;
          uVar20 = (uint)sVar4;
          if (((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f) & 0xffff) < 0x119) {
            if (iVar12 < 0) {
              iVar12 = iVar12 + 1;
            }
            if (iVar8 < iVar12 >> 1) {
              bVar16 = *(byte *)(iVar10 + 0x34) | 8;
            }
            else {
              bVar16 = *(byte *)(iVar10 + 0x34) & 0xf7;
            }
            *(byte *)(iVar10 + 0x34) = bVar16;
          }
          else if ((int)((uint)*(byte *)(iVar10 + 0x34) << 0x1c) < 0) {
            uVar20 = (uint)sVar6;
            sVar4 = sVar6;
          }
          else {
            sVar4 = uVar19 - sVar5;
            uVar20 = (uint)sVar4;
          }
          iVar8 = FUN_2c629e10(*(undefined4 *)(iVar10 + 0x38));
          uVar18 = (uint)((ulonglong)DAT_2c637018 *
                          (ulonglong)(iVar8 * (uint)*(ushort *)(iVar10 + 0x36)) >> 0x20);
          iVar8 = (int)(uVar18 << 10) >> 0x10;
          sVar17 = (short)(uVar18 >> 6);
          sVar6 = sVar17;
          if (((int)uVar20 <= iVar8) && (sVar6 = sVar4, (int)uVar20 < -iVar8)) {
            sVar6 = -sVar17;
          }
          uVar1 = *(ushort *)(iVar10 + 0x2a);
          sVar4 = *(short *)(iVar10 + 0x2e);
          sVar3 = FUN_2c62e4a8((int)(short)((sVar5 - sVar3) + uVar1 +
                                            (short)((int)(((int)(short)uVar19 - (uint)uVar1) * 8) /
                                                    ((int)*(short *)(iVar10 + 0x32) -
                                                    (int)*(short *)(iVar10 + 0x30)) + 4 >> 4) +
                                           sVar6),(uint)uVar1,(int)(short)uVar19,
                               (int)*(short *)(iVar10 + 0x30),(int)*(short *)(iVar10 + 0x32));
          if (*(short *)(iVar9 + 0x2e) != sVar3) {
            uVar7 = FUN_2c629df4();
            *(undefined4 *)(iVar10 + 0x38) = uVar7;
            if (sVar3 != *(short *)(iVar9 + 0x2e)) {
              sVar5 = *(short *)(iVar9 + 0x32);
              if (sVar3 <= *(short *)(iVar9 + 0x32)) {
                sVar5 = sVar3;
              }
              sVar6 = *(short *)(iVar9 + 0x30);
              if (*(short *)(iVar9 + 0x30) < sVar5) {
                sVar6 = sVar5;
              }
              if (*(short *)(iVar9 + 0x2e) != sVar6) {
                *(short *)(iVar9 + 0x2e) = sVar6;
                FUN_2c636890(iVar9);
              }
            }
            if ((sVar4 != sVar3) && (iVar8 = FUN_2c602340(iVar9,0x1c,0), iVar8 != 1))
            goto LAB_2c6369ae;
          }
          if ((*(short *)(iVar10 + 0x30) == sVar3) || (*(short *)(iVar10 + 0x32) == sVar3)) {
            uVar7 = FUN_2c629df4();
            *(undefined4 *)(iVar10 + 0x38) = uVar7;
          }
        }
      }
    }
    else if ((iVar8 == 8) || (uVar20 = (uint)(iVar8 == 3), uVar20 != 0)) {
      *(byte *)(iVar10 + 0x34) = *(byte *)(iVar10 + 0x34) & 0xfe;
      iVar8 = FUN_2c606bc0(iVar9);
      iVar9 = func_0x2c603124();
      FUN_2c5ff4d8();
      iVar10 = FUN_2c5ff4e4();
      if ((iVar10 == 4) && (iVar9 != 0)) {
        if (*DAT_2c636c0c == iStack_24) {
          if (iVar8 == 0) {
            return;
          }
          if ((int)((uint)*(byte *)(iVar8 + 0x1c) << 0x1e) < 0) {
            *(byte *)(iVar8 + 0x1c) = *(byte *)(iVar8 + 0x1c) & 0xfd;
            if ((*(int **)(iVar8 + 0xc) != (int *)0x0) &&
               (iVar8 = **(int **)(iVar8 + 0xc), iVar8 != 0)) {
              uVar7 = FUN_2c602bd8();
              iVar9 = FUN_2c602340(iVar8,0xe,uVar7);
              if (iVar9 == 1) {
                FUN_2c607df0(iVar8);
                return;
              }
            }
          }
          return;
        }
        goto LAB_2c637036;
      }
    }
    else if (iVar8 == 0xd) {
      pbVar13 = (byte *)FUN_2c602410(param_2);
      bVar16 = *pbVar13;
      sVar3 = *(short *)(iVar10 + 0x2e);
      if ((bVar16 & 0xfd) == 0x11) {
        sVar4 = *(short *)(iVar9 + 0x2e);
        sVar5 = sVar4 + 1;
      }
      else {
        if ((bVar16 != 0x14) && (bVar16 != 0x12)) goto LAB_2c6369ae;
        sVar4 = *(short *)(iVar9 + 0x2e);
        sVar5 = sVar4 + -1;
      }
      if (*(short *)(iVar9 + 0x32) <= sVar5) {
        sVar5 = *(short *)(iVar9 + 0x32);
      }
      if (sVar5 < *(short *)(iVar9 + 0x30)) {
        sVar5 = *(short *)(iVar9 + 0x30);
      }
      if (sVar4 != sVar5) {
        *(short *)(iVar9 + 0x2e) = sVar5;
        FUN_2c636890(iVar9);
        if (*(short *)(iVar10 + 0x2e) != sVar3) {
          if (*DAT_2c63701c == iStack_24) {
            FUN_2c602340(iVar9,0x1c,0,0);
            return;
          }
          goto LAB_2c637036;
        }
      }
    }
    else if (iVar8 == 0x11) {
      puVar14 = (undefined4 *)FUN_2c602410(param_2);
      FUN_2c6363e0(iVar9,&sStack_d8,asStack_e0);
      sVar3 = 0;
      if (*(int *)(iVar9 + 8) != 0) {
        sVar3 = *(short *)(*(int *)(iVar9 + 8) + 0x14);
      }
      sVar6 = FUN_2c6033b4(iVar9,0,0x50);
      sVar6 = sVar6 + sVar3;
      sVar4 = asStack_e0[0] - sVar6;
      sVar5 = sVar6 - asStack_e0[0];
      asStack_e0[0] = sVar4;
      FUN_2c62a624(&sStack_c4,(int)(short)(sVar5 + sStack_d8),(int)(short)(sStack_d6 + sVar5),
                   (int)(short)(sVar4 + sStack_d8),(int)(short)(sVar4 + sStack_d6));
      iVar8 = FUN_2c62a750(&sStack_c4,*puVar14,0x7fff);
      if (iVar8 == 0) {
        FUN_2c62a66c(&sStack_c4,(int)(short)(sVar6 + sVar3));
        uVar2 = FUN_2c62a750(&sStack_c4,*puVar14,0x7fff);
        *(undefined1 *)(puVar14 + 1) = uVar2;
      }
      else {
        *(undefined1 *)(puVar14 + 1) = 0;
      }
    }
    else if (iVar8 == 0x13) {
      sVar3 = FUN_2c6033b4(iVar9,0,0x12);
      sVar4 = FUN_2c6033b4(iVar9,0,0x13);
      sVar5 = FUN_2c6033b4(iVar9,0,0x10);
      sVar6 = FUN_2c6033b4(iVar9,0,0x11);
      iVar8 = (int)sVar3;
      if ((int)sVar3 < (int)sVar4) {
        iVar8 = (int)sVar4;
      }
      if (iVar8 < sVar5) {
        iVar8 = (int)sVar5;
      }
      iVar10 = (int)sVar6;
      if (sVar6 < iVar8) {
        iVar10 = iVar8;
      }
      sVar3 = FUN_2c6033b4(iVar9,0x30000,0x12);
      sVar4 = FUN_2c6033b4(iVar9,0x30000,0x13);
      sVar5 = FUN_2c6033b4(iVar9,0x30000,0x10);
      sVar6 = FUN_2c6033b4(iVar9,0x30000,0x11);
      psVar15 = (short *)FUN_2c602410(param_2);
      if (sVar3 < sVar4) {
        sVar3 = sVar4;
      }
      if (sVar3 < sVar5) {
        sVar3 = sVar5;
      }
      if (sVar3 < sVar6) {
        sVar3 = sVar6;
      }
      iVar10 = (short)(sVar3 + 2) - iVar10;
      if (iVar10 < *psVar15) {
        iVar10 = (int)*psVar15;
      }
      *psVar15 = (short)iVar10;
    }
    else if (iVar8 == 0x15) {
      iVar8 = FUN_2c602400(param_2);
      uVar11 = FUN_2c602608(param_2);
      FUN_2c6363e0(iVar8,auStack_e4,&sStack_e6);
      FUN_2c600b9c(&sStack_c4,uVar11);
      if (0 < sStack_e6) {
        func_0x2c614f78(&sStack_d8);
        FUN_2c600a20(iVar8,0,&sStack_d8);
        puStack_a0 = auStack_e4;
        uStack_c0 = uVar7;
        sStack_88 = sStack_e6;
        uStack_bc = uVar20;
        psStack_a4 = &sStack_d8;
        uStack_90 = uVar20;
        FUN_2c602340(iVar8,0x1a,&sStack_c4);
        FUN_2c614f94(uVar11,&sStack_d8,auStack_e4,sStack_88,
                     *(short *)(iVar8 + 0x24) + *(short *)(iVar8 + 0x2a),
                     *(short *)(iVar8 + 0x2c) + *(short *)(iVar8 + 0x24));
        FUN_2c602340(iVar8,0x1b,&sStack_c4);
      }
      sVar3 = FUN_2c6033b4(iVar8,0x20000,0x12);
      sVar4 = FUN_2c6033b4(iVar8,0x20000,0x13);
      sVar5 = FUN_2c6033b4(iVar8,0x20000,0x10);
      sVar6 = FUN_2c6033b4(iVar8,0x20000,0x11);
      if (sVar3 < sVar4) {
        sVar3 = sVar4;
      }
      if (sVar3 < sVar5) {
        sVar3 = sVar5;
      }
      if (sVar3 < sVar6) {
        sVar3 = sVar6;
      }
      sVar3 = sStack_e6 - sVar3;
      if (0 < sVar3) {
        func_0x2c614f78(&sStack_d8);
        FUN_2c600a20(iVar8,0x20000,&sStack_d8);
        puStack_a0 = auStack_e4;
        uStack_c0 = uVar7;
        uStack_90 = 0x20000;
        uStack_bc = 1;
        psStack_a4 = &sStack_d8;
        sStack_88 = sVar3;
        FUN_2c602340(iVar8,0x1a,&sStack_c4);
        if (sStack_88 < sStack_d4) {
          sStack_d4 = sStack_88;
        }
        FUN_2c614f94(uVar11,&sStack_d8,auStack_e4,sStack_88,
                     *(short *)(iVar8 + 0x24) + *(short *)(iVar8 + 0x26),
                     *(short *)(iVar8 + 0x28) + *(short *)(iVar8 + 0x24));
        FUN_2c602340(iVar8,0x1b,&sStack_c4);
      }
      FUN_2c63648c(iVar8,auStack_e4,(int)sStack_e6,asStack_e0);
      FUN_2c61314c(auStack_7c);
      FUN_2c6004cc(iVar8,0x30000,auStack_7c);
      uStack_90 = 0x30000;
      uStack_c0 = uVar7;
      uStack_bc = 2;
      psStack_b8 = asStack_e0;
      puStack_b4 = auStack_7c;
      FUN_2c602340(iVar8,0x1a,&sStack_c4);
      FUN_2c61319c(uVar11,auStack_7c,asStack_e0);
      FUN_2c602340(iVar8,0x1b,&sStack_c4);
    }
  }
LAB_2c6369ae:
  if (*DAT_2c636c0c == iStack_24) {
    return;
  }
LAB_2c637036:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

