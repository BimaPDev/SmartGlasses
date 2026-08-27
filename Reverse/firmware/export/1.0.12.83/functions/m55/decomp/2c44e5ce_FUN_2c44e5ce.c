/* FUN_2c44e5ce @ 0x2c44e5ce */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44e616) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_2c44e5ce(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  int unaff_r6;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 unaff_r8;
  uint *puVar14;
  uint *puVar15;
  int unaff_pc;
  bool bVar16;
  bool bVar17;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  undefined8 in_d5;
  undefined8 in_d7;
  ulonglong uVar18;
  uint uStack_c;
  
  puVar13 = puRam2c44e5e4;
  puVar12 = &uStack_c;
  puVar11 = (uint *)(unaff_r6 - 0xda);
  coprocessor_load(0xf,in_cr4,unaff_pc + -0x158);
  bVar2 = *(byte *)(param_3 + 0xe);
  piVar8 = (int *)0xf0;
  puVar9 = (uint *)(param_1 + 0x80U >> 6);
  uVar4 = (uint)*(byte *)(param_3 + 0x17);
  uVar5 = param_1 + 0x80U >> 0x19;
  bVar17 = SCARRY4(uVar5,0x4b);
  puVar6 = (uint *)(uVar5 + 0x4b);
  uStack_c = param_3;
  if (puVar6 != (uint *)0x0) {
    puVar13 = (uint *)&stack0x00000200;
    *(uint **)(param_3 + 0x4c) = puVar13;
    puVar9[5] = param_3;
    if (!bVar17) {
      puVar10 = (uint *)(uint)*(byte *)(bVar2 + 0x18);
      uVar4 = *puVar9;
      goto LAB_2c44e58c;
    }
    uVar18 = FUN_2c606b94(puVar9);
    if ((int)uVar18 != 0) {
      uVar18 = FUN_2c606abc(puVar9,1);
      return uVar18;
    }
    return uVar18 & 0xffffffff00000000;
  }
  *(char *)((int)puVar9 + (int)puRam2c44e5e4) = (char)puVar9;
  puVar10 = (uint *)(int)(char)param_3;
  coprocessor_moveto(2,4,2,0,in_cr6,in_cr2);
  puVar6 = (uint *)0x0;
  puVar14 = puVar12;
  if (SBORROW4((int)puVar13,0x20)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    uVar5 = (uint)*(ushort *)((int)puVar9 + 0x22);
    *puVar6 = uVar4;
    puVar6[1] = uVar5;
    puVar6[2] = (int)piVar8 - 0x52;
    puVar6[3] = (uint)puVar9;
    bVar16 = (int)puVar13 < 0;
    bVar17 = false;
    puVar9 = (uint *)(uint)*(ushort *)(piVar8 + -0x13);
    VectorPairwiseMax(in_d5,in_d7,2,1);
    puVar12 = puVar14 + 0x72;
    puVar15 = puVar14 + 0x72;
    puVar6 = _LAB_2c44e7d8;
    puVar11 = puVar13;
    if (bVar16) {
      if ((int)puVar13 < 1) goto LAB_2c44e550;
      puVar11 = *(uint **)((int)piVar8 + -0x4e);
      puVar15 = puVar14 + 0x72;
      bVar17 = false;
      puVar3 = puVar13;
    }
    else {
LAB_2c44e58c:
      puVar9 = (uint *)((int)puVar13 >> 0x15);
      bVar16 = (int)puVar9 < 0;
      puVar15 = puVar12;
      puVar3 = puVar9;
      if (((int)puVar13 >> 0x14 & 1U) != 0) {
        do {
        } while ((int)puVar6 < 0xaf);
        VectorTableLookup(puVar10,(int)puVar6 + -0xaf,4);
        coprocessor_load(0xf,in_cr15,unaff_r8);
        *(char *)((int)puVar12 + 0x14a) = (char)((int)puVar6 + -0xaf);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0x38,0x2c44e5a6);
        (*pcVar1)();
      }
    }
    puVar7 = (undefined4 *)(uint)*(byte *)(*(int *)((int)puVar15 + 0x2e0) + 7);
    puVar6 = (uint *)*puVar7;
    uVar5 = puVar7[1];
    piVar8 = (int *)puVar7[2];
    puVar12 = (uint *)puVar7[3];
    puVar10 = (uint *)((int)puVar15 + 0x1bc);
    puVar13 = puVar12;
    puVar14 = puVar15;
  } while (puVar3 == (uint *)0x0 || bVar16 != bVar17);
  puVar13 = (uint *)((int)puVar12 - (int)puVar9);
  if ((int)puVar9 <= (int)puVar12) {
    *(uint **)((int)puVar13 + (int)piVar8) = puVar13;
    *piVar8 = (int)puVar11 - (int)puVar13;
    piVar8[1] = (int)puVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c44e550:
  *puVar6 = uVar4;
  puVar6[1] = uVar5;
  puVar6[2] = (uint)puVar9;
  puVar6[3] = (uint)puVar13;
  *puVar10 = uVar5;
  puVar10[1] = (uint)puVar9;
  puVar10[2] = (uint)puVar10;
  puVar10[3] = (uint)puVar11;
  return CONCAT44(puVar6 + 4,*puVar15);
}

