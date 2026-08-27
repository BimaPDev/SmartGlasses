/* FUN_2c60802c @ 0x2c60802c */

void FUN_2c60802c(uint param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r2;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 unaff_d8;
  undefined4 unaff_s18;
  undefined8 unaff_d15;
  undefined8 uVar27;
  ulonglong uVar28;
  int in_stack_00000044;
  int local_64;
  undefined4 local_5c;
  uint local_58;
  int local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined1 auStack_44 [8];
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  uint local_34;
  
  local_34 = *DAT_2c608338;
  uVar27 = FUN_2c6041d4();
  uVar18 = (undefined4)((ulonglong)uVar27 >> 0x20);
  iVar17 = (int)uVar27;
  if (iVar17 != 0) {
    uVar12 = FUN_2c605068(param_1);
    if ((*(byte *)(param_1 + 0x23) & 4) == 0) {
      uVar7 = FUN_2c6033b4(param_1,*(byte *)(param_1 + 0x23) & 4,1);
      uVar21 = (uint)(short)uVar7;
      uVar23 = (uint)(uVar21 == 0x27d1);
      if ((uVar7 & 0x6000) == 0x2000) {
        iVar14 = FUN_2c607404(iVar17);
        uVar26 = uVar21 & 0xffff9fff;
        if (uVar21 == 0x27d1) goto LAB_2c608444;
        if ((int)uVar26 < 0x7d1) {
          bVar5 = *(byte *)(iVar17 + 0x23) & 4;
          if (((*(byte *)(iVar17 + 0x23) & 4) == 0) &&
             (sVar8 = FUN_2c6033b4(iVar17,bVar5,1), sVar8 == 0x27d1)) {
            sVar8 = FUN_2c6033b4(param_1,bVar5,0x32);
            sVar9 = FUN_2c6033b4(param_1,bVar5,0x12);
            sVar10 = FUN_2c6033b4(param_1,bVar5,0x13);
            uVar21 = (int)(short)(sVar9 + sVar8 + sVar10 + sVar8);
          }
          else {
            if (1000 < (int)uVar26) {
              uVar26 = 1000 - uVar26;
            }
            uVar21 = (int)(short)((short)(int)((longlong)DAT_2c60833c *
                                               (longlong)(int)(uVar26 * iVar14) >> 0x25) -
                                 (short)((int)(uVar26 * iVar14) >> 0x1f));
          }
        }
      }
      else {
        iVar14 = FUN_2c607404(iVar17);
        if (uVar21 == 0x27d1) {
LAB_2c608444:
          local_64 = 0;
          FUN_2c60518c(param_1,0);
          uVar7 = FUN_2c6033b4(param_1,0,0x32);
          iVar15 = FUN_2c6033b4(param_1,0,0x13);
          uVar26 = iVar15 + (uint)uVar7 & 0xffff;
          sVar9 = FUN_2c6033b4(param_1,0,0x12);
          sVar9 = sVar9 + uVar7;
          local_3a = -0x1fff;
          local_3c = 0;
          FUN_2c602340(param_1,0x2c,&local_3c);
          sVar8 = (short)uVar26 + sVar9 + local_3c;
          iVar15 = FUN_2c6041fc(param_1);
          uVar21 = (uint)sVar8;
          cVar4 = FUN_2c6033b4(param_1,0,0x16);
          uVar18 = DAT_2c6086d8;
          if (cVar4 == '\x01') {
            if (iVar15 != 0) {
              sVar8 = (short)uVar26;
              uVar25 = DAT_2c6086d4;
              do {
                iVar16 = *(int *)(**(int **)(param_1 + 8) + local_64 * 4);
                iVar24 = FUN_2c606ba4(iVar16,uVar18);
                if (iVar24 == 0) {
                  iVar24 = FUN_2c607214(iVar16);
                  if (iVar24 == 0) {
                    uVar6 = FUN_2c6033b4(iVar16,0,9);
                    uVar22 = extraout_r1_01;
                    uVar19 = extraout_r2;
                    switch(uVar6) {
                    case 0:
                    case 3:
                    case 6:
                    case 8:
                      VectorRoundHalvingAdd(unaff_d15,CONCAT44(extraout_s1,extraout_s0),2,1);
                      unaff_s18 = FUN_2c613e5c(&stack0xffffffd4);
                      iVar16 = 0;
                      param_1 = 0;
                      goto LAB_2c618682;
                    case 1:
                    case 2:
                    case 4:
                    case 5:
                    case 7:
                      goto switchD_2c6086aa_caseD_1;
                    default:
                      sVar10 = FUN_2c6033b4(iVar16,0,7);
                      if ((sVar10 == 0) &&
                         (sVar10 = (*(short *)(iVar16 + 0x18) + 1) - *(short *)(iVar16 + 0x14),
                         (int)uVar25 <= (int)sVar10 + (int)sVar8)) {
                        uVar25 = (uint)(short)(sVar10 + (short)uVar26);
                      }
                    }
                  }
                  else {
                    uVar22 = ((int)*(short *)(param_1 + 0x18) - (int)*(short *)(iVar16 + 0x14)) + 1;
                    if ((int)uVar25 < (int)uVar22) {
                      uVar25 = uVar22;
                    }
                    uVar25 = (uint)(short)uVar25;
                  }
                }
                local_64 = local_64 + 1;
              } while (iVar15 != local_64);
              if (uVar25 != DAT_2c60872c) {
                sVar9 = sVar9 + (short)uVar25;
                goto LAB_2c60862c;
              }
            }
          }
          else if (iVar15 != 0) {
            uVar25 = DAT_2c6086d4;
            do {
              iVar16 = *(int *)(**(int **)(param_1 + 8) + local_64 * 4);
              iVar24 = FUN_2c606ba4(iVar16,uVar18);
              if (iVar24 == 0) {
                iVar24 = FUN_2c607214(iVar16);
                if (iVar24 == 0) {
                  bVar5 = FUN_2c6033b4(iVar16,0,9);
                  if ((7 < bVar5) || ((1 << (uint)bVar5 & 0x93U) == 0)) {
                    sVar8 = FUN_2c6033b4(iVar16,0,8);
                    if ((sVar8 == 0) &&
                       (sVar8 = (*(short *)(iVar16 + 0x18) + 1) - *(short *)(iVar16 + 0x14),
                       (int)uVar25 <= (int)sVar8 + (int)sVar9)) {
                      uVar25 = (uint)(short)(sVar8 + sVar9);
                    }
                    goto LAB_2c6084f2;
                  }
                }
                uVar22 = ((int)*(short *)(iVar16 + 0x18) - (int)*(short *)(param_1 + 0x14)) + 1;
                if ((int)uVar25 < (int)uVar22) {
                  uVar25 = uVar22;
                }
                uVar25 = (uint)(short)uVar25;
              }
LAB_2c6084f2:
              local_64 = local_64 + 1;
            } while (iVar15 != local_64);
            if (uVar25 != DAT_2c6086d4) {
              sVar9 = (short)uVar26 + (short)uVar25;
LAB_2c60862c:
              uVar26 = (uint)sVar9;
              if ((uVar26 != DAT_2c6086d4) && ((int)uVar21 < (int)uVar26)) {
                uVar21 = uVar26;
              }
            }
          }
        }
      }
      sVar8 = FUN_2c6033b4(param_1,0,2);
      sVar9 = FUN_2c6033b4(param_1,0,3);
      uVar21 = FUN_2c607f9c(uVar21,(int)sVar8,(int)sVar9,iVar14);
    }
    else {
      uVar23 = 0;
      uVar21 = (uint)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    }
    uVar13 = FUN_2c604a44(param_1);
    bVar5 = *(byte *)(param_1 + 0x23);
    if ((bVar5 & 2) == 0) {
      uVar7 = FUN_2c6033b4(param_1,bVar5 & 2,4);
      uVar25 = (uint)(short)uVar7;
      uVar26 = uVar25;
      if ((uVar7 & 0x6000) == 0x2000) {
        iVar14 = FUN_2c607440(iVar17);
        uVar22 = uVar25 & 0xffff9fff;
        if (uVar25 == 0x27d1) goto LAB_2c608340;
        if ((int)uVar22 < 0x7d1) {
          bVar5 = *(byte *)(iVar17 + 0x23) & 2;
          if (((*(byte *)(iVar17 + 0x23) & 2) == 0) &&
             (sVar8 = FUN_2c6033b4(iVar17,bVar5,4), sVar8 == 0x27d1)) {
            sVar8 = FUN_2c6033b4(param_1,bVar5,0x32);
            sVar9 = FUN_2c6033b4(param_1,bVar5,0x10);
            sVar10 = FUN_2c6033b4(param_1,bVar5,0x11);
            uVar26 = (int)(short)(sVar9 + sVar8 + sVar10 + sVar8);
          }
          else {
            if (1000 < (int)uVar22) {
              uVar22 = 1000 - uVar22;
            }
            uVar26 = (int)(short)((short)(int)((longlong)DAT_2c60833c *
                                               (longlong)(int)(uVar22 * iVar14) >> 0x25) -
                                 (short)((int)(uVar22 * iVar14) >> 0x1f));
          }
        }
      }
      else {
        iVar14 = FUN_2c607440(iVar17);
        if (uVar25 == 0x27d1) {
LAB_2c608340:
          iVar24 = 0;
          FUN_2c6051c4(param_1,0);
          sVar9 = FUN_2c6033b4(param_1,0,0x32);
          sVar8 = FUN_2c6033b4(param_1,0,0x10);
          sVar8 = sVar9 + sVar8;
          local_54 = (int)sVar8;
          sVar10 = FUN_2c6033b4(param_1,0,0x11);
          local_3a = 0;
          local_3c = -0x1fff;
          FUN_2c602340(param_1,0x2c,&local_3c);
          uVar26 = (uint)(short)(sVar8 + sVar10 + sVar9 + local_3a);
          iVar15 = FUN_2c6041fc(param_1);
          uVar22 = DAT_2c6086d4;
          if (iVar15 != 0) {
            do {
              local_58 = uVar23;
              local_5c = uVar21;
              iVar20 = *(int *)(**(int **)(param_1 + 8) + iVar24 * 4);
              iVar16 = FUN_2c606ba4(iVar20,DAT_2c6086d8);
              if (iVar16 == 0) {
                iVar16 = FUN_2c607214(iVar20);
                if ((iVar16 == 0) && (uVar21 = FUN_2c6033b4(iVar20,0,9), (uVar21 & 0xfc) != 0)) {
                  sVar11 = FUN_2c6033b4(iVar20,0,8);
                  if ((sVar11 == 0) &&
                     (sVar11 = (*(short *)(iVar20 + 0x1a) + 1) - *(short *)(iVar20 + 0x16),
                     (int)uVar22 <= sVar11 + local_54)) {
                    uVar22 = (uint)(short)(sVar11 + sVar8);
                  }
                }
                else {
                  uVar21 = ((int)*(short *)(iVar20 + 0x1a) - (int)*(short *)(param_1 + 0x16)) + 1;
                  if ((int)uVar22 < (int)uVar21) {
                    uVar22 = uVar21;
                  }
                  uVar22 = (uint)(short)uVar22;
                }
              }
              iVar24 = iVar24 + 1;
              uVar21 = local_5c;
              uVar23 = local_58;
            } while (iVar15 != iVar24);
            if ((uVar22 != DAT_2c6086d4) &&
               (uVar22 = (uint)(short)(sVar10 + sVar9 + (short)uVar22), (int)uVar26 < (int)uVar22))
            {
              uVar26 = uVar22;
            }
          }
        }
      }
      uVar23 = uVar25 == 0x27d1 | uVar23;
      sVar8 = FUN_2c6033b4(param_1,0,5);
      sVar9 = FUN_2c6033b4(param_1,0,6);
      uVar28 = FUN_2c607f9c(uVar26,(int)sVar8,(int)sVar9,iVar14);
    }
    else {
      uVar28 = (ulonglong)
               CONCAT14(bVar5,(int)(short)((*(short *)(param_1 + 0x1a) + 1) -
                                          *(short *)(param_1 + 0x16))) & 0x2ffffffff;
    }
    uVar18 = (undefined4)(uVar28 >> 0x20);
    if (uVar23 != 0) {
      FUN_2c60512c(param_1,uVar12,uVar13,0);
      uVar18 = extraout_r1_00;
    }
    if (((int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14)) != uVar21) ||
       ((int)(short)((*(short *)(param_1 + 0x1a) + 1) - *(short *)(param_1 + 0x16)) != (int)uVar28))
    {
      local_36 = FUN_2c600c2c(param_1);
      local_3c = *(short *)(param_1 + 0x14) - local_36;
      local_3a = *(short *)(param_1 + 0x16) - local_36;
      local_38 = *(short *)(param_1 + 0x18) + local_36;
      local_36 = local_36 + *(short *)(param_1 + 0x1a);
      FUN_2c6078f0(param_1,&local_3c);
      local_4c = *(undefined2 *)(param_1 + 0x14);
      local_4a = *(undefined2 *)(param_1 + 0x16);
      local_48 = *(undefined2 *)(param_1 + 0x18);
      local_46 = *(undefined2 *)(param_1 + 0x1a);
      FUN_2c60747c(iVar17,auStack_44);
      iVar14 = FUN_2c62a998(&local_4c,auStack_44,0);
      if (iVar14 == 0) {
        FUN_2c605b10(iVar17);
      }
      *(short *)(param_1 + 0x1a) = (short)uVar28 + *(short *)(param_1 + 0x16) + -1;
      cVar4 = FUN_2c6033b4(param_1,0,0x16);
      if (cVar4 == '\x01') {
        *(short *)(param_1 + 0x14) = (*(short *)(param_1 + 0x18) + 1) - (short)uVar21;
      }
      else {
        *(short *)(param_1 + 0x18) = (short)uVar21 + *(short *)(param_1 + 0x14) + -1;
      }
      FUN_2c602340(param_1,0x29,&local_4c);
      FUN_2c602340(iVar17,0x22,param_1);
      local_36 = FUN_2c600c2c(param_1);
      local_3c = *(short *)(param_1 + 0x14) - local_36;
      local_3a = *(short *)(param_1 + 0x16) - local_36;
      local_38 = *(short *)(param_1 + 0x18) + local_36;
      local_36 = local_36 + *(short *)(param_1 + 0x1a);
      FUN_2c6078f0(param_1,&local_3c);
      FUN_2c605b80(param_1,0);
      iVar15 = FUN_2c62a998(param_1 + 0x14,auStack_44,0);
      if ((iVar14 != 0) || (iVar15 != 0)) {
        FUN_2c605b10(iVar17);
      }
      FUN_2c600bac(param_1);
      uVar12 = 1;
      uVar18 = extraout_r1;
      goto LAB_2c6081b8;
    }
  }
  uVar12 = 0;
LAB_2c6081b8:
  if ((*DAT_2c608338 ^ local_34) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar12,uVar18,*DAT_2c608338 ^ local_34,0);
LAB_2c618682:
  uVar7 = (ushort)local_5c;
  local_5c = (uint)(uVar7 & 0xff);
  uVar21 = *(byte *)(uVar25 + 0x3c) & 3;
  bVar5 = (byte)(((uint)*(byte *)(uVar25 + 0x3c) << 0x1e) >> 0x1e);
  if (uVar21 == 1) {
    if (*DAT_2c6188b0 == 1) {
      uVar23 = (uint)*DAT_2c618b48;
      uVar21 = (uint)*DAT_2c618b4c;
    }
    else {
      uVar7 = *(ushort *)(uVar25 + 0x24);
      *DAT_2c6188b0 = bVar5;
      bVar5 = *(byte *)(uVar25 + 0x27);
      uVar23 = (uint)((ulonglong)DAT_2c6188a8 * (ulonglong)((uint)uVar7 * 0xc0) >> 0x20);
      uVar21 = (uVar23 & 0x3ffff) >> 2;
      *DAT_2c6188c4 = (short)((uVar23 << 0xe) >> 0x10);
      uVar26 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar5 * 0x33) >> 0x20);
      uVar23 = (uVar26 & 0xfff) >> 4;
      *DAT_2c6188bc = (byte)((uVar26 << 0x14) >> 0x18);
    }
    uVar6 = (undefined1)uVar23;
    uVar22 = param_1 & 0xff;
    uVar26 = param_1;
joined_r0x2c618892:
    iVar14 = iVar16;
    uVar2 = uVar6;
    uVar3 = uVar6;
    if (uVar26 != 0) {
LAB_2c6186f6:
      FUN_2c617f84(uVar21,uVar22,uVar23,(int)&local_5c + 1,(int)&local_5c + 2,(int)&local_5c + 3);
      iVar14 = iVar16;
      uVar6 = local_5c._3_1_;
      uVar2 = (char)(local_5c >> 0x10);
      uVar3 = (char)(local_5c >> 8);
    }
  }
  else {
    if (uVar21 == 2) {
      if (*DAT_2c6188b0 == 2) {
        uVar22 = (uint)*DAT_2c618b50;
        uVar21 = (uint)*DAT_2c618b4c;
      }
      else {
        uVar7 = *(ushort *)(uVar25 + 0x24);
        bVar1 = *(byte *)(uVar25 + 0x26);
        *DAT_2c6188b0 = bVar5;
        uVar23 = (uint)((ulonglong)DAT_2c6188a8 * (ulonglong)((uint)uVar7 * 0xc0) >> 0x20);
        uVar21 = (uVar23 & 0x3ffff) >> 2;
        *DAT_2c6188c4 = (short)((uVar23 << 0xe) >> 0x10);
        uVar23 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar1 * 0x33) >> 0x20);
        uVar22 = (uVar23 & 0xfff) >> 4;
        *DAT_2c6188b8 = (byte)((uVar23 << 0x14) >> 0x18);
      }
      uVar23 = param_1 & 0xff;
      uVar6 = (undefined1)param_1;
      uVar26 = uVar22;
      goto joined_r0x2c618892;
    }
    if (*DAT_2c6188b0 == uVar21) {
      uVar22 = (uint)*DAT_2c6188b8;
      uVar23 = (uint)*DAT_2c6188bc;
    }
    else {
      bVar1 = *(byte *)(uVar25 + 0x26);
      *DAT_2c6188b0 = bVar5;
      uVar22 = ((uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar1 * 0x33) >> 0x20) & 0xfff)
               >> 4;
      uVar19 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)*(byte *)(uVar25 + 0x27) * 0x33)
                     >> 0x20);
      iVar14 = local_64;
switchD_2c6086aa_caseD_1:
      local_64 = iVar14;
      uVar23 = (uVar19 & 0xfff) >> 4;
      *DAT_2c6188b8 = (byte)uVar22;
      *DAT_2c6188bc = (byte)((uVar19 << 0x14) >> 0x18);
    }
    uVar6 = (undefined1)uVar23;
    iVar14 = iVar16;
    uVar2 = uVar6;
    uVar3 = uVar6;
    if (uVar22 != 0) {
      uVar21 = param_1 * 6 & 0xffff;
      goto LAB_2c6186f6;
    }
  }
  local_4e = uVar3;
  local_4f = uVar2;
  iVar15 = (iVar14 << 8) >> 0x10;
  iVar16 = iVar14 + 0x438;
  local_4d = 0xff;
  local_50 = uVar6;
  FUN_2c62e208(iVar15);
  param_1 = param_1 + 3 & 0xffff;
  iVar14 = (int)(short)((short)((uint)iVar14 >> 8) + 0x5a);
  FUN_2c62e208(iVar14);
  FUN_2c62e208(iVar15);
  FUN_2c62e208(iVar14);
  FUN_2c6120f4(iVar17,&local_50,&stack0xffffffec,&stack0xfffffff0);
  if (iVar16 == DAT_2c6188c0) {
    FUN_2c613f44(auStack_44);
    FUN_2c613f44(&stack0xffffffd4);
    FUN_2c613ee4((int)((ulonglong)unaff_d8 >> 0x20));
    FUN_2c613ee4(unaff_s18);
    iVar17 = FUN_2c602400(local_64);
    uVar18 = FUN_2c602608(local_64);
    FUN_2c61314c(&stack0xffffffec);
    FUN_2c6004cc(iVar17,0x30000,&stack0xffffffec);
    if ((int)((uint)*(byte *)(iVar17 + 0x2c) << 0x1f) < 0) {
      FUN_2c62ed70(*(undefined2 *)(iVar17 + 0x24),*(undefined1 *)(iVar17 + 0x26),
                   *(undefined1 *)(iVar17 + 0x27));
    }
    FUN_2c617f00(&stack0xffffffd4,iVar17);
    FUN_2c61319c(uVar18,&stack0xffffffec,&stack0xffffffd4);
    if (*DAT_2c6183e0 == in_stack_00000044) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  goto LAB_2c618682;
}

