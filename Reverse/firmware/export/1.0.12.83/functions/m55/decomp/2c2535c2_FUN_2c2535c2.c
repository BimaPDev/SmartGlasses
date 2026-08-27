/* FUN_2c2535c2 @ 0x2c2535c2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2535c2(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *UNRECOVERED_JUMPTABLE;
  int iVar15;
  uint uVar16;
  int extraout_r2;
  int extraout_r3;
  uint uVar17;
  int unaff_r4;
  int unaff_r5;
  uint uVar18;
  int unaff_r6;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int unaff_r7;
  undefined4 extraout_r12;
  char in_NG;
  undefined8 uVar22;
  
  uVar22 = func_0x2c8a75d4();
  iVar15 = (int)((ulonglong)uVar22 >> 0x20);
  iVar20 = (int)uVar22;
  if (in_NG == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = (char)unaff_r6;
  *(char *)(extraout_r2 + 0x10) = cVar2;
  cVar3 = (char)unaff_r5 + -0x13;
  cVar4 = (char)((ulonglong)uVar22 >> 0x20);
  *(char *)(iVar20 + 0x10) = cVar4;
  cVar5 = (char)extraout_r3;
  *(char *)(unaff_r5 + 0xfc) = cVar5;
  *(char *)(extraout_r2 + 0xf) = cVar2 + 'c';
  *(char *)(iVar20 + 0xf) = cVar4;
  *(char *)(unaff_r5 + 0xfb) = cVar5;
  *(char *)(extraout_r2 + 0xe) = cVar2 + 'M';
  cVar2 = cVar2 + 'K';
  cVar6 = (char)uVar22;
  *(char *)(iVar20 + 0xe) = cVar6;
  cVar7 = (char)extraout_r2;
  *(char *)(unaff_r5 + 0xfa) = cVar7;
  *(char *)(extraout_r2 + 0xd) = cVar3;
  *(char *)(unaff_r7 + 0x117) = (char)unaff_r7 + '\v';
  *(char *)(unaff_r5 + 0xf9) = cVar4;
  cVar8 = (char)unaff_r7 + -0x60;
  *(char *)(extraout_r2 + 0xc) = cVar5;
  *(char *)(unaff_r7 + 0x2ab) = cVar3;
  *(char *)(unaff_r4 + 0xb) = cVar8;
  *(char *)(extraout_r2 + 0xb) = cVar6 + 'O';
  *(char *)(unaff_r7 + 0x2aa) = cVar7;
  uVar9 = (undefined1)unaff_r4;
  *(undefined1 *)(unaff_r4 + 10) = uVar9;
  *(char *)(iVar15 + 10) = cVar3;
  *(char *)(unaff_r6 + 0x354) = cVar8;
  *(char *)(unaff_r4 + 9) = cVar6 + '\b';
  *(char *)(iVar15 + -0xd3) = cVar7;
  *(char *)(unaff_r6 + 0x353) = cVar5;
  *(undefined1 *)(extraout_r3 + 8) = uVar9;
  *(char *)(iVar20 + -0x2f0) = cVar2;
  *(char *)(unaff_r5 + 0xf4) = cVar8;
  *(char *)(extraout_r3 + 7) = cVar6 + '\b';
  *(char *)(iVar20 + -0x2f1) = cVar4 + -0x4c;
  *(char *)(unaff_r5 + 0xf3) = cVar7 + 'L';
  *(char *)(extraout_r2 + -0x28b) = cVar5;
  *(char *)(unaff_r7 + 0x2a5) = cVar5 + -9;
  *(undefined1 *)(unaff_r4 + 5) = uVar9;
  *(char *)(iVar15 + -0x347) = cVar3;
  *(char *)(unaff_r6 + 0x34f) = cVar3;
  *(char *)(extraout_r3 + -0x1e7) = cVar2;
  *(char *)(iVar20 + -0x2f4) = cVar2;
  *(char *)(unaff_r5 + 0xf0) = cVar8;
  *(char *)(extraout_r2 + -0x28e) = cVar8;
  *(char *)(unaff_r7 + 0x2a2) = cVar8;
  *(char *)(unaff_r4 + -0x159) = cVar8;
  *(char *)(iVar15 + -0x34a) = cVar8;
  *(char *)(unaff_r6 + 0x34c) = cVar8;
  *(char *)(extraout_r3 + -0x2d2) = cVar8;
  *(char *)(iVar20 + -0x2f7) = cVar8;
  *(char *)(unaff_r5 + 0xf) = cVar8;
  *(char *)(extraout_r2 + -0x291) = cVar8;
  uVar17 = *(uint *)(iVar20 + -0x280);
  uVar13 = *(uint *)(uVar17 + 0x70);
  uVar10 = *(uint *)(uVar13 + 0x70);
  uVar19 = *(uint *)(*(int *)(extraout_r3 + -0x25b) + 0x6c);
  uVar18 = *(uint *)(*(int *)(*(int *)(unaff_r7 + 0x31c) + 0x42) + 0x6c) ^ *(uint *)(uVar17 + 0x68);
  uVar21 = uVar13 & 0xff;
  uVar14 = *(uint *)(uVar18 + 100);
  uVar18 = uVar18 & 0xff;
  iVar20 = *(int *)((*(int *)(uVar13 + 0x68) << uVar21) + 100);
  uVar1 = uVar17 & 0xff;
  uVar11 = uVar10 >> (uVar17 & 0xff);
  uVar12 = uVar14 & 0xff;
  uVar16 = *(uint *)(iVar20 + 0x60) & 0xff;
  uVar16 = *(int *)(uVar14 + 0x60) + *(int *)(((int)uVar17 >> uVar12) + 0x60) +
           (uint)(uVar16 == 0 &&
                  (uVar12 == 0 &&
                   (uVar1 == 0 &&
                    (uVar18 == 0 &&
                     (uVar21 == 0 && 0xdb < uVar19 ||
                     uVar21 != 0 && (*(int *)(uVar13 + 0x68) << uVar21 - 1 & 0x80000000U) != 0) ||
                    uVar18 != 0 &&
                    (*(int *)((uVar19 - 0xdc & uVar10) + 0x68) << uVar18 - 1 & 0x80000000U) != 0) ||
                   uVar1 != 0 && (uVar10 >> uVar1 - 1 & 1) != 0) ||
                  uVar12 != 0 && ((int)uVar17 >> uVar12 - 1 & 1U) != 0) ||
                 uVar16 != 0 && (iVar20 >> uVar16 - 1 & 1U) != 0);
  uVar21 = *(uint *)(*(int *)(*(int *)(uVar16 + 0x5c) + 0x58) + 0x54);
  uVar12 = uVar11 | uVar16;
  iVar20 = *(int *)(*(int *)(uVar16 + 0x54) + 0x4c);
  UNRECOVERED_JUMPTABLE =
       *(code **)(((*(uint *)(uVar21 + 0x50) | uVar21) &
                  ~*(uint *)(iVar20 * *(int *)(uVar11 + 0x50) + 0x48)) + *(int *)(iVar20 + 0x44) +
                 0x34);
                    /* WARNING: Could not recover jumptable at 0x2c153772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (extraout_r12,UNRECOVERED_JUMPTABLE,
             *(undefined4 *)(*(int *)(*(int *)(uVar12 + 0x3c) + 0x34) + 0x30),
             *(undefined4 *)(*(int *)(uVar12 + 0x30) + 0x28));
  return;
}

