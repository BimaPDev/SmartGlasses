/* FUN_2c44ffc2 @ 0x2c44ffc2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44fca4) */
/* WARNING: Removing unreachable block (ram,0x2c49ab96) */
/* WARNING: Removing unreachable block (ram,0x2c49abb8) */
/* WARNING: Removing unreachable block (ram,0x2c49abc2) */
/* WARNING: Removing unreachable block (ram,0x2c49abd4) */
/* WARNING: Removing unreachable block (ram,0x2c49abf2) */
/* WARNING: Removing unreachable block (ram,0x2c49ac0a) */
/* WARNING: Removing unreachable block (ram,0x2c49ac1e) */
/* WARNING: Removing unreachable block (ram,0x2c49abec) */
/* WARNING: Removing unreachable block (ram,0x2c49ac28) */
/* WARNING: Removing unreachable block (ram,0x2c49ac14) */
/* WARNING: Removing unreachable block (ram,0x2c49ac00) */
/* WARNING: Removing unreachable block (ram,0x2c49abe2) */
/* WARNING: Removing unreachable block (ram,0x2c44fcb0) */
/* WARNING: Removing unreachable block (ram,0x2c44fcbe) */
/* WARNING: Removing unreachable block (ram,0x2c44fcc4) */
/* WARNING: Removing unreachable block (ram,0x2c44fd38) */
/* WARNING: Removing unreachable block (ram,0x2c44fa14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44ffc2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r2;
  int extraout_r3;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint unaff_r4;
  int *piVar11;
  byte *pbVar12;
  int unaff_r5;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int unaff_r6;
  undefined1 *puVar16;
  int unaff_r7;
  undefined4 uVar17;
  int unaff_r8;
  bool bVar18;
  bool bVar19;
  undefined4 in_cr10;
  undefined4 in_cr15;
  undefined8 uVar20;
  int *in_stack_00000094;
  uint uStack00000148;
  undefined4 in_stack_0000035c;
  
  *(undefined4 *)(unaff_r5 + 0x7c) = param_4;
  *(undefined4 *)(param_2 + 0xde) = param_3;
  uStack00000148 = (uint)*(byte *)((param_2 + 0x7a) * 2);
  puVar10 = (undefined4 *)(unaff_r4 >> 0x19);
  *(char *)(unaff_r6 + 5) = (char)unaff_r7;
  iVar13 = ((undefined4 *)(int)*(short *)(unaff_r7 + uStack00000148))[1];
  uVar6 = *puVar10;
  piVar11 = (int *)puVar10[1];
  uVar17 = puVar10[2];
  *(char *)(uStack00000148 + 0x1e) = (char)*(undefined4 *)(int)*(short *)(unaff_r7 + uStack00000148)
  ;
  *(short *)(iVar13 + 0x3c) = (short)uVar6;
  uVar20 = func_0x2b557caa(uVar6,0x82,uStack00000148,puVar10 + 3);
  *(char *)(extraout_r2 + 0x18) = (char)uVar17;
  puVar16 = &stack0x00000074;
  *(undefined1 **)(extraout_r3 + 0x60) = puVar16;
  bVar19 = SCARRY4((int)puVar16,3);
  bVar18 = (int)&stack0x00000077 < 0;
  in_stack_00000094 = piVar11;
  iVar8 = *(int *)(iVar13 + 0x6c);
  *(char *)((int)((ulonglong)uVar20 >> 0x20) + 0x1f) = (char)uVar20;
  while( true ) {
    iVar4 = (int)uVar20;
    uVar2 = *(ushort *)(iVar13 + 0x3c);
    *(int *)(iVar13 + 0x7c) = (int)((ulonglong)uVar20 >> 0x20);
    if (bVar18 != bVar19) {
      coprocessor_storelong(3,in_cr15,unaff_r8 + 0xe0);
      *(char *)((int)puVar10 * 2) = (char)unaff_r7;
      *(int *)(unaff_r6 + 0x44) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = puVar16[0xb];
    puVar16 = (undefined1 *)(uint)bVar1;
    *piVar11 = iVar4;
    piVar11[1] = iVar8;
    piVar11[2] = (int)puVar16;
    piVar11 = (int *)((int)piVar11 + -0xcd);
    piVar14 = (int *)(iVar4 - (uint)uVar2);
    bVar19 = SBORROW4((int)puVar16,0x3c);
    iVar13 = *(int *)(iVar13 + (int)piVar11);
    software_bkpt(0x2d);
    piVar5 = (int *)(iVar4 >> 7);
    uVar20 = CONCAT44(0x2c44fb58,piVar5);
    piVar5[0xf] = (int)puVar16;
    if ((int)piVar5 < 0) {
      *(short *)(iVar8 + 0x38) = (short)piVar11;
      *(int **)((int)piVar5 + (int)piVar14) = piVar11;
      piVar14 = (int *)(uint)(bVar1 >> 6);
      bVar19 = SBORROW4((int)piVar5,0x67);
      *(undefined2 *)((int)piVar11 * 2) = 0xfc08;
      piVar11 = (int *)0xf2;
    }
    bVar18 = false;
    if (iVar8 == 0) break;
    software_bkpt(0x4c);
    *piVar14 = iVar8;
    piVar14[1] = (int)piVar11;
    piVar14[2] = iVar13;
    piVar14[3] = (int)puVar16;
    if (bVar19 == false) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar8 = *piVar5;
  *piVar11 = 0x2c44fb58;
  piVar11[1] = 0;
  piVar11[2] = (int)piVar11;
  piVar11[3] = iVar13;
  piVar11[4] = (int)puVar16;
  *(undefined1 **)((int)piVar11 + iVar8) = puVar16;
  *(short *)((int)piVar11 + (int)piVar5) = (short)iVar13;
  puVar3 = _LAB_2c44fa88;
  coprocessor_load(0xc,in_cr10,piVar5);
  *_LAB_2c44fa88 = 0xfb58;
  uVar7 = (uint)*(ushort *)(*(int *)((iVar13 + -0x65) * 0x800 + 8) + 4);
  if (((uint)*(ushort *)(uVar7 + 0x16) & (uint)piVar11) == 0) {
    uVar9 = *(uint *)(iVar13 + -0x61);
    iVar8 = *(int *)(iVar13 + -0x59);
    puVar15 = *(uint **)(iVar13 + -0x55);
    if (2 < *(int *)(iVar13 + -0x5d)) {
      *(char *)(iVar8 * 2) = (char)iVar8;
      *puVar15 = uVar7;
      puVar15[1] = uVar9;
      puVar15[2] = (uint)puVar15;
      software_interrupt(0xed);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(iVar13 + -0x5d) != 2) {
      *(undefined4 *)(uVar9 + 0x74) = *(undefined4 *)(iVar13 + -0x65);
      uVar6 = *(undefined4 *)(iVar8 + 8);
      if (((uint)puVar15 & 0xfffffff) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x14) = *(undefined4 *)(iVar8 + 0xc);
      *(short *)(((int)puVar15 >> 10) + 0x16) = (short)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar12 = (byte *)(int)*(short *)(int)*(short *)((uint)*(byte *)((int)puVar15 + 0x49 + iVar8) *
                                                    2);
    puVar10 = (undefined4 *)(uint)*pbVar12;
    *puVar10 = in_stack_0000035c;
    puVar10[1] = 0;
    puVar10[2] = pbVar12;
    puVar10[3] = (int)puVar15 + 0x49;
    *(char *)((int)puVar3 + 0x1b) = (char)_LAB_2c44fc5c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

