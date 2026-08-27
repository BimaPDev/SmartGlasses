/* FUN_2c44deec @ 0x2c44deec */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44df0e) */
/* WARNING: Removing unreachable block (ram,0x2c44dd08) */
/* WARNING: Removing unreachable block (ram,0x2c44ddac) */
/* WARNING: Removing unreachable block (ram,0x2c44dd12) */
/* WARNING: Removing unreachable block (ram,0x2c44e004) */
/* WARNING: Removing unreachable block (ram,0x2c44e016) */
/* WARNING: Removing unreachable block (ram,0x2c44df70) */
/* WARNING: Removing unreachable block (ram,0x2c44dcb2) */
/* WARNING: Removing unreachable block (ram,0x2c44dcb6) */
/* WARNING: Removing unreachable block (ram,0x2c44dbce) */
/* WARNING: Removing unreachable block (ram,0x2c44de90) */
/* WARNING: Removing unreachable block (ram,0x2c44d900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c44deec(undefined4 param_1,undefined1 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char cVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
  uint *puVar10;
  int *piVar11;
  int extraout_r1;
  int iVar12;
  int *piVar13;
  int extraout_r3;
  int iVar14;
  int unaff_r4;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  int unaff_r6;
  int iVar20;
  int *piVar21;
  int unaff_r7;
  undefined1 unaff_r8;
  undefined1 *unaff_r9;
  byte *unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_r12;
  int extraout_r12;
  uint *puVar22;
  int unaff_lr;
  bool bVar23;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined8 unaff_d12;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined8 in_d23;
  undefined1 auVar24 [16];
  undefined8 in_d28;
  undefined4 uStack_14;
  int iStack_10;
  
  puVar22 = &uStack_14;
  coprocessor_loadlong(0xe,in_cr11,unaff_lr + 0x28c);
  *(undefined1 *)(unaff_r4 + 6) = param_2;
  puVar19 = _LAB_2c44df5c;
  param_3 = param_3 + unaff_r6;
  uVar17 = 0xc9;
  if (unaff_r7 == 0) {
    auVar24._8_4_ = unaff_s26;
    auVar24._0_8_ = unaff_d12;
    auVar24._12_4_ = unaff_s27;
    auVar24 = VectorRoundShiftRight(auVar24,0x3d);
    VectorCompareGreaterThan(auVar24._0_8_,in_d28,1);
    bVar9 = *(byte *)(param_3 + 0xb);
    *_LAB_2c44df5c = _LAB_2c44e1c6_2;
    puVar19[1] = param_3;
    puVar19[2] = 0;
    *(undefined4 **)(bVar9 + 0x24) = puVar19 + 3;
    uVar8 = (uint)bRam000000d1;
    uStack_14 = param_1;
    iStack_10 = param_4;
    func_0x2b50c84a();
    cVar6 = *(char *)(extraout_r3 + 0x1a0);
    *(char *)(extraout_r3 + 10) = cVar6;
    iVar12 = iRam000001b9;
    *(int *)(extraout_r1 + 0x30) = iRam000001b9;
    puVar7 = _LAB_2c44e124;
    software_bkpt(0xd1);
    bVar23 = SBORROW4(iVar12,0xa4);
    uVar18 = iVar12 - 0xa4;
    uVar17 = 0;
    iVar12 = extraout_r1;
    if (uVar8 != 0) {
      bVar9 = *(byte *)((int)_LAB_2c44e124 + 0xf);
      uVar3 = *(ushort *)(*(int *)(cVar6 + 0x60) + 0x16);
      *(short *)(uVar8 + 0x10) = (short)cVar6;
      *puVar7 = (uint)bVar9;
      puVar7[1] = 0x2c44e144;
      *(uint *)(uint)uVar3 = (uint)bVar9;
      (*UNRECOVERED_JUMPTABLE)();
      software_hlt(0x1b);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      while( true ) {
        uVar15 = puVar7[1];
        uVar16 = puVar7[2];
        puVar19 = (undefined4 *)puVar7[3];
        puVar7 = *(uint **)(*puVar7 + uVar16);
        uVar17 = uVar17 + (int)puVar7;
        *(char *)(uVar15 + 8) = (char)iVar12;
        uVar8 = (uint)puVar7 >> 2;
        if (((uint)puVar7 >> 1 & 1) == 0) break;
        bVar23 = SCARRY4(uVar17,uVar18);
        iVar12 = uVar17 + uVar18;
      }
      if (uVar8 != 0 && !bVar23) break;
      puVar10 = (uint *)(uVar18 >> 0x15);
      *puVar19 = puVar7;
      puVar19[1] = uVar16;
      *puVar10 = uVar18;
      puVar10[1] = uVar15;
      puVar10[2] = uVar16;
      uVar4 = _DAT_000000fc;
      iVar12 = (int)puVar10 + uVar15 + 0xc;
      piVar21 = (int *)puVar7[1];
      if (puVar7 + 2 != (uint *)0x0) {
        *(short *)(iVar12 + 0x18) = (short)(puVar7 + 2);
        if (SBORROW4(puVar22[0x83] * 2,0x71)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_2c44dc42;
      }
      uRam000000de = (undefined2)uVar15;
      *(undefined1 *)(uVar15 + 0xb8) = 0xb8;
      *(short *)(uVar18 + 0x20) = (short)uVar4;
      *(undefined2 *)(uVar18 + 0x26) = 0xb8;
      uVar17 = (uint)*(ushort *)(iVar12 + 0x2e);
      piVar13 = (int *)(int)*(short *)(iVar12 * 2);
      uVar2 = (undefined1)*(ushort *)(iVar12 + 0x2e);
      *(undefined1 *)(iVar12 + 0x2c44de9c) = uVar2;
      iVar20 = *(int *)(uVar17 + 0x5c);
      uRam2c44df90 = unaff_s26;
      *(char *)((int)piVar21 + 0x1e) = (char)piVar21;
      puVar22[0xd4] = 0x2b;
      piVar11 = (int *)(uint)*(ushort *)(iVar20 + 2);
      iVar14 = 0x2c44dd08;
      *piVar21 = (int)piVar13;
      piVar21[1] = (int)piVar21;
      if (SBORROW4((int)piVar21,6)) {
        if (&DAT_00000006 < piVar21) {
          piVar11 = (int *)0x2c44ddcc;
          iVar20 = (int)((int)piVar21 + 2) >> 0x20;
          *(char *)(uVar17 - 0xf0) = (char)iVar12 * '\x02';
          piVar21 = (int *)puVar22[0xf1];
          iVar14 = *(int *)(uVar17 - 0xe9);
        }
        *piVar11 = iVar20;
        piVar11[1] = iVar14;
        piVar11[2] = (int)piVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *(ushort *)(uVar17 + 0x3e);
      if (piVar21 == (int *)&DAT_00000006) {
        return *puVar22;
      }
      uRam74200004 = 0x2c44dd08;
      piRam74200000 = piVar13;
      uRam74200008 = uVar17;
      uRam7420000c = (uint)uVar3;
      *(int **)(extraout_r12 + -0x98) = piVar13;
      *(int **)(extraout_r12 + -0x94) = piVar11;
      coprocessor_moveto(5,6,3,piVar13,in_cr2,in_cr4);
      puVar22[0xa9] = uRam2c44e2e0;
      *(undefined1 *)(uRam2c44e2e0 + 0x2c44e3f8) = uVar2;
      software_interrupt(0xc);
      iVar20 = piVar13[1];
      uVar17 = piVar13[2];
      *(undefined2 *)(*piVar13 + 0x14) = *(undefined2 *)(uVar3 + 0x16);
      bVar23 = SBORROW4(iVar20,0x79);
      puVar7 = puVar22 + 2;
      puVar22 = puVar22 + 3;
      VectorShiftRight(in_d23,0x32);
      *(int *)(*puVar7 + 0x2c) = iVar20;
      if (!bVar23) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x29,0x2c42c248);
        (*pcVar1)();
      }
      puVar7 = (uint *)(iVar20 + 8U >> 0x15);
      iVar12 = *(int *)(uVar17 + 0x2c);
      uVar18 = (uint)*(char *)(iVar20 + 8U + *(int *)(*(int *)(iVar20 + 4) + 0x28));
    }
    iVar12 = *(int *)((int)puVar19 + uVar18);
    *(short *)(uVar8 + 6) = (short)uVar8;
    puVar22[0x1f] = uVar17;
    *(int *)(iVar12 + 0x20) = iVar12;
    puVar22[0x49] = uVar8;
LAB_2c44dc42:
                    /* WARNING: Could not recover jumptable at 0x2c44dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar17 = (*UNRECOVERED_JUMPTABLE)();
    return uVar17;
  }
  uVar2 = *(undefined1 *)(param_3 + 0x15);
  bVar23 = true;
  do {
    if (bVar23) {
      if (uVar17 != 0) {
        *unaff_r9 = 1;
      }
      iVar12 = *(int *)UNRECOVERED_JUMPTABLE;
      uVar17 = 0;
      uVar18 = (uint)*unaff_r10;
      iVar20 = iVar12 + 0x69;
      do {
        uVar8 = (int)uVar18 >> *(sbyte *)(iVar12 + 5);
        uVar17 = uVar17 | ((int)uVar18 >> *(sbyte *)(iVar12 + 3) |
                           (int)uVar18 >> *(sbyte *)(iVar12 + 4) | uVar8) & 1;
        if (uVar17 == 0) {
          *(undefined1 *)(iVar12 + 9) = 0;
          *(undefined1 *)(iVar12 + 8) = 0;
          *(undefined1 *)(iVar12 + 7) = 0;
          *(undefined1 *)(iVar12 + 6) = 0;
        }
        iVar12 = iVar12 + 7;
      } while (iVar12 != iVar20);
      if (uVar17 == 0) {
        *unaff_r9 = 0;
      }
      return uVar8;
    }
    bVar9 = *(byte *)(param_3 + 6);
    uVar18 = (uint)bVar9;
    if (uVar18 == 0) {
      cVar6 = *(char *)(param_3 + 7);
      if (cVar6 == '\0') {
        uVar8 = 0;
        if ((unaff_lr >> *(sbyte *)(param_3 + 3) & 1U) == 0) goto LAB_2c49fa9a;
        *(undefined1 *)(param_3 + 8) = 0;
        *(undefined1 *)(param_3 + 6) = unaff_r8;
LAB_2c49fb60:
        *(undefined1 *)(param_3 + 7) = uVar2;
        uVar8 = 1;
        uVar15 = 1;
        if ((unaff_lr >> *(sbyte *)(param_3 + 4) & 1U) != 0) goto LAB_2c49fb72;
        goto LAB_2c49fb3e;
      }
      *(char *)(param_3 + 9) = *(char *)(param_3 + 9) + '\x01';
      uVar8 = unaff_lr >> *(sbyte *)(param_3 + 3) & 1;
      if (uVar8 == 0) goto LAB_2c49fa9a;
      *(undefined1 *)(param_3 + 6) = unaff_r8;
      *(byte *)(param_3 + 8) = bVar9;
      if (cVar6 != '\x02') goto LAB_2c49fb60;
      bVar9 = 0;
      if (-1 < (unaff_lr >> *(sbyte *)(param_3 + 4)) << 0x1f) goto LAB_2c49fb3e;
LAB_2c49fb7a:
      if (bVar9 < bRam00000009) {
LAB_2c49fbbc:
        *(undefined1 *)(param_3 + 6) = uVar2;
        uVar15 = unaff_lr >> *(sbyte *)(param_3 + 5) & 1;
        cVar6 = *(char *)(param_3 + 7);
        if ((uVar15 == 0) || (cVar6 != '\0')) goto LAB_2c49fb96;
        *(undefined1 *)(param_3 + 9) = 0;
        *(undefined1 *)(param_3 + 7) = unaff_r8;
        *(undefined1 *)(param_3 + 6) = uVar2;
      }
      else {
        *(undefined1 *)(param_3 + 8) = uVar2;
        *(undefined1 *)(param_3 + 6) = 2;
        uVar15 = unaff_lr >> *(sbyte *)(param_3 + 5) & 1;
        if (uVar15 == 0) {
          cVar6 = *(char *)(param_3 + 7);
          goto LAB_2c49fb96;
        }
        bVar9 = 0;
LAB_2c49fac2:
        puVar5 = DAT_2c49fc50;
        if (bRam00000009 <= bVar9) {
          param_4 = param_4 + in_r12 * 7;
          *(undefined1 *)(param_4 + 6) = 0;
          *puVar5 = 1;
          *(undefined1 *)(param_4 + 8) = 0;
          return 1;
        }
LAB_2c49faca:
        *(undefined1 *)(param_3 + 6) = uVar2;
LAB_2c49facc:
        cVar6 = *(char *)(param_3 + 7);
        if (cVar6 != '\0') {
          if (uVar15 == 0) goto LAB_2c49fbde;
          goto LAB_2c49fb96;
        }
        *(undefined1 *)(param_3 + 9) = 0;
        *(undefined1 *)(param_3 + 7) = unaff_r8;
        if (*(char *)(param_3 + 6) != '\x02') {
          *(undefined1 *)(param_3 + 6) = uVar2;
        }
      }
      if (uVar15 != 0) {
        bVar9 = 0;
LAB_2c49fbf0:
        if (bRam00000009 <= bVar9) {
          *(undefined1 *)(param_3 + 9) = uVar2;
          *(undefined1 *)(param_3 + 7) = 2;
          if (uVar8 == 0) {
            bVar9 = 0;
            goto LAB_2c49faea;
          }
          bVar9 = 0;
LAB_2c49fc06:
          puVar5 = DAT_2c49fc54;
          if (bRam00000009 <= bVar9) {
            uVar17 = param_4 + in_r12 * 7;
            *(undefined1 *)(uVar17 + 7) = 0;
            *puVar5 = 1;
            *(undefined1 *)(uVar17 + 9) = 0;
            return uVar17;
          }
        }
        bVar9 = *(byte *)(param_3 + 9);
        goto LAB_2c49fbae;
      }
      bVar9 = 0;
LAB_2c49faea:
      if (bVar9 < NMI) goto LAB_2c49faf0;
LAB_2c49fbb8:
      uVar18 = 1;
    }
    else {
      cVar6 = *(char *)(param_3 + 7);
      *(char *)(param_3 + 8) = *(char *)(param_3 + 8) + '\x01';
      if (cVar6 == '\0') {
        uVar8 = unaff_lr >> *(sbyte *)(param_3 + 3) & 1;
      }
      else {
        *(char *)(param_3 + 9) = *(char *)(param_3 + 9) + '\x01';
        uVar8 = unaff_lr >> *(sbyte *)(param_3 + 3) & 1;
      }
LAB_2c49fa9a:
      if ((unaff_lr >> *(sbyte *)(param_3 + 4)) << 0x1f < 0) {
        uVar15 = uVar8;
        if (uVar18 == 1) {
LAB_2c49fb72:
          bVar9 = *(byte *)(param_3 + 8);
          uVar8 = uVar15;
          if (bVar9 <= NMI) goto LAB_2c49fb7a;
          goto LAB_2c49fbbc;
        }
        uVar15 = unaff_lr >> *(sbyte *)(param_3 + 5) & 1;
        if (uVar15 != 0) goto LAB_2c49fab4;
LAB_2c49fb96:
        bVar9 = *(byte *)(param_3 + 9);
        if (cVar6 != '\x01') goto LAB_2c49fb9c;
        if (bVar9 <= NMI) goto LAB_2c49fbf0;
      }
      else {
LAB_2c49fb3e:
        if ((unaff_lr >> *(sbyte *)(param_3 + 5)) << 0x1f < 0) {
          uVar15 = 0;
          uVar18 = (uint)*(byte *)(param_3 + 6);
LAB_2c49fab4:
          if (uVar18 - 1 < 2) {
            bVar9 = *(byte *)(param_3 + 8);
            if (bVar9 <= NMI) goto LAB_2c49fac2;
            goto LAB_2c49faca;
          }
          goto LAB_2c49facc;
        }
LAB_2c49fbde:
        bVar9 = *(byte *)(param_3 + 9);
LAB_2c49fb9c:
        if ((uVar8 == 0) || (*(char *)(param_3 + 7) != '\x02')) goto LAB_2c49faea;
        if (bVar9 <= NMI) goto LAB_2c49fc06;
      }
LAB_2c49fbae:
      *(undefined1 *)(param_3 + 7) = uVar2;
      if (NMI <= bVar9) goto LAB_2c49fbb8;
LAB_2c49faf0:
      if (NMI < *(byte *)(param_3 + 8)) {
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
    }
    in_r12 = in_r12 + 1;
    uVar17 = uVar17 | uVar18;
    param_3 = param_3 + 7;
    bVar23 = in_r12 == 0xf;
  } while( true );
}

