/* FUN_2c6329e4 @ 0x2c6329e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_2c6329e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  byte bVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  undefined4 auStack_90 [6];
  short sStack_78;
  short sStack_76;
  undefined1 uStack_6d;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  short sStack_50;
  short sStack_4e;
  undefined1 uStack_45;
  char *pcStack_34;
  char *pcStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = *_LAB_2c632ce4;
  pcVar10 = (char *)FUN_2c602110(_LAB_2c632ce8,param_2,param_3,0);
  if (pcVar10 == (char *)0x1) {
    iVar11 = FUN_2c602408(param_2);
    pcVar12 = (char *)FUN_2c602400(param_2);
    if (iVar11 != 0xe) {
      if ((iVar11 - 0xfU & 0xff) < 2) goto LAB_2c632c44;
      if (iVar11 != 8) {
        if ((iVar11 == 0x2a) || (iVar11 == 0x29)) {
          if (*_LAB_2c632ce4 == iStack_2c) {
            sVar5 = FUN_2c6033b4(pcVar12,0,1);
            sVar6 = FUN_2c6033b4(pcVar12,0,4);
            if ((sVar5 != 0x27d1) && (sVar6 != 0x27d1)) {
              return (char *)0x0;
            }
            pcVar12[0x22] = pcVar12[0x22] | 1;
            iVar11 = FUN_2c604178(pcVar12);
            *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) | 2;
            iVar11 = FUN_2c604188();
            if (*(int *)(iVar11 + 4) == 0) {
              return (char *)0x1;
            }
            FUN_2c62be4c();
            return (char *)0x1;
          }
          goto LAB_2c632d3a;
        }
        if (iVar11 == 0x2c) {
          iVar11 = FUN_2c602410(param_2);
          pcVar10 = (char *)FUN_2c6033b4(pcVar12,0,0x57);
          *(undefined2 *)(iVar11 + 2) = *(undefined2 *)(pcVar10 + 8);
        }
        else if (iVar11 == 0xd) {
          pcVar10 = (char *)FUN_2c602410(param_2);
          iVar11 = (int)*pcVar10;
          if ((iVar11 - 0x12U & 0xff) < 2) {
            iVar11 = FUN_2c606b94(*(undefined4 *)(pcVar12 + 0x24),1);
            if (iVar11 != 0) {
LAB_2c632d3e:
              if (*_LAB_2c632e94 != iStack_2c) goto LAB_2c632d3a;
              goto FUN_2c6326a4;
            }
            uVar18 = *(ushort *)(pcVar12 + 0x36) + 1;
            pcVar10 = (char *)0x0;
            if (uVar18 < *(ushort *)(pcVar12 + 0x34)) {
LAB_2c632d90:
              *(short *)(pcVar12 + 0x36) = (short)uVar18;
              if (*_LAB_2c632e94 == iStack_2c) {
                pcVar10 = (char *)0x0;
                if (*(int *)(pcVar12 + 0x24) != 0) {
                  iVar11 = FUN_2c6041dc(*(int *)(pcVar12 + 0x24),0,0,0);
                  pcVar10 = (char *)0x0;
                  if (iVar11 != 0) {
                    iVar21 = FUN_2c6073f8();
                    pcVar10 = (char *)FUN_2c607440(pcVar12);
                    if ((int)pcVar10 < iVar21) {
                      iVar21 = FUN_2c6033b4(iVar11,0,0x57);
                      sVar5 = *(short *)(iVar21 + 8);
                      sVar6 = FUN_2c6033b4(iVar11,0,0x59);
                      FUN_2c6051c4(*(undefined4 *)(pcVar12 + 0x24),
                                   (int)(short)(*(short *)(pcVar12 + 0x36) * (sVar6 + sVar5)),0);
                      pcVar10 = (char *)FUN_2c607df0(*(undefined4 *)(pcVar12 + 0x24));
                      return pcVar10;
                    }
                  }
                }
                return pcVar10;
              }
              goto LAB_2c632d3a;
            }
          }
          else if ((iVar11 == 0x14) || (iVar11 == 0x11)) {
            iVar11 = FUN_2c606b94(*(undefined4 *)(pcVar12 + 0x24),1);
            if (iVar11 != 0) goto LAB_2c632d3e;
            pcVar10 = (char *)0x0;
            if (*(ushort *)(pcVar12 + 0x36) != 0) {
              uVar18 = *(ushort *)(pcVar12 + 0x36) - 1;
              goto LAB_2c632d90;
            }
          }
          else {
            if (iVar11 == 0x1b) {
              *(undefined2 *)(pcVar12 + 0x36) = *(undefined2 *)(pcVar12 + 0x38);
              goto LAB_2c632c44;
            }
            if ((iVar11 == 10) && (pcVar10 = (char *)FUN_2c5ff66c(), pcVar12 != pcVar10)) {
              if (*_LAB_2c632e94 != iStack_2c) goto LAB_2c632d3a;
              goto FUN_2c632900;
            }
          }
        }
        else {
          pcVar10 = pcVar12;
          if (iVar11 == 0x15) {
            iVar11 = FUN_2c602400(param_2);
            uVar13 = FUN_2c602608(param_2);
            sVar5 = FUN_2c6033b4(iVar11,0,0x32);
            sVar6 = FUN_2c6033b4(iVar11,0,0x12);
            sVar7 = FUN_2c6033b4(iVar11,0,0x13);
            sVar8 = FUN_2c6033b4(iVar11,0,0x10);
            FUN_2c6129e4(auStack_90);
            FUN_2c6007ec(iVar11,0x20000,auStack_90);
            iVar21 = *(int *)(iVar11 + 0x28);
            if (iVar21 == 0) {
              iVar21 = FUN_2c62bf1c(0x80);
              FUN_2c632624(iVar11,iVar21,0x80);
            }
            bVar17 = *(byte *)(iVar11 + 0x3c);
            cVar4 = FUN_2c6033b4(iVar11,0,0x16);
            bVar2 = (bVar17 & 0xf) != 1;
            if (*(int *)(iVar11 + 0x2c) != 0) {
              iVar14 = FUN_2c614f58();
              if (iVar14 == 2) {
                FUN_2c62b954(&uStack_68,*(undefined4 *)(iVar11 + 0x2c),auStack_90[0],(int)sStack_76,
                             (int)sStack_78,0x1fff,uStack_6d);
                uVar22 = (uint)(short)uStack_68;
                uVar18 = (uint)(short)uStack_68._2_2_;
                uVar23 = uStack_68 & 0xffff;
                uVar16 = uStack_68._2_2_;
              }
              else {
                iVar15 = FUN_2c612838(*(undefined4 *)(iVar11 + 0x2c),&uStack_68);
                if (iVar15 == 1) {
                  uVar18 = uStack_68 >> 0x15;
                  uVar22 = (uStack_68 & 0x1fffff) >> 10;
                  uVar23 = uVar22;
                  uVar16 = (ushort)(uStack_68 >> 0x15);
                }
                else {
                  uVar18 = 0xffffffff;
                  uVar22 = 0xffffffff;
                  uVar23 = 0xffff;
                  uVar16 = 0xffff;
                }
              }
              if (cVar4 != '\x01' && bVar2) {
                sStack_94 = *(short *)(iVar11 + 0x18) - (sVar7 + sVar5);
                sStack_98 = sStack_94 - (short)uVar23;
                sStack_94 = sStack_94 + -1;
              }
              else {
                sStack_98 = *(short *)(iVar11 + 0x14) + sVar6 + sVar5;
                sStack_94 = sStack_98 + -1 + (short)uVar23;
              }
              if (iVar14 == 2) {
                sStack_96 = *(short *)(iVar11 + 0x16) + sVar5 + sVar8;
                sStack_92 = uVar16 + sStack_96 + -1;
                FUN_2c612a20(uVar13,auStack_90,&sStack_98,*(undefined4 *)(iVar11 + 0x2c),0);
              }
              else {
                sVar1 = *(short *)(iVar11 + 0x16);
                iVar14 = FUN_2c6073f8(iVar11);
                iVar14 = iVar14 - uVar18;
                if (iVar14 < 0) {
                  iVar14 = iVar14 + 1;
                }
                sStack_96 = sVar1 + (short)(iVar14 >> 1);
                sStack_92 = (uVar16 - 1) + sStack_96;
                FUN_2c614a0c(&uStack_68);
                FUN_2c6008ac(iVar11,0x20000,&uStack_68);
                if ((int)uVar22 < 0) {
                  uVar22 = uVar22 + 1;
                }
                if ((int)uVar18 < 0) {
                  uVar18 = uVar18 + 1;
                }
                uStack_64 = (undefined2)((int)uVar22 >> 1);
                uStack_62 = (undefined2)((int)uVar18 >> 1);
                uVar9 = FUN_2c6033b4(iVar11,0x20000,0x6d);
                uStack_68 = CONCAT22(uStack_68._2_2_,uVar9);
                FUN_2c614a3c(uVar13,&uStack_68,&sStack_98,*(undefined4 *)(iVar11 + 0x2c));
              }
            }
            FUN_2c6129e4(&uStack_68);
            FUN_2c6007ec(iVar11,0,&uStack_68);
            FUN_2c62b954(&sStack_9c,iVar21,uStack_68,(int)sStack_4e,(int)sStack_50,0x1fff,uStack_45)
            ;
            sStack_96 = *(short *)(iVar11 + 0x16) + sVar5 + sVar8;
            sStack_92 = sStack_96 + sStack_9a;
            if (*(int *)(iVar11 + 0x2c) == 0) {
              sVar5 = *(short *)(iVar11 + 0x14);
              iVar14 = FUN_2c6073ec(iVar11);
              iVar14 = iVar14 - sStack_9c;
              if (iVar14 < 0) {
                iVar14 = iVar14 + 1;
              }
              sStack_98 = sVar5 + (short)(iVar14 >> 1);
              sStack_94 = sStack_9c + sStack_98;
            }
            else if (cVar4 != '\x01' && bVar2) {
              sStack_98 = sVar6 + sVar5 + *(short *)(iVar11 + 0x14);
              sStack_94 = sStack_98 + sStack_9c;
            }
            else {
              sStack_94 = *(short *)(iVar11 + 0x18) - (sVar7 + sVar5);
              sStack_98 = sStack_94 - sStack_9c;
            }
            pcVar10 = (char *)FUN_2c612a20(uVar13,&uStack_68,&sStack_98,iVar21,0);
            if (*(int *)(iVar11 + 0x28) == 0) {
              pcVar10 = (char *)FUN_2c62c040(iVar21);
            }
          }
        }
        goto LAB_2c632a00;
      }
      if (*_LAB_2c632ce4 != iStack_2c) goto LAB_2c632d3a;
FUN_2c632900:
      iVar21 = *_LAB_2c6329e0;
      uVar13 = FUN_2c5ff4d8();
      iVar11 = FUN_2c5ff624();
      if (iVar11 != 0) {
        *(undefined2 *)(pcVar12 + 0x36) = *(undefined2 *)(pcVar12 + 0x38);
        if (*_LAB_2c6329e0 == iVar21) {
          iVar11 = *DAT_2c607e4c;
          FUN_2c600c2c();
          pcVar10 = (char *)FUN_2c6078f0(pcVar12,&stack0xffffffec);
          if (*DAT_2c607e4c != iVar11) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return pcVar10;
        }
        goto LAB_2c6329dc;
      }
      iVar11 = FUN_2c606b94(*(undefined4 *)(pcVar12 + 0x24),1);
      if (iVar11 != 0) {
        if (*_LAB_2c6329e0 != iVar21) goto LAB_2c6329dc;
FUN_2c6326a4:
        FUN_2c606b6c(pcVar12,1,0,0);
        uVar19 = *(undefined4 *)(pcVar12 + 0x24);
        uVar13 = FUN_2c604178(pcVar12);
        FUN_2c604458(uVar19,uVar13);
        FUN_2c604550(*(undefined4 *)(pcVar12 + 0x24),0xffffffff);
        FUN_2c606abc(*(undefined4 *)(pcVar12 + 0x24),1);
        FUN_2c602340(pcVar12,0x1f,0);
        uVar13 = 0;
        if (*(int *)(pcVar12 + 0x24) != 0) {
          uVar13 = FUN_2c6041dc(*(int *)(pcVar12 + 0x24),0);
        }
        FUN_2c63888c(uVar13,*(undefined4 *)(pcVar12 + 0x30));
        FUN_2c6070bc(*(undefined4 *)(pcVar12 + 0x24),0x27d1);
        FUN_2c608c7c(uVar13);
        iVar11 = FUN_2c6073ec(*(undefined4 *)(pcVar12 + 0x24));
        iVar21 = FUN_2c6073ec(pcVar12);
        if ((iVar11 <= iVar21) && (((pcVar12[0x3c] & 0xfU) == 4 || ((pcVar12[0x3c] & 0xfU) == 8))))
        {
          uVar20 = *(undefined4 *)(pcVar12 + 0x24);
          uVar19 = FUN_2c6073ec(pcVar12);
          FUN_2c6070bc(uVar20,uVar19);
        }
        sVar5 = FUN_2c6073f8(uVar13);
        sVar6 = FUN_2c6033b4(*(undefined4 *)(pcVar12 + 0x24),0,0x32);
        sVar7 = FUN_2c6033b4(*(undefined4 *)(pcVar12 + 0x24),0,0x10);
        sVar8 = FUN_2c6033b4(*(undefined4 *)(pcVar12 + 0x24),0,0x11);
        bVar17 = pcVar12[0x3c] & 0xf;
        iVar11 = (int)(short)(sVar7 + sVar8 + sVar6 * 2 + sVar5);
        if (bVar17 == 8) {
          sVar5 = *(short *)(pcVar12 + 0x1a);
          FUN_2c62a470();
          iVar21 = FUN_2c62a4a0();
          if (sVar5 + iVar11 <= iVar21) goto LAB_2c632772;
          sVar5 = *(short *)(pcVar12 + 0x16);
          FUN_2c62a470();
          iVar21 = FUN_2c62a4a0();
          if ((int)sVar5 <= iVar21 - *(short *)(pcVar12 + 0x1a)) {
            FUN_2c62a470();
            sVar5 = FUN_2c62a4a0();
            if ((short)(~*(ushort *)(pcVar12 + 0x1a) + sVar5) <= iVar11) {
              iVar11 = (int)(short)(~*(ushort *)(pcVar12 + 0x1a) + sVar5);
            }
            goto LAB_2c632772;
          }
          iVar21 = (int)(short)(*(short *)(pcVar12 + 0x16) + -1);
          if (iVar11 <= (short)(*(short *)(pcVar12 + 0x16) + -1)) {
            iVar21 = iVar11;
          }
          FUN_2c60710c(*(undefined4 *)(pcVar12 + 0x24),iVar21);
          FUN_2c63202c(pcVar12);
LAB_2c632876:
          FUN_2c608808(*(undefined4 *)(pcVar12 + 0x24),pcVar12,10);
        }
        else {
          if ((bVar17 == 4) && (sVar5 = *(short *)(pcVar12 + 0x16), sVar5 - iVar11 < 0)) {
            FUN_2c62a470();
            iVar21 = FUN_2c62a4a0();
            if (iVar21 - *(short *)(pcVar12 + 0x1a) <= (int)sVar5) {
              if (*(short *)(pcVar12 + 0x16) <= iVar11) {
                iVar11 = (int)*(short *)(pcVar12 + 0x16);
              }
              goto LAB_2c632772;
            }
            FUN_2c62a470();
            sVar5 = FUN_2c62a4a0();
            iVar21 = (int)(short)(sVar5 - *(short *)(pcVar12 + 0x1a));
            if (iVar11 <= (short)(sVar5 - *(short *)(pcVar12 + 0x1a))) {
              iVar21 = iVar11;
            }
            FUN_2c60710c(*(undefined4 *)(pcVar12 + 0x24),iVar21);
            FUN_2c63202c(pcVar12);
          }
          else {
LAB_2c632772:
            FUN_2c60710c(*(undefined4 *)(pcVar12 + 0x24),iVar11);
            FUN_2c63202c(pcVar12);
            if (bVar17 != 8) {
              if (bVar17 != 4) {
                if (bVar17 == 1) {
                  FUN_2c608808(*(undefined4 *)(pcVar12 + 0x24),pcVar12,0x10);
                }
                else if (bVar17 == 2) {
                  FUN_2c608808(*(undefined4 *)(pcVar12 + 0x24),pcVar12,0x13);
                }
                goto LAB_2c632796;
              }
              goto LAB_2c632876;
            }
          }
          FUN_2c608808(*(undefined4 *)(pcVar12 + 0x24),pcVar12,0xd);
        }
LAB_2c632796:
        FUN_2c608c7c(*(undefined4 *)(pcVar12 + 0x24));
        if (((byte)pcVar12[0x3c] & 0xf) - 1 < 2) {
          sVar5 = FUN_2c607394(*(undefined4 *)(pcVar12 + 0x24));
          iVar11 = FUN_2c6073d4(*(undefined4 *)(pcVar12 + 0x24));
          FUN_2c62a470();
          iVar21 = FUN_2c62a4a0();
          if (iVar21 <= iVar11) {
            uVar19 = *(undefined4 *)(pcVar12 + 0x24);
            FUN_2c62a470();
            sVar6 = FUN_2c62a4a0();
            FUN_2c606ff8(uVar19,(int)(short)(sVar6 + ((sVar5 + -1) - (short)iVar11)));
          }
        }
        iVar11 = FUN_2c604148(uVar13,0,*(undefined4 *)(pcVar12 + 0x30));
        if ((iVar11 != 2) && (iVar11 != 3)) {
          iVar11 = 1;
        }
        pcVar10 = (char *)FUN_2c6072bc(uVar13,iVar11,0);
        return pcVar10;
      }
      FUN_2c606b80(pcVar12,1);
      pcVar12[0x3a] = -1;
      pcVar12[0x3b] = -1;
      lv_obj_add_flag_invalidate(*(undefined4 *)(pcVar12 + 0x24),1);
      FUN_2c602340(pcVar12,0x20,0);
      if (*(short *)(pcVar12 + 0x38) == *(short *)(pcVar12 + 0x36)) {
LAB_2c6329b2:
        pcVar10 = (char *)FUN_2c5ff4e4(uVar13);
        if (pcVar10 == &Reset) {
          pcVar10 = (char *)FUN_2c606bc0(pcVar12);
          if (*_LAB_2c6329e0 == iVar21) {
            if (pcVar10 == (char *)0x0) {
              return (char *)0x0;
            }
            if ((int)((uint)(byte)pcVar10[0x1c] << 0x1e) < 0) {
              pcVar10[0x1c] = pcVar10[0x1c] & 0xfd;
              if ((*(int **)(pcVar10 + 0xc) != (int *)0x0) &&
                 (iVar11 = **(int **)(pcVar10 + 0xc), iVar11 != 0)) {
                uVar13 = FUN_2c602bd8();
                pcVar10 = (char *)FUN_2c602340(iVar11,0xe,uVar13);
                if (pcVar10 == (char *)0x1) {
                  pcVar10 = (char *)FUN_2c607df0(iVar11);
                  return pcVar10;
                }
              }
            }
            return pcVar10;
          }
          goto LAB_2c6329dc;
        }
      }
      else {
        *(short *)(pcVar12 + 0x38) = *(short *)(pcVar12 + 0x36);
        pcVar10 = (char *)FUN_2c602340(pcVar12,0x1c,&stack0xffffffe8);
        if (pcVar10 == (char *)0x1) {
          FUN_2c607df0(pcVar12);
          goto LAB_2c6329b2;
        }
      }
      if (*_LAB_2c6329e0 == iVar21) {
        return pcVar10;
      }
LAB_2c6329dc:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    FUN_2c606bc0();
    iVar11 = func_0x2c603124();
    FUN_2c5ff4d8();
    pcVar10 = (char *)FUN_2c5ff4e4();
    if (pcVar10 == &Reset) {
      if (iVar11 != 0) goto LAB_2c632d3e;
      *(undefined2 *)(pcVar12 + 0x36) = *(undefined2 *)(pcVar12 + 0x38);
LAB_2c632c44:
      FUN_2c606b80(pcVar12,1);
      pcVar12[0x3a] = -1;
      pcVar12[0x3b] = -1;
      lv_obj_add_flag_invalidate(*(undefined4 *)(pcVar12 + 0x24),1);
      piVar3 = DAT_2c60239c;
      if (*_LAB_2c632ce4 == iStack_2c) {
        uVar18 = *DAT_2c602398;
        if (pcVar12 == (char *)0x0) {
          uVar24 = 0x2000000001;
        }
        else {
          iVar11 = *DAT_2c60239c;
          iStack_2c = CONCAT31(iStack_2c._1_3_,0x20);
          uStack_28 = 0;
          *DAT_2c60239c = (int)&pcStack_34;
          pcStack_34 = pcVar12;
          pcStack_30 = pcVar12;
          uVar24 = FUN_2c602140();
          *piVar3 = iVar11;
        }
        if ((*DAT_2c602398 ^ uVar18) != 0) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail((char *)uVar24,(int)((ulonglong)uVar24 >> 0x20),*DAT_2c602398 ^ uVar18,0);
        }
        return (char *)uVar24;
      }
      goto LAB_2c632d3a;
    }
  }
LAB_2c632a00:
  if (*_LAB_2c632ce4 == iStack_2c) {
    return pcVar10;
  }
LAB_2c632d3a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

