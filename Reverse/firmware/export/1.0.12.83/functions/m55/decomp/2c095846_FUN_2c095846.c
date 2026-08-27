/* FUN_2c095846 @ 0x2c095846 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c095aca) */
/* WARNING: Removing unreachable block (ram,0x2c095a04) */
/* WARNING: Removing unreachable block (ram,0x2c095ad0) */
/* WARNING: Removing unreachable block (ram,0x2c095ad6) */
/* WARNING: Removing unreachable block (ram,0x2c095a76) */
/* WARNING: Removing unreachable block (ram,0x2c095ad8) */
/* WARNING: Removing unreachable block (ram,0x2c095a10) */
/* WARNING: Removing unreachable block (ram,0x2c095a48) */
/* WARNING: Removing unreachable block (ram,0x2c095a14) */
/* WARNING: Removing unreachable block (ram,0x2c095adc) */
/* WARNING: Removing unreachable block (ram,0x2c095b96) */
/* WARNING: Removing unreachable block (ram,0x2c095c50) */
/* WARNING: Removing unreachable block (ram,0x2c095b9c) */
/* WARNING: Removing unreachable block (ram,0x2c095ae2) */
/* WARNING: Removing unreachable block (ram,0x2c095a1c) */
/* WARNING: Removing unreachable block (ram,0x2c095a26) */
/* WARNING: Removing unreachable block (ram,0x2c095ae8) */
/* WARNING: Removing unreachable block (ram,0x2c095b12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c095846(uint *param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *extraout_r2;
  undefined1 *puVar9;
  uint unaff_r4;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *unaff_r6;
  uint unaff_r7;
  uint uVar12;
  uint *unaff_r9;
  uint in_r12;
  undefined4 extraout_r12;
  uint *puVar13;
  uint unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool bVar14;
  bool bVar15;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar16;
  
  uVar11 = _DAT_2c095b50;
  puVar8 = (uint *)register0x00000054;
  do {
    puVar13 = puVar8;
    puVar13[-1] = unaff_lr;
    puVar13[-2] = unaff_r7;
    puVar13[-3] = (uint)unaff_r6;
    puVar13[-4] = unaff_r4;
    puVar13[-5] = (uint)param_4;
    puVar13[-6] = param_3;
    puVar8 = puVar13 + -7;
    *puVar8 = param_2;
    if (!in_CY || in_ZR) {
      *(short *)(unaff_r7 + 0x10) = (short)unaff_r6;
      unaff_r7 = 0x38;
      coprocessor_load(2,in_cr9,unaff_r9 + 0xbe);
      coprocessor_load(2,in_cr8,unaff_r9 + 0x6e);
      bVar15 = ((uint)param_1 >> 0xb & 1) != 0;
      uVar2 = (uint)param_1 >> 0xc;
      bVar14 = uVar2 == 0;
      if (bVar15 && !bVar14) {
        if (bVar14) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_2c0958de;
      }
      if (!bVar15 || bVar14) {
                    /* WARNING: Could not recover jumptable at 0x2c095898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (**(code **)(in_r12 - 4))
                           (uRam2c095abc,*(undefined4 *)(in_r12 - 0x1c),
                            *(undefined4 *)(in_r12 - 0x18),*(undefined4 *)(in_r12 - 0x14));
        return uVar16;
      }
      if (!bVar15 || bVar14) goto LAB_2c0958fe;
LAB_2c0958ca:
      bVar15 = 0x4d < uVar2;
      bVar14 = uVar2 == 0x4e;
      uVar12 = unaff_r7;
      if (0x4e < uVar2) {
        puVar13[0x37] = uRam2c095a14;
        bVar15 = 3 < unaff_r7;
        bVar14 = unaff_r7 == 4;
        coprocessor_load(1,in_cr2,unaff_r9 + 0xde);
        uVar12 = _DAT_2c0959a0;
        if (4 < unaff_r7) {
          unaff_r6[4] = uVar11;
LAB_2c0958de:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0x1b,0x2c0958de);
          (*pcVar1)();
        }
      }
      goto LAB_2c09590a;
    }
    if (!in_CY || in_ZR) {
      puVar13[0xd7] = _DAT_2c095b50;
      uVar2 = *unaff_r9;
      uVar11 = unaff_r9[1];
      param_4 = (undefined1 *)unaff_r9[2];
      unaff_r7 = unaff_r9[4];
      in_r12 = unaff_r9[6];
      if (unaff_r9[3] < 0xb2) {
        coprocessor_load(2,in_cr9,in_r12 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x2c095820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (*(code *)unaff_r9[5])(uRam2c095a28,*unaff_r9,unaff_r9[1],unaff_r9[2]);
        return uVar16;
      }
      goto LAB_2c0958ca;
    }
    param_2 = unaff_lr;
    param_3 = _DAT_2c095b50;
  } while (!in_CY || in_ZR);
  puVar13[0xf7] = unaff_lr;
  bVar15 = 0xffffff4e < unaff_r4;
  unaff_r4 = unaff_r4 + 0xb1;
  bVar14 = unaff_r4 == 0;
  uVar2 = unaff_lr;
LAB_2c0958fe:
  if (bVar15 && !bVar14) {
    if (&DAT_00000006 < param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c0958e6:
    *(char *)(unaff_r7 + 0x18) = (char)unaff_r6;
    coprocessor_load(1,in_cr2,in_r12 + 0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(9,in_cr3,unaff_lr);
  if (bVar15 && !bVar14) {
    uVar12 = (uint)*(byte *)(uVar2 * 2);
  }
  else {
    uVar11 = *(uint *)(unaff_r7 + 4);
    param_4 = *(undefined1 **)(unaff_r7 + 8);
    unaff_r4 = *(uint *)(unaff_r7 + 0xc);
    unaff_r6 = *(undefined4 **)(unaff_r7 + 0x10);
    uVar12 = *(uint *)(unaff_r7 + 0x14);
LAB_2c09590a:
    if (!bVar15 || bVar14) {
      param_4[uVar11] = 0xfe;
      coprocessor_load(1,in_cr7,unaff_r6 + 0x3e);
      bVar15 = (uVar11 & 0x10000) != 0;
      bVar14 = (uVar11 & 0xffff) == 0;
      if (!bVar15 || bVar14) {
        *(undefined4 **)(uVar12 + 0x18) = unaff_r6;
        unaff_r4 = unaff_r9[-5];
        param_4 = (undefined1 *)unaff_r9[-6];
        uVar11 = unaff_r9[-7];
        bVar15 = 0xfffffffc < unaff_r9[-3];
        unaff_r6 = (undefined4 *)(unaff_r9[-3] + 3);
        bVar14 = unaff_r6 == (undefined4 *)0x0;
        unaff_r9 = param_1;
        if (!bVar15 || bVar14) {
          coprocessor_load(1,in_cr5,param_1 + 0x4e);
          if (uVar11 < 0x92) {
            if (param_4 != (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto LAB_2c095924;
        }
      }
      software_interrupt(0xde);
      uVar12 = uRam2c095ca0;
      if (bVar15 && !bVar14) {
        if (unaff_r4 + 0xfe < 0xffffff7f || unaff_r4 == 0xfffffe81) {
LAB_2c095924:
          coprocessor_moveto(1,2,1,in_r12,in_cr1,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        unaff_r6 = (undefined4 *)((int)unaff_r6 + -0xd9);
        unaff_r7 = uRam2c095ca0;
        goto LAB_2c0958e6;
      }
      goto LAB_2c095958;
    }
  }
  coprocessor_function2(5,0xe,1,in_cr15,in_cr8,in_cr2);
  param_4 = (undefined1 *)((int)param_1 + unaff_r4);
  unaff_r6 = _DAT_2c095cfc;
LAB_2c095958:
  puVar9 = param_4 + 0x41;
  coprocessor_function2(6,0xe,3,in_cr15,in_cr13,in_cr1);
  puVar10 = (undefined1 *)
            ((int)param_1 + (uint)CARRY4(uVar11,puVar13[0x1e]) + uVar11 + puVar13[0x1e]);
  uVar11 = coprocessor_movefromRt(1,6,5,in_cr8,in_cr1);
  do {
    puVar5 = (uint *)0x2c095aec;
    if (((uint)puVar10 & 0x8000) == 0 || ((uint)puVar10 & 0x7fff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c095b2c:
    bVar15 = ((int)puVar10 >> 0x1c & 1U) != 0;
    puVar3 = (uint *)((int)puVar10 >> 0x1d);
    if (bVar15 && puVar3 != (uint *)0x0) {
      coprocessor_load(1,in_cr6,unaff_r9 + -0xae);
      uVar2 = *param_1;
      uVar12 = param_1[1];
      iVar4 = ((uint)param_1 >> 8) * 2 + (uint)(((uint)param_1 >> 7 & 1) != 0);
      *(int *)(iVar4 + uVar11) = iVar4;
      *(char *)(uVar11 + 5) = (char)iVar4;
      func_0x2c817328(uVar2,iVar4,puVar5,uVar12);
      *(short *)(extraout_r1_00 + 8) = (short)((int)uVar11 >> 10);
      iVar4 = VectorTableLookup(extraout_r1_00,extraout_r12,1);
      return CONCAT44(*puVar8,iVar4 + -10);
    }
    do {
    } while (bVar15);
    if (uVar12 < 0x42) {
      if (uVar12 < 0x41) {
        coprocessor_load(1,in_cr3,unaff_r9 + 0x8e);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar15 = (uint *)0x50 < puVar5;
    puVar5 = (uint *)((int)puVar5 + -0x51);
    bVar14 = puVar5 == (uint *)0x0;
    if (bVar15 && !bVar14) {
      do {
        if (bVar15 && !bVar14) {
LAB_2c095a58:
                    /* WARNING: Could not recover jumptable at 0x2c095a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar16 = (*(code *)unaff_r9[8])(param_1,*unaff_r9,unaff_r9[1],unaff_r9[2]);
          return uVar16;
        }
        bVar15 = ((uint)puVar10 >> 0xc & 1) != 0;
        uVar2 = (uint)puVar10 >> 0xd;
        if (!bVar15 || uVar2 == 0) goto code_r0x2c095b2a;
        if (bVar15 && uVar2 != 0) {
          halt_baddata();
        }
        puVar7 = (uint *)((int)puVar5 + 0x8e);
        bVar15 = ((uint)puVar10 & 0x8000) != 0;
        if (!bVar15 || ((uint)puVar10 & 0x7fff) == 0) {
          puVar3 = (uint *)((int)puVar7 + (int)unaff_r6);
          if (CARRY4((uint)puVar7,(uint)unaff_r6) && puVar3 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(uVar11 + (int)puVar3) = (short)unaff_r6;
          if (!CARRY4((uint)puVar7,(uint)unaff_r6)) {
                    /* WARNING: Could not recover jumptable at 0x2c095b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar16 = (*(code *)unaff_r9[7])(param_1,*unaff_r9,unaff_r9[1],unaff_r9[2]);
            return uVar16;
          }
          *(short *)((int)puVar5 + 0xa2) = (short)puVar10;
          puVar9 = (undefined1 *)(((int)param_1 << 2) >> 0x1a);
          unaff_r6 = (undefined4 *)0x0;
          _Reserved2 = puVar7;
          goto code_r0x2c095c32;
        }
        unaff_r6 = (undefined4 *)&DAT_00000061;
        if (bVar15) {
          if (puVar10 == (undefined1 *)0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x2c095a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar16 = (**(code **)(in_r12 - 4))
                               (param_1,*(undefined4 *)(in_r12 - 0x18),
                                *(undefined4 *)(in_r12 - 0x14),*(undefined4 *)(in_r12 - 0x10));
            return uVar16;
          }
          *(undefined4 *)(puVar10 + uVar12) = 0x61;
          goto LAB_2c095a58;
        }
        param_4[0x4b] = 0x61;
        bVar15 = false;
        bVar14 = false;
        puVar5 = puVar7;
      } while( true );
    }
    bVar14 = puVar3 == (uint *)0x0;
    unaff_r6 = (undefined4 *)-(int)puVar3;
    puVar10 = (undefined1 *)0x91;
    bVar15 = false;
    while (puVar7 = param_1, param_1 = puVar7, !bVar14 || bVar15) {
      *(short *)((int)puVar3 + (int)puVar5) = (short)unaff_r6;
      param_1 = (uint *)((int)puVar7 + -0xd1);
      if ((uint *)0xd0 < puVar7 && param_1 != (uint *)0x0) break;
      if ((uint *)0xd0 >= puVar7) {
        bVar15 = ((uint)puVar5 >> 0x15 & 1) != 0;
        bVar14 = (uint)puVar5 >> 0x16 == 0;
LAB_2c095afe:
        if (bVar15 && !bVar14) {
          *(uint **)((int)puVar7 + -0x71) = puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        while( true ) {
          if (((uint)param_1 >> 0xc & 1) != 0 && (uint)param_1 >> 0xd != 0) {
            unaff_r6[4] = unaff_r6;
            *(undefined4 *)(((uint)param_1 >> 0xd) + 0x48) = 0x91;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_r6 = (undefined4 *)(int)(char)uVar12;
          if (((int)param_1 >> 0x1e & 1U) != 0 && (int)param_1 < 0) break;
          uRam2c095e00 = 0x2c095dfc;
          iRam2c095dfc = (int)param_1 >> 0x1f;
          puRam2c095e04 = puVar9;
          uRam2c095e08 = uVar11;
          uRam2c095e0c = uVar12;
          *(short *)(puVar9 + ((int)param_1 >> 0x1f)) = (short)(char)uVar12;
          if (((uint)unaff_r6 & 0x400) == 0 || ((uint)unaff_r6 & 0x3ff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar14 = (uint *)0xf0 < param_1;
      bVar15 = param_1 == (uint *)0xf1;
      if (param_1 < (uint *)0xf2) goto code_r0x2c095abe;
    }
    puVar10 = (undefined1 *)0x91;
    if (puVar5 < (uint *)0xc2) {
      *(char *)(uVar12 + 7) = (char)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
code_r0x2c095b2a:
  *(short *)(uVar12 + uVar2) = (short)unaff_r6;
  goto LAB_2c095b2c;
code_r0x2c095abe:
  *(char *)(uVar11 + 10) = (char)unaff_r6;
  puVar6 = (undefined4 *)((int)puVar5 + -0x11);
  if (puVar5 < (uint *)0x11 || puVar6 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x2c095caf;
    bVar14 = false;
    bVar15 = true;
    goto LAB_2c095afe;
  }
  *puVar6 = puVar3;
  *(undefined4 **)((int)puVar5 + -0xd) = puVar6;
  *(undefined1 **)((int)puVar5 + -9) = puVar9;
  *(undefined4 *)((int)puVar5 + -5) = 0x91;
  *(uint *)((int)puVar5 + -1) = uVar12;
  puVar3 = puVar5 + 0x20;
  if ((undefined4 *)0xffffff6e < puVar6 && puVar3 != (uint *)0x0) {
code_r0x2c095c32:
    uVar12 = (uint)puVar9 >> 10;
    bVar15 = uVar12 == 0;
    puVar8 = puVar13 + 7;
    if (((uint)puVar9 >> 9 & 1) != 0 && !bVar15) {
      puVar8 = puVar13 + 0xc;
      puVar3[0x18] = (uint)param_1;
      goto LAB_2c095d60;
    }
code_r0x2c095c38:
    if (param_1 == (uint *)0x0) {
      puVar8 = (uint *)func_0x2bdc4b40();
      puVar3 = (uint *)puVar8[1];
      unaff_r6 = (undefined4 *)(uVar12 >> 8);
      param_1 = (uint *)(*puVar8 >> 0x10);
      puVar8 = (uint *)(puVar8[2] - 0xe);
      bVar15 = puVar8 == (uint *)0x0;
    }
    if (bVar15) {
      if (param_1 != (uint *)0x0) {
        *(uint **)((int)puVar3 * -0x1f + 0x5c) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x2c8b34c6();
      puVar3 = extraout_r1;
      puVar8 = extraout_r2;
    }
    uVar11 = (int)puVar10 >> 0xe;
    puVar13[0xa7] = (uint)puVar8;
    uVar2 = uVar11 >> 1;
    puVar8 = unaff_r6 + -0xa5;
    *unaff_r6 = puVar3;
    unaff_r6[1] = uVar11;
    software_bkpt(0);
    puVar10 = (undefined1 *)((int)puVar3 - uVar2);
    *(uint *)(puVar10 + 0x5c) = uVar11;
    if (!SBORROW4((int)puVar3,uVar2)) {
      *puVar8 = uVar11;
      unaff_r6[-0xa4] = uVar12;
      software_bkpt(0);
      *(uint *)((int)puVar3 + (0x5c - (uVar11 >> 1))) = uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (SBORROW4((int)puVar3,uVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_2c095d60:
    *(short *)(uVar12 + 0x24) = (short)puVar8;
    puVar10[0xb] = (char)*(undefined4 *)(puVar10 + 0x6c);
    *(short *)(puVar10 + 0x32) = (short)*(undefined4 *)(puVar10 + 0x6c) - (short)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = (uint *)0x6e;
  bVar14 = &DAT_00000070 < puVar3;
  puVar3 = (uint *)((int)puVar5 + 0xf);
  bVar15 = puVar3 == (uint *)0x0;
  if (bVar14 && !bVar15) goto code_r0x2c095c38;
  *(undefined4 **)(uVar12 + 0x40) = unaff_r6;
  puVar9 = puVar9 + (int)unaff_r6;
  coprocessor_load(1,in_cr1,in_r12 + 0x2b8);
  puVar5 = puVar8;
  if (uVar11 < 0xf2) {
    *(undefined4 **)(puVar9 + 0x24) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto code_r0x2c095abe;
}

