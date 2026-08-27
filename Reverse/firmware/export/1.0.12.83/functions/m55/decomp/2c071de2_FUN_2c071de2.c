/* FUN_2c071de2 @ 0x2c071de2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0724ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c071de2(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r2;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint unaff_r7;
  code *extraout_r12;
  code *extraout_r12_00;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar16;
  undefined4 uVar17;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined8 uVar18;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  piVar16 = &uStack_10;
  iVar10 = param_3[3];
  iVar12 = param_3[4];
  uVar17 = 0x2c071e23;
  uStack_10 = param_2;
  puStack_c = param_3;
  uVar18 = func_0x2c680532(param_1 << 8,*param_3,param_3[1],param_3[2]);
  iVar2 = iRam2c07211c;
  UNRECOVERED_JUMPTABLE = extraout_r12;
  if (iVar12 == 0) {
    iVar11 = iVar10 + -0x4a;
    uVar1 = iVar10 >> 0x1f;
    piVar14 = (int *)(uVar1 >> 8);
    unaff_r7 = *(int *)(unaff_r7 + 0x4f) << 6;
    iVar2 = (int)*(char *)(uVar1 + (int)piVar14);
    *(char *)(iVar2 + 2) = (char)(iVar10 >> 0x1f);
    *(short *)(iVar2 + 0x12) = (short)(iVar10 >> 0x1f);
    iStack_1c = uVar1 - 0xd2;
    *piVar14 = iStack_1c;
    piVar14[1] = (int)piVar14;
    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20) + 0x3e,iVar2);
    iVar2 = iStack_1c * 0x10000;
  }
  else {
    iVar10 = *(int *)uVar18;
    iVar11 = ((int *)uVar18)[1];
    uVar18 = CONCAT44(iVar10,0x52);
    uVar1 = extraout_r2 + 4;
    uRam0000006a = (undefined2)iVar12;
    puVar9 = (uint *)(uint)*(byte *)(iVar10 + 0x1b);
    if (puVar9 == (uint *)0x0) {
      if (uVar1 < 0xe1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      coprocessor_function2(2,0xe,6,in_cr8,in_cr0,in_cr2);
      _Reset = (ushort)*(byte *)(iVar10 + 0x1b);
      uRam00000012 = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar8 = extraout_r2;
    uVar7 = unaff_r7;
    if ((int)uVar1 < 0xe1) goto LAB_2c071eba;
    piVar14 = (int *)0x46;
    uRam00000031 = 0;
    uVar17 = 0x2c071e8f;
    uVar18 = func_0x2c45cd48(0x21,iVar10 + -0xe9);
    iStack_1c = 0;
    UNRECOVERED_JUMPTABLE = extraout_r12_00;
  }
  iStack_20 = (int)((ulonglong)uVar18 >> 0x20);
  iVar10 = (int)uVar18;
  piVar16 = &iStack_20;
  uVar8 = piVar14[8];
  *(short *)(iVar11 + 0x38) = (short)((ulonglong)uVar18 >> 0x20);
  puVar9 = (uint *)(uVar8 * 0x400);
  uVar1 = (uint)*(byte *)(iStack_20 + 0x15);
  iVar11 = 0x23;
  uVar7 = _DAT_2c072224;
  uStack_18 = unaff_r7;
  uStack_14 = uVar17;
  if (SBORROW4(iVar10,iVar2)) {
    piVar16 = (int *)&stack0x000001bc;
    uVar8 = (int)((uint)(ushort)*puVar9 << 2) >> 4;
    uVar1 = *(ushort *)(iVar10 + 0x2c) - 1;
    uVar18 = CONCAT44((int)uVar1 >> 0x14,iVar10);
    iVar11 = iVar10 >> 0x18;
  }
LAB_2c071eba:
  uVar5 = ((int)((ulonglong)uVar18 >> 0x20) - (uint)uVar18) - (uint)(uVar1 < 0xe0);
  *(uint **)(((uint)uVar18 >> (uVar5 & 0xff)) + 0x24) = puVar9;
  *(short *)(uVar5 * 2) = (short)uVar1;
  if (!CARRY4(uVar7,uVar8) || uVar7 + uVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = iVar11 + 7;
  uVar15 = uVar1 - 0x133;
  uVar6 = (((int)uVar15 >> 0x14) - uVar5) - (uint)(uVar15 < 0xe0);
  uVar13 = (int)uVar5 >> 8;
  *(uint **)((uVar5 >> (uVar6 & 0xff)) + 0x24) = puVar9;
  *(short *)(uVar6 * 2) = (short)uVar15;
  *(uint *)(uVar7 + 0x34) = uVar15;
  uVar8 = uVar7 + iVar11 * 2;
  if (!CARRY4(uVar7,iVar11 * 2) || uVar8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = uVar13 * 0x100;
  *(char *)(uVar6 + 8) = (char)uVar15;
  if (uVar3 == 0) {
    if ((uVar13 & 0x1000000) == 0) {
      puVar4 = (uint *)(uVar13 << 8 & ~uVar6);
      if (puVar9 == (uint *)0x0) {
        uVar1 = (((int)uVar15 >> 0x14) - (int)puVar4) - (uint)(uVar15 < 0xe0);
        *(undefined4 *)(((uint)puVar4 >> (uVar1 & 0xff)) + 0x24) = 0;
        *(int *)(uVar1 + 0x24) = (int)puVar4 >> 8;
        iVar2 = (int)puVar4 >> 0x1f;
      }
      else {
        uVar1 = *puVar4;
        uVar7 = puVar4[1];
        *(short *)(uVar8 + uVar13) = (short)puVar4 + 8;
        uVar8 = (uint)*(short *)(uVar7 + uVar1);
        iVar2 = 0x42;
        uRam0000005a = (undefined2)uVar7;
        piVar16[8] = uVar8 + 4;
      }
                    /* WARNING: Could not recover jumptable at 0x2c07212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar2,uVar1,uVar8,*(undefined2 *)(uVar1 + 0x36));
      return;
    }
    puVar9 = (uint *)((uVar13 & 0xffffff) * 0x40);
    uVar6 = *puVar9;
    uVar8 = puVar9[1];
    puVar9 = puVar9 + 4;
    *(char *)(uVar6 + 0xe) = (char)uVar15;
  }
  else {
    if (puVar9 == (uint *)0x0) {
      if (uVar15 == 0) {
        uVar8 = uVar13 * -0x100 - 1;
        *(undefined4 *)((uVar3 >> (uVar8 & 0xff)) + 0x24) = 0;
        *(undefined2 *)(uVar8 * 2) = 0;
        *(undefined4 *)(uVar7 + 0x34) = 0;
        if (CARRY4((int)uVar3 >> 8,uVar8) && ((int)uVar3 >> 8) + uVar8 != 0) {
          uVar8 = ((int)uVar3 >> 0x18) + 7;
          uVar1 = uVar1 - 0x223;
          uVar7 = (((int)uVar1 >> 0x14) - uVar8) - (uint)(uVar1 < 0xe0);
          *(undefined4 *)((uVar8 >> (uVar7 & 0xff)) + 0x24) = 0;
          *(short *)(uVar7 * 2) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(uVar1 - 299) = 0;
      *(short *)(uVar6 - 0xc9) = (short)uVar7;
      uVar8 = ((int)uVar5 >> 0x18) * 2;
      uVar3 = ((int)uVar5 >> 0x18) + 7;
      uVar15 = uVar1 - 0x2d8;
      uVar6 = (((int)uVar15 >> 0x14) - uVar3) - (uint)(uVar15 < 0xe0);
    }
    *(uint **)((uVar3 >> (uVar6 & 0xff)) + 0x24) = puVar9;
    *(short *)(uVar6 * 2) = (short)uVar15;
  }
  coprocessor_store(9,in_cr7,uVar15 * 0x200000 + -0x38);
  if (((uint)piVar16 & 0xfff1fff1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c0723d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)0x0)(0xc8000000,uVar6,uVar8);
    return;
  }
  uVar1 = (uint)bRam2c072718;
  *(uint **)((bRam2c072718 >> (0x2c0 - uVar1 & 0xff)) + 0x24) = puVar9;
  *(undefined2 *)((0x2c0 - uVar1) * 2) = 0x261a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

