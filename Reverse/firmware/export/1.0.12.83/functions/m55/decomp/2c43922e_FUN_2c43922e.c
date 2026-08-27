/* FUN_2c43922e @ 0x2c43922e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43922e(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  uint extraout_r2;
  undefined4 *puVar7;
  int extraout_r2_00;
  undefined4 *puVar8;
  int extraout_r3;
  uint extraout_r3_00;
  undefined4 *extraout_r3_01;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int unaff_r5;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  int unaff_r6;
  undefined4 *puVar17;
  uint uVar18;
  code *unaff_r8;
  undefined4 unaff_r9;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_r12;
  int *piVar19;
  uint *puVar20;
  int unaff_lr;
  int iVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  bool bVar25;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  uint in_stack_00000030;
  int *in_stack_000000bc;
  uint in_stack_00000118;
  undefined4 uStack00000134;
  uint in_stack_000001e0;
  int in_stack_00000228;
  byte in_stack_00000291;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar9 = _LAB_2c4395b4;
  puVar20 = (uint *)&iStack_18;
  iVar12 = unaff_r5 + 0x40;
  puVar17 = (undefined4 *)(uint)*(byte *)(unaff_r6 + 0x1e);
  uVar18 = (uint)*(short *)(iVar12 + param_4);
  if (param_1 == 0) {
    coprocessor_movefromRt(7,0,6,in_cr15,in_cr0);
    _MasterStackPointer = param_1;
    _Reset = (uint)*(ushort *)(param_4 + 0x3e);
    _NMI = param_4;
    _HardFault = &stack0x00000368;
    _MemManage = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(0,in_cr2,uVar18 + 0xb4);
  coprocessor_function(3,7,6,in_cr6,in_cr4,in_cr5);
  iVar21 = unaff_lr + 0x3c4;
  coprocessor_store(0,in_cr11,iVar21);
  puVar8 = (undefined4 *)(uint)*(ushort *)(iVar12 + param_4);
  if (iVar12 != 0 && -0x41 < unaff_r5) {
    coprocessor_store(0xb,in_cr0,iVar12);
    in_stack_000001e0 = in_stack_000001e0 >> 0x1c;
    *in_stack_000000bc = _LAB_2c4395b4;
    in_stack_000000bc[1] = param_2 + -1;
    in_stack_000000bc[2] = in_stack_00000228;
    in_stack_000000bc[3] = uVar18;
    in_stack_000000bc = in_stack_000000bc + 4;
    do {
      in_stack_000000bc = (int *)((int)in_stack_000000bc >> 0x13);
      *in_stack_000000bc = iVar9;
      in_stack_000000bc[1] = in_stack_000001e0;
      in_stack_000000bc[2] = 0x2c4396cc;
      in_stack_000000bc[3] = (int)puVar17;
      bVar22 = in_stack_000001e0 < 0xffffffbc;
      bVar25 = SCARRY4(in_stack_000001e0,0x44);
      iVar21 = in_stack_000001e0 + 0x44;
      puVar17[9] = iVar21;
      iVar12 = iRam2c4396d8;
      uVar15 = _LAB_2c4396d2_2;
      uVar10 = uRam2c4396d0;
      iVar9 = iRam2c4396cc;
      uVar6 = _LAB_2c4396a4;
      *(int *)iRam2c4396cc = iRam2c4396cc;
      *(undefined4 *)(iVar9 + 4) = uVar10;
      *(undefined1 **)(iVar9 + 8) = &LAB_2c4396dc;
      *(undefined4 **)(iVar9 + 0xc) = puVar17;
      *(undefined4 *)(iVar9 + 0x10) = uVar6;
      in_stack_000001e0 = (uint)*(ushort *)(iVar12 + 0x1c);
      if (bVar22 || iVar21 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_stack_000000bc = (int *)0x2c43948c;
    } while (!bVar25);
    *puVar17 = uVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + 2) = (short)param_1;
  uVar5 = _LAB_2c438a20;
  puVar14 = puRam2c43883c;
  puVar17 = (undefined4 *)(uVar18 * 0x4000);
  if ((uVar18 & 0x40000) == 0 || puVar17 == (undefined4 *)0x0) {
    uVar6 = *puVar17;
    iVar9 = puVar17[1];
    uVar10 = puVar17[2];
    uVar15 = puVar17[3];
    *puVar8 = uVar6;
    puVar8[1] = param_2;
    puVar8[2] = puVar8;
    puVar8[3] = iVar9;
    puVar8[4] = uVar10;
    puVar8[5] = uVar15;
    software_interrupt(0x76);
    *(undefined4 *)(*(int *)(param_2 + -0x34) + iVar9) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar9 = 0x8c;
  puVar16 = (uint *)puVar8[1];
  puVar7 = puVar8 + 3;
  if (!SCARRY4((int)&stack0x000001bc,0xc6)) {
    *(uint *)(in_stack_00000030 + 0x28) = in_stack_000001e0;
    *puVar16 = (uint)in_stack_00000291;
    puVar16[1] = in_stack_00000030;
    puVar16[2] = (uint)&stack0x00000282;
    puVar16[3] = param_7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack00000134 = *puVar8;
  *(short *)((int)puVar8 + 0x3a) = (short)puRam2c43883c;
  if ((int)in_stack_000001e0 < 0xa8) {
    puVar14 = (uint *)0xa1;
  }
  uVar18 = (uint)puVar17 & 0x2c438a2c;
  iStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  if (0xa6 >= in_stack_000001e0 || uVar18 == 0) {
    *(short *)((int)puVar17 + 0x2a) = (short)uVar5;
    if (0xa6 < in_stack_000001e0 && uVar18 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(uVar18 + 0x20) = 0x8c;
    puVar11 = (undefined4 *)~uVar5;
    piVar19 = (int *)puVar20;
    if (!SBORROW4(in_stack_000001e0,0xa7)) {
      piVar19 = &uStack_1c;
      uStack_1c = 0x8c;
      iVar9 = 0x94;
      puVar17 = puRam0000008c;
    }
    puVar14 = (uint *)(piVar19 + 0xce);
    if (SBORROW4(in_stack_000001e0,0xa7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar12 = uVar5 << 0x18;
    iVar13 = *(int *)(iVar9 + 0x7c);
    software_hlt(0x39);
    piVar19[-1] = iVar21;
    piVar19[-2] = (int)puVar14;
    piVar19[-3] = (int)puVar11;
    piVar19[-4] = iVar13;
    piVar19[-5] = iVar12;
    piVar19[-6] = iVar9;
    puVar20 = (uint *)(piVar19 + -7);
    *puVar20 = uVar5;
    uVar24 = 0x9e < uVar5;
    uVar23 = uVar5 == 0x9f;
    software_interrupt(0x61);
    while ((bool)uVar24 && !(bool)uVar23) {
      uVar24 = &DAT_00000043 < puVar14;
      uVar23 = puVar14 == (uint *)0x44;
      coprocessor_store(0xf,in_cr2,uVar18 + 0x11c);
      coprocessor_moveto(7,6,4,unaff_r9,in_cr13,in_cr3);
      iVar21 = 0x2c43884b;
      func_0x2cfb8604();
      iVar12 = extraout_r2_00;
      puVar17 = extraout_r3_01;
    }
    *(short *)(uVar18 + 0x38) = (short)uVar18;
    uVar5 = (int)puVar11 >> 0x19;
    in_stack_00000118 = (int)puVar17 >> 0xf;
    *(short *)(uVar5 + 0x14) = (short)puVar14;
    puVar7 = (undefined4 *)(iVar12 - 0x32);
    piVar19[0x93] = (int)puVar14;
    iVar9 = (int)puVar7 * 0x20000000;
    bVar22 = iVar9 < 0;
    *(undefined4 **)(iVar9 + 0x4c) = puVar17;
    if (iVar9 != 0) {
      software_interrupt(0xe2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    puVar11 = puVar8 + 0x26;
    bVar22 = false;
    *(short *)(puVar8 + 0xc) = (short)uVar5;
  }
  iVar9 = _LAB_2c438bd0;
  if (bVar22) {
    *puVar14 = uVar5;
    puVar14[1] = (uint)puVar11;
    puVar14[2] = (uint)puVar7;
    puVar20[0x1f] = (uint)puVar11;
    *(uint **)(in_stack_00000118 * 2) = puVar14 + 3;
    func_0x2c5f9b34();
    uVar18 = (int)extraout_r2 >> 3;
    puVar14[3] = extraout_r2;
    puVar14[4] = extraout_r3_00;
    puVar14[5] = in_stack_00000118;
    puVar14[6] = uVar18;
    (*unaff_r8)(uVar18 - 2,uRam2c42a438,uVar18 - 2,0xa4);
    uVar10 = s__NSt13__facet_shims12_GLOBAL__N__2c42a722._6_4_;
    (*extraout_r12)(uVar18 - 2,extraout_r1,uVar18 - 2,0xdf);
    uVar6 = s__NSt13__facet_shims12_GLOBAL__N__2c42a541._15_4_;
    *(char *)((uVar18 - 2 >> 0x10) + 0x11) = (char)extraout_r3;
    *(undefined4 *)(uVar10 + -0xec) = uVar6;
    *(int *)(uVar10 + -0xac) = extraout_r3 + 0x31;
    uVar10 = s__NSt13__facet_shims12_GLOBAL__N__2c42a5ab._25_4_;
    iVar12 = *(int *)(uVar6 + 4);
    iVar9 = (int)*(short *)(uVar6 + (int)*(short *)(uVar6 + uVar18));
    iVar21 = (int)*(short *)(*(int *)(uVar18 + 0x54) + 0x73 + uVar18);
    *(int *)(iVar21 + 0x30) = iVar9;
    uVar6 = *(undefined4 *)(uVar18 + 0x44);
    *(undefined4 *)(uVar18 + 0x14) = uVar10;
    *(undefined4 *)(iVar21 + 0x54) = uVar10;
    *(char *)(iVar12 + 0xd) = (char)uVar6;
    uVar6 = s__NSt13__facet_shims12_GLOBAL__N__2c42a576._14_4_;
    iVar21 = *(int *)(uVar18 + 0x14) * 2;
    *(char *)(iVar9 + 0x11) = (char)iVar12;
    *(undefined4 *)(uVar10 + 0x14) = uVar6;
    *(int *)(uVar10 + 0x54) = iVar12 + 0x31;
    uVar10 = s__NSt13__facet_shims12_GLOBAL__N__2c42a5e0._24_4_;
    iVar12 = *(int *)(uVar6 + 4);
    iVar9 = (int)*(short *)(uVar6 + (int)*(short *)(uVar6 + iVar21));
    iVar13 = (int)*(short *)(*(int *)(iVar21 + 0x54) + 0x73 + iVar21);
    *(int *)(iVar13 + 0x30) = iVar9;
    uVar6 = *(undefined4 *)(iVar21 + 0x44);
    *(undefined4 *)(iVar21 + 0x14) = uVar10;
    *(undefined4 *)(iVar13 + 0x54) = uVar10;
    *(char *)(iVar12 + 0xd) = (char)uVar6;
    uVar6 = s__NSt13__facet_shims12_GLOBAL__N__2c42a5ab._13_4_;
    iVar21 = *(int *)(iVar21 + 0x14) * 2;
    *(char *)(iVar9 + 0x11) = (char)iVar12;
    *(undefined4 *)(uVar10 + 0x14) = uVar6;
    *(int *)(uVar10 + 0x54) = iVar12 + 0x31;
    uVar10 = s__NSt13__facet_shims12_GLOBAL__N__2c42a615._23_4_;
    sVar2 = *(short *)(uVar6 + (int)*(short *)(uVar6 + iVar21));
    sVar3 = *(short *)(*(int *)(uVar6 + 4) + iVar21);
    sVar4 = *(short *)(*(int *)(iVar21 + 0x54) + 0x73 + iVar21);
    iVar12 = (int)sVar4;
    uVar6 = *(undefined4 *)(iVar12 + 0x50);
    uVar23 = (undefined1)iVar21;
    *(undefined1 *)(s__NSt13__facet_shims12_GLOBAL__N__2c42a615._23_4_ + 0xd) = uVar23;
    *(undefined4 *)(iVar12 + 0x14) = uVar6;
    *(int *)(uVar10 + 0x54) = (int)sVar3;
    iVar9 = *(int *)(iVar21 + 0x54);
    *(int *)(iVar9 + 0x34) = iVar9;
    *(short *)(iVar9 + iVar21) = sVar4;
    sVar4 = *(short *)(iVar12 + uVar10);
    *(int *)(sVar4 + 100) = (int)sVar3;
    *(int *)(uVar10 + 0x34) = iVar9 + 0x74;
    *(undefined1 *)(uVar10 + 0x11) = uVar23;
    *(char *)(sVar4 + 0xd) = (char)sVar3;
    *(undefined1 *)(iVar21 + 0xd) = uVar23;
                    /* WARNING: Could not recover jumptable at 0x2c42a556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(iVar21 + 0x14),iVar9 + 0x74,sVar2 + 0x31);
    return;
  }
  uVar1 = *(ushort *)(uVar18 + 0x1e);
  software_bkpt(0x9d);
  *(ushort *)((uVar5 + 0xbd >> 0x1e) + 4) = uVar1;
  coprocessor_moveto(0xd,3,7,iVar21,in_cr9,in_cr15);
  *(uint *)(iVar9 + 0x3c) = uVar18;
  *(uint *)(iVar9 + 0x60) = (uint)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

