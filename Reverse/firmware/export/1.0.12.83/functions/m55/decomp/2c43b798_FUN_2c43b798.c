/* FUN_2c43b798 @ 0x2c43b798 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c43b83c) overlaps instruction at (ram,0x2c43b83a)
    */
/* WARNING: Removing unreachable block (ram,0x2c43bf12) */
/* WARNING: Removing unreachable block (ram,0x2c43bf16) */
/* WARNING: Removing unreachable block (ram,0x2c43bf24) */
/* WARNING: Removing unreachable block (ram,0x2c44e32e) */
/* WARNING: Removing unreachable block (ram,0x2c43bfc2) */
/* WARNING: Removing unreachable block (ram,0x2c43c632) */
/* WARNING: Removing unreachable block (ram,0x2c43c538) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb6) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb8) */
/* WARNING: Removing unreachable block (ram,0x2c43b7d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c43b798(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int extraout_r1;
  int iVar11;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar12;
  int extraout_r3;
  undefined4 extraout_r3_00;
  int extraout_r3_01;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  undefined4 *unaff_r7;
  undefined8 *puVar21;
  ushort *puVar22;
  code *UNRECOVERED_JUMPTABLE;
  int *unaff_r9;
  int unaff_r11;
  undefined4 *puVar23;
  int unaff_pc;
  char in_NG;
  char cVar24;
  bool in_ZR;
  undefined1 uVar25;
  char in_OV;
  bool bVar26;
  undefined1 uVar27;
  bool bVar28;
  undefined1 *puVar29;
  longlong lVar30;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar31;
  undefined4 in_stack_00000020;
  undefined1 *in_stack_000000e8;
  int in_stack_00000110;
  undefined4 in_stack_0000015c;
  int in_stack_00000384;
  int iStack_40;
  int *piStack_28;
  int *piStack_24;
  int iStack_1c;
  
  puVar29 = in_stack_000000e8;
  if (in_ZR || in_NG != in_OV) {
    param_2 = 0x1b;
    in_NG = '\0';
    software_bkpt(0xee);
    uRam00000027 = (undefined2)param_1;
    software_interrupt(0x46);
    if (unaff_r7 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c43b81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar31 = (*UNRECOVERED_JUMPTABLE)();
      return uVar31;
    }
  }
  uVar8 = *unaff_r7;
  uVar13 = unaff_r7[1];
  if (in_NG == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_2 + 0x11) = (char)param_4;
  *(char *)(in_stack_00000110 + 10) = (char)uVar13;
  puVar23 = &stack0x00000020;
  piVar20 = (int *)&stack0x0000023c;
  puVar21 = (undefined8 *)(param_4 * 0x40);
  uVar4 = *(undefined1 *)(param_1 + 0x17);
  uVar25 = ((uint)in_stack_000000e8 >> 0x1a & 1) != 0;
  uVar27 = (uint)in_stack_000000e8 >> 0x1b == 0;
  cVar24 = '\0';
  *(short *)(in_stack_000000e8 + 0x1c) = (short)in_stack_000000e8;
  uVar31 = func_0x2b6e6134(uVar8,(uint)in_stack_000000e8 >> 0x1b,uVar4);
  iVar11 = (int)((ulonglong)uVar31 >> 0x20);
  if (cVar24 == '\0') {
    software_hlt(0x25);
    iVar16 = extraout_r2;
    iVar10 = extraout_r3;
    while( true ) {
      if ((bool)uVar25 && !(bool)uVar27) {
        iVar10 = (int)(short)((ushort)((uint)iVar10 >> 8) & 0xff) << 0x1b;
      }
      else {
        iVar11 = *piVar20;
        iVar10 = piVar20[1];
        puVar21 = (undefined8 *)piVar20[3];
        piVar20 = piVar20 + 4;
        if (puVar29 != (undefined1 *)0x0) {
          uVar31 = func_0x2cc51818();
          *puVar21 = uVar31;
          *(undefined4 *)(puVar21 + 1) = extraout_r2_01;
          *(int **)((int)puVar21 + 0xc) = piVar20;
          *(undefined1 **)(puVar21 + 2) = &stack0x000000f4;
          *(undefined8 **)((int)puVar21 + 0x14) = puVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if ((bool)uVar25 != false) {
        *(undefined8 **)(iVar11 + 0x34) = puVar21;
      }
      iVar7 = _DAT_2c43c064;
      unaff_pc = unaff_pc + 0x13c;
      coprocessor_loadlong(3,in_cr6,unaff_pc);
      if ((bool)uVar27 != false) break;
      puVar29 = &stack0x00000264;
      uVar31 = func_0x2ced0d84();
      iVar11 = (int)((ulonglong)uVar31 >> 0x20);
      iVar16 = extraout_r2_00;
      iVar10 = extraout_r3_01;
      if (!(bool)uVar25 || (bool)uVar27) {
        return CONCAT44(in_stack_00000020,(int)uVar31);
      }
    }
    *(short *)((int)piVar20 + (int)puVar29) = (short)puVar21;
    if (-1 < iVar16 + -0x1e8) {
      coprocessor_loadlong(0xc,in_cr12,(uint)*(ushort *)(iVar10 + ((int)puVar29 >> 7)));
      *(short *)(iVar10 + 0x24) = (short)puVar29 + 0x27;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = *(undefined4 *)(iVar10 + iVar16 + -0xfc);
    *(short *)(iVar11 + 0x18) = (short)uVar8;
    *(char *)((int)piVar20 + 7) = (char)uVar8;
    puVar22 = (ushort *)0x16;
    iVar16 = *(int *)(iVar7 + 0x50);
    iVar11 = (int)(_LAB_2c43bf70 >> 6) >> 0xe;
    puVar1 = (undefined1 *)0x370;
    puVar2 = (undefined1 *)0x380;
    lVar30 = 8;
    while( true ) {
      *puVar1 = *puVar29;
      puVar29 = puVar29 + 1;
      *puVar2 = *puVar29;
      puVar29 = puVar29 + 1;
      lVar30 = lVar30 + -1;
      if (lVar30 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(int *)(*puVar22 + 0x78) = iVar11;
    *(char *)(iVar16 + 0x2c43bffc) = (char)*(undefined4 *)((int)puVar23 + 0x564);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(7,in_cr6,unaff_r11 + 0x3ec);
  puVar29[5] = (char)extraout_r2;
  iVar16 = (int)puVar21 - (int)puVar29;
  if (-1 < iVar16) {
    do {
      uVar8 = *(undefined4 *)(extraout_r3 + 0x5c + iVar16);
      iVar10 = -iVar11;
    } while (iVar10 == 0 || 0 < iVar11);
    *(short *)(iVar10 + (int)uVar31) = (short)uVar8;
    *(char *)((int)puVar21 + 0x1e) = (char)uVar8;
    *(char *)(extraout_r3 + 0x6a) = (char)iVar10;
    uRam00000063 = 0x4b;
    *(undefined4 *)(puVar21 + 10) = 0x4b;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)puVar21 < (int)puVar29) {
    *(short *)((int)puVar21 + 0xe) = (short)iVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar19 = *(uint *)(puVar21 + 2);
  uVar8 = *(undefined4 *)((int)puVar21 + 0x14);
  uVar9 = (**(code **)((int)puVar21 + 4))(_LAB_2c43b9a8,*(undefined4 *)puVar21);
  bVar5 = *(byte *)(uVar9 + 0x11);
  *(uint *)(uVar9 * 0x40001) = uVar19;
  *(undefined4 *)(uVar19 + 0x18) = extraout_r3_00;
  uVar19 = uVar19 >> 0x19;
  if (!SCARRY4((uint)*(byte *)(bVar5 + 0x1f),0x7e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(uVar9 + 0x34) = *(undefined2 *)(uVar19 * 2);
  uVar9 = uVar9 & 0xfffffb57;
  puVar6 = (undefined2 *)(uVar9 - 0xc3);
  if (puVar6 == (undefined2 *)0x0 || (int)uVar9 < 0xc3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(0xd,0xb,0,in_cr4,in_cr14,in_cr7);
  uVar19 = *(uint *)(uVar19 + 8) | *(uint *)(uVar19 + 4);
  piVar20 = (int *)((int)puVar6 * 0x1000);
  in_stack_0000015c = uVar8;
  if (-1 < (int)piVar20) {
    *puVar6 = (short)puVar6;
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xd6,0x2c43b32a);
    (*pcVar3)();
  }
  iVar10 = *(int *)(uVar19 + 4);
  piVar15 = *(int **)(uVar19 + 8);
  bVar28 = false;
  iVar11 = _LAB_2c43b68c;
  uVar9 = (uint)*(ushort *)(uVar9 - 0xb7);
  iVar16 = -iVar10;
  if (SBORROW4(0,iVar10)) {
    iVar16 = *piVar20;
    iVar11 = piVar20[1];
    piVar15 = (int *)piVar20[2];
    piVar18 = (int *)piVar20[3];
    piVar20 = piVar20 + 4;
    bVar28 = SBORROW4(_LAB_2c43b550,0xf8);
    bVar26 = _LAB_2c43b550 == 0xf8;
    if (piVar15 == (int *)0x0) {
      coprocessor_store(8,in_cr14,unaff_r9 + 0xcc);
      if (iVar11 << 4 < 0 != bVar28) {
        coprocessor_loadlong(6,in_cr15,_LAB_2c43b80c + -0x3f8);
        *(char *)(_LAB_2c43b80c + -0x3ed) = (char)piVar18;
        *piVar18 = iVar16;
        piVar18[1] = (int)piVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)(_LAB_2c43b550 - 0xf8) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)_LAB_2c43b550 < 0xf9) {
      software_interrupt(0xdf);
      bVar28 = SBORROW4(iVar11,0x75);
      bVar26 = iVar11 == 0x75;
    }
    uVar9 = _LAB_2c43b550;
    iVar16 = in_stack_00000384;
    if (bVar26 || ((int)_LAB_2c43b550 < 0xf9 && iVar11 + -0x75 < 0) != bVar28) {
      bVar28 = SBORROW4(iVar11,0x95);
    }
  }
  *(char *)((int)piVar15 + uVar9) = (char)iVar16;
  iVar7 = *piVar15;
  iVar10 = piVar15[1];
  iVar12 = piVar15[2];
  iVar17 = piVar15[3];
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar12;
  *(char *)(iVar7 + 0x1d) = (char)piVar20;
  if (iVar16 >> 0x10 < 0 != bVar28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar15[0xc] = iVar11;
  piVar18 = unaff_r9;
  if (iVar16 >> 0x10 != 0) {
    do {
      piVar14 = piVar18 + 0x2f;
      (**(code **)(*piVar18 + 4))(piVar18,iVar10);
      iVar10 = extraout_r1;
      piVar18 = piVar14;
    } while (piVar20 != piVar14);
  }
  iVar11 = _DAT_2c52ea68;
  piVar20 = piStack_28;
  piVar18 = piStack_24;
  if (unaff_r9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  for (; _DAT_2c52ea68 = iVar11, piVar20 != piStack_24; piVar20 = piVar20 + 0x2f) {
    (**(code **)(*piVar20 + 4))(piVar20);
    iVar11 = _DAT_2c52ea68;
    piVar18 = piStack_28;
  }
  if (piVar18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar18);
  }
  if (iStack_40 != iVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar15[0x11] = _DAT_2c52ea64;
  piVar20 = _LAB_2c52ea60;
  piVar15[0xf] = iVar11;
  if (*piVar20 == iStack_1c) {
    return CONCAT44(iStack_40,piVar15 + 4);
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

