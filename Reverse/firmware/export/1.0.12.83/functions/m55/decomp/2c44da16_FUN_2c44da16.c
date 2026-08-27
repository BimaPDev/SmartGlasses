/* FUN_2c44da16 @ 0x2c44da16 */

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

undefined4 FUN_2c44da16(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  uint uVar13;
  int iVar14;
  int *unaff_r5;
  uint uVar15;
  int unaff_r6;
  undefined4 *puVar16;
  int unaff_r7;
  int iVar17;
  int *piVar18;
  code *UNRECOVERED_JUMPTABLE;
  int in_r12;
  undefined4 *puVar19;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar20;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 unaff_s26;
  undefined8 in_d23;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  uStack_10 = param_3;
  iStack_14 = param_2;
  puVar19 = &uStack_18;
  uStack_18 = param_1;
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function2(3,6,5,in_cr14,in_cr5,in_cr15);
    *(undefined1 *)((int)unaff_r5 * 2) = *(undefined1 *)(unaff_r7 + 0xd);
    return param_1;
  }
  *(char *)(param_2 + unaff_r6) = (char)param_4;
  puVar5 = (uint *)*unaff_r5;
  bVar20 = SBORROW4(unaff_r5[1],0xa4);
  uVar12 = unaff_r5[1] - 0xa4;
  iVar17 = 0;
  if (unaff_r5[2] != 0) {
    bVar2 = *(byte *)((int)puVar5 + 0xf);
    uVar3 = *(ushort *)(*(int *)(unaff_r4 + 0x8a) + 0x16);
    *(short *)(unaff_r5[2] + 0x10) = (short)unaff_r4 + 0x2a;
    *puVar5 = (uint)bVar2;
    puVar5[1] = 0x2c44e144;
    *(uint *)(uint)uVar3 = (uint)bVar2;
    (*UNRECOVERED_JUMPTABLE)();
    software_hlt(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    while( true ) {
      uVar13 = puVar5[1];
      uVar15 = puVar5[2];
      puVar16 = (undefined4 *)puVar5[3];
      puVar5 = *(uint **)(*puVar5 + uVar15);
      iVar17 = iVar17 + (int)puVar5;
      *(char *)(uVar13 + 8) = (char)param_2;
      uVar7 = (uint)puVar5 >> 2;
      if (((uint)puVar5 >> 1 & 1) == 0) break;
      bVar20 = SCARRY4(iVar17,uVar12);
      param_2 = iVar17 + uVar12;
    }
    if (uVar7 != 0 && !bVar20) break;
    puVar8 = (uint *)(uVar12 >> 0x15);
    *puVar16 = puVar5;
    puVar16[1] = uVar15;
    *puVar8 = uVar12;
    puVar8[1] = uVar13;
    puVar8[2] = uVar15;
    uVar6 = _DAT_000000fc;
    iVar17 = (int)puVar8 + uVar13 + 0xc;
    piVar18 = (int *)puVar5[1];
    if (puVar5 + 2 != (uint *)0x0) {
      *(short *)(iVar17 + 0x18) = (short)(puVar5 + 2);
      if (SBORROW4(puVar19[0x83] * 2,0x71)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c44dc42;
    }
    uRam000000de = (undefined2)uVar13;
    *(undefined1 *)(uVar13 + 0xb8) = 0xb8;
    *(short *)(uVar12 + 0x20) = (short)uVar6;
    *(undefined2 *)(uVar12 + 0x26) = 0xb8;
    uVar12 = (uint)*(ushort *)(iVar17 + 0x2e);
    piVar10 = (int *)(int)*(short *)(iVar17 * 2);
    uVar4 = (undefined1)*(ushort *)(iVar17 + 0x2e);
    *(undefined1 *)(iVar17 + 0x2c44de9c) = uVar4;
    iVar11 = *(int *)(uVar12 + 0x5c);
    uRam2c44df90 = unaff_s26;
    *(char *)((int)piVar18 + 0x1e) = (char)piVar18;
    puVar19[0xd4] = 0x2b;
    piVar9 = (int *)(uint)*(ushort *)(iVar11 + 2);
    iVar14 = 0x2c44dd08;
    *piVar18 = (int)piVar10;
    piVar18[1] = (int)piVar18;
    if (SBORROW4((int)piVar18,6)) {
      if (&DAT_00000006 < piVar18) {
        piVar9 = (int *)0x2c44ddcc;
        iVar11 = (int)((int)piVar18 + 2) >> 0x20;
        *(char *)(uVar12 - 0xf0) = (char)iVar17 * '\x02';
        piVar18 = (int *)puVar19[0xf1];
        iVar14 = *(int *)(uVar12 - 0xe9);
      }
      *piVar9 = iVar11;
      piVar9[1] = iVar14;
      piVar9[2] = (int)piVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = *(ushort *)(uVar12 + 0x3e);
    if (piVar18 == (int *)&DAT_00000006) {
      return *puVar19;
    }
    uRam74200004 = 0x2c44dd08;
    piRam74200000 = piVar10;
    uRam74200008 = uVar12;
    uRam7420000c = (uint)uVar3;
    *(int **)(in_r12 + -0x98) = piVar10;
    *(int **)(in_r12 + -0x94) = piVar9;
    coprocessor_moveto(5,6,3,piVar10,in_cr2,in_cr4);
    puVar19[0xa9] = iRam2c44e2e0;
    *(undefined1 *)(iRam2c44e2e0 + 0x2c44e3f8) = uVar4;
    software_interrupt(0xc);
    iVar11 = piVar10[1];
    iVar17 = piVar10[2];
    *(undefined2 *)(*piVar10 + 0x14) = *(undefined2 *)(uVar3 + 0x16);
    bVar20 = SBORROW4(iVar11,0x79);
    piVar18 = puVar19 + 2;
    puVar19 = puVar19 + 3;
    VectorShiftRight(in_d23,0x32);
    *(int *)(*piVar18 + 0x2c) = iVar11;
    if (!bVar20) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x29,0x2c42c248);
      (*pcVar1)();
    }
    puVar5 = (uint *)(iVar11 + 8U >> 0x15);
    param_2 = *(int *)(iVar17 + 0x2c);
    uVar12 = (uint)*(char *)(iVar11 + 8U + *(int *)(*(int *)(iVar11 + 4) + 0x28));
  }
  iVar11 = *(int *)((int)puVar16 + uVar12);
  *(short *)(uVar7 + 6) = (short)uVar7;
  puVar19[0x1f] = iVar17;
  *(int *)(iVar11 + 0x20) = iVar11;
  puVar19[0x49] = uVar7;
LAB_2c44dc42:
                    /* WARNING: Could not recover jumptable at 0x2c44dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*UNRECOVERED_JUMPTABLE)();
  return uVar6;
}

