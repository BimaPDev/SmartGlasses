/* FUN_2c4594f2 @ 0x2c4594f2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c459a38) */
/* WARNING: Removing unreachable block (ram,0x2c458f34) */
/* WARNING: Removing unreachable block (ram,0x2c458f2c) */
/* WARNING: Removing unreachable block (ram,0x2c4c1d78) */
/* WARNING: Removing unreachable block (ram,0x2c459552) */
/* WARNING: Removing unreachable block (ram,0x2c459562) */
/* WARNING: Removing unreachable block (ram,0x2c459572) */
/* WARNING: Removing unreachable block (ram,0x2c4594ea) */
/* WARNING: Removing unreachable block (ram,0x2c459674) */
/* WARNING: Removing unreachable block (ram,0x2c459c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_2c4594f2(undefined4 param_1,uint param_2,int *param_3,int param_4,int param_5,uint *param_6,
            undefined4 param_7,int param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *unaff_r4;
  int *piVar13;
  uint *unaff_r5;
  uint uVar14;
  int unaff_r6;
  uint *puVar15;
  int unaff_r7;
  int iVar16;
  undefined4 *puVar17;
  int unaff_r8;
  int unaff_r9;
  int *unaff_r10;
  undefined4 unaff_r11;
  byte *in_r12;
  byte *unaff_lr;
  undefined4 unaff_pc;
  bool bVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  int *piVar22;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar23;
  undefined8 in_d18;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 uVar24;
  uint in_stack_00000020;
  int in_stack_00000024;
  int iStack0000003c;
  int in_stack_0000004c;
  int in_stack_00000050;
  uint in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  int in_stack_00000084;
  byte *in_stack_0000028c;
  undefined2 in_stack_000002c9;
  byte in_stack_00000360;
  char in_stack_0000036d;
  undefined1 in_stack_0000037c;
  undefined1 in_stack_00000388;
  undefined2 in_stack_00000394;
  undefined1 in_stack_00000424;
  int in_stack_00000434;
  undefined1 in_stack_00000484;
  undefined1 in_stack_00000568;
  undefined2 in_stack_0000056c;
  undefined2 in_stack_00000570;
  undefined2 in_stack_00000574;
  undefined1 in_stack_0000057c;
  code *in_stack_000005f8;
  code *in_stack_000005fc;
  code *in_stack_00000600;
  code *in_stack_00000604;
  code *in_stack_0000061c;
  code *in_stack_0000064c;
  uint uStack_10;
  uint uStack_c;
  
  piVar13 = _LAB_2c459780;
  uStack_c = param_4;
  puVar7 = &uStack_10;
  uStack_10 = param_2;
  if (((int)param_2 >> 0x1e & 1U) == 0) {
    puVar15 = (uint *)(unaff_r6 + 0x4c);
    uVar3 = *(undefined1 *)(param_4 + 0xe);
    uVar14 = 0;
    iVar5 = param_4 * 0x10000;
    if (iVar5 != 0) goto LAB_2c4595e4;
    *unaff_r4 = 0;
    unaff_r4[1] = param_4;
    unaff_r4[2] = unaff_r4;
    unaff_r4[3] = unaff_r5;
    puVar15 = *(uint **)((int)unaff_r4 + 5);
    bVar21 = SCARRY4((int)unaff_r4 + -0x23,0x7a);
    uVar12 = (int)unaff_r4 + 0x57;
    if (uVar12 == 0) {
      param_3 = (int *)&stack0x000002c8;
      unaff_r5 = (uint *)(int)*(char *)(param_4 + (int)puVar15);
      iVar16 = *(int *)in_stack_0000028c;
      goto LAB_2c45964c;
    }
    uVar10 = _MemManage >> 8 & 0xff;
    *(int **)((int)_LAB_2c459780 + (int)puVar15) = _LAB_2c459780;
    *(uint *)uVar12 = uVar12;
    *(uint **)((int)unaff_r4 + 0x5b) = puVar15;
    *(char *)(uVar12 + (int)puVar15) = (char)in_stack_0000028c;
    puVar4 = (undefined1 *)0x0;
LAB_2c459180:
    uVar14 = uVar14 >> 0x12;
    iVar5 = (int)*(short *)(uVar12 * 2);
LAB_2c459186:
    *(uint *)(uVar14 + 4) = uVar12;
    iVar16 = iVar5 >> 6;
    if (uVar10 == 0) {
      if (bVar21) {
        *(undefined1 **)(uVar14 + (int)piVar13) = puVar4;
        piVar13 = (int *)((int)piVar13 + 0xfd);
        in_stack_0000028c = (byte *)(iVar5 + -6);
      }
      else {
        iVar5 = *(int *)(iVar16 + 100);
      }
      cVar19 = '\x01';
      *piVar13 = iVar16;
      func_0x2bd3ed5e(0,puVar4,iVar5);
      in_stack_0000028c[0xa7] = 0xc1;
      *(int **)(_LAB_2c4591d8 + 0x2c) = piVar13;
      iVar5 = _LAB_2c459c50;
      piVar13 = *(int **)((int)puVar7 + 0x2d8);
      if (cVar19 != '\0') {
        coprocessor_loadlong(1,in_cr3,puVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar17 = *(undefined4 **)((int)puVar7 + 0x308);
      *(short *)piVar13 = (short)_LAB_2c459c50;
      puVar8 = (undefined4 *)(uint)*(ushort *)(iVar5 + 0x2a);
      iVar16 = piVar13[0x12];
      *piVar13 = iVar5;
      piVar13[1] = iVar16;
      piVar13[2] = 0x2c45985c;
      piVar13[3] = (int)puVar17;
      piVar22 = piVar13 + 4;
      *puVar8 = piVar22;
      *puVar17 = piVar22;
      puVar17[1] = (uint)piVar13 >> 0x19;
      puVar17[2] = puVar17;
      piVar6 = (int *)((int)piVar13 + 0x33);
      *(short *)(puVar8 + 0xe) = (short)(puVar8 + 1);
      uVar14 = _LAB_2c459b40;
      if ((int *)0xffffffdc < piVar22) {
        iVar5 = *(int *)((int)piVar13 + 0x5b) + -0x93;
        *(undefined4 *)((int)puVar7 + -0x13c) = 0x2c45985c;
        uRam0000000d = 0;
        _MemManage = 0x2c459919;
        uRam00000016 = 0;
        _MasterStackPointer = iVar5;
        _Reset = piVar6;
        _NMI = iVar16;
        *(char *)(_LAB_2c459b40 + 7) = (char)piVar6;
        *(char *)((uVar14 >> 8) + 0x1e) = (char)iVar5;
        coprocessor_moveto(7,0,0,unaff_r11,in_cr15,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *piVar6 = (int)piVar6;
      *(undefined4 *)((int)piVar13 + 0x37) = 0x2c45985c;
      *piVar6 = iVar5;
      *(int **)((int)piVar13 + 0x37) = piVar6;
      *(undefined4 **)((int)piVar13 + 0x3b) = puVar8 + 1;
      *(uint *)((int)piVar13 + 0x3f) = (uint)piVar13 >> 0x19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar16 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((int)param_2 < 0) {
      while( true ) {
        *(undefined4 *)(unaff_r9 + 0x10) = 0xffffffff;
        iVar5 = *unaff_r10;
        if (iVar5 == 0) break;
        bVar21 = iVar5 != 1;
        iVar16 = 1;
        if (bVar21) {
          iVar16 = unaff_r10[1];
        }
        bVar18 = iVar16 != 0;
        bVar20 = unaff_r10[1] != 1;
        if (bVar18 && (bVar21 && bVar20)) {
          iVar5 = 1;
        }
        if (!bVar18 || (!bVar21 || !bVar20)) {
          iVar5 = 0;
        }
        if (!bVar18 || (!bVar21 || !bVar20)) break;
        uVar23 = FUN_2c4f25f0();
        if (((int)uVar23 != 0) && (((int)uVar23 != -0x1c || (unaff_r8 != 0)))) goto LAB_2c4f3366;
        iVar16 = *(int *)(unaff_r9 + 0x68);
        iStack0000003c = -1;
        iVar11 = *(int *)(iVar16 + 0x48);
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar16 + 0x1c);
        }
        uVar23 = (**(code **)(iVar16 + 0xc))();
        if (((int)uVar23 == 0) && (uVar23 = FUN_2c4f1344(), (int)uVar23 == 0)) {
          uStack_c = in_stack_00000024;
          uStack_10 = in_stack_00000020;
          param_5 = unaff_r7;
          param_6 = unaff_r5;
          uVar23 = FUN_2c4f1588();
          if (((int)uVar23 == 0) &&
             (((unaff_r10[6] == -1 || (unaff_r10[7] == -1)) ||
              (uVar23 = FUN_2c4f148c(), (int)uVar23 == 0)))) {
            in_stack_00000064 = 0;
            in_stack_00000068 = 0;
            in_stack_0000006c = 0;
            if (iVar5 == 0) {
              in_stack_00000064 = *(uint *)(unaff_r9 + 0x3c);
              in_stack_00000068 = *(uint *)(unaff_r9 + 0x40);
              in_stack_0000006c = *(uint *)(unaff_r9 + 0x44);
              puVar7 = &stack0x00000064;
              puVar15 = (uint *)(unaff_r9 + 0x30);
              do {
                puVar9 = puVar15 + 1;
                *puVar7 = *puVar7 ^ *puVar15;
                puVar7 = puVar7 + 1;
                puVar15 = puVar9;
              } while (puVar9 != (uint *)(unaff_r9 + 0x3c));
            }
            in_stack_00000068 = in_stack_00000068 ^ *(uint *)(unaff_r9 + 0x4c);
            in_stack_0000006c = in_stack_0000006c ^ *(uint *)(unaff_r9 + 0x50);
            in_stack_00000064 = DAT_2c4f37a4 & (in_stack_00000064 ^ *(uint *)(unaff_r9 + 0x48));
            uVar23 = FUN_2c4f23d8();
            iVar16 = DAT_2c4f37b0;
            if ((int)uVar23 != 0) goto LAB_2c4f3366;
            if ((in_stack_00000068 != 0 || in_stack_00000064 != 0) || in_stack_0000006c != 0) {
              if (iVar11 - 8U < 0x10) {
                uVar23 = 0xffffffe4;
                goto LAB_2c4f3366;
              }
              uVar23 = FUN_2c4f1344();
              if (((int)uVar23 != 0) || (uVar23 = FUN_2c4f1344(), (int)uVar23 != 0))
              goto LAB_2c4f3360;
              iStack0000003c = iVar16;
            }
            uVar23 = FUN_2c4f190c();
            if ((int)uVar23 == 0) {
              iVar16 = *unaff_r10;
              *(short *)(unaff_r10 + 5) = (short)unaff_r5 - (short)unaff_r7;
              *unaff_r10 = unaff_r10[1];
              unaff_r10[1] = iVar16;
              unaff_r10[3] = 0;
              unaff_r10[4] = iStack0000003c;
              *(undefined4 *)(unaff_r9 + 0x50) = 0;
              *(undefined4 *)(unaff_r9 + 0x48) = 0;
              *(undefined4 *)(unaff_r9 + 0x4c) = 0;
              if (iVar5 == 0) {
                uVar23 = 0;
                *(undefined4 *)(unaff_r9 + 0x3c) = *(undefined4 *)(unaff_r9 + 0x30);
                *(undefined4 *)(unaff_r9 + 0x40) = *(undefined4 *)(unaff_r9 + 0x34);
                *(undefined4 *)(unaff_r9 + 0x44) = *(undefined4 *)(unaff_r9 + 0x38);
              }
              else {
                if (((in_stack_0000004c == *(int *)(unaff_r9 + 0x20)) ||
                    (in_stack_00000050 == *(int *)(unaff_r9 + 0x24) ||
                     in_stack_0000004c == *(int *)(unaff_r9 + 0x24))) ||
                   (*(int *)(unaff_r9 + 0x20) == in_stack_00000050)) {
                  *(int *)(unaff_r9 + 0x20) = *unaff_r10;
                  *(int *)(unaff_r9 + 0x24) = unaff_r10[1];
                }
                for (piVar13 = *(int **)(unaff_r9 + 0x28); piVar13 != (int *)0x0;
                    piVar13 = (int *)*piVar13) {
                  if (((in_stack_0000004c == piVar13[2]) ||
                      (in_stack_0000004c == piVar13[3] || in_stack_00000050 == piVar13[3])) ||
                     (piVar13[2] == in_stack_00000050)) {
                    piVar13[2] = *unaff_r10;
                    piVar13[3] = unaff_r10[1];
                  }
                  if ((*(char *)((int)piVar13 + 6) == '\x02') &&
                     (((in_stack_0000004c == piVar13[0xb] ||
                       (in_stack_00000050 == piVar13[0xc] || in_stack_0000004c == piVar13[0xc])) ||
                      (in_stack_00000050 == piVar13[0xb])))) {
                    piVar13[0xb] = *unaff_r10;
                    piVar13[0xc] = unaff_r10[1];
                  }
                }
                iVar5 = FUN_2c4f20fc();
                if (iVar5 < 0) {
                  uVar24 = CONCAT44(iVar5 + 2,iVar5);
                  if (iVar5 + 2 == 0) goto LAB_2c4f3396;
                }
                else {
                  if (iVar5 != -2) {
                    uVar14 = *(int *)(unaff_r9 + 0x30) + 1;
                    uVar12 = uVar14 & 0x7fffffff | (uint)((uVar14 & 0x3ff) != 0) << 0x1f;
                    *(uint *)(unaff_r9 + 0x30) = uVar12;
                    if (((uVar14 & 0x70000000) != 0) &&
                       (((*(uint *)(unaff_r9 + 0x34) == in_stack_00000064 ||
                         (*(uint *)(unaff_r9 + 0x38) == in_stack_00000068 ||
                          *(uint *)(unaff_r9 + 0x34) == in_stack_00000068)) ||
                        (in_stack_00000064 == *(uint *)(unaff_r9 + 0x38))))) {
                      *(uint *)(unaff_r9 + 0x30) = DAT_2c4f37a8 & uVar12;
                      *(undefined4 *)(unaff_r9 + 0x34) = 0;
                      *(undefined4 *)(unaff_r9 + 0x38) = 0;
                    }
                    uVar24 = FUN_2c4f384c();
                    if ((int)uVar24 != 0) goto LAB_2c4f33aa;
                    uVar14 = *(int *)(unaff_r9 + 0x30) - 1;
                    *(uint *)(unaff_r9 + 0x30) =
                         uVar14 & 0x7fffffff | (uint)((uVar14 & 0x3ff) != 0) << 0x1f;
                  }
LAB_2c4f3396:
                  uVar24 = FUN_2c4f219c();
                  uVar23 = 0;
                  if ((int)uVar24 == 0) {
                    if (((*(uint *)(unaff_r9 + 0x30) >> 0x14 & 0x700) != 0) &&
                       (((*(uint *)(unaff_r9 + 0x34) == in_stack_00000064 ||
                         (*(uint *)(unaff_r9 + 0x34) == in_stack_00000068 ||
                          *(uint *)(unaff_r9 + 0x38) == in_stack_00000068)) ||
                        (in_stack_00000064 == *(uint *)(unaff_r9 + 0x38))))) {
                      *(uint *)(unaff_r9 + 0x30) = DAT_2c4f3840 & *(uint *)(unaff_r9 + 0x30);
                      *(undefined4 *)(unaff_r9 + 0x34) = 0;
                      *(undefined4 *)(unaff_r9 + 0x38) = 0;
                    }
                    uVar23 = FUN_2c4f384c();
                    goto LAB_2c4f3366;
                  }
                  if ((int)uVar24 == -2) goto LAB_2c4f3366;
                }
LAB_2c4f33aa:
                uVar23 = uVar24;
              }
              goto LAB_2c4f3366;
            }
          }
        }
LAB_2c4f3360:
        if ((int)uVar23 != -0x54) goto LAB_2c4f3366;
        unaff_r8 = 1;
      }
      uStack_10 = DAT_2c4f3488;
      FUN_2c66ac44(DAT_2c4f3490,DAT_2c4f348c,0x704);
      uVar23 = 0xffffffe4;
LAB_2c4f3366:
      if (*DAT_2c4f3478 != in_stack_00000084) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return uVar23;
    }
    uVar3 = 0x5f;
    param_3 = (int *)((int)param_3 + (int)unaff_r4);
    iVar5 = *param_3;
    param_4 = param_3[1];
    unaff_r5 = (uint *)param_3[2];
    puVar15 = (uint *)param_3[3];
    unaff_r7 = param_3[4];
    param_3 = param_3 + 5;
    if (!SBORROW4(param_2,9)) {
      *(short *)(iVar5 + 6) = (short)param_3;
      if (iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0xffffff64 < unaff_r5[3]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(*unaff_r5 + 0x32) = (short)param_4;
      uVar23 = VectorAdd(in_d23,in_d24,8,1);
      SatQ(uVar23,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c4595e4:
    *(undefined1 *)((int)param_3 + (int)puVar15) = uVar3;
    bVar21 = SBORROW4(unaff_r7,0xdf);
    iVar16 = unaff_r7 + -0xdf;
    coprocessor_movefromRt(9,3,1,in_cr6,in_cr7);
    if (iVar5 == 0) {
      iVar5 = 0;
      register0x00000054 = (BADSPACEBASE *)puVar7;
      if (param_4 == 0) {
        if (0xde < unaff_r7) {
          *puVar15 = 0;
          coprocessor_load(0,in_cr6,unaff_pc);
          _Reserved5 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _NMI = CONCAT31(NMI_1,in_stack_0000037c);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(100,0x2c4590d6);
        (*pcVar1)();
      }
    }
    else {
LAB_2c45964c:
      *(int *)(param_4 + 0x6c) = param_4;
      if (iVar16 << 10 < 0 != bVar21) {
        param_3[0x1b] = (int)puVar15;
        VectorShiftLeft(in_d18,0x17,0x20,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar21 != false) {
        *unaff_r5 = param_2;
        unaff_r5[1] = 0xf0;
        unaff_r5[2] = (uint)param_3;
        unaff_r5[3] = (uint)unaff_r5;
        unaff_r5[4] = (uint)puVar15;
        software_interrupt(0xd8);
        uVar12 = 0x62;
        uStack_c = (uint)*(byte *)(param_2 + 7);
        uStack_10 = 0xf0;
        uVar14 = 9;
        bVar21 = false;
        if ((byte *)0xffffffd6 < unaff_lr) {
          if (SCARRY4((int)unaff_lr,0x29)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar10 = *(uint *)(unaff_lr + 0x81);
        do {
          if (!bVar21) {
            uVar14 = uVar14 ^ 0xf0;
          }
          param_2 = param_2 - 1;
          uVar12 = uVar12 & 0xff;
          if (param_2 == 0) {
            if (unaff_lr == in_r12) {
              uVar10 = 0x1f;
              uVar12 = 0;
              do {
                if ((uVar14 & 1) != 0) {
                  uVar12 = uVar12 | 1 << (uVar10 & 0xff);
                }
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0xffffffff);
              iVar5 = (*in_stack_00000604)
                                (&stack0x000002c0,in_stack_000002c9,~uVar12,in_stack_0000057c);
              if (iVar5 < 0) {
                uStack_c = (uint)in_stack_00000360;
                uStack_10 = DAT_2c4abfcc;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x19a,DAT_2c4abfa0,DAT_2c4abfa8);
              }
              iVar5 = (*in_stack_00000600)
                                (&stack0x000002c0,in_stack_00000568,in_stack_0000056c,
                                 in_stack_00000570);
              if (iVar5 < 0) {
                uStack_c = (uint)in_stack_00000360;
                uStack_10 = DAT_2c4abfd8;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x1ab,DAT_2c4abfa0,DAT_2c4abfa8);
              }
              FUN_2c4ab4ec(&stack0x000002c0,1);
              FUN_2c6444fc(5);
              uVar14 = DAT_2c4abd98;
              uVar2 = DAT_2c4abd7c;
              iVar5 = (*in_stack_000005fc)(&stack0x000002c0,in_stack_00000424,&stack0x00000330);
              if (iVar5 < 0) {
                uStack_c = (uint)in_stack_00000360;
                uStack_10 = DAT_2c4abfd0;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x1c4,DAT_2c4abfa0,uVar2);
              }
              if (in_stack_00000434 != 0) {
                uStack_10 = uVar14;
                uStack_c = (uint)in_stack_00000360;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x1c9,DAT_2c4abd80,uVar2);
              }
              iVar5 = (*in_stack_00000600)
                                (&stack0x000002c0,in_stack_00000568,in_stack_0000056c,
                                 in_stack_00000574);
              if (iVar5 < 0) {
                uStack_c = (uint)in_stack_00000360;
                uStack_10 = DAT_2c4abfdc;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x1b2,DAT_2c4abfa0,DAT_2c4abfa8);
              }
              if (in_stack_0000036d != '\x01') {
                if (in_stack_0000036d != '\0') {
                  uStack_c = (uint)in_stack_00000360;
                  uStack_10 = DAT_2c4abfe8;
                    /* WARNING: Subroutine does not return */
                  TRACE(4,0x5e7,DAT_2c4abfa0,DAT_2c4abfa8);
                }
                FUN_2c4ab4ec(&stack0x000002c0,0);
                FUN_2c4ab4ec(&stack0x000002c0,1);
                FUN_2c6444fc(1);
                (*in_stack_000005fc)(&stack0x000002c0,in_stack_00000484,&stack0x00000330);
                uStack_c = (uint)in_stack_00000360;
                uStack_10 = DAT_2c4abfa4;
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x5e0,DAT_2c4abfa0,DAT_2c4abfa8);
              }
              if (in_stack_0000061c != (code *)0x0) {
                (*in_stack_0000061c)(&stack0x000002c0,1);
              }
              FUN_2c4aa5dc(&stack0x000002c0,0);
              FUN_2c4ab134(&stack0x000002c0,&stack0x00000330);
              FUN_2c4ab134(&stack0x000002c0,&stack0x00000330);
              (*in_stack_000005f8)(&stack0x000002c0,in_stack_00000388,in_stack_00000394);
              if (in_stack_0000064c != (code *)0x0) {
                (*in_stack_0000064c)(&stack0x000002c0);
              }
              if (*DAT_2c4abd70 != param_8) {
                    /* WARNING: Subroutine does not return */
                stack_chk_fail();
              }
              return 0;
            }
            in_r12 = in_r12 + 1;
            uVar10 = (uint)*in_r12;
            param_2 = 8;
            uVar12 = 1;
          }
          if ((int)uVar14 < 0) {
            uVar14 = uVar14 << 1 ^ 0xf0;
          }
          else {
            uVar14 = uVar14 << 1;
          }
          bVar21 = (uVar10 & uVar12) == 0;
          uVar12 = uVar12 << 1;
        } while( true );
      }
      piVar13 = (int *)((int)unaff_r5 + -0x97);
      in_stack_0000028c = unaff_lr + -0x9f;
      *puVar15 = param_2;
      puVar15[1] = 0x14;
      iVar5 = 0x506;
      coprocessor_storelong(4,in_cr2,0x152);
      bVar21 = SBORROW4((int)in_stack_0000028c,0x99);
      if (puVar15 == (uint *)0xfffffff8) {
        puVar4 = &stack0x00000254;
        iVar5 = 0x5c;
        uVar12 = (uint)bRam00000079;
        uVar14 = 0;
        uVar10 = _PendSV;
        puVar7 = (uint *)register0x00000054;
        if (piVar13 == (int *)0x0) {
          uVar12 = (uint)*(ushort *)((int)unaff_r5 + -0x77);
          uVar10 = 0x2c459460;
          unaff_lr[-0x8f] = 0;
          *(char *)(uVar12 + 0x19) = (char)param_2;
          in_stack_0000028c = (byte *)0x0;
          uVar14 = uStack_10;
          goto LAB_2c459180;
        }
        goto LAB_2c459186;
      }
    }
    puVar4 = *(undefined1 **)(iVar5 + 4);
    iVar5 = *(int *)(iVar5 + 8);
    *(int *)(puVar4 + 4) = iVar5;
    puVar7 = (uint *)register0x00000054;
  }
  *(undefined1 **)(iVar5 + 0x20) = puVar4;
  return *(undefined8 *)puVar7;
}

