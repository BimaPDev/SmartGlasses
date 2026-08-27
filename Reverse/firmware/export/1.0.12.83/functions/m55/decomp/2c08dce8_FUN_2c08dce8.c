/* FUN_2c08dce8 @ 0x2c08dce8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c08ded2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c08dce8(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  uint extraout_r2;
  undefined4 *extraout_r3;
  int unaff_r4;
  int iVar10;
  int unaff_r5;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r9;
  int iVar18;
  int unaff_r10;
  undefined4 extraout_r12;
  int unaff_lr;
  bool bVar19;
  bool bVar20;
  char cVar21;
  uint *puVar22;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 extraout_d4;
  undefined8 unaff_d14;
  undefined8 in_d20;
  undefined8 in_d24;
  undefined8 uVar23;
  int in_stack_0000018c;
  int in_stack_000001ac;
  int in_stack_000002b0;
  undefined4 uStack_10;
  
  iVar12 = *(int *)(param_2 + unaff_r4);
  *(short *)(param_3 + 10) = (short)unaff_r4;
  iVar10 = unaff_r5 * 4;
  iVar8 = *(int *)(iVar12 + 4);
  iVar9 = *(int *)(iVar12 + 8);
  uVar11 = *(uint *)(iVar12 + 0xc);
  uVar16 = *(uint *)(iVar12 + 0x10);
  iVar4 = iVar8 >> 0x10;
  *(int *)iVar4 = iVar4;
  *(int *)(iVar4 + 4) = iVar9;
  *(int *)(iVar4 + 8) = iVar9 << 0x16;
  *(int *)(iVar4 + 0xc) = iVar10;
  *(uint *)(iVar4 + 0x10) = uVar11;
  *(undefined4 *)(iVar4 + 0x14) = 0xf;
  *(uint *)(iVar4 + 0x18) = uVar16;
  *(undefined2 *)(iVar10 + 0x2a) = 0xf;
  iVar18 = unaff_lr;
  uStack_10 = param_1;
  if (SBORROW4(iVar12,0xe9)) goto LAB_2c08ddf2;
  puVar5 = *(undefined4 **)(uVar11 + 100);
  register0x00000030 = *(int *)(uVar16 + 0x2c) + (int)puVar5;
  Reset_3 = (int)puVar5 + register0x00000030;
  unique0x100001c5 = 7;
  coprocessor_load(5,in_cr0,unaff_r9 + -0x3f4);
  uVar13 = ((int)puVar5 << 0x10) >> 5;
  iVar10 = (int)puVar5 * 0x100;
  unique0x10000316 = uVar16;
  if (((uint)puVar5 & 0x1000000) == 0 || iVar10 == 0) {
    func_0x2b63854c(puVar5,*puVar5,puVar5[1],puVar5[2]);
    *(uint *)(uVar16 + 0x10) = uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_bkpt(0xe9);
  coprocessor_store(2,in_cr13,unaff_r10 + 0x3e0);
  uVar11 = uVar16 << 0x10;
  bVar20 = 0xfffffffe < uVar16;
  bVar19 = uVar16 == 0xffffffff;
  uVar23 = CONCAT44(iVar8,(uint)*(ushort *)(iVar10 + 0x36));
  iVar9 = 0x2c08de28;
  while( true ) {
    iVar8 = (int)((ulonglong)uVar23 >> 0x20);
    iVar4 = (int)uVar23;
    iVar18 = unaff_lr;
    if (bVar20 && !bVar19) {
      coprocessor_function(0xd,0xc,2,in_cr4,in_cr11,in_cr3);
      *(short *)(iVar8 + iVar4) = (short)uVar13;
      uVar11 = (uint)(byte)(&stack0x00000390)[iVar8];
      iVar10 = in_stack_0000018c;
LAB_2c08ddf2:
      *(int *)(iVar4 + 0x1c) = iVar9;
      uVar13 = _DAT_2c08e158;
    }
    uVar3 = *(ushort *)(iVar10 + 0x36);
    *(short *)(uVar13 + 0x2a) = (short)(iVar9 << 7);
    *(uint *)(in_stack_000001ac + 0x10) = (uint)*(byte *)(uVar3 + 0x1a);
    iVar10 = _DAT_2c08e17c;
    iVar4 = (uint)uVar3 + in_stack_000001ac;
    *(short *)(iVar4 + 0x2c) = (short)_DAT_2c08e17c;
    coprocessor_movefromRt(4,5,5,in_cr7,in_cr1);
    software_bkpt(0xd8);
    uVar16 = ((uint)(int)*(short *)(iVar4 * 2) >> 0xf) + in_stack_000001ac;
    bVar2 = *(byte *)(uVar11 + 3);
    unaff_lr = 0x2c08de49;
    uVar23 = func_0x2c0cba64(uVar16 & 0xffffffdf,uVar16,iVar10 + in_stack_000001ac);
    uVar16 = (uint)uVar23;
    cVar21 = SCARRY4(extraout_r2,0x71);
    uVar13 = extraout_r2 + 0x71;
    if (0xffffff8e < extraout_r2 && uVar13 != 0) break;
    if ((uVar16 >> 0xb & 1) != 0 && uVar16 >> 0xc != 0) {
      halt_baddata();
    }
    uVar11 = in_stack_000001ac << 0x17;
    iVar9 = extraout_r3[4];
    iVar10 = extraout_r3[5];
    uVar17 = extraout_r3[7];
    uVar13 = uVar17 >> 6;
    bVar20 = ((uint)(extraout_r3 + 8) & 0x100000) != 0;
    coprocessor_load(0xd,in_cr13,iVar10);
    *(uint *)uVar16 = uVar16;
    *(int *)(uVar16 + 4) = iVar10;
    *(uint *)(uVar16 + 8) = uVar13;
    *(uint *)(uVar16 + 0xc) = uVar17;
    bVar19 = false;
    if (((uint)(extraout_r3 + 8) & 0xfffff) == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      _Reset = iVar9;
      _NMI = 0;
      _HardFault = iVar10;
      _MemManage = uVar13;
      _BusFault = uVar17;
      coprocessor_loadlong(0xb,in_cr10,&uStack_10);
      _MasterStackPointer = (int)((ulonglong)uVar23 >> 0x20);
      Reset_3 = Reset_3;
      ram0x0000000b = ram0x0000000b;
      ram0x0000000f = ram0x0000000f;
      ram0x00000013 = ram0x00000013;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar17 = uVar16 >> 9;
  if ((uVar16 >> 8 & 1) == 0 || uVar17 == 0) {
    *(char *)(bVar2 + 4) = (char)uVar17;
    puVar14 = (undefined4 *)((int)(uint)bVar2 >> 4);
    *(undefined4 **)(uVar11 + in_stack_000001ac) = puVar14;
    if ((uVar13 >> 6 & 1) == 0 || uVar13 >> 7 == 0) {
      func_0x2c2bccec();
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x2c08e53c);
      (*pcVar1)();
    }
    uVar17 = 0x2c08df7c;
    *(undefined4 **)(uVar11 + 0x2c08df7c) = puVar14;
    iVar10 = iRam00000033;
    VectorWidenMultipyAccumulate(unaff_d14,extraout_d4,2);
    puVar5 = (undefined4 *)0x8d;
    cVar21 = false;
    *puVar14 = 0x8d;
    if (iVar10 == 0) goto LAB_2c08df0e;
    uVar17 = *(uint *)(iVar18 * 0x100000 + 0x6c);
  }
  else {
    iVar10 = uVar16 << 0x10;
    puVar5 = extraout_r3;
  }
  *(int *)(uVar17 + 0xc) = iVar10;
  if (iVar10 >> 0x10 != 0) {
    halt_baddata();
  }
LAB_2c08df0e:
  uVar15 = puVar5[2];
  iVar4 = puVar5[3];
  piVar6 = (int *)func_0x2c4caf90(iVar10,uVar17,*puVar5,puVar5 + 4);
  *(undefined4 *)(extraout_r1 + 0x68) = uVar15;
  uVar13 = 0xfffffe53;
  coprocessor_store(2,in_cr0,0xfffffe53);
  uVar11 = (int)piVar6 << 0xd;
  piVar7 = piVar6 + 2;
  iVar10 = (int)piVar6 << 0x1a;
  uVar16 = (int)piVar7 * 0x200000;
  FloatVectorComplexAdd(in_d24,in_d20,CONCAT44(extraout_s1,extraout_s0),0x5a,4);
  *(int *)(*piVar6 + 0xc) = extraout_r1;
  if (uVar16 == 0) {
    *(int *)(iVar4 + 0x44) = iVar10;
    iVar18 = iRamfffffff8;
    iVar4 = iRamfffffff4;
    coprocessor_loadlong(3,in_cr1,extraout_r12);
    iVar8 = *_DAT_2c08e044;
    uVar16 = _DAT_2c08e044[1];
    piVar7 = *(int **)(iVar8 + 8);
    in_stack_000002b0 = (int)*(short *)(iVar8 + iRamffffffec);
    uVar11 = uVar16 >> 8;
    iVar10 = 0x8b;
    uVar13 = (uint)*(byte *)(iRamfffffff4 + 0x1b);
    *(int *)(uVar16 + 0x40) = iVar8;
    if (cVar21 != '\0') {
      iRam0000008b = (in_stack_000002b0 - iVar8) - (uint)((uVar16 >> 7 & 1) == 0);
      iRam0000008f = iRam0000008b >> 0x18;
      uRam00000093 = 0x8b;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *piVar7 = (int)piVar7;
  piVar7[1] = uVar16;
  piVar7[2] = iVar10;
  piVar7[3] = iVar4;
  *piVar7 = in_stack_000002b0;
  piVar7[1] = uVar11;
  piVar7[2] = uVar13;
  piVar7[3] = iVar4;
  puVar22 = (uint *)(piVar7 + 4);
  puVar5 = (undefined4 *)(uint)*(byte *)(uVar13 + 0x1b);
  if (puVar5 == (undefined4 *)0x0) {
    coprocessor_store(3,in_cr15,*(int *)(iVar18 + -4) + -0x60);
    coprocessor_load(1,in_cr8,*(undefined4 *)(iVar18 + -0x24));
    coprocessor_load(0xe,in_cr2,(*puVar22 >> 0xc) - 0x178);
    coprocessor_loadlong(2,in_cr9,*(undefined4 *)(iVar18 + -0x24));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar5 = puVar22;
  puVar5[1] = uVar16 + (int)puVar22;
  puVar5[2] = uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

