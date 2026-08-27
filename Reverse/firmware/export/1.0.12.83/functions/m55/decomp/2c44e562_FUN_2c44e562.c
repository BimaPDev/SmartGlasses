/* FUN_2c44e562 @ 0x2c44e562 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c44e562(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *unaff_r6;
  undefined4 uVar9;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 unaff_pc;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 in_cr0;
  undefined4 in_cr15;
  undefined8 in_d5;
  undefined8 in_d7;
  int *in_stack_00000044;
  undefined4 in_stack_000002a0;
  int in_stack_0000031c;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uStack_14 = param_3;
  uStack_18 = param_2;
  piVar12 = &iStack_1c;
  iStack_1c = param_1;
  bVar15 = SBORROW4(param_1,0x1d);
  if (!bVar15) {
    uVar7 = *(undefined4 *)(param_1 + -0x15);
    uVar9 = *(undefined4 *)(param_1 + -0x11);
    func_0x2c427628(*(undefined4 *)(param_1 + -0x1d),*(undefined2 *)(unaff_r7 + 0xc),
                    *(undefined4 *)(param_1 + -0x19),in_stack_000002a0);
    *unaff_r7 = in_stack_00000044;
    unaff_r7[1] = uVar7;
    unaff_r7[2] = uVar9;
    coprocessor_moveto2(7,0xb,unaff_pc,unaff_r9,in_cr0);
    *(short *)(*in_stack_00000044 + in_stack_00000044[1]) = (short)in_stack_00000044[3];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8 = (uint *)(uint)*(byte *)(in_stack_0000031c + 0x18);
  uVar7 = *unaff_r4;
  puVar2 = (undefined4 *)&stack0x000003d8;
LAB_2c44e58c:
  uVar4 = (int)unaff_r7 >> 0x14;
  puVar6 = (undefined4 *)((int)unaff_r7 >> 0x15);
  bVar13 = (int)puVar6 < 0;
  piVar10 = piVar12;
  bVar14 = bVar15;
  unaff_r7 = puVar6;
  if ((uVar4 & 1) != 0) {
    do {
    } while ((int)puVar2 < 0xaf);
    VectorTableLookup(puVar8,(int)puVar2 + -0xaf,4);
    coprocessor_load(0xf,in_cr15,unaff_r8);
    *(char *)((int)piVar12 + 0x14a) = (char)((int)puVar2 + -0xaf);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x38,0x2c44e5a6);
    (*pcVar1)();
  }
  do {
    bVar15 = unaff_r7 != (undefined4 *)0x0;
    puVar3 = (undefined4 *)(uint)*(byte *)(*(int *)((int)piVar10 + 0x2e0) + 7);
    puVar2 = (undefined4 *)*puVar3;
    uVar4 = puVar3[1];
    piVar5 = (int *)puVar3[2];
    unaff_r7 = (undefined4 *)puVar3[3];
    puVar8 = (uint *)((int)piVar10 + 0x1bc);
    if (bVar15 && bVar13 == bVar14) {
      puVar3 = (undefined4 *)((int)unaff_r7 - (int)puVar6);
      puVar11 = piVar10;
      if ((int)puVar6 <= (int)unaff_r7) {
        *(undefined4 **)((int)puVar3 + (int)piVar5) = puVar3;
        *piVar5 = (int)unaff_r6 - (int)puVar3;
        piVar5[1] = (int)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_2c44e550:
      *puVar2 = uVar7;
      puVar2[1] = uVar4;
      puVar2[2] = puVar6;
      puVar2[3] = puVar3;
      *puVar8 = uVar4;
      *(undefined4 **)((int)piVar10 + 0x1c0) = puVar6;
      *(uint **)((int)piVar10 + 0x1c4) = puVar8;
      *(undefined4 **)((int)piVar10 + 0x1c8) = unaff_r6;
      return CONCAT44(puVar2 + 4,*puVar11);
    }
    uVar4 = (uint)*(ushort *)((int)puVar6 + 0x22);
    *puVar2 = uVar7;
    puVar2[1] = uVar4;
    puVar2[2] = (int)piVar5 + -0x52;
    puVar2[3] = puVar6;
    bVar14 = false;
    bVar13 = (int)unaff_r7 < 0;
    bVar15 = false;
    puVar6 = (undefined4 *)(uint)*(ushort *)(piVar5 + -0x13);
    VectorPairwiseMax(in_d5,in_d7,2,1);
    piVar12 = (int *)((int)piVar10 + 0x1c8);
    puVar2 = _LAB_2c44e7d8;
    unaff_r6 = unaff_r7;
    if (!bVar13) goto LAB_2c44e58c;
    puVar3 = unaff_r7;
    puVar11 = (undefined4 *)((int)piVar10 + 0x1c8);
    if ((int)unaff_r7 < 1) goto LAB_2c44e550;
    unaff_r6 = *(undefined4 **)((int)piVar5 + -0x4e);
    piVar10 = (int *)((int)piVar10 + 0x1c8);
  } while( true );
}

