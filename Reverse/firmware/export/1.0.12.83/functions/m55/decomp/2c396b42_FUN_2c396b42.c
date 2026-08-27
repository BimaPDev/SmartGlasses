/* FUN_2c396b42 @ 0x2c396b42 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c396b42(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint *puVar6;
  uint unaff_r5;
  uint uVar7;
  undefined4 unaff_r6;
  int iVar8;
  undefined1 *puVar9;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  param_3 = param_3 >> 0x1b;
  puVar4 = &stack0xfffffffc;
  do {
    puVar9 = puVar4;
    iVar2 = param_3 * 2;
    *(undefined4 *)(iVar2 + 100) = unaff_r6;
    puVar3 = *(undefined2 **)(puVar9 + 0x224);
    puVar4 = puVar9 + 0x2a8;
    if (puVar4 != (undefined1 *)0x0) goto code_r0x2c396caa;
    puVar6 = *(uint **)(puVar9 + 0xc);
    param_3 = *puVar6;
    uVar7 = puVar6[3];
    bVar1 = (int)unaff_r5 <= iVar2;
    unaff_r5 = uVar7;
    puVar4 = puVar9 + 0x18;
  } while (bVar1);
  coprocessor_function(0xe,0xd,7,in_cr14,in_cr14,in_cr14);
  coprocessor_moveto(0xd,7,6,puVar9 + 0x18,in_cr14,in_cr13);
  piVar5 = *(int **)(puVar6[2] + 4);
  iVar2 = *piVar5;
  puVar3 = (undefined2 *)piVar5[1];
  iVar8 = piVar5[3];
  if (piVar5[2] == 0) {
    puVar4 = puVar9 + 0x2c4;
    puVar3 = *(undefined2 **)(puVar9 + 0x27c);
    *(short *)((ushort)puVar3[2] + 0x3c) = (short)iVar8;
    *(char *)(iVar8 + 0x1d) = (char)iVar8;
    puVar4[uVar7] = (char)uVar7;
    *puVar3 = (short)puVar4;
code_r0x2c396caa:
    iVar2 = (int)puVar4 << 2;
  }
  *puVar3 = (short)puVar3;
  *(int *)iVar2 = iVar2;
  *(undefined2 **)(iVar2 + 4) = puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

