/* FUN_2c43c09a @ 0x2c43c09a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c43c034) */
/* WARNING: Removing unreachable block (ram,0x2c43c02a) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb6) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb8) */
/* WARNING: Removing unreachable block (ram,0x2c43bfc2) */
/* WARNING: Removing unreachable block (ram,0x2c43c632) */
/* WARNING: Removing unreachable block (ram,0x2c43c538) */
/* WARNING: Removing unreachable block (ram,0x2c43bf12) */
/* WARNING: Removing unreachable block (ram,0x2c43bf16) */
/* WARNING: Removing unreachable block (ram,0x2c43bf24) */
/* WARNING: Removing unreachable block (ram,0x2c44e32e) */
/* WARNING: Removing unreachable block (ram,0x2c43c032) */
/* WARNING: Removing unreachable block (ram,0x2c43c036) */
/* WARNING: Removing unreachable block (ram,0x2c43c038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43c09a(int param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *unaff_r5;
  undefined4 *puVar15;
  int *piVar16;
  int *unaff_r6;
  ushort *puVar17;
  int *unaff_r7;
  int *piVar18;
  undefined1 *puVar19;
  int unaff_lr;
  undefined1 in_CY;
  undefined1 *puVar20;
  longlong lVar21;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  do {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = unaff_r7;
    *(int **)((int)register0x00000054 + -0xc) = unaff_r6;
    *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r5;
    *(undefined4 **)((int)register0x00000054 + -0x14) = param_4;
    *(uint *)((int)register0x00000054 + -0x18) = param_3;
    piVar16 = (int *)((int)register0x00000054 + -0x1c);
    *piVar16 = (int)param_2;
    puVar15 = (undefined4 *)0x0;
    piVar18 = unaff_r7;
    if (unaff_r5 != (undefined4 *)0x0) {
      piVar18 = (int *)((uint)unaff_r6 >> ((uint)param_2 & 0x1f) |
                       (int)unaff_r6 << 0x20 - ((uint)param_2 & 0x1f));
      iVar11 = *piVar18;
      iVar12 = piVar18[1];
      iVar13 = piVar18[2];
      puVar15 = (undefined4 *)piVar18[3];
      unaff_r6 = piVar18 + 4;
      *(int *)(iVar13 + 0x3c) = iVar11;
      iVar8 = *(int *)((int)register0x00000054 + 0x144);
      if (&IRQ < param_2) {
        if (!SBORROW4((int)param_2,0x40)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(iVar8 + 0x28) = (short)unaff_r7;
        uVar14 = (uint)*(byte *)(iVar8 + 0xe);
        uVar6 = (undefined1)unaff_r7[0xb];
        piVar18 = (int *)((int)register0x00000054 + 0x328);
        uVar9 = iVar11 + 0x6fU >> ((uint)unaff_r7 & 0xff);
        software_bkpt(0x6b);
        uVar10 = uVar14 - 6;
        if (uVar10 != 0xb0) {
          uVar6 = (undefined1)*(undefined4 *)(uVar14 + 0x32);
          piVar18 = (int *)((int)register0x00000054 + 0x3e5);
        }
        iVar11 = uVar10 - uVar9;
        *(short *)(iVar11 + 0x36) = (short)uVar9;
        iVar8 = _LAB_2c43c2dc;
        if (uVar9 <= uVar10) {
          uVar10 = (uint)*(ushort *)(piVar18 + 0xb);
          *(undefined1 *)(iVar12 + uVar10) = uVar6;
          *(char *)((int)piVar18 + 0x12) = (char)unaff_r7;
          *(char *)(uVar9 + uVar10) = (char)unaff_r7;
          if (unaff_r7 != (int *)0xfffffffc) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          coprocessor_function2(2,4,6,in_cr2,in_cr5,in_cr13);
          *(int *)((int)register0x00000054 + 0x110) = *(int *)(uVar10 + 0x10) >> 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar16 = (int *)(uint)*(ushort *)(iVar11 + 6);
        *piVar16 = iVar12;
        piVar16[1] = (int)piVar18;
        piVar16[2] = iVar11;
        *(int *)(iRam2c43c2c4 + 0x44) = iVar11;
        if (SBORROW4(iVar12,0x19)) {
          *(int **)((int)register0x00000054 + 0x2e8) = piVar18;
          *(int *)((int)piVar18 + iVar8) = (iVar12 + -0x19) * 0x400000;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        software_interrupt(0xe4);
        *(int **)(iVar12 + -0x19 + iVar11) = piVar16 + 3;
        coprocessor_store(7,in_cr5,*(int *)((int)register0x00000054 + 4));
        iRam00000017 = *(int *)register0x00000054;
        iRam0000001b = *(int *)register0x00000054 >> 8;
        iRam0000001f = *(int *)((int)register0x00000054 + 8);
        uRam00000023 = 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar3 = *(byte *)(param_1 + 0xc);
      *(short *)(puVar15 + 10) = (short)puVar15;
      *(int *)((int)puVar15 + iVar11) = iVar12;
      *(int *)(iVar13 + (uint)bVar3 + 0x5c) = iVar12;
      param_2 = (int *)((int)register0x00000054 + 0x2ec);
      param_3 = 0x27;
      piVar16 = (int *)((int)register0x00000054 + 0x1c);
      *(undefined1 *)((int)piVar18 + 0x2a) = 0x27;
      in_CY = (int *)0xfffffffe < param_2;
      param_4 = (undefined4 *)((int)register0x00000054 + 0x2ed);
      uVar4 = *(ushort *)(((int)unaff_r6 >> 0xc) + 0x26);
      piVar18 = (int *)(uint)uVar4;
      uVar5 = *(ushort *)((int)param_4 * 2);
      *(int *)((int)register0x00000054 + 0x345) = (int)unaff_r6 >> 0xc;
      *(char *)(uVar5 + 0xc) = (char)uVar4;
      *(undefined4 **)((int)register0x00000054 + 0x2e4) = param_4;
      param_1 = (int)*(char *)((int)unaff_r6 * 2);
    }
    uVar10 = _LAB_2c43c394;
    iVar8 = _LAB_2c43c170;
    if ((bool)in_CY) {
      puVar19 = (undefined1 *)(param_3 ^ 0x1b000);
      param_2[3] = (int)param_4 - param_1;
      if ((int)param_4 - param_1 < 0) {
        piVar16 = (int *)(uint)uRam00000105;
        param_4[0xf] = piVar18;
        iVar8 = *(int *)(puVar19 + 0x9c);
        *piVar16 = param_1 << 0x1d;
        piVar16[1] = (int)param_4;
        piVar16[2] = iVar8;
        piVar16[3] = (int)piVar18;
        if (iVar8 == 0) {
          *param_4 = _MasterStackPointer;
          param_4[1] = param_4;
          param_4[2] = 0xc;
          param_4[3] = _Reset >> 0x10 & 0xff;
          param_4[4] = _NMI;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        unaff_r6[5] = piVar16[9];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int **)(puVar19 + 0x1b4) = param_2;
      uVar9 = (uint)*(ushort *)(uVar10 + 8);
      puVar20 = puVar19 + 0x198;
      if (uVar10 < 0xcd) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined4 *)(uVar9 + 0x68) = *(undefined4 *)(puVar19 + 0x194);
      *(short *)(puVar19 + 0x26d) = (short)piVar18;
      iVar11 = _DAT_2c43c064;
      if (-1 < iVar8 + -0xec) {
        coprocessor_loadlong(0xc,in_cr12,(uint)*(ushort *)(puVar19 + ((int)puVar20 >> 7) + 0xcc));
        *(short *)(puVar19 + 0xf0) = (short)(puVar19 + 400) + 0x2f;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar7 = *(undefined4 *)(puVar19 + iVar8 + 0xcc);
      *(short *)(uVar9 + 0x18) = (short)uVar7;
      uRam000000dc = (undefined1)uVar7;
      puVar17 = (ushort *)0x16;
      iVar11 = *(int *)(iVar11 + 0x50);
      iVar8 = (int)(_LAB_2c43bf70 >> 6) >> 0xe;
      puVar1 = (undefined1 *)0x370;
      puVar2 = (undefined1 *)0x380;
      lVar21 = 8;
      while( true ) {
        *puVar1 = *puVar20;
        puVar20 = puVar20 + 1;
        *puVar2 = *puVar20;
        puVar20 = puVar20 + 1;
        lVar21 = lVar21 + -1;
        if (lVar21 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      *(int *)(*puVar17 + 0x78) = iVar8;
      *(char *)(iVar11 + 0x2c43bffc) = (char)*(undefined4 *)(puVar19 + 0x564);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)((int)puVar15 + param_3) = 0xb;
    *puVar15 = param_4;
    puVar15[1] = piVar18;
    unaff_r5 = puVar15 + 2;
    in_CY = &DAT_00000006 < param_4;
    param_4 = (undefined4 *)((int)param_4 + -7);
    *piVar18 = param_1;
    unaff_r7 = piVar18 + 1;
    *unaff_r7 = param_1;
    piVar18[2] = 0xb;
    piVar18[3] = (int)unaff_r5;
    piVar18[4] = (int)unaff_r7;
    *(char *)((int)piVar18 + 10) = (char)unaff_r5;
    register0x00000054 = (BADSPACEBASE *)piVar16;
  } while( true );
}

