/* FUN_2c45f8c6 @ 0x2c45f8c6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c45f902) overlaps instruction at (ram,0x2c45f900)
    */
/* WARNING: Removing unreachable block (ram,0x2c45f9ee) */
/* WARNING: Removing unreachable block (ram,0x2c45fa54) */
/* WARNING: Removing unreachable block (ram,0x2c45fa6a) */
/* WARNING: Removing unreachable block (ram,0x2c45fa72) */
/* WARNING: Removing unreachable block (ram,0x2c45fa80) */
/* WARNING: Removing unreachable block (ram,0x2c45faf8) */
/* WARNING: Removing unreachable block (ram,0x2c53e5ea) */
/* WARNING: Removing unreachable block (ram,0x2c53e5fc) */
/* WARNING: Removing unreachable block (ram,0x2c53e606) */
/* WARNING: Removing unreachable block (ram,0x2c53e5e0) */
/* WARNING: Removing unreachable block (ram,0x2c53e616) */
/* WARNING: Removing unreachable block (ram,0x2c648626) */
/* WARNING: Removing unreachable block (ram,0x2c64864a) */
/* WARNING: Removing unreachable block (ram,0x2c64862e) */
/* WARNING: Removing unreachable block (ram,0x2c64864e) */
/* WARNING: Removing unreachable block (ram,0x2c648666) */
/* WARNING: Removing unreachable block (ram,0x2c648654) */
/* WARNING: Removing unreachable block (ram,0x2c64865e) */
/* WARNING: Removing unreachable block (ram,0x2c648630) */
/* WARNING: Removing unreachable block (ram,0x2c64863e) */
/* WARNING: Removing unreachable block (ram,0x2c648670) */
/* WARNING: Removing unreachable block (ram,0x2c45faa2) */
/* WARNING: Removing unreachable block (ram,0x2c45f9fa) */
/* WARNING: Removing unreachable block (ram,0x2c45f9fc) */
/* WARNING: Removing unreachable block (ram,0x2c45fe9e) */
/* WARNING: Removing unreachable block (ram,0x2c45fea2) */
/* WARNING: Removing unreachable block (ram,0x2c45ff40) */
/* WARNING: Removing unreachable block (ram,0x2c45f902) */
/* WARNING: Removing unreachable block (ram,0x2c45fa90) */
/* WARNING: Removing unreachable block (ram,0x2c45faa4) */
/* WARNING: Removing unreachable block (ram,0x2c45f774) */
/* WARNING: Removing unreachable block (ram,0x2c45fd7a) */
/* WARNING: Removing unreachable block (ram,0x2c45fd8c) */
/* WARNING: Removing unreachable block (ram,0x2c45fd8e) */
/* WARNING: Removing unreachable block (ram,0x2c45fd90) */
/* WARNING: Removing unreachable block (ram,0x2c45fd92) */
/* WARNING: Removing unreachable block (ram,0x2c45fd94) */
/* WARNING: Removing unreachable block (ram,0x2c45fd96) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c45f8c6(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int unaff_r4;
  int unaff_r5;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int unaff_r6;
  undefined1 *puVar16;
  int unaff_r7;
  int unaff_r11;
  char in_OV;
  bool bVar17;
  bool bVar18;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr14;
  int *in_stack_00000014;
  int in_stack_0000003c;
  undefined4 in_stack_00000154;
  undefined4 uStack00000160;
  undefined4 in_stack_0000018c;
  uint in_stack_000002c4;
  int in_stack_000002c8;
  int in_stack_000002d4;
  int in_stack_000002d8;
  uint in_stack_000002f8;
  undefined1 in_stack_0000033e;
  undefined1 in_stack_000003c0;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  
  uVar12 = *(uint *)(unaff_r5 + 0x58);
  *param_2 = unaff_r6 >> 0x18;
  param_2[1] = (int)param_2;
  param_2[2] = param_3;
  param_2[3] = unaff_r4;
  param_2[4] = unaff_r7;
  iVar6 = _LAB_2c45fbf0;
  iVar5 = _LAB_2c45fa2c;
  uVar9 = ~uVar12;
  if (uVar9 != 0 && -1 < (int)uVar12 == (bool)in_OV) {
    iVar5 = uVar12 * 0x200000;
    if ((uVar12 & 0x800) != 0) {
      uRam000000dc = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int **)(iVar5 + 0x40) = param_2;
    coprocessor_storelong(0,in_cr2,*(int *)(iVar5 + 0xc) + 0x1b8);
    *(undefined1 *)(*(int *)(iVar5 + 4) + 0xf) = in_stack_0000033e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = (undefined4 *)(_LAB_2c45fbf0 + 0x53);
  iVar13 = unaff_r4 >> 0x18;
  if (unaff_r6 >> 0x18 != 0) {
    *(int *)(iVar13 + 0xa6) = iVar13;
    *(int *)(iVar13 + 0x68) = iVar5;
    *(undefined1 *)(uVar9 + 8) = 0x6a;
    uVar2 = _LAB_2c45f9c4;
    *puVar8 = 0x6a;
    *(int *)(iVar6 + 0x57) = iVar5;
    *(undefined4 *)(iVar6 + 0x5b) = uVar2;
    *(undefined4 *)(iVar6 + 0x5f) = 0x2c45fb84;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar13 < 0 == SBORROW4(0xa6,unaff_r11)) {
    iVar6 = unaff_r6 + 0xe2;
    if (iVar6 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(unaff_r6 + 2) = (short)unaff_r4;
    if (SCARRY4(unaff_r6,0xe2)) {
      coprocessor_loadlong(8,in_cr7,0x2c4549ac);
      iRam000000a6 = iVar5;
      uRam000000aa = uVar9;
      _DAT_000000ae = _LAB_2c454cf0;
      uRam000000b2 = 0xa6;
      coprocessor_loadlong(5,in_cr3,*(undefined4 *)(iVar5 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam000000be = 0x20;
    *(short *)(uVar9 + 0xa6) = (short)(char)((uint)unaff_r6 >> 0x18);
    *(uint *)uVar9 = uVar9;
    *(int *)(uVar9 + 4) = iVar6;
    *(undefined4 *)(uVar9 + 8) = 0xa6;
    MasterStackPointer = (char)&uStack_18 + 'P';
    *(int *)((_LAB_2c454b48 >> 2) + 0x44) = iVar6 >> 0x16;
    *(char *)(_LAB_2c454c3c + 0xb1) = (char)_LAB_2c454c3c;
    *(short *)(unaff_r6 + -0x36) = (short)(undefined2 *)(unaff_r6 + 2) + -0x58;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r6 + 0x1a) = (short)_LAB_2c45fa2c;
  uStack00000160 = 0xa6;
  *(short *)(in_stack_000002d4 + 0x3e) = (short)unaff_r4;
  *(undefined2 *)(in_stack_000002d4 + (int)puVar8) = 0;
  uStack_20 = *(undefined4 *)(in_stack_000002d8 + 8);
  iStack_24 = in_stack_000002d8 + 0xc;
  piVar10 = *(int **)(*(int *)(unaff_r6 + 0xc) + 4);
  iVar5 = *piVar10;
  piVar11 = (int *)piVar10[2];
  if (piVar10[3] == 0) {
    if (((int)piVar11 >> 4 & 1U) != 0) {
      *(int *)(iVar5 + 8) = piVar10[1];
    }
    uRam2c45fa20 = 64000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY4(*(int *)(in_stack_000002d8 + 4),0x62)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_bkpt(0xfd);
  if (!SBORROW4(in_stack_0000003c,0xb2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam2c45fab8 = SUB42(&stack0x00000364,0);
  iVar6 = *piVar11;
  piVar10 = (int *)piVar11[1];
  piVar11 = (int *)(iVar6 + -0x74);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(in_stack_000002f8 + 0x44) = iVar5;
  piVar10[0x1f] = (int)piVar11;
  *piVar11 = iVar5;
  *(uint *)(iVar6 + -0x70) = (uint)piVar10 >> 7;
  iVar6 = iVar6 + -0x6c;
  *(char *)(in_stack_000002f8 + 4) = (char)in_stack_000002f8;
  uVar3 = 0xca;
  iVar5 = iStack_24;
  puVar14 = (uint *)&stack0x00000364;
  do {
    *(undefined2 *)(iVar5 + 0x20) = uVar3;
    *(char *)(in_stack_000002f8 + iVar5) = (char)uVar3 + 'S';
    bVar1 = *(byte *)(iVar5 + 0x18);
    *(char *)((int)piVar10 + in_stack_000002f8) = (char)iVar6;
    iVar13 = _LAB_2c45f39c;
    iVar6 = iRam2c45f340;
    *(undefined1 **)((int)puVar14 + iVar5) = &stack0x000002c4;
    uVar9 = *(uint *)(iVar5 + 4);
    puVar4 = puVar14 + -1;
    bVar17 = (uint *)0x19 < puVar14;
    *puVar14 = (uint)puVar4;
    puVar14[1] = uVar9;
    puVar14[2] = (uint)&stack0x000002c4;
    puVar14[3] = (uint)bVar1;
    puVar15 = puVar14 + 4;
    if (uVar9 != 0) {
      *(undefined4 *)(iRam2c45f33c + 0x50) = uRam2c45f330;
      *(uint *)(iVar6 + 0x30) = uVar9;
      halt_baddata();
    }
    piVar10 = *(int **)(in_stack_000002c8 + 0x24);
    uStack_18 = param_1;
    piStack_14 = param_2;
    iStack_10 = param_3;
    if (puVar4 != (uint *)0x0) {
      puVar16 = (undefined1 *)~(uint)&stack0x000002cc;
      bVar17 = (undefined1 *)0xfffffffb < puVar16;
      bVar18 = SCARRY4((int)puVar16,4);
      puVar7 = puVar16 + 4;
      if (-5 < (int)puVar16) {
        puVar8 = (undefined4 *)(uint)*(ushort *)(puVar7 + (int)&stack0x000002cc);
        coprocessor_store(8,in_cr3,puVar8 + 0x7e);
        *puVar8 = puVar4;
        puVar8[1] = puVar7;
        puVar8[2] = &stack0x000002cc;
        iVar6 = iRam2c45faa0;
        iVar5 = _DAT_2c45f838;
        *(undefined1 **)(&stack0x000002cc + (int)puVar15) = puVar7;
        *(short *)((int)puVar14 + 0x36) = (short)iRam2c45faa0;
        *(char *)(_DAT_2c45f838 + (int)(puVar8 + 3)) = (char)(puVar8 + 3);
        if ((uint)puVar4 >> 0x15 == 0) {
          if (!SCARRY4(iVar13,0x54)) {
            puVar16[0x1b] = (char)&stack0x0000023c;
            puVar8 = puRam0000011a;
            coprocessor_movefromRt(0xe,10,in_cr14);
            coprocessor_movefromRt2(0xe,10,in_cr14);
            *puRam0000011a = puVar4;
            puVar8[1] = iVar13 + 0x1f >> 0x15;
            puVar8[2] = iVar5;
            *(undefined1 **)(puVar16 + 0x70) = &stack0x0000023c;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (SBORROW4((int)puVar7,0x25)) {
            halt_baddata();
          }
          *(undefined1 **)(puVar16 + ((*(uint *)(iVar6 + 8) >> 6) - 0x21)) = &stack0x0000020c;
        }
        else {
          *(char *)((iVar13 + 0x54) * 4 + 0x18) = (char)uRam2c45f92c;
        }
        software_hlt(0x29);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar9 = 0;
      if (puVar4 == (uint *)0x0) goto LAB_2c45f294;
      *(short *)(in_stack_000002c4 + 0x38) = (short)in_stack_000002c4;
      piVar10 = in_stack_00000014;
      if (bVar17 && puVar7 != (undefined1 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_2c45f270;
    }
    iVar6 = (int)(char)*piVar10;
    if (SBORROW4((int)puVar14,0x1a)) {
      iVar5 = FUN_2c64418c(_LAB_2c4e783c,0);
      if (iVar5 == 0) {
        iStack_24 = _LAB_2c4e784c;
                    /* WARNING: Subroutine does not return */
        TRACE(1,0xd0,_LAB_2c4e7838,_LAB_2c4e7834);
      }
      FUN_2c6448b4(iVar5,in_stack_000002c4 * 1000);
      return _LAB_2c4e7840;
    }
    iVar5 = 0x2c45f5b8;
    *(undefined1 *)((int)puVar14 + 0x1f) = in_stack_000003c0;
    uVar3 = 0;
    in_stack_000002f8 = in_stack_000002c4;
    puVar14 = puVar15;
    uRam2c45f628 = in_stack_000002c4;
  } while (bVar17);
  coprocessor_moveto(5,4,7,unaff_r11,in_cr14,in_cr0);
  puVar16 = &stack0x0000013c;
LAB_2c45f270:
  puVar8 = (undefined4 *)*piVar10;
  puVar16[0x1f] = 0;
  in_stack_00000014 = (int *)puVar8[1];
  *(undefined4 *)(puVar8[2] + 0x5c) = *puVar8;
  in_stack_000002c4 = (int)(puVar16 + 4) >> 0x1f;
  bVar17 = 0xec < in_stack_000002c4;
  bVar18 = SBORROW4(in_stack_000002c4,0xed);
  uVar9 = *(uint *)((int)puVar16 * 0x100000);
  puVar15 = (uint *)((int)puVar16 * 0x100000) + 4;
LAB_2c45f294:
  if (bVar17) {
    *(short *)(uVar9 + 8) = (short)puVar15;
    iVar13 = (int)puVar15 + -0xd1;
    iVar5 = *in_stack_00000014;
    piVar10 = (int *)in_stack_00000014[1];
    coprocessor_movefromRt(0xd,0,1,in_cr4,in_cr2);
    coprocessor_load(0xe,in_cr0,unaff_r11 + 0x394);
    puVar8 = (undefined4 *)*piVar10;
    iVar6 = piVar10[2];
    if (-0x74 < iVar13) {
      if (iVar13 == -0x73) {
        iVar5 = func_0x2c52f450(iVar6 + 4,puVar8,&uStack_20,&iStack_24);
        return iVar5;
      }
      *puVar8 = uStack_20;
      puVar8[1] = iStack_24;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 8;
      return iVar5;
    }
    if (SCARRY4(iVar13,0x73)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (piVar10[1] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)(in_stack_000002c4 + 0x1e) = (char)in_stack_00000014;
    if ((uVar9 & ~(uint)puVar15) == 0 || (int)(uVar9 & ~(uint)puVar15) < 0 != bVar18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

