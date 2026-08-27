/* FUN_2c44dc46 @ 0x2c44dc46 */

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

undefined4 FUN_2c44dc46(uint param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint unaff_r4;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int unaff_r6;
  int *unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  int in_r12;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 unaff_s26;
  undefined8 in_d23;
  undefined4 uStack_10;
  
  *(short *)(unaff_r4 + 0x2a) = (short)unaff_r4;
  *(short *)(param_2 + 0x26) = (short)param_2;
  uStack_10 = param_3;
  param_1 = param_1 >> 2;
  puVar13 = &uStack_10;
  while( true ) {
    puVar14 = puVar13;
    *(short *)(param_2 + 0x26) = (short)unaff_r4;
    uVar4 = *(undefined4 *)(param_2 + 0x44);
    *(char *)(param_2 + unaff_r4) = (char)param_2;
    *(short *)(param_1 + 0x20) = (short)uVar4;
    *(short *)(param_1 + 0x26) = (short)param_2;
    uVar12 = (uint)*(ushort *)(unaff_r6 + 0x2e);
    piVar8 = (int *)(int)*(short *)(unaff_r6 * 2);
    uVar3 = (undefined1)*(ushort *)(unaff_r6 + 0x2e);
    *(undefined1 *)(unaff_r6 + 0x2c44de9c) = uVar3;
    iVar9 = *(int *)(uVar12 + 0x5c);
    uRam2c44df90 = unaff_s26;
    *(char *)((int)unaff_r7 + 0x1e) = (char)unaff_r7;
    puVar14[0xd4] = 0x2b;
    piVar6 = (int *)(uint)*(ushort *)(iVar9 + 2);
    iVar10 = 0x2c44dd08;
    *unaff_r7 = (int)piVar8;
    unaff_r7[1] = (int)unaff_r7;
    if (SBORROW4((int)unaff_r7,6)) {
      if (&DAT_00000006 < unaff_r7) {
        piVar6 = (int *)0x2c44ddcc;
        iVar9 = (int)((int)unaff_r7 + 2) >> 0x20;
        *(char *)(uVar12 - 0xf0) = (char)(unaff_r6 << 1);
        unaff_r7 = (int *)puVar14[0xf1];
        iVar10 = *(int *)(uVar12 - 0xe9);
      }
      *piVar6 = iVar9;
      piVar6[1] = iVar10;
      piVar6[2] = (int)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(ushort *)(uVar12 + 0x3e);
    if (unaff_r7 == (int *)&DAT_00000006) {
      return *puVar14;
    }
    uRam74200004 = 0x2c44dd08;
    piRam74200000 = piVar8;
    uRam74200008 = uVar12;
    uRam7420000c = (uint)uVar2;
    *(int **)(in_r12 + -0x98) = piVar8;
    *(int **)(in_r12 + -0x94) = piVar6;
    coprocessor_moveto(5,6,3,piVar8,in_cr2,in_cr4);
    puVar14[0xa9] = iRam2c44e2e0;
    *(undefined1 *)(iRam2c44e2e0 + 0x2c44e3f8) = uVar3;
    software_interrupt(0xc);
    iVar9 = piVar8[1];
    iVar10 = piVar8[2];
    *(undefined2 *)(*piVar8 + 0x14) = *(undefined2 *)(uVar2 + 0x16);
    bVar15 = SBORROW4(iVar9,0x79);
    VectorShiftRight(in_d23,0x32);
    *(int *)(puVar14[2] + 0x2c) = iVar9;
    if (!bVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0x29,0x2c42c248);
      (*pcVar1)();
    }
    piVar6 = (int *)(iVar9 + 8U >> 0x15);
    iVar7 = *(int *)(iVar10 + 0x2c);
    param_1 = (uint)*(char *)(iVar9 + 8U + *(int *)(*(int *)(iVar9 + 4) + 0x28));
    while( true ) {
      unaff_r4 = piVar6[1];
      uVar11 = piVar6[2];
      puVar13 = (undefined4 *)piVar6[3];
      piVar6 = *(int **)(*piVar6 + uVar11);
      iVar10 = iVar10 + (int)piVar6;
      *(char *)(unaff_r4 + 8) = (char)iVar7;
      uVar12 = (uint)piVar6 >> 2;
      if (((uint)piVar6 >> 1 & 1) == 0) break;
      bVar15 = SCARRY4(iVar10,param_1);
      iVar7 = iVar10 + param_1;
    }
    if (uVar12 != 0 && !bVar15) break;
    puVar5 = (uint *)(param_1 >> 0x15);
    *puVar13 = piVar6;
    puVar13[1] = uVar11;
    *puVar5 = param_1;
    puVar5[1] = unaff_r4;
    puVar5[2] = uVar11;
    unaff_r6 = (int)puVar5 + unaff_r4 + 0xc;
    param_2 = 0xb8;
    unaff_r7 = (int *)piVar6[1];
    puVar13 = puVar14 + 3;
    if (piVar6 + 2 != (int *)0x0) {
      *(short *)(unaff_r6 + 0x18) = (short)(piVar6 + 2);
      if (SBORROW4(puVar14[0x86] * 2,0x71)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_2c44dc42:
                    /* WARNING: Could not recover jumptable at 0x2c44dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return uVar4;
    }
  }
  iVar9 = *(int *)((int)puVar13 + param_1);
  *(short *)(uVar12 + 6) = (short)uVar12;
  puVar14[0x22] = iVar10;
  *(int *)(iVar9 + 0x20) = iVar9;
  puVar14[0x4c] = uVar12;
  goto LAB_2c44dc42;
}

