/* FUN_2c44c984 @ 0x2c44c984 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44be8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44c984(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined2 unaff_r6;
  uint uVar15;
  uint uVar16;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 unaff_r10;
  uint *puVar17;
  undefined4 unaff_pc;
  bool bVar18;
  bool bVar19;
  undefined4 in_cr2;
  uint uStack_14;
  int iStack_10;
  
  *(undefined2 *)(param_2 + 0x38) = unaff_r6;
  uVar9 = (uint)*(byte *)(unaff_r7 + 2);
  iVar10 = *(int *)(uVar9 + 4);
  uVar14 = *(undefined4 *)(uVar9 + 8);
  if (SBORROW4(param_4,0xbf)) {
    uVar9 = (uint)uRam000000e8;
  }
  else {
    *(undefined4 *)(*(int *)(uVar9 + 0xc) + 0x54) = 0xc0;
    *(undefined4 *)(iVar10 + 0x60) = uVar14;
    uVar9 = param_2;
  }
  *(undefined2 *)(unaff_r9 + -0x21) = unaff_r10;
  piVar13 = *(int **)(param_4 + uVar9);
  iVar10 = piVar13[1];
  uVar16 = piVar13[4];
  uVar15 = (uint)*(ushort *)((int)piVar13 + *piVar13 + 0x14);
  if ((param_4 >> 0x1e & 1U) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xa2,0x2c44c1e0);
    uStack_14 = param_2;
    iStack_10 = param_4;
    (*pcVar2)();
  }
  puVar6 = (undefined2 *)(uVar15 - *(int *)(uVar9 + 0x74));
  *puVar6 = (short)puVar6;
  *(short *)(uVar15 + 0x2e) = (short)uVar16;
  coprocessor_store(3,in_cr2,unaff_r8 + 0x2a4);
  uVar9 = (int)puVar6 - _LAB_2c44c2e8;
  uVar7 = (uint)*(byte *)(iVar10 + 0xc);
  uVar15 = _LAB_2c44c4c8;
  puVar3 = &uStack_14;
  do {
    software_interrupt(0x33);
    puVar3[0xaa] = uVar15;
    uVar4 = uVar16 * -0x7f;
    puVar5 = (uint *)(uVar9 * 8);
    bVar19 = 0x5c < uVar9;
    *(char *)(uVar16 + 0xd) = (char)uVar9;
    *(undefined1 *)(uVar16 * 0x80 + 6) = 0xb8;
    uVar11 = uVar9 - 0xc4;
    bVar18 = 0xc4 < uVar9;
    bVar1 = SBORROW4(uVar9,0xc4);
    uVar15 = (uint)(char)uVar7;
    *(short *)(uVar9 + 0x18) = (short)uVar7;
    uVar9 = _LAB_2c44c164;
    uVar12 = (uint)*(ushort *)(uVar7 + 0x34);
    if (bVar18 || uVar11 < bVar19) {
      uVar4 = uVar4 + 0xe8;
      *(char *)((int)puVar5 + 0x1a) = (char)puVar5;
      do {
        uVar16 = uVar4 | ~((int)puVar3 << 0x1b);
        *(uint *)(uVar9 + 4) = uVar15;
        SVCall = (undefined1)uVar16;
        bVar18 = puVar5 != (uint *)0xffffffc6;
        puVar5 = puVar3 + 0xe6;
        uVar4 = (uint)*(short *)((int)puVar5 + uVar15);
      } while (bVar18);
      iVar10 = (int)uVar16 >> 5;
      uRam0000002f = (undefined1)iVar10;
      *(char *)(iVar10 + 7) = (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar8 = (uint *)0x16;
    puVar17 = puVar3;
    if (puVar5 == (uint *)0x0) {
      uVar16 = puVar3[0xac];
      puVar3[0x41] = uVar4;
      puVar3[-1] = uVar12;
      puVar3[-2] = 0;
      puVar17 = puVar3 + -3;
      *puVar17 = _LAB_2c44c164;
      uVar7 = puVar3[0xe3];
      iVar10 = *(int *)(puVar3[0xea] + 0x70);
      if ((uVar4 & 0x1f) == 0 || bVar1 != SBORROW4(uVar11,(uint)!bVar19)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)_LAB_2c44c164 = _LAB_2c44c164;
      *(undefined4 *)(uVar9 + 4) = 0;
      *(uint *)(uVar9 + 8) = uVar7;
      *(undefined4 *)(uVar9 + 0xc) = 0x16;
      *(uint *)(uVar9 + 0x10) = uVar12;
      *(uint *)(uVar9 + 0x14) = uVar16;
      uVar15 = iVar10 + uVar12;
      uVar4 = uVar7 << 3;
      puVar5 = _NMI;
      puVar8 = _LAB_2c44c0f8;
    }
    *puVar8 = uVar4;
    puVar8[1] = uVar9;
    puVar8[2] = uVar7;
    puVar8[3] = uVar12;
    puVar8[4] = uVar16;
    uVar11 = puVar17[0xdb];
    puVar3 = *(uint **)(uVar15 + 0x60);
    software_interrupt(0x44);
    puVar17[0x23] = (uint)puVar5;
    *puVar3 = uVar9;
    puVar3[1] = (int)puVar3 - uVar15;
    puVar3[2] = uVar11;
    puVar3[3] = uVar16;
    *(undefined4 *)(uVar11 + 0x1ff) = unaff_pc;
    puVar3 = puVar17;
  } while( true );
}

