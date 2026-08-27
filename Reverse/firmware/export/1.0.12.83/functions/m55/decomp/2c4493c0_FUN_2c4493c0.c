/* FUN_2c4493c0 @ 0x2c4493c0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c449dee) */
/* WARNING: Removing unreachable block (ram,0x2c449df8) */
/* WARNING: Removing unreachable block (ram,0x2c449e10) */
/* WARNING: Removing unreachable block (ram,0x2c3f8ee6) */
/* WARNING: Removing unreachable block (ram,0x2c449f06) */
/* WARNING: Removing unreachable block (ram,0x2c449f08) */
/* WARNING: Removing unreachable block (ram,0x2c449bee) */
/* WARNING: Removing unreachable block (ram,0x2c449e84) */
/* WARNING: Removing unreachable block (ram,0x2c44942c) */
/* WARNING: Removing unreachable block (ram,0x2c4498f4) */
/* WARNING: Removing unreachable block (ram,0x2c449eaa) */
/* WARNING: Removing unreachable block (ram,0x2c449eb0) */
/* WARNING: Removing unreachable block (ram,0x2c449ec0) */
/* WARNING: Removing unreachable block (ram,0x2c449e26) */
/* WARNING: Removing unreachable block (ram,0x2c449e2a) */
/* WARNING: Removing unreachable block (ram,0x2c449e34) */
/* WARNING: Removing unreachable block (ram,0x2c449e36) */
/* WARNING: Removing unreachable block (ram,0x2c449e44) */
/* WARNING: Removing unreachable block (ram,0x2c449e46) */
/* WARNING: Removing unreachable block (ram,0x2c449e48) */
/* WARNING: Removing unreachable block (ram,0x2c449850) */
/* WARNING: Removing unreachable block (ram,0x2c449e8e) */
/* WARNING: Removing unreachable block (ram,0x2b5336d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_2c4493c0(uint param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  code *pcVar3;
  ushort uVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int extraout_r2;
  uint *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined1 *unaff_r4;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int unaff_r6;
  undefined4 uVar19;
  undefined1 *unaff_r7;
  uint *puVar20;
  uint *puVar21;
  uint unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 in_d31;
  undefined8 uVar22;
  uint uStack_14;
  
  uStack_14 = param_1;
  *(int *)(unaff_r6 + param_2) = unaff_r6;
  puVar21 = &uStack_14;
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    uVar11 = param_1 >> 0x11;
    iVar6 = (int)unaff_r7 >> 0x1b;
    piVar7 = (int *)puVar21[0xf9];
    coprocessor_function2(2,0xc,4,in_cr14,in_cr14,in_cr12);
    iVar16 = *piVar7;
    *(short *)(unaff_r4 + 0x1e) = (short)((uint)unaff_r4 >> 0xd);
    *(int **)(iVar16 + 0x78) = piVar7 + 2;
    if ((uint)unaff_r4 >> 0xd == 0) break;
    uVar8 = (int)puVar21 + uVar11 + 0x398;
    param_1 = *puVar21;
    uVar17 = puVar21[1];
    *(uint *)(iVar6 + 0x54) = uVar11;
    uVar4 = *(ushort *)(uVar17 + 0xc);
    *(short *)(unaff_r4 + iVar6) = (short)((int)unaff_r7 >> 0x1b);
    iVar16 = iVar6 + -0x85;
    unaff_r7 = &LAB_2c44982c;
    if (iVar16 != 0) {
      (&LAB_2c44982c)[uVar8] = (char)uVar4;
      *(undefined1 *)(iVar6 + -0x72) = 0;
      uRam00000016 = (undefined2)iVar16;
      if (uVar8 < 0xffffff13 || uVar8 + 0xed == 0) {
        software_bkpt(0xe0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(unaff_r4 + uVar8 + 0xed) = (short)unaff_r4;
      _MasterStackPointer = CONCAT31(MasterStackPointer_1,(char)((int)unaff_r4 << 1));
      iRam000000a5 = (int)unaff_r4 << 2;
      iRam000000b7 = (int)unaff_r4 << 1;
      iRam000000c6 = iRam000000b7;
      *unaff_r4 = (char)iVar16;
      HardFault = 0;
      uRam00000069 = 0;
      uRam00000065 = (undefined1)iRam000000a5;
      uRam00000066 = (undefined1)((uint)iRam000000a5 >> 8);
      uRam00000067 = (undefined2)((uint)iRam000000a5 >> 0x10);
      *(undefined4 *)(unaff_r4 + 0x35) = 0;
      uRam00000093 = (undefined1)iRam000000b7;
      iRam00000096 = (int)unaff_r4 * 8;
      *(undefined4 *)(unaff_r4 + 0x77) = 0;
      UsageFault = 0x77;
      *(char *)((int)unaff_r4 * 8 + 0x11) = (char)((int)unaff_r4 << 6);
      *(undefined2 *)((int)unaff_r4 * 2 + 0x1c) = 0;
      puVar10 = (undefined2 *)((int)unaff_r4 * 8);
      *(char *)(puVar10 + 5) = (char)*puVar10;
      *(char *)(puVar10 + 7) = (char)((int)unaff_r4 << 3);
      uVar11 = puVar21[0x3b];
      _Reserved3 = (undefined2)uRam00000106;
      *(undefined4 *)(uVar11 + 0x60) = uRam00000106;
      _Reserved5 = 0;
      NMI = 0;
      puVar2 = puVar21 + 0x3b;
      uRam2c3a48a2 = SUB41(puVar2,0);
      *(short *)((((int)unaff_r4 << 2) >> 1) + 0x14) = (short)puVar2;
      *(undefined4 *)(((int)uVar11 >> 2) * 2) = 0;
      *(uint **)((int)puVar2 * 0x10 + 0x40) = puVar21 + 0x4b;
      if (puVar21 + 0x4b != (uint *)0x0) {
        uVar8 = puVar21[5];
        uVar15 = puVar21[7];
        iVar6 = (int)puVar21[6] >> 8;
        *(uint *)(puVar21[6] + 0x70) = uVar8 + 0x74;
        uVar11 = puVar21[10];
        uVar17 = puVar21[0xb];
        puVar13 = (undefined1 *)puVar21[0xc];
        if (uVar17 != 0) goto code_r0x2c3a47f0;
        do {
          uVar15 = 0;
          while( true ) {
            iVar6 = (int)puVar13 << 1;
            uVar17 = *(uint *)(uVar15 + 4);
            puVar13 = *(undefined1 **)(uVar15 + 8);
            uVar15 = *(uint *)(uVar15 + 0xc);
code_r0x2c3a47f0:
            if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar8,0x74)) break;
            coprocessor_function(0xd,0xe,7,in_cr14,in_cr14,in_cr14);
            if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar8,0x74)) {
              iVar18 = *(int *)(uVar17 + 8);
              uVar19 = *(undefined4 *)(uVar17 + 0xc);
              iVar6 = 0;
              iVar16 = iVar18 << 1;
              uVar5 = (undefined1)(uVar11 + 0x97);
              *puVar13 = uVar5;
              if (uVar11 + 0x97 == 0) {
                coprocessor_function(0xc,0xc,7,in_cr13,in_cr14,in_cr14);
                iVar6 = (int)puVar13 << 9;
                iVar18 = iVar18 >> 1;
              }
              *(undefined1 *)(iVar6 + 0x1c) = uVar5;
              *(undefined4 *)(puVar13 + iVar18) = uVar19;
              uVar5 = (undefined1)iVar16;
              puVar13[0xc] = uVar5;
              puVar13[8] = (char)iVar18;
              *(undefined4 *)(puVar13 + 0x10) = uVar19;
              puVar13[0x1c] = uVar5;
              iVar6 = iVar18 * 2;
              iVar16 = iVar18 * 2;
              *(int *)(((iVar18 << 0xc) >> 0x1c) * 0x1000 + 0x70) = iVar18 << 1;
              *(char *)(iVar16 + 0x14) = (char)puVar13;
              *(char *)(iVar6 + 0xc) = (char)iVar6;
              *(int *)(iVar16 + 0x10) = iVar6;
              *(undefined1 *)(iVar16 + 0x1c) = uVar5;
              uVar22 = (*(code *)0x0)();
              return uVar22;
            }
          }
        } while( true );
      }
      uRam2c3a48a2 = (char)(puVar21 + 0x8c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 **)(param_1 + uVar8) = &LAB_2c44982c;
    *(undefined1 *)(puVar21 + 0x115) = 0x2c;
    *(undefined4 *)((int)puVar21 + 0x442) = 0;
    *(uint *)((int)puVar21 + 0x446) = uVar11;
    *(uint *)((int)puVar21 + 0x44a) = (uint)uVar4;
    puVar21[0x88] = uVar8;
    *(short *)(uVar8 + 0x34) = (short)uVar8;
    puVar21 = puVar21 + 3;
  }
  *(uint *)(unaff_r4 + uVar11) = uVar11;
  uVar11 = _LAB_2c449580;
  uVar17 = puVar21[0x97];
  uVar8 = 0xfffc0000;
  *(undefined1 *)(_LAB_2c449580 + 0x19) = 0;
  puVar2 = puRam2c449c04;
  puVar21[0x79] = 0xc0000000;
  VectorShiftLeft(in_d31,0x1e,0x20,1);
  uRamfffc003c = (undefined2)uVar11;
  if ((int)uVar17 < (int)uVar11) {
    *(int *)(iVar16 + -0x40000) = iVar16;
    uRam00000079 = 0xc3;
    *(undefined4 *)(uVar11 + 0x1c) = 0xfffc0000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000066 = (undefined1)iVar16;
  bVar1 = (int)uVar11 <= (int)uVar17;
  if (bVar1) {
    uRam00000065 = (undefined1)(uVar11 >> 0x10);
    uRam00000066 = (undefined1)(uVar11 >> 0x18);
    uRam00000063 = uRamfffc003c;
  }
  else {
    puVar14 = (undefined4 *)(uVar17 + 0xe2);
    *puVar14 = 0xc3;
    *(int *)(uVar17 + 0xe6) = iVar16;
    *(undefined4 **)(uVar17 + 0xea) = puVar14;
    *(undefined4 *)(uVar17 + 0xee) = 0x4c;
    uVar8 = 0xfffc0062;
    uVar11 = (uint)*(ushort *)(iVar16 + 0x18);
    *(undefined4 **)(uVar11 + 0x10) = puVar14;
  }
  if ((int)uVar11 < 0 == (bVar1 && SBORROW4(uVar17,0x9b))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-1 < iVar16) {
    uVar8 = *(uint *)(uVar11 + 4);
    puVar21[0x3b] = unaff_lr;
    puVar21[0x3a] = uVar8;
    puVar21[0x39] = 0x130;
    if (!SBORROW4(uVar11,100)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0x8c,0x2c3cfe36);
      (*pcVar3)();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_movefromRt(9,1,6,in_cr15,in_cr4);
  if (0 < iVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar16 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar17 = *puVar2;
  puVar9 = (uint *)puVar2[1];
  uVar11 = puVar2[2];
  uVar15 = puVar2[4];
  puVar20 = (uint *)puVar2[5];
  *(uint *)uVar8 = uVar8;
  *(uint *)(uVar8 + 4) = uVar11;
  puVar12 = (uint *)(uint)*(ushort *)((int)puVar9 + 0x16);
  *puVar9 = uVar17;
  puVar9[1] = uVar8;
  puVar9[2] = (uint)puVar12;
  puVar9[3] = (uint)(puVar2 + 6);
  puVar9[4] = uVar15;
  puVar9[5] = (uint)puVar20;
  uVar11 = _MasterStackPointer;
  if (puVar12 == (uint *)0x0) {
    *(undefined4 *)((int)puVar21 + _MasterStackPointer + 0x138) = _Reset;
    *puVar20 = uVar8;
    puVar20[1] = (int)puVar21 + 0x385;
    puVar20[2] = (int)uVar15 >> 0x1e;
  }
  else {
    uVar11 = (int)puVar9 - 0x1b;
    if (uVar11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(puVar9 + 6) < 0x33) {
      *puVar12 = uVar17 >> 0x11;
      puVar12[1] = uVar11;
      puVar12[2] = (uint)puVar12;
      puVar12[3] = (uint)puVar20;
      software_interrupt(0xf0);
      uVar19 = func_0x2cfeab5c();
      *(char *)(extraout_r2 + 4) = (char)uVar19;
      *(undefined4 *)(uVar15 + 0x3c) = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  puVar21[0x82] = uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

