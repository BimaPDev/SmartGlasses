/* FUN_2c630de8 @ 0x2c630de8 */

/* WARNING: Removing unreachable block (ram,0x2c600c16) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c630de8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined2 *puVar21;
  uint uVar22;
  uint uVar23;
  int unaff_r6;
  uint uVar24;
  int iVar25;
  undefined1 auStack_c8 [2];
  short sStack_c6;
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [8];
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  undefined4 uStack_ac;
  short sStack_94;
  short sStack_92;
  byte bStack_89;
  undefined1 auStack_84 [28];
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = *DAT_2c631110;
  pcVar13 = (char *)FUN_2c602110(_LAB_2c631114,param_2,param_3,0);
  if (pcVar13 == (char *)0x1) {
    iVar14 = FUN_2c602408(param_2);
    pcVar15 = (char *)FUN_2c602400(param_2);
    if (iVar14 != 0x2c) {
      if (iVar14 == 0x2a) {
        iVar14 = FUN_2c6041dc(pcVar15,0);
        if (iVar14 != 0) {
          FUN_2c602340(iVar14,0x2a,0);
        }
        FUN_2c607588(pcVar15);
        if (*DAT_2c631110 != iStack_2c) goto LAB_2c6312e6;
        bVar3 = false;
      }
      else {
        if (iVar14 != 0x29) {
          if (iVar14 == 1) {
            pcVar15[0x2a] = pcVar15[0x2a] & 0xfd;
            iVar16 = FUN_2c6041dc(pcVar15,0);
            iVar14 = _LAB_2c631118;
            if (*DAT_2c631110 == iStack_2c) {
              uStack_28 = 0;
              piVar11 = (int *)FUN_2c62ca10(DAT_2c62e8e0);
              uVar17 = DAT_2c62e8e0;
              if (piVar11 != (int *)0x0) {
                pcVar13 = (char *)0x0;
                do {
                  piVar12 = (int *)FUN_2c62ca20(uVar17,piVar11);
                  if (((*piVar11 == iVar16) || (iVar16 == 0)) &&
                     (iVar14 == 0 || piVar11[1] == iVar14)) {
                    pcVar13 = (char *)0x1;
                    FUN_2c62c998(uVar17,piVar11);
                    if ((code *)piVar11[4] != (code *)0x0) {
                      (*(code *)piVar11[4])(piVar11);
                    }
                    FUN_2c62bea8(piVar11);
                    *DAT_2c62e8e4 = 1;
                    iVar19 = FUN_2c62ca10(uVar17);
                    if (iVar19 == 0) {
                      FUN_2c62be40(*DAT_2c62e8e8);
                    }
                    else {
                      FUN_2c62be4c(*DAT_2c62e8e8);
                    }
                  }
                  piVar11 = piVar12;
                } while (piVar12 != (int *)0x0);
                return pcVar13;
              }
              return (char *)0x0;
            }
            goto LAB_2c6312e6;
          }
          if (iVar14 == 2) {
            uVar17 = FUN_2c5ff4d8();
            pcVar13 = (char *)func_0x2c5ff63c(uVar17,&uStack_ac);
            if (uStack_ac._2_2_ != 0) {
              uVar17 = FUN_2c6041dc(pcVar15,0);
              sVar7 = FUN_2c607394();
              pcVar13 = (char *)FUN_2c606ff8(uVar17,(int)(short)(sVar7 + uStack_ac._2_2_));
              pcVar15[0x2a] = pcVar15[0x2a] | 2;
            }
          }
          else if ((iVar14 == 8) || (iVar14 == 3)) {
            iVar14 = FUN_2c6041dc(pcVar15,0);
            pcVar13 = (char *)0x0;
            if (iVar14 != 0) {
              uVar17 = FUN_2c5ff4d8();
              iVar16 = FUN_2c5ff4e4();
              if (((iVar16 == 4) || (iVar16 == 2)) &&
                 (*(undefined2 *)(pcVar15 + 0x28) = *(undefined2 *)(pcVar15 + 0x26), iVar16 == 4)) {
                uVar18 = FUN_2c606bc0(pcVar15);
                iVar16 = func_0x2c603124();
                if (iVar16 != 0) {
                  FUN_2c603048(uVar18,0);
                }
              }
              iVar16 = FUN_2c5ff4e4(uVar17);
              if ((iVar16 == 1) || (iVar16 = FUN_2c5ff4e4(uVar17), iVar16 == 3)) {
                uVar24 = (byte)pcVar15[0x2a] & 2;
                if ((pcVar15[0x2a] & 2U) == 0) {
                  FUN_2c5ff5cc(uVar17,&sStack_b4);
                  sStack_b2 = sStack_b2 - *(short *)(iVar14 + 0x16);
                  sStack_b4 = sStack_b4 - *(short *)(iVar14 + 0x14);
                  uVar22 = FUN_2c637598(iVar14,&sStack_b4);
                  uVar17 = FUN_2c63736c(iVar14);
                  puVar4 = _LAB_2c6312f0;
                  uStack_ac = uVar24;
                  if (uVar22 != 0) {
                    uVar23 = uVar24;
                    do {
                      uVar5 = uStack_ac;
                      iVar14 = (*(code *)*puVar4)(uVar17,&uStack_ac);
                      if ((iVar14 == 10) && (uVar22 != uVar5)) {
                        uVar23 = (uint)(short)((short)uVar23 + 1);
                      }
                      uVar24 = uVar24 + 1;
                    } while (uVar22 != uVar24);
                    goto LAB_2c63118e;
                  }
                  uVar23 = 0;
                }
                else {
                  iVar16 = FUN_2c6033b4(pcVar15,0,0x57);
                  sVar9 = FUN_2c6033b4(pcVar15,0,0x59);
                  sVar2 = *(short *)(pcVar15 + 0x16);
                  sVar7 = *(short *)(iVar16 + 8);
                  iVar16 = (int)*(short *)(pcVar15 + 0x1a) - (int)sVar2;
                  sVar8 = *(short *)(iVar14 + 0x16);
                  if (iVar16 < 0) {
                    iVar16 = iVar16 + 1;
                  }
                  sVar10 = func_0x2c609924(uVar17,0xc);
                  uVar24 = ((int)(short)(sVar2 + (short)(iVar16 >> 1)) -
                           (int)(short)(sVar8 + sVar10)) / (int)(short)(sVar9 + sVar7);
                  uVar24 = uVar24 & ~((int)uVar24 >> 0x1f);
                  if ((int)(uint)*(ushort *)(pcVar15 + 0x24) <= (int)uVar24) {
                    uVar24 = *(ushort *)(pcVar15 + 0x24) - 1;
                  }
                  uVar23 = (uint)(short)uVar24;
LAB_2c63118e:
                  if ((int)uVar23 < 0) goto LAB_2c631090;
                }
                func_0x2c630d74(pcVar15,uVar23 & 0xffff,1);
              }
LAB_2c631090:
              uStack_ac = (uint)*(ushort *)(pcVar15 + 0x26);
              pcVar13 = (char *)FUN_2c602340(pcVar15,0x1c,&uStack_ac);
            }
          }
          else if (iVar14 == 0xe) {
            FUN_2c606bc0();
            iVar14 = func_0x2c603124();
            FUN_2c5ff4d8();
            pcVar13 = (char *)FUN_2c5ff4e4();
            if ((pcVar13 == &Reset) && (iVar14 == 0)) goto LAB_2c631030;
            *(undefined2 *)(pcVar15 + 0x28) = *(undefined2 *)(pcVar15 + 0x26);
          }
          else {
            pcVar13 = pcVar15;
            if (iVar14 == 0xf) {
LAB_2c631030:
              if (*(short *)(pcVar15 + 0x26) != *(short *)(pcVar15 + 0x28)) {
                *(short *)(pcVar15 + 0x26) = *(short *)(pcVar15 + 0x28);
                if (*DAT_2c631110 != iStack_2c) goto LAB_2c6312e6;
                bVar3 = true;
                goto FUN_2c630910;
              }
            }
            else if (iVar14 == 0xd) {
              pcVar13 = (char *)FUN_2c602410(param_2);
              iVar14 = (int)*pcVar13;
              if ((iVar14 - 0x12U & 0xff) < 2) {
                if (*(ushort *)(pcVar15 + 0x26) + 1 < (uint)*(ushort *)(pcVar15 + 0x24)) {
                  uVar1 = *(undefined2 *)(pcVar15 + 0x28);
                  pcVar13 = (char *)func_0x2c630d74(pcVar15,*(ushort *)(pcVar15 + 0x26) + 1 & 0xffff
                                                    ,1);
                  *(undefined2 *)(pcVar15 + 0x28) = uVar1;
                }
              }
              else if (((iVar14 == 0x14) || (iVar14 == 0x11)) && (*(short *)(pcVar15 + 0x26) != 0))
              {
                uVar1 = *(undefined2 *)(pcVar15 + 0x28);
                pcVar13 = (char *)func_0x2c630d74(pcVar15,*(short *)(pcVar15 + 0x26) + -1,1);
                *(undefined2 *)(pcVar15 + 0x28) = uVar1;
              }
            }
            else {
              if (iVar14 == 0x13) {
                iVar14 = FUN_2c6041dc(pcVar15,0);
                if (*_LAB_2c6312ec == iStack_2c) {
                  iVar16 = *DAT_2c600c28;
                  sVar7 = 0;
                  if (*(int *)(iVar14 + 8) != 0) {
                    sVar7 = *(short *)(*(int *)(iVar14 + 8) + 0x16);
                  }
                  pcVar13 = (char *)FUN_2c602340(iVar14,0x13,&stack0xffffffea);
                  if (sVar7 == 0) {
                    iVar19 = *(int *)(iVar14 + 8);
                  }
                  else {
                    pcVar13 = (char *)FUN_2c607df0(iVar14);
                    iVar19 = *(int *)(iVar14 + 8);
                  }
                  if (iVar19 != 0) {
                    *(undefined2 *)(iVar19 + 0x16) = 0;
                  }
                  if (sVar7 != 0) {
                    pcVar13 = (char *)FUN_2c607df0(iVar14);
                  }
                  if (*DAT_2c600c28 == iVar16) {
                    return pcVar13;
                  }
                    /* WARNING: Subroutine does not return */
                  stack_chk_fail();
                }
                goto LAB_2c6312e6;
              }
              if ((iVar14 == 0x15) || (iVar14 == 0x18)) {
                iVar14 = FUN_2c602408(param_2);
                pcVar15 = (char *)FUN_2c602400(param_2);
                if (iVar14 == 0x15) {
                  uVar17 = FUN_2c602608(param_2);
                  FUN_2c6307e4(pcVar15,&uStack_ac);
                  FUN_2c61314c(auStack_84);
                  FUN_2c6004cc(pcVar15,0x40000,auStack_84);
                  pcVar13 = (char *)FUN_2c61319c(uVar17,auStack_84,&uStack_ac);
                }
                else {
                  pcVar13 = pcVar15;
                  if (iVar14 == 0x18) {
                    iVar14 = FUN_2c602608(param_2);
                    FUN_2c6129e4(&uStack_ac);
                    FUN_2c6007ec(pcVar15,0x40000,&uStack_ac);
                    FUN_2c6307e4(pcVar15,auStack_c4);
                    iVar16 = FUN_2c62a6b4(auStack_bc,*(undefined4 *)(iVar14 + 8),auStack_c4);
                    pcVar13 = (char *)0x0;
                    if (iVar16 != 0) {
                      iVar16 = FUN_2c6041dc(pcVar15,0);
                      uVar17 = FUN_2c63736c();
                      uVar24 = uStack_ac;
                      uVar18 = FUN_2c6073ec(pcVar15);
                      FUN_2c62b954(auStack_c8,uVar17,uVar24,(int)sStack_92,(int)sStack_94,uVar18,2);
                      iVar19 = FUN_2c6073f8(pcVar15);
                      sVar7 = *(short *)(pcVar15 + 0x16);
                      sVar8 = *(short *)(iVar16 + 0x16);
                      iVar25 = (iVar19 - (iVar19 >> 0x1f)) * 0x8000;
                      iVar19 = FUN_2c6073f8(iVar16);
                      iVar20 = FUN_2c6033b4(pcVar15,0,0x57);
                      sVar2 = (short)(((int)*(short *)(uStack_ac + 8) - (int)*(short *)(iVar20 + 8))
                                     / 2);
                      sStack_c6 = sStack_c6 - sVar2;
                      sVar2 = (*(short *)(pcVar15 + 0x16) + (short)((uint)iVar25 >> 0x10) +
                              (short)((int)sStack_c6 *
                                      ((((int)sVar8 - ((int)sVar7 + (iVar25 >> 0x10))) * 0x4000) /
                                      iVar19) >> 0xe)) - sVar2;
                      sVar7 = FUN_2c6033b4(pcVar15,0,0x32);
                      sVar8 = FUN_2c6033b4(pcVar15,0,0x12);
                      sVar9 = FUN_2c6033b4(pcVar15,0,0x13);
                      sStack_b4 = sVar8 + sVar7 + *(short *)(pcVar15 + 0x14);
                      sStack_b0 = *(short *)(pcVar15 + 0x18) - (sVar9 + sVar7);
                      bStack_89 = bStack_89 | 2;
                      sStack_ae = sVar2 + sStack_c6;
                      uVar18 = *(undefined4 *)(iVar14 + 8);
                      *(undefined1 **)(iVar14 + 8) = auStack_bc;
                      sStack_b2 = sVar2;
                      uVar17 = FUN_2c63736c(iVar16);
                      pcVar13 = (char *)FUN_2c612a20(iVar14,&uStack_ac,&sStack_b4,uVar17,0);
                      *(undefined4 *)(iVar14 + 8) = uVar18;
                    }
                  }
                }
              }
            }
          }
          goto LAB_2c630e04;
        }
        if (*DAT_2c631110 != iStack_2c) goto LAB_2c6312e6;
        bVar3 = false;
      }
FUN_2c630910:
      iVar16 = *_LAB_2c630a88;
      iVar14 = FUN_2c6041dc(pcVar15,0,0,0);
      pcVar13 = (char *)0x0;
      if (iVar14 != 0) {
        uVar17 = FUN_2c63736c();
        iVar19 = FUN_2c604148(iVar14,0,uVar17);
        if (iVar19 == 2) {
          iVar20 = FUN_2c607404(pcVar15);
          iVar19 = FUN_2c6073ec(iVar14);
          iVar20 = iVar20 - iVar19;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          FUN_2c606fa8(iVar14,(iVar20 << 0xf) >> 0x10);
        }
        else if (iVar19 == 3) {
          sVar7 = FUN_2c607404(pcVar15);
          sVar8 = FUN_2c6073ec(iVar14);
          FUN_2c606fa8(iVar14,(int)(short)(sVar7 - sVar8));
        }
        else if (iVar19 == 1) {
          FUN_2c606fa8(iVar14,0);
        }
        iVar19 = FUN_2c6033b4(pcVar15,0,0x57);
        sVar8 = FUN_2c6033b4(pcVar15,0,0x59);
        sVar7 = *(short *)(iVar19 + 8);
        iVar20 = (int)sVar7;
        iVar19 = FUN_2c607440(pcVar15);
        uVar6 = FUN_2c6033b4(pcVar15,0,100);
        if ((!bVar3) || (uVar6 == 0)) {
          if ((int)((uint)(byte)pcVar15[0x2a] << 0x1f) < 0) {
            FUN_2c630880(pcVar15);
          }
          sVar2 = *(short *)(pcVar15 + 0x26);
          if (iVar19 < 0) {
            iVar19 = iVar19 + 1;
          }
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          FUN_2c62e838(iVar14,_LAB_2c630a8c);
          iVar19 = (int)(short)((short)(iVar19 >> 1) -
                               (sVar2 * (sVar8 + sVar7) + (short)(iVar20 >> 1)));
          if (*_LAB_2c630a88 == iVar16) {
            iVar16 = *DAT_2c607044;
            pcVar13 = (char *)FUN_2c603c78(iVar14,8,&stack0xffffffe8,0);
            if (pcVar13 == (char *)0x1) {
              if (unaff_r6 == iVar19) goto LAB_2c607024;
            }
            else if (pcVar13 != (char *)0x0) goto LAB_2c607024;
            pcVar13 = (char *)FUN_2c606cd0(iVar14,iVar19,0);
LAB_2c607024:
            if (*DAT_2c607044 == iVar16) {
              return pcVar13;
            }
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          goto LAB_2c630a84;
        }
        sVar2 = *(short *)(pcVar15 + 0x26);
        if (iVar19 < 0) {
          iVar19 = iVar19 + 1;
        }
        if (iVar20 < 0) {
          iVar20 = iVar20 + 1;
        }
        FUN_2c62e7b4(&iStack_68);
        uStack_64 = _LAB_2c630a8c;
        iStack_68 = iVar14;
        uStack_48 = FUN_2c607394(iVar14);
        uStack_3c = (uint)uVar6;
        iStack_40 = (int)(short)((short)(iVar19 >> 1) -
                                (sVar2 * (sVar7 + sVar8) + (short)(iVar20 >> 1)));
        uStack_5c = _LAB_2c630a90;
        uStack_4c = _LAB_2c630a94;
        uStack_44 = uStack_48;
        pcVar13 = (char *)FUN_2c62e8ec(&iStack_68);
      }
      if (*_LAB_2c630a88 == iVar16) {
        return pcVar13;
      }
LAB_2c630a84:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    puVar21 = (undefined2 *)FUN_2c602410(param_2);
    pcVar13 = (char *)FUN_2c63076c(pcVar15);
    *puVar21 = (short)pcVar13;
  }
LAB_2c630e04:
  if (*DAT_2c631110 == iStack_2c) {
    return pcVar13;
  }
LAB_2c6312e6:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

