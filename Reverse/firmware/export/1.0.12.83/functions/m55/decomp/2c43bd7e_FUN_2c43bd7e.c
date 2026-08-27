/* FUN_2c43bd7e @ 0x2c43bd7e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c43bf12) */
/* WARNING: Removing unreachable block (ram,0x2c43bf16) */
/* WARNING: Removing unreachable block (ram,0x2c43bf24) */
/* WARNING: Removing unreachable block (ram,0x2c44e32e) */
/* WARNING: Removing unreachable block (ram,0x2c43bfc2) */
/* WARNING: Removing unreachable block (ram,0x2c43c632) */
/* WARNING: Removing unreachable block (ram,0x2c43c538) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb6) */
/* WARNING: Removing unreachable block (ram,0x2c43bfb8) */
/* WARNING: Removing unreachable block (ram,0x2c43bde8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43bd7e(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_r3;
  uint uVar10;
  int unaff_r4;
  int iVar11;
  undefined4 unaff_r6;
  int iVar12;
  uint *unaff_r7;
  uint uVar13;
  ushort *puVar14;
  int in_r12;
  undefined1 *puVar15;
  bool bVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined1 *in_stack_000000a0;
  undefined1 *in_stack_0000036c;
  int in_stack_000003b8;
  undefined1 auStack_14 [8];
  
  puVar15 = auStack_14;
  iVar6 = *in_r3;
  iVar12 = in_r3[2];
  *(char *)(iVar12 + 0x1d) = (char)unaff_r4;
  iVar8 = iRam2c43c0f8;
  *(short *)(in_stack_000000a0 + 8) = (short)iVar12;
  coprocessor_load(1,in_cr1,unaff_r4 + 0x35c);
  iVar11 = *(int *)(iVar8 + 0x2c);
  if (&DAT_000000fc < unaff_r7) {
    *(char *)(iVar12 + 0x14) = (char)iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar16 = SCARRY4(iVar8,6);
  iVar7 = iVar8 + 6;
  if (bVar16) {
    *(short *)((int)unaff_r7 + 0x3e) = (short)iVar6;
    uRam2c43c120 = SUB42(unaff_r7,0);
    if (!bVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = *(int *)(iVar12 + 0x4c);
    if (!SCARRY4(iVar6,0x1e)) {
      uRam2c43c128 = SUB42(in_stack_000000a0,0);
      *(undefined4 *)(iVar11 + 0x18) = 0x2c43becc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar9 = iVar7 >> 2;
    *(int *)(in_stack_000000a0 + 0x24) = iVar9;
    *(int *)(iVar9 + 4) = iVar7;
    *(char *)(in_stack_000003b8 + 0x1a) = (char)iVar9;
    iVar6 = _LAB_2c43c110;
    bVar5 = *(byte *)(in_r12 + 0x87a);
    uVar3 = *(ushort *)(iVar8 + 0x12);
    *(char *)((uint)uVar3 + _LAB_2c43c110) = (char)in_stack_000000a0;
    if (!SBORROW4((uint)bVar5,0xee)) {
      *(int *)(iVar9 + 0x30) = iVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(uVar3 + 0x1c) = (short)iVar12;
    sVar4 = *(short *)(iVar11 + iVar6);
    *(uint *)(iVar12 + 0x40) = (uint)bVar5;
    *(undefined4 *)(sVar4 + 0x18) = unaff_r6;
    puVar17 = in_stack_000000a0;
  }
  else {
    uVar10 = (uint)*(ushort *)((int)unaff_r7 + 0x3e);
    *(char *)(uVar10 + 0xd) = (char)*(ushort *)((int)unaff_r7 + 0x3e);
    puVar17 = _LAB_2c43c270;
    if (!bVar16) {
      *(uint *)(iVar11 + 0x50) = (uint)DAT_00000091;
      iVar6 = (int)&stack0x00000110 * 0x2000;
      *unaff_r7 = uVar10;
      unaff_r7[1] = (uint)unaff_r7;
      unaff_r7[0x19] = (uint)in_stack_000000a0;
      uVar3 = *(ushort *)(iVar8 + 0x18);
      *(int *)iVar6 = iVar6;
      *(int *)(iVar6 + 4) = iVar7;
      *(uint *)(iVar6 + 8) = (uint)uVar3;
      *(int *)(iVar6 + 0xc) = iVar11;
      *(undefined1 **)(iVar6 + 0x10) = in_stack_000000a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = unaff_r7[0x1a];
    *(char *)(uVar13 + 0x85) = (char)uVar13;
    in_stack_0000036c = &stack0x000000b8;
    uRam000000ed = uVar10;
    *(short *)(puVar17 + iVar11) = (short)uVar13;
    iVar6 = _DAT_2c43c064;
    if (iVar8 + -0xe6 < 0) {
      uRam0000009d = (undefined2)*(undefined4 *)(in_stack_0000036c + iVar7);
      *(char *)(iVar11 + 7) = (char)*(undefined4 *)(in_stack_0000036c + iVar7);
      puVar14 = (ushort *)0x16;
      iVar6 = *(int *)(iVar6 + 0x50);
      iVar8 = (int)(_LAB_2c43bf70 >> 6) >> 0xe;
      puVar1 = (undefined1 *)0x370;
      puVar2 = (undefined1 *)0x380;
      lVar18 = 8;
      while( true ) {
        *puVar1 = *puVar17;
        puVar17 = puVar17 + 1;
        *puVar2 = *puVar17;
        puVar17 = puVar17 + 1;
        lVar18 = lVar18 + -1;
        if (lVar18 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      *(int *)(*puVar14 + 0x78) = iVar8;
      *(char *)(iVar6 + 0x2c43bffc) = (char)*(undefined4 *)(puVar15 + 0x564);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_loadlong(0xc,in_cr12,(uint)*(ushort *)(in_stack_0000036c + ((int)puVar17 >> 7)));
  *(short *)(in_stack_0000036c + 0x24) = (short)puVar17 + 0x27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

