/* FUN_2c44e2ba @ 0x2c44e2ba */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44dd08) */
/* WARNING: Removing unreachable block (ram,0x2c44ddac) */
/* WARNING: Removing unreachable block (ram,0x2c44dd12) */
/* WARNING: Removing unreachable block (ram,0x2c44dcb2) */
/* WARNING: Removing unreachable block (ram,0x2c44dcb6) */
/* WARNING: Removing unreachable block (ram,0x2c44dbce) */
/* WARNING: Removing unreachable block (ram,0x2c44de90) */
/* WARNING: Removing unreachable block (ram,0x2c44d900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_2c44e2ba(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_r4;
  uint uVar10;
  uint unaff_r5;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int *unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_r12;
  undefined4 *puVar15;
  uint unaff_lr;
  bool bVar16;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 unaff_s26;
  undefined8 in_d23;
  ulonglong uVar17;
  
  *(char *)((int)unaff_r7 + 0xd) = (char)unaff_r7;
  *(char *)((int)unaff_r7 + param_3) = (char)param_1;
  uVar11 = (unaff_r5 - param_4) - (uint)(unaff_r5 < 0x3e);
  if (unaff_r4 != 0) {
    enableFIQinterrupts();
    enableIRQinterrupts();
    enableDataAbortInterrupts();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(7,in_cr11,unaff_r10 + -0x330);
  software_interrupt(0x39);
  coprocessor_store(2,in_cr14,unaff_r10 + -0x6e0);
  if (!SBORROW4((int)unaff_r7,0xd2)) {
    return CONCAT44(unaff_r7,param_1);
  }
  software_hlt(0x39);
  puVar15 = (undefined4 *)register0x00000054;
  while( true ) {
    coprocessor_moveto(5,6,3,unaff_r7,in_cr2,in_cr4);
    puVar15[0xa9] = iRam2c44e2e0;
    *(char *)(iRam2c44e2e0 + 0x2c44e3f8) = (char)uVar11;
    software_interrupt(0xc);
    iVar9 = unaff_r7[1];
    iVar14 = unaff_r7[2];
    *(undefined2 *)(*unaff_r7 + 0x14) = *(undefined2 *)(unaff_lr + 0x16);
    bVar16 = SBORROW4(iVar9,0x79);
    VectorShiftRight(in_d23,0x32);
    *(int *)(puVar15[2] + 0x2c) = iVar9;
    if (!bVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x29,0x2c42c248);
      (*pcVar1)();
    }
    piVar4 = (int *)(iVar9 + 8U >> 0x15);
    iVar7 = *(int *)(iVar14 + 0x2c);
    uVar11 = (uint)*(char *)(iVar9 + 8U + *(int *)(*(int *)(iVar9 + 4) + 0x28));
    while( true ) {
      uVar8 = piVar4[1];
      uVar10 = piVar4[2];
      puVar12 = (undefined4 *)piVar4[3];
      piVar4 = *(int **)(*piVar4 + uVar10);
      iVar14 = iVar14 + (int)piVar4;
      *(char *)(uVar8 + 8) = (char)iVar7;
      uVar5 = (uint)piVar4 >> 2;
      if (((uint)piVar4 >> 1 & 1) == 0) break;
      bVar16 = SCARRY4(iVar14,uVar11);
      iVar7 = iVar14 + uVar11;
    }
    if (uVar5 != 0 && !bVar16) break;
    puVar6 = (uint *)(uVar11 >> 0x15);
    *puVar12 = piVar4;
    puVar12[1] = uVar10;
    *puVar6 = uVar11;
    puVar6[1] = uVar8;
    puVar6[2] = uVar10;
    uVar3 = _DAT_000000fc;
    iVar9 = (int)puVar6 + uVar8 + 0xc;
    piVar13 = (int *)piVar4[1];
    if (piVar4 + 2 != (int *)0x0) {
      *(short *)(iVar9 + 0x18) = (short)(piVar4 + 2);
      if (SBORROW4(puVar15[0x86] * 2,0x71)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c44dc42;
    }
    uRam000000de = (undefined2)uVar8;
    *(undefined1 *)(uVar8 + 0xb8) = 0xb8;
    *(short *)(uVar11 + 0x20) = (short)uVar3;
    *(undefined2 *)(uVar11 + 0x26) = 0xb8;
    uVar11 = (uint)*(ushort *)(iVar9 + 0x2e);
    unaff_r7 = (int *)(int)*(short *)(iVar9 * 2);
    *(char *)(iVar9 + 0x2c44de9c) = (char)*(ushort *)(iVar9 + 0x2e);
    iVar14 = *(int *)(uVar11 + 0x5c);
    uRam2c44df90 = unaff_s26;
    *(char *)((int)piVar13 + 0x1e) = (char)piVar13;
    puVar15[0xd7] = 0x2b;
    uVar2 = *(ushort *)(iVar14 + 2);
    piVar4 = (int *)(uint)uVar2;
    iVar7 = 0x2c44dd08;
    *piVar13 = (int)unaff_r7;
    piVar13[1] = (int)piVar13;
    if (SBORROW4((int)piVar13,6)) {
      if (&DAT_00000006 < piVar13) {
        piVar4 = (int *)0x2c44ddcc;
        iVar14 = (int)((int)piVar13 + 2) >> 0x20;
        *(char *)(uVar11 - 0xf0) = (char)iVar9 * '\x02';
        piVar13 = (int *)puVar15[0xf4];
        iVar7 = *(int *)(uVar11 - 0xe9);
      }
      *piVar4 = iVar14;
      piVar4[1] = iVar7;
      piVar4[2] = (int)piVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_lr = (uint)*(ushort *)(uVar11 + 0x3e);
    if (piVar13 == (int *)&DAT_00000006) {
      return (ulonglong)CONCAT24(uVar2,puVar15[3]);
    }
    uRam74200004 = 0x2c44dd08;
    piRam74200000 = unaff_r7;
    uRam74200008 = uVar11;
    uRam7420000c = unaff_lr;
    *(int **)(in_r12 + -0x98) = unaff_r7;
    *(int **)(in_r12 + -0x94) = piVar4;
    puVar15 = puVar15 + 3;
  }
  iVar9 = *(int *)((int)puVar12 + uVar11);
  *(short *)(uVar5 + 6) = (short)uVar5;
  puVar15[0x22] = iVar14;
  *(int *)(iVar9 + 0x20) = iVar9;
  puVar15[0x4c] = uVar5;
LAB_2c44dc42:
                    /* WARNING: Could not recover jumptable at 0x2c44dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar17 = (*UNRECOVERED_JUMPTABLE)();
  return uVar17;
}

