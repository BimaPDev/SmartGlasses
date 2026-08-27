/* FUN_2c0804c4 @ 0x2c0804c4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c080586) overlaps instruction at (ram,0x2c080584)
    */
/* WARNING: Removing unreachable block (ram,0x2c0806c6) */
/* WARNING: Removing unreachable block (ram,0x2c3062b8) */
/* WARNING: Removing unreachable block (ram,0x2c3062ae) */
/* WARNING: Removing unreachable block (ram,0x2c3258b8) */
/* WARNING: Removing unreachable block (ram,0x2c08040c) */
/* WARNING: Removing unreachable block (ram,0x2c08065a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0804c4(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  code *pcVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort extraout_r1;
  uint *puVar8;
  int extraout_r2;
  int iVar9;
  int unaff_r4;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint *unaff_r6;
  uint uVar13;
  int iVar14;
  int iVar15;
  int unaff_r9;
  int extraout_r12;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 in_d0;
  undefined8 in_d17;
  uint in_stack_000000f8;
  uint in_stack_00000260;
  uint in_stack_000002ac;
  
  uVar5 = *unaff_r6;
  uVar11 = unaff_r6[2];
  uVar13 = unaff_r6[3];
  iVar9 = param_2 >> 0x10;
  *(int *)iVar9 = iVar9;
  *(uint *)(iVar9 + 4) = uVar13;
  *(uint *)(iVar9 + 8) = uVar5 >> 0xc;
  if (uVar13 == 0) {
    puVar8 = *(uint **)(iVar9 + 0xc);
    in_stack_000000f8 = in_stack_000000f8 & ~in_stack_00000260;
    *(uint *)(in_stack_00000260 + 0x68) = uVar11;
    *(char *)(uVar11 - 0xb1) = (char)in_stack_00000260;
    coprocessor_function2(10,2,5,in_cr4,in_cr11,in_cr6);
    coprocessor_function(1,9,3,in_cr10,in_cr15,in_cr4);
    *(int *)(in_stack_000000f8 + 0x14) = iVar9 + 0x6b;
    uVar5 = *puVar8;
    uVar13 = puVar8[2];
    software_bkpt(0x72);
    *(char *)(in_stack_000000f8 + 8) = (char)puVar8[1];
    *(undefined2 *)((int)(uVar11 - 0xcd) + (uint)(0xa4 < in_stack_000000f8) + _DAT_2c306ab4 + 0x14)
         = 0x6718;
    if ((uVar5 >> 0x1b & 1) != 0) {
      *(uint *)(uVar11 - 0xcd) = uVar13;
      coprocessor_moveto(10,5,4,0,in_cr5,in_cr6);
      software_interrupt(0x13);
      coprocessor_function2(9,9,2,in_cr4,in_cr7,in_cr9);
      VectorHalvingAdd(in_d17,in_d0,4,1);
      uRam00000027 = 0x25;
      *(int *)(unaff_r9 + 0x90) = (int)((ulonglong)uRam2c3062a8 >> 0x20);
      *(undefined4 *)(unaff_r9 + 0x94) = 0;
      _BusFault = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    iVar6 = (int)uVar11 >> 0x1e;
    *(short *)(uVar13 + 8) = (short)uVar13;
    piVar10 = *(int **)(iVar6 + unaff_r4);
    func_0x2c894c30(iVar6,*(undefined4 *)(iVar9 + unaff_r4),*(ushort *)(iVar6 + 0x30) + 0x37,iVar9,
                    param_2);
    uRam2c08091e = SUB42(piVar10,0);
    iVar9 = piVar10[1];
    uVar5 = piVar10[2];
    iVar6 = piVar10[3];
    coprocessor_storelong(2,in_cr0,0x2c08057b);
    coprocessor_load(0xe,in_cr3,extraout_r2 + -0x2f8);
    if (((uint)piVar10 >> 0x13 & 1) == 0 || (uint)piVar10 >> 0x14 == 0) {
      coprocessor_load(7,in_cr6,unaff_r9 + 0x188);
      *(ushort *)(extraout_r2 + *piVar10) = extraout_r1 & ~(ushort)uVar5;
      *(int *)(extraout_r2 + 0x78) = extraout_r2;
      if (0xffffff71 < in_stack_000002ac) goto LAB_2c0805cc;
      iVar15 = in_stack_000002ac + 0xf5;
      *(int *)(iVar6 + 0x7c) = extraout_r2;
      iVar6 = iVar9;
      if (SCARRY4(in_stack_000002ac + 0x8e,0x67)) goto LAB_2c0805e2;
      iVar15 = *(int *)(uVar5 + 0x6c);
      iVar6 = iVar15 - uVar5;
      *(short *)(uVar5 + 0xe) = (short)iVar15;
      uVar7 = uVar5 >> 3;
      coprocessor_function2(6,0,0,in_cr6,in_cr0,in_cr2);
      *(short *)(iVar9 + uVar5) = (short)uVar7;
      iVar9 = iVar15 >> 0xc;
      iVar14 = _DAT_2c0808c0;
    }
    else {
LAB_2c0805cc:
      puVar1 = (ushort *)(iVar9 + 6);
      iVar15 = *(short *)((uint)*puVar1 + iVar9) + -0x22;
      iVar9 = (int)*(char *)(uVar5 * 2);
      iVar6 = (int)*(char *)((uint)*puVar1 * 2);
LAB_2c0805e2:
      uVar13 = (uint)*(ushort *)(uVar11 - 0x92);
      iVar14 = *(byte *)(uVar5 + uVar13) - 0xcc;
      uVar7 = uVar13 + uVar5;
      if (SBORROW4(iVar14,0xcc)) {
        bVar3 = *(byte *)(iVar15 + 0x906);
        *(short *)(uVar7 + 2) = (short)(char)(uVar7 >> 0x18);
        *(int *)(bVar3 + 0x14) = (int)uVar7 >> 0x18;
        uVar11 = (uVar11 - 200 >> 0x14) + (uVar11 - 200);
        uVar12 = (uint)*(ushort *)(iVar15 + 0x36);
        uVar5 = iVar15 * 0x1000;
        coprocessor_function(7,0xf,2,in_cr11,in_cr13,in_cr9);
        coprocessor_function2(4,0xd,0,in_cr15,in_cr8,in_cr9);
        if (CARRY4(uVar5,uVar12) && uVar5 + uVar12 != 0) {
          sVar4 = (short)((int)uVar11 >> 0x14);
          *(short *)(((int)uVar11 >> 0x14) + 8) = sVar4;
          software_bkpt(0xe0);
          *(short *)((uVar7 >> 0x13) + uVar12 + 0xe) = sVar4;
          coprocessor_function2(7,8,5,in_cr14,in_cr11,in_cr7);
          software_bkpt(0xe0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _NMI = uVar5;
        _HardFault = uVar12;
        *(undefined4 *)(uVar12 * 0x10 + 0x70) = *(undefined4 *)(*(ushort *)(uVar13 + 0x30) + 0xc);
        if (0xffffff2d < uVar11 && (int *)(uVar11 + 0xd2) != (int *)0x0) {
          uVar5 = extraout_r12 + 0x2c080828U & 0x10;
          *(uint *)uVar5 = uVar5;
          *(undefined4 *)(uVar5 + 4) = 0x67;
          *(undefined4 *)(uVar5 + 0x74) = 0x10;
          iVar6 = _DAT_2c080a4c;
          iVar9 = _DAT_2c08088c;
          coprocessor_function(0xf,0xc,5,in_cr3,in_cr7,in_cr7);
          *(short *)(uVar11 + 0xe2) = (short)*(undefined4 *)((_DAT_2c08088c >> 0x10) * 2);
          *(int *)(uVar11 + 0xd2) = iVar9;
          *(int *)(uVar11 + 0xd6) = iVar6 + -0xcc;
          *(undefined4 *)(uVar11 + 0xda) = 0xfffffff0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0x47,0x2c080728);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xd9,0x2c080774);
        (*pcVar2)();
      }
    }
    uVar13 = iVar14 - 0xfd;
    *(short *)(uVar5 + iVar6) = (short)uVar7;
    *(int *)(((int)uVar5 >> 9) + 0x24) = iVar9;
    uVar11 = 0;
    unaff_r4 = iVar6 << 0x13;
    iVar9 = uVar7 << 0x10;
  } while( true );
}

